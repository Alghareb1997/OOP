#ifndef VISITOR_H
#define VISITOR_H
#include<string>
#include <Libarary.h>


class Visitor : public Libarary
{
private:
    string Phone_number;
    string Email;
    int Age ;
    int SignInTime ;
    string books ;

    public:
        Visitor();
        void setPhone_number(string s);
        string getphone_number();
        void setEmail(string e );
        string getEmail();
        void setAge(int a );
        int getAge();
        void setSignInTime(int s);
        int getSignInTime();
        void setbooks(string a  );
        string getbooks();
        double calc();
        void borrow();
        ~Visitor();



};

#endif // VISITOR_H
