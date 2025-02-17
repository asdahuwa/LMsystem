#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H

#include "library_item.h"

class BookItem : public LibraryItem {
private:
    std::string author;
    std::string isbn;

public:
    BookItem(const std::string& title, const std::string& author, const std::string& isbn);

    // Getters and Setters
    std::string getAuthor() const;
    std::string getISBN() const;

    void setAuthor(const std::string& author);
    void setISBN(const std::string& isbn);

    // Overridden functions
    void printDetails() const;
    double calculateLateFees(int daysOverdue) const;
};

#endif // BOOK_ITEM_H

