#include<stdio.h>

void main()

{
      int r,c,i,j,a[100][100],sum=0;
	  
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
				if(i==j)
				{
					sum=sum+a[i][j];
			    }  	
		    }	    
      }
      printf("\nthe matrix is=\n");
      for(i=0;i<r;i++)
      {
      	   for(j=0;j<c;j++)
      	   {
      	   	       printf("%d  ",a[i][j]);
		   }
		   printf("\n");
	  }
	  printf("\nsum diagonal elements of matrix=%d",sum);
	  
}
	  
	  