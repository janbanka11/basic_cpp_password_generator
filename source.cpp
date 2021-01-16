#include <iostream>

std::string gen_password(const size_t& length)
{
	std::string password;
	for(int i = 0; i < length; i++)
	{
		password.push_back(rand() % 93 + 34);
	}
	return password;
}

int main()
{
	const size_t str_len = 10;
	std::cout << gen_password(str_len);
}