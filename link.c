 /*  FILE          : link_List.c
  *  PROJECT       : Link List Basic
  *  PROGRAMMER    : Sagar Patel
  *  FIRST VERSION : 13th SEP 2017
  *  DESCRIPTION   : I have written a simple c code to illustrate my concepts of data structure.
  *			         It performs following basic operations 
  *			 	          
  */
 
 //********************************* Header Files *****************************************************************************//
 
 #include <stdio.h>
 #include <stdlib.h>
 
 //********************************* Structure Defination *********************************************************************//
 
 typedef struct link 
 {
 	int data;
 	struct link *next;
 }node;
 
 //********************************* Global Variables *************************************************************************//
 
 node *head = NULL;
 node *tail = NULL;
 
//********************************* Function Declarations *******************************************************************//
/*
 *  FUNCTION      : add_node()
 *
 *  DESCRIPTION   : This function add a node in link list.
 *
 *  PARAMETERS    : Nothing has been passed
 *  
 *  RETUEN        : Does not return anything
 */
 
 void add_node()
 {
	 if(head == NULL)
	 {
		 head = malloc(sizeof(node));
		 printf("Enter value that you want to add :");
		 scanf("%d",&(head->data));
		 head->next = NULL;
		 tail = head;
		 return;
	 }
	 
	 node *newnode = malloc(sizeof(node));
	 printf("Enter value that you want to add :");
	 scanf("%d",&(newnode->data));
	 newnode->next = NULL;
	 tail->next = newnode;
	 tail = newnode;
	 return;
 }
 
 /*
  *  FUNCTION      : print_list()
  *
  *  DESCRIPTION   : This function prints the all values in the list.
  *					 First I take a current pointer to keep track of the node I am currently printing.
  *					 After that I set the current pointer to next node and print again untill the next 
  *					 is NULL.
  *
  *  PARAMETERS    : Nothing has been passed
  *  
  *  RETUEN        : Does not return anything
  */
 
 void print_list()
 {
	 node *current = head;
	 
	 while(current != NULL)
	 {
		 printf("%d\n", current->data);
		 current = current->next;
	 }
 }
  
 /*
 *  FUNCTION      : options()
 *
 *  DESCRIPTION   : Gives priority to user that which function they want to perform on link list.
 *					
 *  PARAMETERS    : Nothing has been passed
 *  
 *  RETUEN        : Does not return anything
 */
void options()
{
	printf("\n YOUR CHOICES ");
	printf("\n\n0 : To quit");
	printf("\n1: To add a node");
	printf("\n2: To print all the elements in list");

}

//********************************* Main Function  *************************************************************************//

 int main()
 {
	 int select;
	 
	 options();
	 printf("\nEnter your option :");
	 scanf("%d",&select);
	 
	 while(select != 0)
	 {
		 switch(select)
		 {
			 case 0: printf("Quit");
			 
			 case 1: add_node();
					 break;
			 case 2: print_list();
					 break;			
				
			 default: printf("There is no option available");
		 }
 		 options();
	     printf("\nEnter your option :");
	     scanf("%d",&select);
	 }
 }