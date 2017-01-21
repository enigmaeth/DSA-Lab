#include <stdio.h>
#include <string.h>
#include <math.h>

int solve()
{
	char res[1000];
	char a[1000],b[1000],c[1000];
    memset(a, 0, 1000);
    memset(b, 0, 1000);
    memset(c, 0, 1000);        

    scanf(" %s",&res);
	int n = strlen(res);
	int start=0,sqroot=0,found=0,i=0,j=0,k=0;

	for(start=1;start*start<=n;start++)
	{
		if(start*start == n)
			{
				sqroot = start;
				found = 1;
			}
	}

	if(found == 1)
	{
		char ar[sqroot][sqroot];
		n = sqroot;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				ar[i][j] = res[k++];
			}
		}
		k=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[k++]=ar[j][i];
			}
		}		
		k=0;
		for(i=n-1;i>=0;i--)
		{
			for(j=n-1;j>=0;j--)
			{
                b[k]=ar[i][j];
                k++;
			}
		}
		k=0;
		for(i=n-1;i>=0;i--)
		{
			for(j=n-1;j>=0;j--)
			{
				c[k]=ar[j][i];
			
				printf("%c",c[k]);
			k++;				
			}
		}

		//printf("**%s**%s**%s**",a,b,c);

		if((strcmp(res,a)==0)&&(strcmp(res,b)==0)&&(strcmp(res,c)==0))
			printf("YES\n");
		else
			printf("NO\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
int main()
{
	int tc;
	//scanf("%d",&tc);
	tc=1;
	while(tc--)
		solve();	
	return 0;
}
