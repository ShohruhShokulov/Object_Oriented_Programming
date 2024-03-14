// Lab9_Exercise6
#include <iostream>
using namespace std;

class Book {
protected:
	string title;
	string ISBN;
	double price;
public:
	Book(const string& t, const string i, double p) :title{ t }, ISBN{ i }, price{ p } {};

	void ShowBookInfo(void) const {
		cout << " Title: " << title << "\n"
			<< "ISBN : " << ISBN << "\n"
			<< "Price(USD) :" << price << endl;
	}
};

class EBook :public Book {
private:
	string DRMKey;
	string format;
public:
	EBook(const string& t, const string& i, double p, const string& d, const string& f = "Kindle")
		:Book{ t,i,p }, DRMKey{ d }, format{ f } {};

	void ShowEBookInfo(void) const {
		Book::ShowBookInfo();
		cout << "DRMKey: " << DRMKey << "\n"
			<< "Format: " << format;
	}
};

const int MAX_BOOK = 100;
class EBookLibrary {
private:
	EBook* m_books[100];
	int m_cnt;
public:
	EBookLibrary();
	~EBookLibrary();
	void AddBook(EBook* book);
	void ShowAllBooks(void);
};

int main() {
	EBookLibrary elib;
	elib.AddBook(new EBook{ "Book1", "1234567890", 10.99, "AAAAAA", "ePub" });
	elib.AddBook(new EBook{ "Book2", "2345678901", 20.99, "BBBBBB" });
	elib.AddBook(new EBook{ "Book3", "3456789012", 30.99, "CCCCCC", "ePub" });
	elib.AddBook(new EBook{ "Book4", "4567890123", 40.99, "DDDDDD" });
	elib.ShowAllBooks();
	return 0;
}
