#include "../../std_lib_facilities.h"

bool is_prime(long long int n)
{
	for (int i = 2; i <= sqrt(n); ++i)
	if ((n % i) == 0) return false;

    return true;
}

int main()
{
	long long int num = 600851475143;
	long long int high = 2;
	for (long long int i = 2; i <= sqrt(num); ++i) {
		if ((num % i) == 0)
			if (is_prime(i))
				high = i;
	}

	cout << high << endl;
}
