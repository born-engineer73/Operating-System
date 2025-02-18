
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


list *init_list(void) {
    return(NULL);
}

bool empty_list(list *l) {
    if (l == NULL) {
        return (TRUE);
    } else {
        return (FALSE);
    }
}

/* [[[ search_list_cut */
list *search_list(list *l, item_type x) {
    if (l == NULL) {
        return(NULL);
    }

    if (l->item == x) {
        return(l);
    } else {
        return(search_list(l->next, x));
    }
}
/* ]]] */

/* [[[ predecessor_cut */
list *item_ahead(list *l, list *x) {
    if ((l == NULL) || (l->next == NULL)) {
		// printf("Error: predecessor sought on null list.\n");
        return(NULL);
    }

    if ((l->next) == x) {
        return(l);
    } else {
        return(item_ahead(l->next, x));
    }
}
/* ]]] */

/* [[[ insert_list_cut */
void insert_list(list **l, str name, str roll, fl cgpa) {
    list *p;    /* temporary pointer */

    p = malloc(sizeof(list));
    p->name = name;
    p->roll = roll;
    p->cgpa = cgpa;
    p->next = *l;
    *l = p;
}
/* ]]] */

void print_list(list *l) {
    while (l != NULL) {
        printf("%s %s %f", l->name, l->roll, l->cgpa);
        l = l->next;
    }
    printf("\n");
}

/* [[[ delete_list_cut */
void delete_list(list **l, list **x) {
    list *p;            /* item pointer */
    list *pred;         /* predecessor pointer */

    p = *l;
    pred = item_ahead(*l, *x);

    if (pred == NULL) { /* splice out out list */
        *l = p->next;
    } else {
        pred->next = (*x)->next;
    }
    free(*x);            /* free memory used by node */
}
/* ]]] */


