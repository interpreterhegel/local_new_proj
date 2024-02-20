/* 
1.Knowledge
Single ampersand & ===> Bit-wise and. 1000 & 1101 = 1010
Double ampersand && ===> Logical and. True & true = ture. None-zero value = true.
2.Two ways to load sample data:
Set a global/local 2-dimensional array for integers. Applied here.
Define a structure and redefine each time in the loop. Included in the comments but it's not recommended. 
3.Summary: 
On 20 Feb 2024 this 50-line c program was written as the first project in Github 
either as a remainder for myself when meeting similar problems again and an example of my coding.
Not so much surprise, but happy enough for a freshman here.
*/

//Comments are not recommended to be copied. They provide a less-efficient alternative.
#include<stdio.h>
#include<cstdlib>

/*
typedef struct test_general{
	int x;
	int y;
}test;
*/

int test_data [5][2] = {
	{3,4},
	{3,1},
	{3,0},
	{0,3},
	{13,4}
};

int main (){
	
	for(int i = 0; i < 5; i ++ ){
		/*
		test a;
		a.x = test_data[i][0];
		a.y = test_data[i][1];
		*/
		printf("Example: x = %d, y = %d\n",test_data[i][0] , test_data[i][1]);
		printf("x & y = %d\nx && y = %d\n", test_data[i][0] & test_data[i][1], test_data[i][0] && test_data[i][1]);
	}

	system("pause");
	return 0;
}

/*Expected result:
	x = 3, y = 4;
	0011,0100
	0,1
	x = 3, y = 1;
	0011,0001
	1,1
	x = 3, y = 0;
	0011,0000
	0,0
	x = 0, y = 3;
	0000,0011
	0,0
	x = 13, y = 4;
	1101,0100
	4,1
*/

