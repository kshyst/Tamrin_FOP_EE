
#include <iostream>;
using namespace std;

int main() 
{
	int destinationLocation , time;

	cin >> destinationLocation;

	if (destinationLocation % 5 != 0) 
	{
		time = destinationLocation / 5 + 1;
	}
	else
	{
		time = destinationLocation / 5 ;

	}

	cout << time;

	return 0;
}