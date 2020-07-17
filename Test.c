hii

#include<stdio.h>
int main()
{
	int no;
	scanf("%d",&no);
	int sh[no],sm[no],eh[no],em[no],i,mn[no],hr[no],mn1[no];


	for(i=0;i<=no;i++)
	{
	scanf("%d %d %d %d",&sh,&sm,&eh,&em);
	sh[i]=(sh[i]*60)+sm[i];
	eh[i]=(eh[i]*60)+em[i];


	mn[i]=eh[i]-sh[i];
	hr[i]=mn[i]/60;
	mn1[i]=mn-(hr[i] * 60);
	}
	for(i=0;i<=no;i++)
	{
		printf("%d %d",hr[i],mn1[i]);
	}


getch();
return 0;
}
