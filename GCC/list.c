#include<stdio.h>
struct node
{
	int val;
	struct node *next;
};
struct node *last = NULL;
struct node *start = NULL;
void add( int val)
{
	struct node *cur=malloc(sizeof(struct node));
	cur->next=NULL;
	cur->val=val;
	if(start==NULL)
	{
		start=cur;		
	}
	if(last!=NULL)     
	{
	        last->next=cur;
	}
	last=cur;	
}
void traverse()
{
	struct node *cur;
	cur=start;
	while(cur!=NULL)
	{
	  printf("%d-->",cur->val);
	  cur = cur->next;
	}
        printf("\n");


}

void print_menu()
{
	printf(" press 1 to add\n press 2 to print all elements\n press 3 to quit\n");
}
int main()
{       struct node nd;
	print_menu();
   	int choice =0;
	int val =0;
  	do 
 	{
     	  scanf("%d",&choice);
          switch(choice)
  		{
	          case 1:
		     printf("Enter Number\n");
		     scanf("%d",&val);
	             add(val); 
	          break;
	          case 2:
	              traverse();
	          break;
                  case 3:
	          break;
                  default:
	             printf("ullu pata nahi hai kya dalna hai\n");

                 }	
        }   
        while(choice !=3);
}
