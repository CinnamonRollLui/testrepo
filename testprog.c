//Richard Vela
//csc255
//2/3/21
//lab #2

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x,y=0,z=5;
	x=0;
	printf("Enter a number between 1 and 10 inclusive: \n");
	scanf("%d", &x);
	y = x + z;
	
	printf("%d + magic number = %d \n",x,y);
	
	y = x * z;
	printf("%d * magic number = %d \n" ,x,y);
	
	y= x - z;
	printf("%d - magic number = %d \n" ,x,y);

	printf("Guess the magic number? \n");
	scanf("%d",&x);
	
	if(x == z)
	{
		puts("You are correct! You win \n");
	}
	else
	{
	printf("Incorrect guess! You loose \n");
	}
	return EXIT_SUCCESS;
}
