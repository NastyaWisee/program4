// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <regex>
#include <string>
using namespace std;

class Cartoon
{
public:
	string genre;

	Cartoon(string name = "qwer")//Конструкт, с принимаемой переменной и ее знаечением по умолчанию
		: genre(name)
	{
	}

	string getGanr()
		const {
		return genre;
	}//Метод получения значения 

};

class Name : public Cartoon
{
public:
	string name;
	int count;

	Name(string s1 = "ert", int k = 12, string genre = "qwer")
		: name(s1), count(k), Cartoon(genre)
	{
		cout << " Конструктр работает" << endl;
	}
	void getName() const { cout << "Название мультика: " << name << endl << "Жанр: " << genre << endl << "Количество cерий: " << count << endl; }
};



class Producer : public Cartoon
{
public:
	string name;
	string surName;
	string patronymic;

	Producer(string s1 = "", string s2 = "", string s3 = "")
		: name(s1), surName(s3), patronymic(s2)
	{
		cout << " Конструктр работает" << endl;
	}
	void getProducer() const { cout << "Имя: " << name << endl << "Отчество: " << patronymic << endl << "Фамилия: " << surName << endl; }
};

class Description : public Cartoon
{
public:
	string country;
	string studio;
	int year;

	Description(string s1 = "", string s2 = "", int s3 = 12)
		: country(s1), studio(s2), year(s3)
	{
		cout << " Конструктр работает" << endl;
	}
	void getDescription() const { cout << "Страна выпуска: " << country << endl << "Студия: " << studio << endl << "Год выпуска: " << year << endl; }
};
int main()
{
	system("chcp 1251");
	system("cls");
	string a, b, r, t;
	int c = 0, v = 0;
	cout << "Введите название мультика:" << endl;
	getline(cin, a);
	cout << "Введите жанр мультика:" << endl;
	getline(cin, b);
	cout << "Введите количество серий:" << endl;
	regex integers(R"(\d+)");
	char input[80];
	do
	{
		memset(input, 0, 80);//Выделяем динамически память для строки
		cin >> input;
		if (regex_match(input, input + strlen(input), integers))//Условие на соответствие регулярному выражения // возвращает длину строки // формальный язык поиска и осуществления манимуляций с подстракими в тексте
		{
			c = atoi(input);//atoi - Преобразуем строку в integer 
			break;
		}
		else
		{
			cout << "Ошибка! Введите число!";
		}
	} while (1);
	cout << "Введите страну выпуска:" << endl;
	cin >> r;
	cout << "Введите студию выпуска:" << endl;
	cin >> t;
	cout << "Введите год:" << endl;
	regex integers1(R"(\d+)");
	char input1[80];
	do
	{
		memset(input1, 0, 80);//Выделяем динамически память для строки
		cin >> input1;
		if (regex_match(input1, input1 + strlen(input1), integers))//Условие на соответствие регулярному выражения
		{
			v = atoi(input1);//atoi - Преобразуем строку в integer 
			break;
		}
		else
		{
			cout << "Ошибка! Введите число!";
		}
	} while (1);
	//cin >> v;
	Description f2(r, t, v);
	Name fi(a, c, b);//Создаем экземпляр объекта Nazvanie и заносим данные через конструктор(метод инициализации)
	Producer Sokol("Геннадий", "Михайлович", "Сокольский");
	fi.getName();//Запрашиваем метод getNazvanie 
	Sokol.getProducer();
	f2.getDescription();
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
