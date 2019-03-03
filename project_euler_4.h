#include "../../std_lib_facilities.h"

bool is_palindrome(string num)
{
	if (num.size() == 0) return false;

	int i = 0;
	int j = num.size()-1;
	while (i < j) {
		if (num[i] != num[j])
			return false;

		++i;
		--j;
	}

	return true;
}
