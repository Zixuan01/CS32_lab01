#include "Student.h"
#include <sstream>

Student::Student(int Perm, 
		 std::string LastName, 
		 std::string FirstAndMiddleNames) {
       perm  = Perm;
       lastName = LastName;
       firstAndMiddleNames = FirstAndMiddleNames;
  // REMEMBER: PURPOSE OF A CONSTRUCTOR IS TO INITIALIZE 
  // ALL DATA MEMBERS WITH REASONABLE VALUES  
}

int Student::getPerm() const { 
  return perm;
}

std::string Student::getLastName() const { 
  return lastName;
}

std::string Student::getFirstAndMiddleNames() const { 
  return firstAndMiddleNames;
}

std::string Student::getFullName() const { 
  return firstAndMiddleNames + " " + lastName;
}

std::string Student::toString() const { 
  std::ostringstream oss;
  
  oss << "[" 
      << this->getPerm() << ","
      << this->getLastName() << ","
      << this->getFirstAndMiddleNames() << "]";
  return oss.str();
  /*
  // e.g. [12345,Smith,Malory Logan]
  std::ostringstream oss;
  
  oss << "[" 
      << this->getPerm() << ","
      << this->getLastName() << ","
      << this->getFirstAndMiddleNames() << "]";
  return oss.str();
  */

} 

