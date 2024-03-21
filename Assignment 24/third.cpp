#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPower(unsigned n)
{
	float p;
	if (n <= 1)
		return 1;
	for (int i = 2; i <= sqrt(n); i++) {
		p = log2(n) / log2(i);
		if ((ceil(p) == floor(p)) && p > 1)
			return true;
	}
	return false;
}

int main()
{
	for (int i = 2; i < 100; i++)
		if (isPower(i))
			cout << i << " ";
	return 0;
}
