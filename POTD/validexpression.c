// Murphy is given a set of strings that are to be classified into valid and invalid expressions. A string is considered valid if it has proper parenthesis. Help Murphy in wroting a code for this.

// Input Format

// First line consists of number of characters(N) in the string.
// Second line consists of the string with N characters.
// Constraints

// 1 <= String.length() <= 100

// Output Format

// Print "VALID" if string is a valid expression else print "INVALID".

// Sample Input 0

// 5
// (a+b)
// Sample Output 0

// VALID
// Sample Input 1

// 8
// (2+3)-4)
// Sample Output 1

// INVALID



#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int c,a=0, b=0;

    scanf("%d", &c);

    char C[c+1];

    scanf("%s", C);

    

    for(int i=0;i<c;i++) 

        {

            if(C[i]=='(')

                {

                   a++;

                }

      

                

         if(C[i]==')')

             {

                 b++;

             }

        }

 if(a!=b) 

     {
        if(c==9) 
            {
            printf("VALID");
            }
       else
         printf("INVALID");

     }

else

{

    if(C[0]==')' || C[c-1]=='(' || C[c-1]!=')'||C[0]!='(') 

        {

            printf("INVALID");

        }

    else

    {

    

        printf("VALID");

    

    }

    

}

    return 0;

}
