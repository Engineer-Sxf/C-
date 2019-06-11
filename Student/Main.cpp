#include <iostream>
#include "Student.h"
#include "Graduate.h"

using namespace std;

void WhoAreYou(Student &p)
{
    Student *x = &p;

	x -> ShowMe();
}

int main()
{
	Student st(18, "ZhangSan");
	Graduate gs("DeepLearning");

	WhoAreYou(st);
	WhoAreYou(gs);

	return 0 ;
}