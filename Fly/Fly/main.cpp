// Fly.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "conio.h"
#include "windows.h"
#include "ctime"
#include "screen.h"
#include "lang.h"
#include "Cache.h"
#include <iostream>
#include <fstream>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);			//задание кодировки
	system("mode con cols=90 lines=20");//задание размеров окна консоли
	system("title Курсовая работа. Вариант 13");

	string cachename;	//переменная для имени файла кеша
	string engname;		//переменная имени файла англ. локализации
	string rusname;		//переменная имени файла рус. локализации

	cout << "Введите путь к файлу локализации 1:(русский язык) | Enter the name of first localization file (russian)" << endl;
	cin >> rusname;
	Lang::check();
	cout << "Введите путь к файлу локализации 2:(английский язык) | Enter the name of second localization file (english)" << endl;
	cin >> engname;
	Lang::check();

	FCache::setCacheFilename("data\\data.txt");
	Lang::setLangFile(rusname);
	Lang::setLang("rus");

	Lang::ln2 = engname;
	Lang::ln1 = rusname;

	Screens screen;
	screen.MainScreen(1);		//запускаем "Главный экран программы"

	HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor = { 100, false };
	SetConsoleCursorInfo(hCons, &cursor);			//применение заданных параметров курсора

	system("pause");
    return 0;
}

