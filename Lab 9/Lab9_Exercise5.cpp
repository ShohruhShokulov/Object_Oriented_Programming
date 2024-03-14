// Lab9_Exercise5
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
			<< "Price(USD) :" << price<<endl;
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

int main() {
	Book book("Modern C++ Programming Cookbook", "1800208987", 49.99);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("Modern C++ Programming Cookbook(ebook)", "1800208987", 34.99, "dkb34x!@*~");
	ebook.ShowEBookInfo();
	return 0;
}