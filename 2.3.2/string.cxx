#include <stdio.h>

void replaceblank(char str[],int length)
{
	if(str==NULL||length<=0)
	{
		return;
	}
	int lengthNew=0;
	int lengthOrigin=0;
	int NumberofBlank=0;
	while(str[lengthOrigin]!='\0')
	{
		if(str[lengthOrigin]==' ')
		{
			NumberofBlank++;
		}
		lengthOrigin++;
	}
	lengthNew=lengthOrigin+NumberofBlank*2;
	int indexOrigin=lengthOrigin;
	int indexNew=lengthNew;
	str[indexNew]='\0';
	while(indexOrigin>=0 && indexNew>indexOrigin)
	{
		if(str[indexOrigin]==' ')
		{
			str[indexNew--]='0';
			str[indexNew--]='2';
			str[indexNew--]='%';
		}
		else
		{
			str[indexNew--]=str[indexOrigin];
		}
		--indexOrigin;
	}
}


int main()
{
	char str[20]="hello world";
	printf("%s\n",str);
	replaceblank(str,20);
	printf("%s\n",str);
}
