#include "ScrewDriver.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

ScrewDriver::ScrewDriver()
{
	rotationalSpeed = 0;
}
ScrewDriver::ScrewDriver(const ScrewDriver& ed)
{
	ElectricDrill(fpen);
	rotationalSpeed = ed.rotationalSpeed;
}
void ScrewDriver::PrintAllInformation()
{
	ElectricDrill::PrintAllInformation();
	cout << "скорость вращения: " << rotationalSpeed << endl;

}
void ScrewDriver::SetRS(int rtS)
{
	rotationalSpeed = rtS;
}
int ScrewDriver::GetRS() const
{
	return rotationalSpeed;
}

/*ScrewDriver& ScrewDriver::operator=(const ScrewDriver bpen)
{
	ElectricDrill::operator=(bpen);
	airForce = bpen.airForce;
}*/
void ScrewDriver::readFromFile(ifstream& file)
{
	ElectricDrill::readFromFile(file);
	file >> rotationalSpeed;
}
void ScrewDriver::writeToFile(string path)
{
	ElectricDrill::writeToFile(path);
	ofstream file(path, std::ios::app);
	//file << "скорость вращения: ";
	file << rotationalSpeed << endl;
	file.close();
}
void ScrewDriver::enterFromKeyboard()
{
	ElectricDrill::enterFromKeyboard();
	cout << "скорость вращения: ";
	cin >> rotationalSpeed;
}
