#include <iostream>
#include <string>

bool two_str(const std::string&,const std::string&);

int main()
{
	std::string str1("Hello");
	std::string str2("eloHl");
	std::string str3("Helloo");
	std::cout << std::boolalpha << two_str(str1,str2) << std::endl;
	std::cout << std::boolalpha << two_str(str1,str3) << std::endl;
	std::cout << std::boolalpha << two_str(str3,str2) << std::endl;

	return 0;
}

bool two_str(const std::string& str1,const std::string& str2)
{
	if(str1.size() != str2.size()){return false;}
	const int size = 4;
	unsigned int arr1[size] {};
	unsigned int arr2[size] {};
	for(int i = 0; i < str1.size(); ++i){
		int numstr1 = str1[i] / 32;
		int numstr2 = str2[i] / 32;
		arr1[numstr1] |= 1 << (str1[i] % 32);
		arr2[numstr2] |= 1 << (str2[i] % 32);
	}
	for(int i = 0; i < size; ++i){
		if(arr1[i] != arr2[i]){return false;}
	}
	return true;
}
