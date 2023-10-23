// Meghana was given a string with even number of characters in which 1st half of the string are either Uppercase or lowercase and the 2nd half of the string are opposite to the 1st half(i.e, 2nd half is Uppercase if 1st half is lowercase and viceversa) Meghana was checking if the string is a palindrome or not irrespective of whether it is Uppercase or lowercase. Write a code to help her find if it is a palindrome or not.

// Input Format

// 1st line consists of an integer N denoting number of characters in the string 2nd line consists of N space seperated characters of the string

// Constraints

// 100

// Output Format

// Print "Palindrome" if it is a palindrome else, print "Not a palindrome" NOTE: Output is case sensitive - If N is not even, print "-1".

// Sample Input 0

// 8
// A D H S s h d a
// Sample Output 0

// Palindrome
// Sample Input 1

// 6
// O Q J o q j
// Sample Output 1

// Not a palindrome




#include <stdio.h>
#include <string.h>

int main() {
    char c[100], b[100];
    int a, i;
    
    scanf("%d", &a);
    getchar();

    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';

    if (a % 2 == 0) {
        for (i = 0; c[i]; i++) {
            b[i] = toupper(c[i]);
        }
        b[i] = '\0';

        int len = strlen(b);
        for (i = 0; i < len / 2; i++) {
            if (b[i] != b[len - i - 1]) {
                printf("Not a palindrome");
                return 0;
            }
        }
        printf("Palindrome");
    } else {
        printf("-1");
    }

    return 0;
}