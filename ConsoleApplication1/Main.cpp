#include "Central.h"
#include "CHairDryer.h"
#include "CircularSaw.h"
#include "ElectricDrill.h"
#include "ElectricSaw.h"
#include "GlueGun.h"
#include "HeatingPT.h"
#include "PowerTools.h"
#include "ScrewDriver.h"
#include "TrimmingSaw.h"
#include "�hainSaw.h"
#include "Queue.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int	vibor, poka = 1, kol, i = 0, num_oshibka = 1;
	string tmp;
	Queue<Central*> que;



	cout << "��������, ��� ������ �������� ��������:" << endl;
	cout << "1 - ���� � ����������" << endl;
	cout << "2 - �������� ����������� ��������" << endl;
	cout << "3 - ���� �� �����" << endl;
	cout << "0 - ����� �� ���������" << endl;
	cin >> vibor;
	switch (vibor)
	{
	case 0:
		return 0;
	case 1:
		while (vibor != 0)
		{
			system("cls");
			cout << "���� � ����������" << endl;
			cout << "0 -���������" << endl;
			cout << "1 -������� ��������" << endl;
			cout << "2 -����������� ���" << endl;
			cout << "3 -����������� ���� " << endl;
			cout << "4 -������������ " << endl;
			cout << "5 -����������� " << endl;
			cout << "6 -�������������� ������������������ " << endl;
			cout << "7 -���������� " << endl;
			cout << "8 -����������� ����" << endl;
			cout << "9 -������ ����" << endl;
			cin >> vibor;
			switch (vibor)
			{
			case 1:
				que.push(new GlueGun());
				que.getLast()->enterFromKeyboard();
				break;
			case 2:
				que.push(new CHairDryer());
				que.getLast()->enterFromKeyboard();
				break;
			case 3:
				que.push(new CircularSaw());
				que.getLast()->enterFromKeyboard();
				break;
			case 4:
				que.push(new ElectricDrill());
				que.getLast()->enterFromKeyboard();
				break;
			case 5:
				que.push(new ElectricSaw());
				que.getLast()->enterFromKeyboard();
				break;
			case 6:
				que.push(new HeatingPT());
				que.getLast()->enterFromKeyboard();
				break;
			case 7:
				que.push(new ScrewDriver());
				que.getLast()->enterFromKeyboard();
				break;
			case 8:
				que.push(new TrimmingSaw());
				que.getLast()->enterFromKeyboard();
				break;
			case 9:
				que.push(new �hainSaw());
				que.getLast()->enterFromKeyboard();
				break;

			}
		}
	case 2:
		while (vibor != 0)
		{
			system("cls");

			cout << "�������� ����������� ��������" << endl;
			cout << "0 -���������" << endl;
			cout << "1 -������� ��������" << endl;
			cout << "2 -����������� ���" << endl;
			cout << "3 -����������� ���� " << endl;
			cout << "4 -������������ " << endl;
			cout << "5 -����������� " << endl;
			cout << "6 -�������������� ������������������ " << endl;
			cout << "7 -���������� " << endl;
			cout << "8 -����������� ����" << endl;
			cout << "9 -������ ����" << endl;
			cout << "10 -������� �� 1 ������� ������� ������" << endl;
			cin >> vibor;
			switch (vibor)
			{
				case 1:
					que.push(new GlueGun());
					break;
				case 2:
					que.push(new CHairDryer());
					break;
				case 3:
					que.push(new CircularSaw());
					break;
				case 4:
					que.push(new ElectricDrill());
					break;
				case 5:
					que.push(new ElectricSaw());
					break;
				case 6:
					que.push(new HeatingPT());
					break;
				case 7:
					que.push(new ScrewDriver());
					break;
				case 8:
					que.push(new TrimmingSaw());
					break;
				case 9:
					que.push(new �hainSaw());
					break;
				case 10: 
				{
					que.push(new GlueGun());
					que.last->object->SetName("GlueGun");
					que.last->object->SetPrice(0);
					//que.front->object->SetName("asd");
					que.push(new CHairDryer());
					que.last->object->SetName("CHairDryer");
					que.last->object->SetPrice(1);
					que.push(new CircularSaw());
					que.last->object->SetName("CircularSaw");
					que.last->object->SetPrice(18);
					que.push(new ElectricDrill());
					que.last->object->SetName("ElectricDrill");
					que.last->object->SetPrice(3);
					que.push(new ElectricSaw());
					que.last->object->SetName("ElectricSaw");
					que.last->object->SetPrice(7);
					que.push(new HeatingPT());
					que.last->object->SetName("HeatingPT");
					que.last->object->SetPrice(9);
					que.push(new ScrewDriver());
					que.last->object->SetName("ScrewDriver");
					que.last->object->SetPrice(2);
					que.push(new TrimmingSaw());
					que.last->object->SetName("TrimmingSaw");
					que.last->object->SetPrice(7);
					que.push(new �hainSaw());
					que.last->object->SetName("�hainSaw");
					que.last->object->SetPrice(14);
					break; 
				}
			}
		}
	case 3:
		while (vibor != 0)
		{
			system("cls");
			cout << "0 -���������" << endl;
			cout << "�������� �����, � �������� ����������� ����:" << endl;
			cout << "1 -������� ��������" << endl;
			cout << "2 -����������� ���" << endl;
			cout << "3 -����������� ���� " << endl;
			cout << "4 -������������ " << endl;
			cout << "5 -����������� " << endl;
			cout << "6 -�������������� ������������������ " << endl;
			cout << "7 -���������� " << endl;
			cout << "8 -����������� ����" << endl;
			cout << "9 -������ ����" << endl;
			cin >> vibor;
			if (vibor == 0)
			break;
			
			cout << "������� ���� �� �����: ";
			cin >> tmp;
			switch (vibor)
			{
			case 0:
				break;
			case 1:
			{
				que.push(new GlueGun);
				ifstream is(tmp.c_str());
				que.getLast()->readFromFile(is);
				is.close();
				break;
			}
			case 2:
			{
				que.push(new CHairDryer);
				ifstream is(tmp.c_str());
				que.getLast()->readFromFile(is);
				is.close();
				break;
			}
			case 3:
			{
				que.push(new CircularSaw);
				ifstream is(tmp.c_str());
				que.getLast()->readFromFile(is);
				is.close();
				break;
			}
			case 4:
			{
				que.push(new ElectricDrill);
				ifstream is(tmp.c_str());
				que.getLast()->readFromFile(is);
				is.close();
				break;
			}
			case 5:
			{
				que.push(new ElectricSaw);
				ifstream is(tmp.c_str());
				que.getLast()->readFromFile(is);
				is.close();
				break;
			}
			case 6:
			{
				que.push(new HeatingPT);
				ifstream is(tmp.c_str());
				que.getLast()->readFromFile(is);
				is.close();
				break;
			}
			case 7:
			{
				que.push(new ScrewDriver);
				ifstream is(tmp.c_str());
				que.getLast()->readFromFile(is);
				is.close();
				break;
			}
			case 8:
			{
				que.push(new TrimmingSaw);
				ifstream is(tmp.c_str());
				que.getLast()->readFromFile(is);
				is.close();
				break;
			}
			case 9:
			{
				que.push(new �hainSaw);
				ifstream is(tmp.c_str());
				que.getLast()->readFromFile(is);
				is.close();
				break;
			}
			}
		}
	}

	while (poka != 0)
	{
		cout << "�������� � �������:" << que.lenght() << "  ������ � �������: " << que.getFront()->GetName() << endl;
		cout << "�������� ��������:" << endl;
		cout << "1 - ��������� �������" << endl;
		cout << "2- ����������� �������" << endl;
		cout << "3 - �������� �������" << endl;
		cout << "4 - ���������� �� ����" << endl;
		cout << "5 - ����� ���� ���������� �� �������" << endl;
		cout << "6 - ����� �������" << endl;
		cout << "7 - ������ � ����" << endl;
		cout << "8 - ����� ���� ���������� � ���� �������� � �������" << endl;
		cout << "9 - �������� �����" << endl;
		cout << "0 - �����" << endl;
		cin >> vibor;
		switch (vibor)
		{
		case 0:
			poka = 0;
			break;
		case 1:
			que.pop();
			break;
		case 2:
			que.restart();
			break;
		case 3:
			que.remove();
			break;
		case 4:
			que.sortPrice();
			break;
		case 5:
			que.getFront()->PrintAllInformation();
			break;
		case 6:
		{
			cout << "1 - ����" << endl;
			cout << "2 - ���/�����" << endl;
			cin >> vibor;
			Central** asd = nullptr;
			if (vibor == 1) {
				cout << "������� :" << endl;
				int a;
				cin >> a;
				asd = que.Search(a);
			}
			if (vibor == 2) {
				cout << "������� :" << endl;
				string a;
				cin >> a;
				asd = que.Search(a);
			}
			if (asd == nullptr) { cout << "������� �� ������" << endl; }
			else {
				Central* sfd = *asd;
				sfd->PrintAllInformation();
				cout << endl;
			}
			break;
		}
		case 7: {
			cout << "������� ���� ��� ���������� �����" << endl;
			cin >> tmp;
			que.getFront()->writeToFile(tmp);
			break;
		}
		case 8: {
			que.allInf();
			break;
		}

		case 9:
			system("cls");
			break;
		}
	}

}