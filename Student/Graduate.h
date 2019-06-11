// Graduate.h: interface for the Graduate class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRADUATE_H__61809872_6C2F_468A_A2EE_50B3A26C570E__INCLUDED_)
#define AFX_GRADUATE_H__61809872_6C2F_468A_A2EE_50B3A26C570E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Student.h"

class Graduate : public Student  
{
public:
	Graduate(char *research);
	void ShowMe();
	virtual ~Graduate();

protected:
	char *m_nResearch;
	

};

#endif // !defined(AFX_GRADUATE_H__61809872_6C2F_468A_A2EE_50B3A26C570E__INCLUDED_)
