# coursework
Задание: Вариант 13
Создать класс Fly, содержащий в себе следующие элементы:
- поле «скорость» int Speed;
- поле «высота полета» int Height;
- поле «дальность полета» int Distance;
- поле «количество пассажиров» int NumOfPass;
- метод получения скорости int GetSpeed();
- метод получения дальности полета int GetDistance();
- метод получения высоты полета int GetHeight();
- метод получения количества пассажиров int GetNumOfPass();
- метод проверки, может летать на указанной высоте int IsFlying(int Height);
- конструктор с параметрами Fly(int Speed, int Distance, int NumOfPass, int Height).
Создать класс Helicopter, содержащий в себе элементы:
- поле «количество винтов» int NumOfScrew;
- поле «объем топливного бака» int Capacity;
- метод заправки бака int AddFuel(int Fuel); (Если бак уже полный, то возвращает - 1, иначе - 0)
- конструктор с параметрами Helicopter(int Speed, int Distance, int NumOfPass, int Height, int NumOfScrew, int Capacity).
В классе Helicopter перегрузить оператор ~ (унарный оператор класса), новое действие - сброс топлива.
