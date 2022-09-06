#include <iostream>

using namespace std;
// first we nake matric andc heck it out
bool subsetsum(int arr[],int n,int sum)
{
    // dpmatric we will take it
    bool t[n+1][sum+1];
    
    // okay so before we will take the first row adn first column
    for(int =0; i<=n; i++)
    {
        for(int = 0; j<=sum; j++)
        {
            if(i==0)
            // when empty meanss hence than reture falsse no sum of array at that moment
            
            t[i]t[j]=false;
            if(j==0)
            // when empty means hecnec than return true
            t[i]t[j]=true;
            
        }
    }
    
}

// we are starting from one as i row is and colum is already conscidered
for(int i=1; i<=n; i++)
{
    for(int j=1; j<=sum; j++)
    {
        t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
        else
        t[i][j] = t[i - 1][j];
        // if sum is less tha array siz
        }
}
return t[n][sum]; //return T/F
        
}

int main() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int sum; cin >> sum;

	isSubsetPossible(arr, n, sum) ? cout << "Yes\n" : cout << "No\n";
	return 0; 
}
