#include "book_isbn.h"

Book::Book()
{
	valid = false; 
}

// Checks type of ISBN input (10 digit or 13 digit)
// Calls necessary member function to check validity of each type
// Called in int main() 
void Book::check_valid(std::string isbn)
{
	isbnSize = size(isbn);
    if (isbnSize == 10)
    {
        digits(isbn, isbnDigits);
        check_isbn_ten(isbnDigits);
    }
    else if (isbnSize == 13)
    {
        digits(isbn, isbnDigits);
        check_isbn_thirteen(isbnDigits);
    }
}

// Converts string isbn to vector<int> isbnDigits
void Book::digits(std::string isbn, std::vector<int> &isbnDigits)
{
    for (int i=0; i<isbnSize; i++)
    {
        isbnDigits.push_back((int)isbn[i]);
        isbnDigits[i] = isbnDigits[i] - 48; //converts ASCII representation to correct integer
    }
}


// Prints vector<int> isbnDigits
void Book::print_isbn(std::vector<int> &isbnDigits, int isbnSize)
{
    for (int i=0; i<isbnSize; i++)
    {
        std::cout << isbnDigits[i] << std::endl;
    }
}

// Checks 10 digit ISBN validity using modular arithmetic
void Book::check_isbn_ten(std::vector<int> &isbnDigits)
{
    int total = 0;
    for (int i=0; i<10; i++)
    {
        total = total + (isbnDigits[i]*(10-i));
    }
    if (total%11 == 0)
    {
        valid = true;
    }
    else
    {
        valid = false;
    }
}

// Checks 13 digit ISBN validity using modular arithmetic
void Book::check_isbn_thirteen(std::vector<int> &isbnDigits)
{
    int total = 0;
    for (int i=0; i<13; i++)
    {
        if (i%2 == 0) //position is even
        {
            total = total + isbnDigits[i];
		}
        else // position is odd
        {
            total = total + (isbnDigits[i]*3);
        }
    }

    if (total%10 == 0)
    {
        valid = true;
    }
    else
    {
        valid = false;
    }
}
 
// Called in int main()
void Book::output()
{
	if (valid)
    {
        std::cout << "VALID ISBN!" << std::endl;
    }
    else if (!valid)
    {
        std::cout << "INVALID ISBN..." << std::endl;
    }
}

