#include<stdio.h>

void main()

{
      int r,c,i,j,a[100][100],transpose[100][100];
	  
	  printf("enter row size");
	  scanf("%d",&r);	
   	  printf("enter column size");
	  scanf("%d",&c);	
	  printf("\nenter the first matrix=\n");
	  
	  for(i=0;i<r;i++)
	  {
	  	    for(j=0;j<c;j++)
	  	    {
	  	        printf("a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);  	
			}
	  }
	  printf("\nenter matrix=\n");
	  for(i=0;i<r;i++)
	  {
	  	      for(j=0;j<c;j++)
	  	      {
	  	      	printf("%d  ",a[i][j]);	
			  }
			  printf("\n");
	  }
	  for(i=0;i<r;i++)
	  {
	  	     for(j=0;j<c;j++)
	  	     {
	  	     	transpose[i][j]=a[i][j];
			 }
	  }
	  printf("\ntranspose of the matrix=\n");
	  for(i=0;i<r;i++)
	  {
	  	      for(j=0;j<c;j++)
	  	      {
	  	      	printf("%d  ",transpose[i][j]);	
			  }
			  printf("\n");
	  	
	  }
	  
}
	  
	  