#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>
#include <string>

class Person {
  public: 
    Person(); 
    ~Person() = default; 

    Person(std::string name, int age); 
    int GetAge(); 
    std::string GetName();

  private:
    std::string name_; 
    int age_;
};

#endif
