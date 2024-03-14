//Lab9_Exercise6
#include <iostream>
#include <string>

using namespace std;

class Book {
protected:
    string title;
    string ISBN;
    double price;

public:
    Book(const string& t, const string& isbn, double p) : title(t), ISBN(isbn), price(p) {}

    void ShowBookInfo() const {
        cout << "Title: " << title << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price(USD): " << price << endl;
    }
};

class EBook : public Book {
private:
    string DRMKey;
    string format;

public:
    EBook(const string& t, const string& isbn, double p, const string& key, const string& fmt = "Kindle")
        : Book(t, isbn, p), DRMKey(key), format(fmt) {}

    void ShowEBookInfo() const {
        ShowBookInfo();
        cout << "DRMKey: " << DRMKey << endl;
        cout << "Format: " << format << endl;
    }
};

const int MAX_BOOK = 100;

class EBookLibrary {
private:
    EBook* m_books[MAX_BOOK];
    int m_cnt;

public:
    EBookLibrary() : m_cnt(0) {}

    ~EBookLibrary() {
        for (int i = 0; i < m_cnt; ++i) {
            delete m_books[i];
        }
    }

    void AddBook(EBook* book) {
        if (m_cnt < MAX_BOOK) {
            m_books[m_cnt++] = book;
        }
        else {
            cout << "Library is full. Cannot add more books." << endl;
        }
    }

    void ShowAllBooks() {
        for (int i = 0; i < m_cnt; ++i) {
            m_books[i]->ShowEBookInfo();
            cout << endl;
        }
    }
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

