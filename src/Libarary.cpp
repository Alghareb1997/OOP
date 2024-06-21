#include "Libarary.h"
#include<iostream>
#include<string>
#include<Libarary.h>

using namespace std ;
int Libarary::numberOfEmploy =0 ;
Libarary::Libarary()
{
 numberOfEmploy++;
}
void Libarary::display(){
  cout << name ;
}

void Libarary::setname(string name){
    this->name = name ;
 }
string Libarary::getname(){
    cout<< "Name is :" << endl;
   return name ;
 }
void Libarary::setadress(string adress){
      this->adress = adress ;
  }
string Libarary::getadress(){
    return adress ;
 }

void Libarary::setManagerName(string ManagerName){
      this->ManagerName = ManagerName ;
 }
string Libarary::getManagerName(){
    return ManagerName;
 }
void Libarary::setEmploysName(string EmploysName){
     this-> EmploysName = EmploysName ;
 }
string Libarary::getEmploysName( ){
     return EmploysName ;
 }
void Libarary::setnumberOfEmploy(int numberOfEmploy ){
     this->numberOfEmploy= numberOfEmploy;
}
int Libarary::getnumberOfEmploy(){
    return numberOfEmploy;
}





















Libarary::~Libarary()
{

}
