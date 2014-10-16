#include <stdio.h>

bool find (int* matrix,int rows,int columns,int number)
{
	bool found=false;
	if(matrix!=NULL&&rows>0&&columns>0)
	{
		int row=0;
		int column=columns-1;
		while(row<rows && columns>=0)
		{
			if(*(matrix+row*columns+column)==number)
			{
				found=true;
				break;
			}
			else if(*(matrix+row*columns+column)<number)
			--column;
			else
			++row;

		}
	}
	return found;
		
}

int main()
{
	int matrix[4][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	int* point=&matrix[0][0];
	bool sign;
	printf("%d\n",matrix[0][0]);
	printf("%d\n",*(point+0*4+3));
	sign=find(&matrix[0][0],4,4,99);
	//sign=true;
	printf("%d\n",sign);
	return 0;
	
}

