# book_isbn
So far, this project consist of the class Book which is used to check the validity of any Internation 
Standard Book Number (ISBN). Every ISBN is either 10 digits or 13 digits. When typing in series of numbers
of that length it is common to mistype a digit. Therefore, to avoid searching a database for a nonexistant
ISBN, it is a good idea to first check if the ISBN is even valid. To do this, one must use modular arithmetic.
Here is a link the ISBN wikipedia article: https://en.wikipedia.org/wiki/ISBN#ISBN-10_check_digits
The "Check Digits" section of the article explains how these calculations are done. 

I will be adding a GUI to this program soon that will use the Book class to check the validity of 
the ISBN, then will give the name and a picture of the book whose ISBN is entered. 
