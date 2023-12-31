// Write a program to convert a decimal number to its equivalent hexadecimal string. The input will be a decimal number and your goal is to convert it into its equivalent hexadecimal representation.
// Input Format

// The first line consists of a single integer T denoting the number of test cases.
// Each test case contains single line of input.
// The first line consists of a integer N.
// Constraints

// .
// .
// Output Format

// For each test case on a new line print the equivalent hexa decimal string of N.
// All the alphabets in the output string should be uppercase.
// Sample Input 0

// 2
// 10
// 456
// Sample Output 0

// A
// 1C8



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d",&T);
while(T--) 
{    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int decimalNumber; 
    scanf("%d",&decimalNumber);
    

    // printing hexadecimal number 

    // using format specifier %X 

    printf("%X\n", decimalNumber); 

}
}
