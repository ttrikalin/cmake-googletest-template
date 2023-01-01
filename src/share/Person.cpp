
#include "Person.hpp"

Person::Person(){
  name_ = "None";
  age_ = 0;
}

Person::Person(std::string name, int age){
  name_ = name; 
  age_ = age; 
}

int Person::GetAge(){
  return age_;
}

std::string Person::GetName(){
  return name_;
}

