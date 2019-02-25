#include "pch.h"
#include "boost/timer.hpp"

using namespace std;

int main()
{
	vector<size_t> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	boost::timer t;

	t.restart();
	sort(v.begin(), v.end());
	do
	{
	} while (next_permutation(v.begin(), v.end()));
	double duration = t.elapsed();

	cout << duration << endl;
	return 0;
}
