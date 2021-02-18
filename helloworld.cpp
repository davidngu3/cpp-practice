#include <iostream>

using namespace std;

class Book {
    string title;
    string author;
    int pages;
    
    public:
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

        string getTitle() {
            return title;
        }

        void setTitle(string newTitle) {
            title = newTitle;
        }

        bool isLength() {
            if (pages > 300) {
                return true;
            }
            return false;
        }
};


int main()
{
    Book book1("Harry Potter", "JK", 3000);

    cout << book1.getTitle() << endl;
    cout << book1.isLength() << endl;
    book1.setTitle("A big moon");
    cout << book1.getTitle() << endl;
    return 0;
}