#include <stdio.h>



int main(void) {

	// your code goes here

	int n,m,i,a[100],j,b[100],k=0,temp,x;

	scanf("%d",&n);

	

	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}



for(i=0;i<n;i++)

{

	for(j=i+1;j<n;j++)

	{

		if(a[i]+a[j]==0)

		printf("%d %d",a[i],a[j]);

	}

}



	return 0;

}