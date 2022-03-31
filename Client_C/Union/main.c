#include <stdio.h>

// ����ü union
// union ���� ���� ����� ū ����� ������ ũ�⸸ŭ ���� �Ҵ�
// ������������� �ش� ������ ������.

typedef union _Jobinfo {
	char schoolName[20];
	char companyName[20];
} Jobinfo;

typedef struct _Person {
	char name[20];
	Jobinfo jobinfo;
} Person;


int main() {

	Person a, b;

	
	strcpy(a.name, "Luke");
	strcpy(a.jobinfo.schoolName, "KoreaSchool");

	strcpy(b.name, "Dina");
	strcpy(b.jobinfo.companyName, "StrongCompany");

	printf("Luke's schoolName : %s\n", a.jobinfo.schoolName);
	printf("Luke's companyName : %s\n", a.jobinfo.companyName);
	printf("DIna's schoolName : %s\n", b.jobinfo.schoolName);
	printf("Dina's companyName : %s\n", b.jobinfo.companyName);
}