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
#include "СhainSaw.h"
#include "Queue.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int	vibor, poka = 1, kol, i = 0, num_oshibka = 1;
	string tmp;
	Queue<Central*> que;



	cout << "Выберите, как хотите добавить элементы:" << endl;
	cout << "1 - ввод с клавиатуры" << endl;
	cout << "2 - создание стандартных объектов" << endl;
	cout << "3 - ввод из файла" << endl;
	cout << "0 - выход из программы" << endl;
	cin >> vibor;
	switch (vibor)
	{
	case 0:
		return 0;
	case 1:
		while (vibor != 0)
		{
			system("cls");
			cout << "Ввод с клавиатуры" << endl;
			cout << "0 -Закончить" << endl;
			cout << "1 -Клеевой пистолет" << endl;
			cout << "2 -Строительнй фен" << endl;
			cout << "3 -Циркулярная пила " << endl;
			cout << "4 -Электродрель " << endl;
			cout << "5 -Электропила " << endl;
			cout << "6 -Нагревательные Электроинструменты " << endl;
			cout << "7 -Шуруповерт " << endl;
			cout << "8 -Торцовочная пила" << endl;
			cout << "9 -Цепная пила" << endl;
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
				que.push(new СhainSaw());
				que.getLast()->enterFromKeyboard();
				break;

			}
		}
	case 2:
		while (vibor != 0)
		{
			system("cls");

			cout << "Создание стандартных объектов" << endl;
			cout << "0 -Закончить" << endl;
			cout << "1 -Клеевой пистолет" << endl;
			cout << "2 -Строительнй фен" << endl;
			cout << "3 -Циркулярная пила " << endl;
			cout << "4 -Электродрель " << endl;
			cout << "5 -Электропила " << endl;
			cout << "6 -Нагревательные Электроинструменты " << endl;
			cout << "7 -Шуруповерт " << endl;
			cout << "8 -Торцовочная пила" << endl;
			cout << "9 -Цепная пила" << endl;
			cout << "10 -создать по 1 объекту каждого класса" << endl;
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
					que.push(new СhainSaw());
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
					que.push(new СhainSaw());
					que.last->object->SetName("СhainSaw");
					que.last->object->SetPrice(14);
					break; 
				}
			}
		}
	case 3:
		while (vibor != 0)
		{
			system("cls");
			cout << "0 -Закончить" << endl;
			cout << "Выберите класс, к которому принадлежит файл:" << endl;
			cout << "1 -Клеевой пистолет" << endl;
			cout << "2 -Строительнй фен" << endl;
			cout << "3 -Циркулярная пила " << endl;
			cout << "4 -Электродрель " << endl;
			cout << "5 -Электропила " << endl;
			cout << "6 -Нагревательные Электроинструменты " << endl;
			cout << "7 -Шуруповерт " << endl;
			cout << "8 -Торцовочная пила" << endl;
			cout << "9 -Цепная пила" << endl;
			cin >> vibor;
			if (vibor == 0)
			break;
			
			cout << "Введите путь до файла: ";
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
				que.push(new СhainSaw);
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
		cout << "объектов в очереди:" << que.lenght() << "  Первый в очереди: " << que.getFront()->GetName() << endl;
		cout << "Выберите действие:" << endl;
		cout << "1 - Следующий элемень" << endl;
		cout << "2- Востановить очередь" << endl;
		cout << "3 - Удаление объекта" << endl;
		cout << "4 - Сортировка по цене" << endl;
		cout << "5 - Вывод всей информации об объекте" << endl;
		cout << "6 - Поиск объекта" << endl;
		cout << "7 - Запись в файл" << endl;
		cout << "8 - Вывод всей информации о всех объектах в очереди" << endl;
		cout << "9 - Очистить экран" << endl;
		cout << "0 - выход" << endl;
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
			cout << "1 - Цена" << endl;
			cout << "2 - Имя/Бренд" << endl;
			cin >> vibor;
			Central** asd = nullptr;
			if (vibor == 1) {
				cout << "Введите :" << endl;
				int a;
				cin >> a;
				asd = que.Search(a);
			}
			if (vibor == 2) {
				cout << "Введите :" << endl;
				string a;
				cin >> a;
				asd = que.Search(a);
			}
			if (asd == nullptr) { cout << "Элемент не найден" << endl; }
			else {
				Central* sfd = *asd;
				sfd->PrintAllInformation();
				cout << endl;
			}
			break;
		}
		case 7: {
			cout << "Укажите путь для сохранения файла" << endl;
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