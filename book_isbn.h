#include <iostream>
#include <vector>


class Book
{
public:
	Book();

	void check_valid(std::string isbn);

	void digits(std::string isbn, std::vector<int> &isbnDigits);

	void print_isbn(std::vector<int> &isbnDigits, int isbnSize);

	void check_isbn_ten(std::vector<int> &isbnDigits);

	void check_isbn_thirteen(std::vector<int> &isbnDigits);	

	void output();


private:
	std::vector<int> isbnDigits;

	int isbnSize;

	bool valid;

};
