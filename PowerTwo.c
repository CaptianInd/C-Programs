//Description: Write a recursive function "powTwo" that takes in a positive integer "n" and returns 2^n 
//Example: powTwo( 3 ) = 8, because 2^3 = 8.

//library
# include<stdio.h>

//Declare Functions
int powTwo(int n);

int main(){
	
	int x = 0;
	
	printf("2^%d = %d \n", x, powTwo(x));
	
	return 0;
}

//2^0 = 1
// 2^1 = 2 * 1 
// 2^ 2 = 2 * 2
// 2^3 = 2 * 2 * 2

int powTwo(int n){
	
	//Base Case
	if(n == 0){
		return 1;
	}
	
	//Recursive Case
	return 2 * powTwo(n-1);
}
