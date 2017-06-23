#include<stdio.h>
int i,j,k,n,array[50];
int insert()
{
printf("Enter the limit:\n");
scanf("%d",&n);
printf("Enter the Array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
}
int sort(int *array)
{
for(i=1;i<n;i++)
{
  k=array[i];
  for(j=i-1;j>=0&k<array[j];j--)
   {
     array[j+1]=array[j];

     array[j]=k;
   }
}
return 0;
} 
int main()
{
insert();
sort(array);
 printf("The Sorted array:\n");

for(i=0;i<n;i++)
{
printf("%d  ",array[i]);
}
printf("\n");
return 0;
}

