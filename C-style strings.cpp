#include <iostream>
#include <iterator>

int main()
{
	char myString[]{ "strings" };
	const int length{ static_cast<int>(std::size(myString)) };

	std::cout << myString << " has " << length << " characters.\n";

	for (int index{ 0 }; index < length; ++index)
		std::cout << "The ASCII code is: " << static_cast<int>(myString[index]) << " ";
	std::cout << '\n';

	return 0;
}
