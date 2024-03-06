#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long ans = 5;
	long long num = 7;
	for (int i = 2; i <= n; i++)
	{
		ans += num;
		num += 3;
		ans = ans % 45678;
	}
	cout << ans << endl;
}