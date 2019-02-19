#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[20]={0},a[20],con[20];
	int count,i,j,n,k=0;
	
	printf("enter sentances\n");
	scanf("%[^\n]s",&str); //read string with spaces
	

	n=strlen(str);
	for(i=0;i<n;i++)//for unique string
	{
		if(str[i]!=0)
		{
			count=1;
			for(j=i+1;j<n;j++)
			{
				if(str[i]==str[j])
				{
					count++;
					str[j]=0;
				}
			}			
			a[k]=str[i];//storing string in an array
			con[k]=count;  //storing count in anarray
			k++;  //find total unique value
			
		}
	}
	int val;
	for(i=0;i<k;i++)//printing unique strings
	{
		printf("%c-->%d\n",a[i],con[i]);		
	}
	
    	int large;
    	for(i=0,j=0;i<k;i++)////finding largest count
		{
		  if(con[j]>con[i])
			{
			  large=con[j];
			}
		  else
			{
			  large=con[i];
			  j=i;
			}
   		}
		j=0;
		char sim[10]={0};
		char min;
			for(i=0;i<k;i++)//printing largest count with its character
			{
				if(large==con[i]) //comparing case of two character
				{
					sim[j]=a[i];
					
					if(sim[j]<sim[j+1]) //get small case value
					{
						min=sim[j];
						j++;	
					}
					else
					{	
						j++;
					}
				}		
			}
				printf("\n%c-->%d",sim[min],large);	
}
