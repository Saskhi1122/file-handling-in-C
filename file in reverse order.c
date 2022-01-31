#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void read_string();
void reversed_string();

struct string
{
	char s[10000000];
}str;

int main()
{
	printf("Welcome to Program For Reverse the String With File Handling\n");

	read_string();
	
	reversed_string();
	
	return 0;
	
}

void read_string()
{
	FILE *p;
	p=fopen("main.txt","ab+");
	
	if(p==NULL)
	printf("File Not Exist");
	else
	{
	printf("\nEnter The String You Want To Reverse : ");
	gets(str.s);
	
	fwrite(&str,sizeof(str),1,p); 
	fclose(p);
    }
}

void reversed_string()
{
	FILE *p;
	p=fopen("main.txt","rb");
	
	if(p==NULL)
	printf("File Not Exist");
	else
	{
	while(fread(&str,sizeof(str),1,p)==1)
	{
	  printf("\nThe Reverse of String is : %s",strrev(str.s));	
	}
	fclose(p);
    }getch();
}
