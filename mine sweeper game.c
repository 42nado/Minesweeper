#include<stdio.h>
#include<stdlib.h>
int checkrowcolumn();

int main()
{
    int ms[5][5],i,j,r,c;
    int tries=0,ctr=0;
   
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
        ms[i][j]=32;}
    for(i=0;i<10;i++)
    {
        do
        {
            r=rand()%5;
            c=rand()%5;
            
        }while(ms[r][c]==42);
			 
            ms[r][c]=42;
          printf("%d %d\n",r,c);    
    }
    
    while(ctr<=9&&tries<)
        {
        	r=checkrowcolunm();
			
            printf("Enter column :");
            scanf("%d", &c);
            if (ms[r][c]==32)
            {
                tries++;
            }
            else
                ctr++;
                
                printf("\ncorrect %d",ctr);
                printf("\ntries %d",tries);
                printf("\n\n\n");

        }
         for(i=0;i<5;i++)
		 	{
        	for(j=0;j<5;j++)
			{
        		if(ms[i][j]==42)
        			printf("* ");
        		else
        			printf("  ");
        		}
    		
    		printf("\n");
    	}
}
int checkrowcolunm()
{
	int r;
	printf("\nEnter row:");
            scanf("%d", &r);
            return (r);
}
