#include <stdio.h>



int main(void) {

	long int n,i,a[100000],freq[100000],q,p,count=0;

	scanf("%d",&n);

	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}

	for(q=0;q<n;q++)

	{

		freq[q]=0;

	}

	for(i=0;i<n;i++)

	{

		if(a[i]>=0&&a[i]<=9999)

		{

			freq[a[i]]++;

		}

	}

	

	for(q=0;q<n;q++)

	{

		if(freq[q]<=1)

		{

			count++;

		}

		else if(freq[q]>1)

		{

			p=q;

			break;

		}

	}

	if(count==n)

	{

		printf("unique");

	}

	else

	{

	printf("%d",p);

	}

	return 0;

}