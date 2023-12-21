#include <stdio.h>
#include <stdlib.h>
int main ()
{
    FILE *P;
    P = fopen("file.txt","r");
    if(P==NULL)
    {
        printf("File not open!");
        exit(1);
    }

    else
    {
        // printf("Enter what you want to store in the file!!\n");
        char s[100];
        int l=0,i,m=0,n=0;
        char c;
        // scanf("%[^\n]s",s);
        for(i=0;c!=EOF;i++)
        {
            c=getc(P);
            if(c =='\n')
            {
                l++;
            }

            if(l%2==0)
            {
                n++;
                if(n==1)
                printf("Odd lines are :- \n");
                if(c !='\n')
                {
                    printf("%c",c);
                }
                else
                printf("\n");
            }

            //  if(l%2!=0)
            // {
            //     m++;
            //     if(m==1&&)
            //     printf("Even lines are :- \n");
            //     if(c !='\n')
            //     {
            //         printf("%c",c);
            //     }
            //     else
            //     printf("\n");
            // }

            
        }
        fclose(P);
n=0,c='\0',l=0;
printf("\n");
printf("\n");
P=fopen("file.txt","r");



        for(i=0;c!=EOF;i++)
        {
            c=getc(P);
            if(c =='\n')
            {
                l++;
            }

            if(l%2!=0)
            {
                n++;
                if(n==1)
                printf("Even lines are :- \n");
                if(c !='\n')
                {
                    printf("%c",c);
                }
                else
                printf("\n");
            }

            //  if(l%2!=0)
            // {
            //     m++;
            //     if(m==1&&)
            //     printf("Even lines are :- \n");
            //     if(c !='\n')
            //     {
            //         printf("%c",c);
            //     }
            //     else
            //     printf("\n");
            // }

            
        }
       

        
        // fscanf(P,"%[^\n]s",s);
        // printf("%s",s);

        // fclose(P);
    //    P = fopen("file.txt","r");

    //     if(P==NULL)
    //     {
    //         printf("File not open!");
    //         exit(1);
    //     }
    //     else
    //     {
    //         char a[100];
    //         printf("Entered string is :- \n");
    //         fscanf(P,"%[^\n]s",a);
    //         printf("%s",a);
    //     }

        

    }
}
