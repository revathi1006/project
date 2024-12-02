#include <stdio.h>
void main()
{
   float a[50],b[50];
  int n1,n2,i;
  printf("enter how many elements you want in array in a(0-50)");
  scanf("%d",&n1);
  printf("enter %d in array a=",n1);
  for(i=0;i<n1;i++)
  scanf("%.2f",&a[i]);
  printf("array a before");

  for(i=0;i<n1;i++)
  scanf("%.2f",a[i]);
  printf("\n");
  printf("enter how many elements you want in array in b(O-50)");
  scanf("%d",&n2);
  printf("enter %d in array b=",n2);
  for(i=0;i<n2;i++)
  scanf("%.2f",&b[i]);
  printf("array b before");
 
  for(i=0;i<n2;i++)
  scanf("%.2f",&b[i]);
  printf("\n");
}
