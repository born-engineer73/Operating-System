
/*	list-demo.c

	Driver for a linked list-based container implementation.

	by: Steven Skiena
	begun: September 2, 2005
*/


/*
Copyright 2005 by Steven S. Skiena; all rights reserved. 

Permission is granted for use in non-commerical applications
provided this copyright notice remains intact and unchanged.

This program appears in my book:

"Programming Challenges: The Programming Contest Training Manual"
by Steven Skiena and Miguel Revilla, Springer-Verlag, New York 2003.

See our website www.programming-challenges.com for additional information.

This book can be ordered from Amazon.com at

http://www.amazon.com/exec/obidos/ASIN/0387001638/thealgorithmrepo/

*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "listlib.h"

#include "bool.h"


int main(void) {
    char c;             /* input character */
    item_type d;        /* input item */
    list *l;            /* list under construction */
    list *tmp;          /* returned list from search */


	str name;
	str roll;
	fl cgpa;
    l = init_list();
  
	printf("\nMenu Selection:-");
    	printf("\nPress 'p' for printing the list.");
    	printf("\nPress 'i' for adding an element in list.");
    	printf("\nPress 's' for searching in the list.");
    	printf("\nPress 'd' for deleting an element in the list.");
    while (scanf("%c", &c) != EOF) {
    	 
        if (tolower(c) == 'p') {
            print_list(l);
            printf("\n\n---------------------------------------------------------------\n");
	printf("\nMenu Selection:-");
    	printf("\nPress 'p' for printing the list.");
    	printf("\nPress 'i' for adding an element in list.");
    	printf("\nPress 's' for searching in the list.");
    	printf("\nPress 'd' for deleting an element in the list.");
        }

        if (tolower(c) == 'i') {
            printf("\nEnter the Name:-");
            scanf("%s", name);
            printf("\nEnter the roll number:-");
            scanf("%s", roll);
            printf("\nEnter the CGPA:-");
            scanf("%f", &cgpa);
            printf("new item: %d\n", d);
            insert_list(&l, name,roll,cgpa);
            printf("\n\n---------------------------------------------------------------\n");
	printf("\nMenu Selection:-");
    	printf("\nPress 'p' for printing the list.");
    	printf("\nPress 'i' for adding an element in list.");
    	printf("\nPress 's' for searching in the list.");
    	printf("\nPress 'd' for deleting an element in the list.");
        }

        if (tolower(c) == 's') {
            printf("\nEnter the element to be searched in list:-");
            scanf("%d", &d);
            tmp = search_list(l, d);
            if (tmp == NULL) { 
				printf("item %d not found\n", d);
            } else {
                printf("item %d found\n", d);
            }
            printf("\n\n---------------------------------------------------------------\n");
	printf("\nMenu Selection:-");
    	printf("\nPress 'p' for printing the list.");
    	printf("\nPress 'i' for adding an element in list.");
    	printf("\nPress 's' for searching in the list.");
    	printf("\nPress 'd' for deleting an element in the list.");
        }

        if (tolower(c) == 'd') {
            printf("\nEnter the element to be delete in list:-");
            scanf("%d", &d);
            tmp = search_list(l, d);
            if (tmp == NULL) {
                printf("item to delete %d not found\n", d);
            } else {
                delete_list(&l, &tmp);
                printf("item %d deleted\n", d);
            }
            printf("\n\n---------------------------------------------------------------\n");
	printf("\nMenu Selection:-");
    	printf("\nPress 'p' for printing the list.");
    	printf("\nPress 'i' for adding an element in list.");
    	printf("\nPress 's' for searching in the list.");
    	printf("\nPress 'd' for deleting an element in the list.");
        }
       
    }
    return 0;
}

