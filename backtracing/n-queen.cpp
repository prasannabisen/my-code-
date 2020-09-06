#include<iostream>
using namespace std;

bool isSafe(board[][10], int i, int j, int n)
{

}

bool solveNQueen(int board[][10], int i, int n)
{
	if (i == n)
	{
		//successfully placed queen in n rows
		//print the board

		return true;
	}
	//recursive case
	for (int j = 0; j < n; j++)
	{
		//check placing queen is safe or not

	}
}

int main()
{
	int board[10][10] = {0};
	int n;
	cin >> n;
	solveNQueen(board, 0, n);
}