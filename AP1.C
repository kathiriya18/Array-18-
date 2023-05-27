#include<stdio.h>
#include<conio.h>

void main()

{
    int i,n,first,second,a[100];
    clrscr();
    printf("enyer value of array");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
	printf("a[%d]",i);
	scanf("%d",&a[i]);
    }

    if(a[0]>a[1])
    {
	 first=a[0];
	 second=a[1];
    }
    else
    {
	first=a[1];
	second=a[0];
    }
    printf("second largest number in array=",i);
    for(i=2;i<n;i++)
    {
	if(first<a[i])
	{
	   second=first;
	   first=a[i];
	}
	else if(second<a[i])
	{
	   second=a[i];
	}

     }
     printf("%d",second);
     getch();
}
