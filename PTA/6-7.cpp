/*
* 整数N中，有相同的数字，返回1。没有，返回0；
* 如121，221，343，返回1；
* 如123，452，765，返回0；
*/
int IsTheNumber(const int N){
	int num;
	num = (int)sqrt(N);
	num *= num;
	if(num == N)
	{
		int val[10];
		for(num = 0; num < 10; num++)
			val[num] = 0;
		while(N > 0)
		{
			for(num=0; num<=9; num++)
			{
				if(N%10 == num)
					val[num] = val[i]+1;
				if(val[num] == 2)
					return 1;
			}
			N /= 10;
		} 
	}
	return 0;
}
