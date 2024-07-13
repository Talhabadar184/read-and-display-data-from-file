#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a,b,c;
	char stu[100] = {};
	
 
	ofstream students("students.txt");
	cout << "please enter the number of data: " << endl;
	cin >> a;
	for ( b = 0; b < a; b++)
	{
		for ( c = 0; c< 5; c++)
		{
			cin.getline(stu, 100);
			students << stu << "\t";
		}
		students << endl;
	}
	students.close();
}
