#include <stdio.h>
int main()
{
	int a,i,n,m,l,s;
	scanf("%d %d",&a,&n);
	s=0;m=0;
	for(i=1;i<=n;i++)
	{
		 m=a+10*m;	
		 s=s+m;	 
	}
   printf("%d",s);	
	return 0;
}
