#include<stdio.h>
#include<string.h>
char tt[5][3][3]={{"01","02","03"},{"","4",""},{"","","4"},{"4","",""},{"","",""}};
char str[50];
int l,count=0;
void rec(int cst, int i)
{
	if(i==l)
	{
		if(cst==4)
		count++;
	}
	else
	{
		int val=str[i]-'a',j=0,temp=cst;
		for(j=0;j<2;j++)
		{
			cst=tt[temp][val][j]-'0';
			rec(cst,i+1);
		}
	}
}

main()
{
	printf("Enter the string\n");
	scanf("%s",str);
	l=strlen(str);
	rec(0,0);
	if(count==0)
		printf("Rejected\n",count);
	else
		printf("Accepted\n",count);
	return 0;
}

