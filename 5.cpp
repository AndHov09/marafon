#include <iostream>
#include <string>

bool foo(std::string,const std::string&);

int main()
{
	std::string str1("ple"), str2("pale"), str3("pales"), str4("bale"), str5("bake");
	std::cout << std::boolalpha << foo(str1,str2) << std::endl;
	std::cout << foo(str3,str2) << std::endl;
	std::cout << foo(str4,str2) << std::endl;
	std::cout << foo(str5,str2) << std::endl;
return 0;
}

bool foo(std::string str1,const std::string& str2)
{
	std::string str11(str1), str111(str1);
	for(int i = 0; i < str1.size(); ++i){
		if(str1[i] != str2[i]){
			str1.erase(i,1);
			str11.insert(i,1,str2[i]);
			str111[i] = str2[i];
			break;
		}
	}
	bool a = str1 == str2;
	bool b = str11 == str2;
	bool c = str111 == str2;
	return (a | b | c);
}
