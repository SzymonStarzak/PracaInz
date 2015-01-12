#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	ifstream infile("ElementsList2.txt");
	ofstream outfile("AndroidJavaElements.txt");
	string a,b,c,d,e,f,g,h;
	while (infile >> a >> b >> c >> d >> e >> f >> g >> h)
	{
    // process pair (a,b)
    outfile << "e = new Element(\"" << a << "\",\"" << b  << "\"," << "\"" << c  << "\","  
			<< d  << "," << e << "," << f << ",\"" << g << "\",\"" << h << "\"); e.save();" << endl;
	}
	return 0;
}
