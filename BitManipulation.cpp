#include <iostream>
#include <bitset>

using namespace std;

bool numIsNegetive(int n)
{
	auto sz = sizeof(n)*8 -1;

	auto mask = 1 << sz;

	return ((n & mask) >> sz);
}

void getAbsOfNumber(int n)
{
	auto sz = sizeof(n)*8;
	auto mask = n >> (sz -1);

	auto abs_v = (n + mask)^mask;

	cout << "abs( " << n << " ) is (  " << abs_v << " )" << endl;
}

int main(int argc, char **argv)
{
	int n;

	cout << "Enter Number : ";
	cin >> n;

	numIsNegetive(n)?(cout << "Number is negative" << endl):(cout << "Number is positive" << endl);

	cout << "Enter Number : ";
	cin >> n;

	getAbsOfNumber(n);

	return 0;
}
