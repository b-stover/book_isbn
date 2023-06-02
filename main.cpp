#include <iostream>
#include "book_isbn.h"

int main()
{
    std::string isbn;
    std::cout << "ISBN: ";
    std::cin >> isbn;

    Book book;

	book.check_valid(isbn);

    book.output();
    
	return 0;
}

