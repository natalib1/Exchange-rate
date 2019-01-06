#include <stdio.h>

int main()
{
	float sum_d=0, sum_s=0; /*sum of dollars and shekels*/
	float change; /*the exchange rate*/
	float dollar; /*kelet*/

	printf("\n enter the exchange rate between the dollar to the shekel, \n enter amounts of money in dollars: \n");
	scanf ("%f", &change);
	printf("\n $		IS \n");
	while (scanf("%f ", &dollar)==1)
	{
		float n=dollar*change;
		printf("%.2f		%.2f \n",dollar, n);
		sum_d = sum_d+dollar;
		sum_s = sum_s+n;
	}
	printf("%.2f		%.2f \n",sum_d, sum_s);
	return 0;
}
