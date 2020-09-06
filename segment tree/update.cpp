#include<iostream>
#include<climits>
using namespace std;

void update(int *tree, int s, int e, int increment, int update_index, int index)
{
	if (update_index<s or update_index>e) {
		return ;
	}
	//leaf case
	if (s == e)
	{
		tree[index] += increment;
		return;
	}
	int mid = (s + e) / 2;
	update(tree, s, mid, increment, update_index, index * 2);
	update(tree, mid + 1, e, increment, update_index, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * mid + 1]);
	return;
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

void segment(int a[], int *tree, int s, int e, int index)
{
	if (s == e)
	{
		tree[index] = a[s];
		return;
	}
	int mid = (s + e) / 2;
	segment(a, tree, s, mid, 2 * index);
	segment(a, tree, mid + 1, e, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;
}
int main()
{
	int a[] = {1, 3, 2, -5, 6, 4};
	int n = sizeof(a) / sizeof(a[0]);
	int *tree = new int[4 * n + 1];
	segment(a, tree, 0, n - 1, 1);

	// int update_index, update_value;
	// cin >> update_index >> update_value;

	for (int i = 1; i <= 13; i++)
	{
		cout << tree[i] << " ";
	}
	update(tree, 0, n - 1, 10, 3, 1);
	cout << "\nAfter update\n";
	for (int i = 1; i <= 13; i++)
	{
		cout << tree[i] << " ";
	}
	cout << "\n";
	int q;
	cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		cout << querry(tree, 0, n - 1, l, r, 1);
	}
}