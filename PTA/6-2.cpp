#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
	
    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%1f", &a[i]);
        printf("%1f\n", &a[2]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}
double f (int n, double a[], double x)
{
     int i, j;
	 double value = 0;
	double m;
	for(i = 0; i <= n; i++)
	{
		m = x;
		for(j = 0; j <= i; j++)
			  m *= m;	
		value += a[i] * m;
	
	}
	return value;
}
