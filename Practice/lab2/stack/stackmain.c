// stackmain.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: stackmain -p c|-o|-i\n");
        return 1;
    }

    Stack *s;
    create(&s);

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-p") == 0 && i + 1 < argc) {
            char x = argv[++i][0];
            push(s, x);
        } else if (strcmp(argv[i], "-o") == 0) {
            pop(s);
        } else if (strcmp(argv[i], "-i") == 0) {
            printf("[Stack info: top=%c, size=%d]\n", peek(s), getSize(s));
        }
    }

    destroy(s);
    return 0;
}
