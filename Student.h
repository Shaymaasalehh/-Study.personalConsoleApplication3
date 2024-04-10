#pragma once
class Student
{
private :
	static int id; 
public : 

	Student () {
		id++; 
		 
	}
	int getId() {
		return this->id; 
 }
};

