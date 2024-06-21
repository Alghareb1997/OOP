#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <Libarary.h>
#include<Visitor.h>


class Employee : public Libarary,public Visitor
{
private:
    int salary ;
    public:
        Employee();
        void setsalary (int a);
        int getsalary ();
        void increment();
        ~Employee();




};

#endif // EMPLOYEE_H
