#include <iostream>
using namespace std;


int main()
{
	long n , m , k , kashiCount , cKashiCount , rKashiCount ;

	cin >> n >> m >> k;
	
	cKashiCount = n / k;
	rKashiCount = m / k;

	kashiCount = cKashiCount * rKashiCount;

	if (n % k != 0 && m % k != 0) 
	{
		kashiCount += (n / k) + (m / k) + 1;
	}
	else if (n % k == 0 && m % k == 0)
	{
	}
	else if(n % k != 0 && m % k == 0)
	{
		kashiCount += m / k;
	}
	else if (n % k == 0 && m % k != 0)
	{
		kashiCount+= n / k;
	}

	cout << kashiCount;
	return 0;
}