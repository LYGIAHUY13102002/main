#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>

struct Book {
    std::string isbn;
    std::string title;
    std::string author;
    int year;
    std::string genre;
    std::string location;
};

class Library {
private:
    std::unordered_map<std::string, Book> isbn_map;
    std::multimap<std::string, Book> title_map;
    std::multimap<std::string, Book> author_map;
    std::multimap<int, Book> year_map;
    std::multimap<std::string, Book> genre_map;

public:
    void addBook(const Book& book) {
        isbn_map[book.isbn] = book;
        title_map.insert({book.title, book});
        author_map.insert({book.author, book});
        year_map.insert({book.year, book});
        genre_map.insert({book.genre, book});
    }

    std::vector<Book> searchByISBN(const std::string& isbn) {
        std::vector<Book> result;
        if (isbn_map.find(isbn) != isbn_map.end()) {
            result.push_back(isbn_map[isbn]);
        }
        return result;
    }

    std::vector<Book> searchByTitle(const std::string& title) {
        std::vector<Book> result;
        auto range = title_map.equal_range(title);
        for (auto it = range.first; it != range.second; ++it) {
            result.push_back(it->second);
        }
        return result;
    }

    std::vector<Book> searchByAuthor(const std::string& author) {
        std::vector<Book> result;
        auto range = author_map.equal_range(author);
        for (auto it = range.first; it != range.second; ++it) {
            result.push_back(it->second);
        }
        return result;
    }

    std::vector<Book> searchByYear(int year) {
        std::vector<Book> result;
        auto range = year_map.equal_range(year);
        for (auto it = range.first; it != range.second; ++it) {
            result.push_back(it->second);
        }
        return result;
    }

    std::vector<Book> searchByGenre(const std::string& genre) {
        std::vector<Book> result;
        auto range = genre_map.equal_range(genre);
        for (auto it = range.first; it != range.second; ++it) {
            result.push_back(it->second);
        }
        return result;
    }
};

int main() {
    Library library;

    Book book1 = {"123-456-789", "C++ Programming", "Bjarne Stroustrup", 1991, "Programming", "A1"};
    Book book2 = {"987-654-321", "Effective C++", "Scott Meyers", 1992, "Programming", "B1"};
    Book book3 = {"456-789-123", "The C++ Standard Library", "Nicolai Josuttis", 1999, "Programming", "C1"};

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    // Search examples
    std::vector<Book> results;

    results = library.searchByISBN("123-456-789");
    for (const auto& book : results) {
        std::cout << "Found by ISBN: " << book.title << " by " << book.author << std::endl;
    }

    results = library.searchByTitle("Effective C++");
    for (const auto& book : results) {
        std::cout << "Found by Title: " << book.title << " by " << book.author << std::endl;
    }

    results = library.searchByAuthor("Scott Meyers");
    for (const auto& book : results) {
        std::cout << "Found by Author: " << book.title << " by " << book.author << std::endl;
    }

    results = library.searchByYear(1999);
    for (const auto& book : results) {
        std::cout << "Found by Year: " << book.title << " by " << book.author << std::endl;
    }

    results = library.searchByGenre("Programming");
    for (const auto& book : results) {
        std::cout << "Found by Genre: " << book.title << " by " << book.author << std::endl;
    }

    return 0;
}
