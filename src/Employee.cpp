#include "Employee.h"
#include<iostream>

using namespace std ;
Employee::Employee()
{
    //ctor
}
void Employee::setsalary(int salary){
   this->salary=salary;
}
int Employee::getsalary(){
 return salary ;
}
void Employee::increment(){
  double time ;
 Visitor::calc();
 cout << "You will gain 1000 L.E for every year with us" <<endl ;
 cout << "Your salary now after  "  << time <<" year is " << time * 1000 << endl ;



}

Employee::~Employee()
{
    //dtor
}
