#include <stdio.h>
int main() {
    char v;
    int lowercase, uppercase;
    printf("Enter an Alphabet: ");
    scanf("%c", &v);

    lowercase = (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u');

    uppercase = (v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U');

    if (lowercase || uppercase)
        printf("%c is a vowel.", v);
    else
        printf("%c is a consonant.", v);
    return 0;
}