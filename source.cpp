#include <iostream>
#include <ctime>

std::string gen_password(const size_t& length)
{
	std::string password;
	char c;
	bool isalphanumeric = false;
	for(auto i = 0; i < length; i++)
	{
		while(!isalphanumeric)
		{
			c = rand() % 90 + 34;
			if (isalnum(c)) isalphanumeric = true;
		}
		password.push_back(c);
		isalphanumeric = false;
	}
	return password;
}

int main()
{
	srand(time(nullptr));
	auto pass_length = 0;
	auto size = 0;
	std::cout << "Choose the password length :";
	std::cin >> pass_length;
	std::cout << "\nYour password is : " << gen_password(pass_length);
	
	return 0;
}