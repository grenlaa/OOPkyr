#include "CHairDryer.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

CHairDryer::CHairDryer()
{
	airForce = 0;
}
CHairDryer::CHairDryer(const CHairDryer& bpen)
{
	HeatingPT(fpen);
	airForce = bpen.airForce;
}
void CHairDryer::PrintAllInformation()
{
	HeatingPT::PrintAllInformation();
	cout << "сила воздушного потока: " << airForce << endl;

}
void CHairDryer::SetAirForce(int Avto)
{
	airForce = Avto;
}
int CHairDryer::GetAirForce() const
{
	return airForce;
}

void CHairDryer::readFromFile(ifstream& file)
{
	HeatingPT::readFromFile(file);
	file >> airForce;
}
void CHairDryer::writeToFile(string path)
{
	HeatingPT::writeToFile(path);
	ofstream file(path, std::ios::app);
	//file << "сила воздушного потока: ";
	file << airForce << endl;
	file.close();
}
void CHairDryer::enterFromKeyboard()
{
	HeatingPT::enterFromKeyboard();
	cout << "сила воздушного потока: ";
	cin >> airForce;
}
