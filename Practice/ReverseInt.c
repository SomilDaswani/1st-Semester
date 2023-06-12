#include <stdio.h>

int reverse(int num){
	int reversedNum = 0;
	while(num != 0){
		int digit = num % 10;
		reversedNum = reversedNum * 10 + digit;
		num /= 10;
	}
	return reversedNum;
}

int main(){
	printf("Enter an integer: ");
	int num;
	scanf("%d", &num);
	int result = reverse(num);
	printf("Reversed Integer: %d", result);
	return 0;
}