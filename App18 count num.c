#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[20];
    int i,num[256]={0};
    
	printf("請輸入一串整數:");
    scanf("%s",str);
    
	for(i=0;i<strlen(str);i++)
        num[(int)str[i]]++;
   
    for(i=0;i<256;i++)
        if(num[i]!=0)
            printf("數字%c出現%d次\n",(char)i,num[i]);
}

