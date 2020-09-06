#include<iostream>
#include<climits>
using namespace std;
void segment(int a[], int *tree, int s, int e, int index)
{
	if (s == e)
	{
		tree[index] = a[s];
		return;
	}
	int mid = (s + e) / 2;
	segment(a, tree, s, mid, index * 2);
	segment(a, tree, mid + 1, e, 2 * index + 1);
	tree[index] = min(tree[index * 2], tree[2 * index + 1]);
	return ;

}

int querry(int *tree, int s, int e, int qs, int qe, int index)
{
	//complete overlap
	if (s >= qs and e <= qe)
	{
		return tree[index];
	}
	//no overlap
	if (qe<s or qs>e)
	{
		return INT_MAX;
	}

	//partial ovrlap
	int mid = (s + e) / 2;
	int left = querry(tree, s, mid, qs, qe, 2 * index);
	int right = querry(tree, mid + 1, e, qs, qe, 2 * index + 1);
	return min(left, right);
}

int main()
{
	int a[] = {1, 3, 2, -5, 6, 4};
	int n = sizeof(a) / sizeof(a[0]);
	int *tree = new int [4 * n + 1];
	segment(a, tree, 0, n - 1, 1);

	for (int i = 1; i <= 13; i++)
	{
		cout << tree[i] << " ";
	}

	int q;
	cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		cout << querry(tree, 0, n - 1, l, r, 1);
	}
}