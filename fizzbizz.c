//div by 3:fizz,div by 5:hizz,div by 3&5:fizz hizz,otherwise number
 #include<stdio.h>
 #include<stdlib.h>
  int main()
  {
  	int n;
	printf("enter your number\n");
  	scanf("%d",&n);
  	if(n%3==0)
  	{
  	if(n%5==0)
	  printf("FIZZBIZZ");
	  else
	  printf("FIZZ");	
	  }
	  else if(n%5==0)
	  printf("BIZZ");
	  else
	  printf("%d",n);
  }

