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
	// how to create a structure variable
	 struct student st;
	  
	// how to assign values in struct attribs.
	st.roll_no = 1;
	strcpy(st.name,"Amit Vishwakarma");
	st.marks   = 78;
	
	// how to read the contents of structure
	printf("%d %s %d\n", st.roll_no,st.name,st.marks);

	// how to create structure pointer
	
	struct student *harit;
	harit = malloc(sizeof(struct student));
	harit->roll_no = 10;
	strcpy(harit->name,"Harit Vishwakarma");
	harit->marks   = 0;
//	scanf("%d",&harit->roll_no);
	struct student *temp = harit;
	printf("%d %s %d \n",temp->roll_no,temp->name,temp->marks);
	harit  = malloc(sizeof(struct student));
	strcpy(harit->name,"Amit Vishwakarma");
	printf("%d %s %d \n",harit->roll_no,harit->name,harit->marks);
	
	struct student *start = NULL;
	struct student *cur  = malloc(sizeof(struct student ));
	cur->roll_no = 9;
	cur->next = NULL;
	if(start == NULL)
		start  = cur;
        last = cur;
	cur = start
	while(cur != NULL)
	printf(cur->val)
        cur =  cur->next;

}	


