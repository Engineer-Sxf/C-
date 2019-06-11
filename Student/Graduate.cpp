// Graduate.cpp: implementation of the Graduate class.
//
//////////////////////////////////////////////////////////////////////
#include "Student.h"
#include "Graduate.h"
#include <iostream>
#include <string.h>

using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Graduate::Graduate(char *research):Student(18, "ZhangSan")
{	
	m_nResearch = new char[strlen(research)+1];
	strcpy(m_nResearch, research);

}

void Graduate::ShowMe()
{
	cout <<"I am a Graduate"<< endl;
}

Graduate::~Graduate()
{
	delete[]m_nResearch;

}
