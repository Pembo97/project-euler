
#include <string>
#include <iostream>

bool is_palindrome(std::string num)
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
    std::cout << "Largest palindrome of product of 3 numbers: ";
    int high = 0;
    for (int i = 100; i < 999; ++i) {
	    for (int j = i; j < 999; ++j) {
		    int val = i * j;
		    if (val > high)
			    if (is_palindrome(std::to_string(val)))
				    high = val;
	    }
    }

    std::cout << high << std::endl;
}
