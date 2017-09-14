 /*  FILE          : link_List.c
  *  PROJECT       : Link List Basic
  *  PROGRAMMER    : Sagar Patel
  *  FIRST VERSION : 13th SEP 2017
  *  DESCRIPTION   : I have written a simple c code to illustrate my concepts of data structure.
  *			        It performs following basic operations 
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
 /*
  *  FUNCTION      : flashLed
  *
  *  DESCRIPTION   : This function makes led blink acoording to ledon and ledff value.
  *
  *  PARAMETERS    : int16_t ledOnTime = led on time period
  *  
  *  RETUEN        : NULL.
  */