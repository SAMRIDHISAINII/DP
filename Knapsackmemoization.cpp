#include <iostream>

using namespace std;
// DIMNESION OF MATRIX
const int D = 1000; 
// MATRIX
int t[D][D];

int Knapsack(int wt[], int val[], int w, int n)
{
    // taking the base solution
    if(n==0|| w==0)
    return 0;
    
    
	if (t[n][w] != -1)
		return t[n][w];
  
	// else calculate
	else {
		if (wt[n - 1] <= w)
			t[n][w] = max(val[n - 1] + Knapsack(wt, val, w - wt[n - 1], n - 1),Knapsack(wt, val, w, n - 1));
		else if (wt[n - 1] > w)
			t[n][w] = Knapsack(wt, val, w, n - 1);

		return t[n][w];
	}
}
// this is the recusive way of doing it 

int main()
{
    int n, w;
    cin>>n;
    
    int val[n],  wt[n];
    // value and wirght of the arr
    for (int i = 0; i < n; i++)
		cin >> wt[i];
	for (int i = 0; i < n; i++)
		cin >> val[i];
		
		cin>>w;
		cout << Knapsack(wt, val, w, n) << endl;
	return 0;
}
  
