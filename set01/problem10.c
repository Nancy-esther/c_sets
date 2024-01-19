//
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
  int n;
  //char string1,string2;
  char string1[MAX_SIZE],string2[MAX_SIZE];
  input_two_strings(*string1,*string2);
   int result=stringcompare(*string1,*string2);
  printf("%d",result);
  output(*string1,*string2,result);
  return 0;
}
void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string\n");
  gets(string1);
  printf("Enter the second string\n");
  sgets(string2);

}
int stringcompare(char *string1,char *string2)
{
    int compare(char * str1, char * str2)
{
    while((*str1 && *str2) && (*str1 == *str2)) { str1++; str2++; }

    return *str1 - *str2;

}

 // result=compare(string1,string2);


  if(result == 0)
    {
        printf("Both strings are equal.");
    }
    else if(result < 0)
    {
        printf("string1 is  smaller than string2.");
    }
    else
    {
        printf("string1 is greater than string2.");
    }

    return result;

}

/*void output(char *string1, char *string2, int result)
{
  printf()  */

