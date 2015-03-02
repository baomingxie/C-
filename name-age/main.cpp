#include <iostream>
using namespace std;

#include "output_info.h"
using namespace iotek;


int main(int argc, char* argv[])
{
	int years_old = 0;
	char ch[20] = "secret";

	cout << "Please input years old: ";
	cin >> years_old;

	if(argc == 1)
	{
		iotek::output_info(ch, years_old);
	}
	else
	{
		iotek::output_info(argv[1], years_old);
	}

	return 0;
}

