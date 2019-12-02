#include <stdio.h>
int fun(int m, int n)
{
	if (n == 0)
		return m;
	if (m < n)
		return fun(n, m);
		
	return fun(n, m % n);
 } 
 int main(void)
 { printf("%d\n" , fun(2009,1394));
 	return 0;
 }
