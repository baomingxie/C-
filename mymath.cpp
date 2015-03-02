#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int i = 0, m = 0, n = 0;

	//con:
	while(1){
		do{
			cout << "please choose:" << endl;
			cout << "\t1. addition" << endl;
			cout << "\t2. substract" << endl;
			cout << "\t3. multiplication" << endl;
			cout << "\t4. division" << endl;
			cout << "\t0. exit" << endl;
			cout << "please input:";
			cin >> i;
		}while(i < 0 || i > 4);

		if(i != 0)
		{
			cout << "piease input first number:";
			cin >> m;
			cout << "please input second number:";
			cin >> n;
		}

		switch(i){
			case 1:
				cout << m + n << endl;
				//goto con;
				break;
			case 2:
				cout << m - n << endl;
				//goto con;
				break;
			case 3:
				cout << m * n << endl;
				//goto con;
				break;
			case 4:
				if(n == 0)
				{
					cout << "the second number cannot be 0!" << endl;
					//goto con;
					break;
				}
				cout << m / n << endl;
				//goto con;
				break;
			case 0:
				return 0;
		}
	}
	return 0;
}

