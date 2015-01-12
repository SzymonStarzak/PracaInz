#include <fstream>
#include <windows.h>
#include <time.h>

int main()
{
	using namespace std;
	srand(time(NULL));
	ofstream out("bin.txt");
	
	int c;
	for(int a = 1; a < 9999; a++)
	{
		c = rand() % 2;
		out << c;	
	}
}
