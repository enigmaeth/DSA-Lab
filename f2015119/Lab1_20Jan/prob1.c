#include <stdio.h>
#include <string.h>

struct Emp{
	char name[100];
	int id;
	int salary;
};

int main()
{
	int n,i=0,max=0,pos=0,j=0,flag=0,k=0;
	scanf("%d",&n);
	struct Emp elist[n];
	int freq[n];
	for(i=0;i<n;i++)
	{
		freq[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%s",&(elist[i].name));
		scanf("%d",&(elist[i].id));
		scanf("%d",&(elist[i].salary));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(elist[i].name,elist[j].name)==0)
				{					
					freq[i]++;
				}
		}
	}
	for(i=0;i<n;i++)
	{
		if(max<freq[i])
			{
				max=freq[i];
				pos=i;
			}
	}
	printf("%s ",elist[pos].name);
	printf("%d\n",freq[pos]);
	return 0;
}