#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int check_if_palindrome(char *input, size_t length) {
    char reversed_input[length];
    int y = 0;
    
    for (int i = length; i >= 0; i--) {
        reversed_input[y - 1] = input[i];
        y++;
    }

    printf("Reversed Input: %s \n", reversed_input);
    
    int return_value = strcmp(input, reversed_input);
    printf("Return Value: %d \n", return_value);
    
    if (return_value == 0) {
        return 1;
    }

    return 0;
}

int main(int argc, char **argv)
{
    (void) argc;
    
    assert(*argv != NULL);
    char *program = *argv++;
    
    if (*argv  == NULL) {
        fprintf(stderr, "USAGE: `%s` is invalid \n", program);
        fprintf(stderr, "ERROR: Must have one argument \n");
        exit(1);
    }
    
    char *input = *argv++;
    
    size_t length = strlen(input);
    
    if (length <= 2) {
        fprintf(stderr, "ERROR: `%s` is invalid, input must be greater than 2 \n", input);
        exit(1);
    }

    printf("Is Palindrome: %d", check_if_palindrome(input, length));
}
