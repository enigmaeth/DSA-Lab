#include <stdio.h>
#include <string.h>
#include <math.h>
int FIB[100];

void genFIB(int n)
{
	FIB[0]=1;
	FIB[1]=2;
	n-=2;
	int k=2;
	while(n--)
	{
		FIB[k] = FIB[k-1]+FIB[k-2];
		k++;
	}	
}

int main()
{
	int n,i=0,j=0,k=0,l=0,p=0,q=0; 
	scanf("%d",&n);
	genFIB(n);
	int fib[n];
	char res[n];
	char ans[n];
	memset(ans, 0 ,n);
	memset(res, 0 ,n);
	memset(fib, 0 ,n);
	for(i=0;i<n;i++)
		scanf("%d",&(fib[i]));
	scanf("%s",res);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		char ch = res[i];
		int temp = fib[i];
		int index = 0;
		for(j=0;j<n;j++)
		{
			if(FIB[j]==temp)
			{
				index = j;
				break;
			}
		}
		ans[index] = ch;
	}
	for(i=0;i<n;i++)
	{
		char ch = ans[i];
		ch += k;
		if(ch>122) ch-=26;
		ans[i] = (char)ch;
	}
	for(i=0;i<n;i++)
	{
		printf("%c",ans[i]);
	}
	printf("\n");
	return 0;
}
