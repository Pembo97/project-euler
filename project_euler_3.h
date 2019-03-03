#include "../../std_lib_facilities.h"

bool is_prime(long long int n)
{

	for (int i = 2; i <= sqrt(n); ++i)
		if ((n % i) == 0) return false;

	return true;
}
