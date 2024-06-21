#include "Book.h"
#include<string>
#include<iostream>

using namespace std ;
Book::Book()
{
    //ctor
}

void Book::setauthor_name(string name){
        this->author_name = name;
      }
string Book::getauthour_name(){
         return author_name ;
       }
void Book::setedition(int edit){

             if(edit>2000){
           edition = edit;
             }
           else{
           cout << "wrong edition" <<endl;
           cin >> edition ;
           }
      }
int Book::getedition(){
         return edition;
       }
void Book::setcategory(string category){
        this->category = category;
      }
string Book:: getcategory(){
         return category;
       }

void Book:: display(){
        Libarary::getname();
         cout <<"Author_of book:" << author_name <<endl ;
          cout <<"Edition of book:" << edition <<endl ;
           cout <<"category of book:" << category <<endl ;
       }





Book::~Book()
{
    //dtor
}
