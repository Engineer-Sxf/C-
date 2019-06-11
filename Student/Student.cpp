// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////

#include "Student.h"
#include <iostream>
#include <string.h>

using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Student::Student(int age, char *name)
{
	m_nAge = age;
	m_nName = new char[strlen(name)+1];
	strcpy(m_nName, name);

}

void Student::ShowMe()
{
	cout <<"I am a Student"<< endl;
}

Student::~Student()
{
	delete[]m_nName;

}
