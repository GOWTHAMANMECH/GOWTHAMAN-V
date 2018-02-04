#include <stdio.h>
int main()
{
	int g;
	int count=0;
	printf("enter the number:");
	scanf("%d",&g);
	while(g!=0)
	{
  g=g/10;
  ++count;
  }
  printf("the counted number is=%d",count);
  return 0;
}
