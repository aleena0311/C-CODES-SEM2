#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  

    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is a letter.\n", ch);

        char lower_ch = ch;
        if (ch >= 'A' && ch <= 'Z') {
            lower_ch = ch + 32;
        }

        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
            lower_ch == 'o' || lower_ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }

    } else {
        printf("%c is NOT a letter.\n", ch);
    }

    return 0;
}