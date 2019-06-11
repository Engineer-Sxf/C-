// Student.h: interface for the Student class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__01656DAB_7210_4607_AE00_7AD0C579B221__INCLUDED_)
#define AFX_STUDENT_H__01656DAB_7210_4607_AE00_7AD0C579B221__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Student  
{
public:
	Student(int age, char *name);
	virtual void ShowMe();
	virtual ~Student();

protected:
	int m_nAge;
	char *m_nName;

};

#endif // !defined(AFX_STUDENT_H__01656DAB_7210_4607_AE00_7AD0C579B221__INCLUDED_)
