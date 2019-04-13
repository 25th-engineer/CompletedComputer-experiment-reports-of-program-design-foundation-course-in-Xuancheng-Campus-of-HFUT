//3 version2:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* init(char* []);
void _back(char* []);
void _front(char* []);
void _show(char* []);
//void bye();

int main()
{
	freopen("x1.in","r",stdin);
    freopen("x1.out","w",stdout);
	char* arr[8];
	char* p=init(arr);
	_show(arr);    // _shou() function work badly
	_front(arr);
	_show(arr);   //then it work well
	_back(arr);
	_show(arr);
	return 0;
}

char* init(char* arr[])
{
    int i;
	for(i=0;i<8;i++)
	{
		arr[i]=(char*)malloc(sizeof(char)*80);
        //gets(arr[i]);
        scanf("%s",arr[i]);
	}
	return* arr;
}

void _back(char* s[])
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(*s[i]>*s[j])
			{
				char* tmp=(char*)malloc(sizeof(char)*100);
				/*
				*tmp=*s[i];
				*s[i]=*s[j];
				*s[j]=*tmp;
				*/
				strcpy(tmp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],tmp);
			}
		}
	}
}

void _front(char* s[])
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(*s[i]<*s[j])
			{
                char* tmp=(char*)malloc(sizeof(char)*100);
				/*
				*tmp=*s[i];
				*s[i]=*s[j];
				*s[j]=*tmp;
				*/
				strcpy(tmp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],tmp);
			}
		}
	}
}

void _show(char* s[])
{
	int i;
	for(i=0;i<8;i++)
    {
		printf("%s",s[i]);
        printf("\n");
    }
    printf("\n");
}
