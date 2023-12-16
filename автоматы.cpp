#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string fname = "INPUT.TXT";
	string oname = "OUTPUT.TXT";
	int d, N, n, m;
	ifstream fileInput(fname);
	ofstream fileOutput(oname);
	if (fileInput.is_open())
	{
		cout << "Файл открыт" << endl;
		fileInput >> N;

		for (int i = 0; i < N;i++)
		{
			fileInput >> n;
			fileInput >> m;
			d = 19 * m + (n + 239) * (n + 366) / 2;
			fileOutput << d << endl;
		}
		
		fileOutput.close();
		
		//return 0;
	}
}