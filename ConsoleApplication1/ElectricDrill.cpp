#include "ElectricDrill.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

ElectricDrill::ElectricDrill()
{
	machineORhand = "";
}
ElectricDrill::ElectricDrill(const ElectricDrill& ed)
{
	PowerTools(fpen);
	machineORhand = ed.machineORhand;
}
void ElectricDrill::PrintAllInformation()
{
	PowerTools::PrintAllInformation();
	cout << "���������������� ������/������: " << machineORhand << endl;

}
void ElectricDrill::SetM_or_H(string str)
{
	machineORhand = str;
}
string ElectricDrill::GetM_or_H() const
{
	return machineORhand;
}

void ElectricDrill::readFromFile(ifstream& file)
{
	PowerTools::readFromFile(file);
	file >> machineORhand;
}
void ElectricDrill::writeToFile(string path)
{
	PowerTools::writeToFile(path);
	ofstream file(path, std::ios::app);
	//file << "���������������� ������/������: ";
	file << machineORhand << endl;
	file.close();
}
void ElectricDrill::enterFromKeyboard()
{
	PowerTools::enterFromKeyboard();
	cout << "���������������� ������/������: ";
	cin >> machineORhand;
}
