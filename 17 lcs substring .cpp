

int LCSubstr(string X, string Y, int n, int m) {
	int dp[n + 1][m + 1]; // DP - matrix

  // base condition 
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			if (i == 0 || j == 0)
				dp[i][j] = 0; //
// choice
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (X[i - 1] == Y[j - 1]) 
        // when both string's last char is same
				dp[i][j] = 1 + dp[i - 1][j - 1]; 
  // count the number and decrement the table 
			else
				dp[i][j] = 0; 
  // variation from lcs dp wala

	int mx = INT_MIN;
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			mx = max(mx, dp[i][j]);

	return mx;
}
