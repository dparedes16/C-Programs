#include<stdio.h>
long factorial(int);
int boxcheck(int,int);

	//variable declaration
	int sudoku[9][9] = {
	{3,9,6,1,8,2,7,4,5},
	{4,8,2,7,6,5,3,1,9},
	{7,1,5,9,3,4,2,8,6},
	{6,4,9,5,2,7,1,3,8},
	{1,5,8,6,4,3,9,7,2},
	{2,3,7,8,9,1,6,5,4},
	{8,6,4,3,1,9,5,2,7},
	{5,2,3,4,7,6,8,9,1},
	{9,7,1,2,5,8,4,6,3}
	};
	
	int checkSum;
	//= factorial(9);
	int flag;
	int row, col, tempflag, run;
	
int main()
{		
	//declarations
    row = 0;
	col = 0;
//	checkSum = factorial(9);
	flag = 1;
	tempflag =1;
	run = 1;
	//check horizonally
	for (row = 0; row < 9; row++)
	{
		for (col = 0; col < 9; col++)
		{
			run = run*(sudoku[row][col]);
		}
		if(run != checkSum)
		{
			flag = 0;
		}
		run = 1;
	}                                                                                                                                                                                                                                                                                                       
	//check vertically                                                                                                                                                                                                                                                                                                               for (col = 0; col < 9; col++)
	
	{
	
		//         printf("\n");
	
		for (col = 0; col < 9; col++)
		{
			run = run*(sudoku[row][col]);
	        
			//               printf(" %d",sudoku[row][col]);
		}
	    
		if(run != checkSum)
		{
			flag = 0;
		}
		run = 1;
	}

	//checks the rectangles in sudoku
	row=0;
	col =0;
	
	for(row = 0; row <7; row =row+3)
	{
		for(col = 0; col <7; col =col+3)
		{
			tempflag = boxcheck(row, col);
			if (tempflag =0)
			{
				flag = tempflag;
			}
		}
	}

	//informs the user of result
	
	printf("\n\n");

	if (flag == 0)
	{
		printf("No Solution\n");
	}
	
	if (flag == 1)
	{
		printf("Correct!!!\n");
	}
	
	printf("\n");
	return 0;
}

long factorial(int num)
{
	if(num == 0)
		return 1;
	else
		return(num * factorial(num-1));
}

//checkbox

int run;
int boxcheck(int rowcounter,int colcounter)

{
	int rowloop =0;
	int colloop =0;

	run =1;
	
	checkSum = factorial(9);
	//
	
	for (rowloop = 0; rowloop < 3; rowloop ++)
	{
		for(colloop=0; colloop < 3; colloop++)
		{
			run = run*(sudoku[rowcounter+rowloop][colcounter+colloop]);
		}
	}
	
	if (run != checkSum)
	{
		flag = 0;
	}
	
	if (flag == 0)
		return 1;
	    
	else
		return 0;
}
