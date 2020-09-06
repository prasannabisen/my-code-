#include<iostream>
using namespace std;

bool ratInMaze(char maze[10][10], int sol[10][10], int i, int j, int m, int n)
{
	if (i == m and j == n)
	{
		sol[m][n] = 1;
		for (int i = 0; i <= m; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;
	}
	//rat should bi inside the grid
	if (i > m or j > n)
	{
		return false;
	}
	if (maze[i][j] == 'X')
	{
		return false;
	}

	//assume solution exist
	sol[i][j] = 1;
	bool rightSuccess = ratInMaze(maze, sol, i + 1, j, m, n);
	bool downSuccess = ratInMaze(maze, sol, i, j + 1, m, n);

	//backtracing
	sol[i][j] = 0;

	if (rightSuccess or downSuccess)
	{
		return true;
	}
	return false;

}

int main()
{
	char maze[10][10] = {"0000",
	                     "00X0",
	                     "000X",
	                     "0X00"
	                    };
	int sol[10][10] = {0};

	int m = 4, n = 4;
	int i = 0, j = 0;
	bool ans = ratInMaze(maze, sol, i, j, m - 1, n - 1);
	if (ans == false)
	{
		cout << "path not exist";
	}
	return 0;
}