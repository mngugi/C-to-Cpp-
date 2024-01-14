#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int bo(char *name, char *cmd){
        char c[40], n[40];
        printf("Name is at %p; command is at %p\n", n, c);
        strcpy(c, cmd);
        strcpy(n, name);
        printf("Goodbye, %s!\n", n);
        printf("Executing command: %s\n", c);
        fflush(stdout);
        system(c);
}

int main(){
        char name[200];
        printf("What is your name?\n");
        scanf("%s", name);
        bo(name, "date");
}

