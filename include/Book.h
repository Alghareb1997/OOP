#ifndef BOOK_H
#define BOOK_H

#include <Libarary.h>


class Book : public Libarary
{  private:
      string author_name;
      int edition ;
      string category ;
    public:
void setauthor_name(string name);
string getauthour_name();
void setedition(int edit);
int getedition();
void setcategory(string category);
string getcategory();
void display();
        Book();
        ~Book();


};

#endif // BOOK_H
