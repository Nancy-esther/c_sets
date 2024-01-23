#include<stdio.h>
#include<string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    int *rev_str;
    char str[10];
    printf("Enter string:");
    scanf("%s",str);
    str_reverse(*str,*rev_str);
    printf("%d:",str);
    return 0;
}
void str_reverse(char *str, char *rev_str)
{
   int i,c=0;
   for(i=0;(*str + i)!='\0';i++)
   {
    c++;
   }
   printf("Reverse of a string");
   for(i=c-1;i>=0;i--)
   {
    printf("%c",*(str+i));
   }
}

