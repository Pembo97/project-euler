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

int main()
{
	cout << "Largest palindrome of product of 3 numbers: ";
	int high = 0;
	for (int i = 100; i < 999; ++i) {
		for (int j = i; j < 999; ++j) {
			int val = i * j;
			if(val > high)
				if (is_palindrome(to_string(val)))
					high = val;
		}
	}

	cout << high << endl;
}
