#ifndef LIBARARY_H
#define LIBARARY_H
#include<string>
using namespace std ;

class Libarary
{
     private:
        string name ;
        string adress;
       static int numberOfEmploy ;
        string ManagerName ;
        string EmploysName ;
    public:
        void setname(string name);
        string getname();
        void setadress(string adress);
        string getadress();
        void setManagerName(string ManagerName);
        string getManagerName();
        void setEmploysName(string EmploysName);
        string getEmploysName( );
        void setnumberOfEmploy(int s) ;
        int getnumberOfEmploy();
        void display();

        Libarary( );
        ~Libarary();
};

#endif
