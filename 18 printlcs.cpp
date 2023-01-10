string LCS(string X, string Y, int n, int m) {
	int dp[n + 1][m + 1]; // DP - matrix

	// base case of recursion 
//   used for intiliing for dp
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			if (i == 0 || j == 0)
				dp[i][j] = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (X[i - 1] == Y[j - 1]) 
        // if last charcter would be same in that case it should be used
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else 
//         if last character not smae than it would pick max
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);

	
	int i = n, j = m;
	string lcs = ""; 
  // storing charcter when equal
	while (i > 0 && j > 0) {
		if (X[i - 1] == Y[j - 1]) {
			lcs += X[i - 1];
      // inserting a string
			i--, j--;
		}
		else {
			if (dp[i][j - 1] > dp[i - 1][j])
				j--; 
          //used for moving the other larger side
			else
				i--;
		}
	}
	reverse(lcs.begin(), lcs.end()); 
  // reverse the string for getting the lcs 

	return lcs;
}
