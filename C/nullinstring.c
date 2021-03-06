#include <stdio.h>
#include <string.h>
/*Test: how does \0 work in strings in C

    Result: So c indeed only complies to \0 regardless of whether there are other string characters after it*/
int main() {
    // Single quotes are for single characters
    char string[] = "012xy\08s34f4w2";
    int i, n= 0;
    // Use %zu for size_t while %d is for int only
    printf("Length of string: %zu\n", strlen(string));
    for (i=0;i<strlen(string); i++) {
        // %c prints a character with sizeof(char)
        // %s prints to the pointer to a null terminated string sizeof(char*)
        printf("%c\n", string[i]);
    }
    return 0;
}
