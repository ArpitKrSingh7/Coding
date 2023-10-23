// Anjali's teacher gave her 2 strings without spaces and asked to find the missing characters in the 2nd string when compared to 1st string. She should also tell if the missing characters can form a vowel string or not. Help her in doing this by writing a code.

// Input Format

// 1st line - 2 space seperated integers N1 and N2 - Denoting the number of characters in string1 and string2 respectively.
// 2nd line - N1 space seperated characters that represent characters in string1
// 3rd line - N2 space seperated characters that represent characters in string2
// Constraints

//  N1
//  100
// Output Format

// Print 'YES' if vowel string is possible else print 'NO'
// If both the strings have same characters, print 'Anagram found'.
// Note : Output is Case sensitive
// Sample Input 0

// 7 5
// H s d k e s a
// d k s H s
// Sample Output 0

// YES
// Explanation 0

// Missing characters in String2 are 'e' and 'a'. So vowel string is possible

// Sample Input 1

// 13 7
// F e i s H s G s S J S a a
// j U N I O R S
// Sample Output 1

// NO
// Explanation 1

// Missing characters in string 2 doesn't form a vowel string.



#include <stdio.h>
#include <string.h>

int main()
{
    int count,k=0,N1,N2,an_count=0,v_count=0;
    scanf("%d %d",&N1,&N2);
    char a[100],b[100],c[100];
    scanf(" %[^\n]",a);
    scanf(" %[^\n]",b);
    for(int i=0;i<strlen(a);i++)
    {
        count=0;
        for(int j=0;j<strlen(b);j++)
        {
            if(b[j]!=a[i])
            count++;
        }  
        if(count==strlen(b))
        {
            c[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<strlen(a);i++)
    {
        for(int j=0;j<strlen(b);j++)
        {
            if(a[i]==b[j])
            {
                an_count++;
                break;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
        v_count++;
    }
    if(v_count==k && k!=0)
        printf("YES\n");
    else if(v_count!=k && k!=0)
        printf("NO\n");
    if(an_count==strlen(a))
    {
        printf("Anagram found");
    }
}