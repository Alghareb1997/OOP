#include "Visitor.h"
#include <string>
#include<iostream>

using namespace std ;
Visitor::Visitor()
{
    //ctor
}
void Visitor::setPhone_number(string Phone_number ){
     this->Phone_number=Phone_number    ;
}
string Visitor::getphone_number(){
   return Phone_number ;
}
void Visitor::setEmail(string Email){
     this->Email=Email ;
}
string Visitor::getEmail(){
   return Email ;
}
void Visitor::setAge(int Age){
    this->Age=Age;
}
int Visitor::getAge(){
   return Age ;
}
void Visitor:: setSignInTime(int SignInTime){
     this->SignInTime=SignInTime;
  }
int Visitor:: getSignInTime(){
   return SignInTime ;
}
void Visitor:: setbooks(string books ){
     this->books=books ;
}
string Visitor:: getbooks(){
   return books ;
}
double Visitor::calc(){
    double a , b ;
      cout << "Entre start time" << endl ;
      cin >> a ;
      cout <<"Entre end  time " <<endl ;
      cin >> b ;
     double time = a - b ;
     cout << "Period of time is : " << time << endl;
     return time ;
}
void Visitor::borrow(){
    int n ;
    cout << "Entre number of borrow books" <<endl;
    cin >> n ;
 string arr[n];
 for(int i=1 ;i<n;i++){
    cout << "Name of " << i << " book "<<endl ;
    cin >> arr[i];
 }
 for(int j=1;j<n;j++){
    cout << "Name of "<<j << " book" <<endl;
    cout << arr[j] <<endl;
 }

}


Visitor::~Visitor()
{
    //dtor
}
