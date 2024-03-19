#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char string1[50],string2[50];
    int result;
    input_two_strings(string1,string2);
    result = stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the string1:");
    scanf("%s",string1);
    printf("Enter the string2:");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
    int i;
    while(string1[i]!=string2[i] && string1[i]!='\0')
    {
        i++;
        if(string1[i] > string2[i])
        {
            printf("String1 is greater than String2");
            
        }
        else
        {    break;
            //printf("String1 is lesser than string2");
        }
       if(string1[i] < string2[i])
       {
          printf("String1 is lesser than String2");
       }
       else
       {   
        
          printf("String1 is equal to string2");
       }
     
    }

  /*  for(i=0;string1[i]!='\0'||string2[i]!='\0';i++)
    {
        if(string1[i]!=string2[i])
        {
           temp = 1;
           break;
        }
        else if(string1[i]>string2[i])
         {
            printf("string1 is greater than string2");
         }
         else(string)


    }
        if(temp==1)
        {
            printf("String1 is lesser than string2");
        }
        else
        {
           printf("String1 is greater than string2");
        }*/
}
void output(char *string1, char *string2, int result)
{
    printf("%d",result);
}
