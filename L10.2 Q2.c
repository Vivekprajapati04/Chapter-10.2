#include<stdio.h>



int mystrlen(char str[30])
{
 int i, len=0;

 for(i=0;str[i]!='\0';i++)
 {
  len++;
 }

 return(len);
}


int main()
{
 char str[30];
 int i, len;

 printf("Enter string:\n");
 gets(str);

 len = mystrlen(str); 
 printf("Length of given string is: %d", len);

 return 0;
}


