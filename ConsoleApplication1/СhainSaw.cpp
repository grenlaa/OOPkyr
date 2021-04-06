#include "�hainSaw.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

�hainSaw::�hainSaw()
{
	chainLength = 0;
}
�hainSaw::�hainSaw(const �hainSaw& cl)
{
	ElectricSaw(fpen);
	chainLength = cl.chainLength;
}
void �hainSaw::PrintAllInformation()
{
	ElectricSaw::PrintAllInformation();
	cout << "����� ���� ����: " << chainLength << endl;
}

void �hainSaw::SetCL(int wT)
{
	chainLength = wT;
}
int �hainSaw::GetCL() const
{
	return chainLength;
}

�hainSaw& �hainSaw::operator=(const �hainSaw& v1)
{
	ElectricSaw::operator=(v1);
	chainLength = v1.chainLength;
	return *this;
}

void �hainSaw::readFromFile(ifstream& file)
{
	ElectricSaw::readFromFile(file);
	file >> chainLength;
}

void �hainSaw::writeToFile(string path)
{
	ElectricSaw::writeToFile(path);
	ofstream file(path, std::ios::app);
	//file << "����� ���� ����: ";
	file << chainLength << endl;
	file.close();
}
void �hainSaw::enterFromKeyboard()
{
	ElectricSaw::enterFromKeyboard();

	cout << "����� ���� ����: ";
	cin >> chainLength;
}