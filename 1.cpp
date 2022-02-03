#include <iostream>
#include <string>

bool unique_str(const std::string&);

int main()
{
	std::string str("hello");
	std::cout << str << std::endl;
	std::cout << std::boolalpha << unique_str(str) << std::endl;
}

bool unique_str(const std::string& str)
{
	unsigned int arr[4] = {0};
	for(int i = 0; i < str.size(); ++i){
		int tiv1 = str[i] / 32;
		int tiv2 = str[i] % 32;
		if(arr[tiv1] & (1 << tiv2)){
			return false;
		}
		arr[tiv1] |= (1 << tiv2);
	}
	return true;
}
