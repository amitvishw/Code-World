#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[100];
    int marks;
};
void main()
{ 
	int i,max;
	struct student st[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&st[i].roll_no);
		scanf("%s",st[i].name);
		scanf("%d",&st[i].marks);
	}
	struct student max_st = st[0];
	for(i=0;i<5;i++)
	{  
		if(max_st.marks < st[i].marks)
     		{ 
		       
		       max_st = st[i];
       
     		}
		
	}
	printf("%d %s %d\n",max_st.roll_no,max_st.name,max_st.marks);
	
	
}

