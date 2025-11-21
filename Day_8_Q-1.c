#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z') {
        printf("%c is an Uppercase Alphabet\n", x);
    } 
    else if (x >= 'a' && x<= 'z') {
        printf("%c is a Lowercase Alphabet\n", ch);
    } 
    else if (x >= '0' && x <= '9') {
        printf("%c is a Digit\n", x);
    } 
    else {
        printf("%c is a Special Character\n", x);
    }

    return 0;
}
