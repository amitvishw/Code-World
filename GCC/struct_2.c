#include<string.h>
#include<stdio.h>
struct student
{
	int roll_no;
	char name[1024];
	int marks;
} ;

int main()
{
	// how to create an array of structures
	 struct student st[10];
        
	  
	// how to assign values in struct attribs.
	st[0].roll_no = 1;
	strcpy(st[0].name,"Amit Vishwakarma");
	st[0].marks   = 78;
	
	// how to read the contents of structure
	printf("%d %s %d\n", st[0].roll_no,st[0].name,st[0].marks);
}	


