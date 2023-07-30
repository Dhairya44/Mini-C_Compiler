
int fun(int x)
{
 x=x-x*x/x+x;
 
return x;
}

int main()
{
	int a;
	float b=6.5;
	a=15;
	// comment
	if(a>10)
	  printf("%d %f\n", a, b);
	else
	  {
	  a=a-1;
	  b=b+1;
	  printf("%d %f \n", a, b);
	  
	  }
	a=fun(a+5);
	printf("%d \n",a);
return 1;
}

