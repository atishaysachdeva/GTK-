#include<stdio.h>


int main()
{
 FILE *fptr;
 char ch;

 fptr=fopen("finalminor.txt","a+");
 while((ch=getchar())!=EOF)
  fputc(ch,fptr);
 
 fclose(fptr);

 fptr=fopen("finalminor.txt","r");
 while((ch=fgetc(fptr))!=EOF)
 printf("%c",ch);
 return 0;
}

