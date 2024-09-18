
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
#include "list.h"
#include "bool.h"

list *init_list(void);
bool empty_list(list *l) ;


/* [[[ search_list_cut */
list *search_list(list *l, item_type x) ;
/* ]]] */

/* [[[ predecessor_cut */
list *item_ahead(list *l, list *x) ;
/* ]]] */

/* [[[ insert_list_cut */
void insert_list(list **l, str name, str roll, fl cgpa) ;

void print_list(list *l) ;

/* [[[ delete_list_cut */
void delete_list(list **l, list **x) ;

