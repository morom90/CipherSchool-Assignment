#include <iostream>
#include<algorithm>
using namespace std;
#include <iostream>
using namespace std;

int maxRob(int *money, int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return money[0];
	if (n == 2)
		return max(money[0], money[1]);

	int dp[n];

	dp[0] = money[0];
	dp[1] = max(money[0], money[1]);


	for (int i = 2; i<n; i++)
		dp[i] = max(money[i]+dp[i-2], dp[i-1]);

	return dp[n-1];
}


int main()
{
	int money[] = {1,2,3,1};
	int n = sizeof(money)/sizeof(money[0]);
	cout << "Maximum loot that is possible = "
		<< maxRob(money, n);
	return 0;
}

   
  
    
