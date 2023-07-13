#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Класс, представляющий книгу
class Book {
public:
    string title;
    string author;
    int year;

    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->year = year;
    }
};

// Класс, представляющий библиотеку
class Library {
public:
    vector<Book> books;

    // Добавить книгу в библиотеку
    void addBook(Book book) {
        books.push_back(book);
        cout << "Книга \"" << book.title << "\" успешно добавлена" <<endl;
    }

    // Показать все книги в библиотеке
    void showAllBooks() {
        cout << "Книги в библиотеке:" << endl;
        for (Book book : books) {
            cout << book.title << " - " << book.author << " (" << book.year << ")" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Library library;

    // Добавление книг в библиотеку
    Book book1("Война и мир", "Лев Толстой", 1869);
    library.addBook(book1);

    Book book2("Преступление и наказание", "Фёдор Достоевский", 1866);
    library.addBook(book2);

    Book book3("1984", "Джордж Оруэлл", 1949);
    library.addBook(book3);

    // Вывод всех книг в библиотеке
    library.showAllBooks();

    return 0;
}
