#include <sstream>
#include "iostream"
#include "fly.h"
using namespace std;
class RadioactiveFuel {
	int Density; // Плотность топлива
	int Evaporation; // интенсивность испарения
	virtual void use() = 0;
};

class helicopter: public Fly {
protected:
	int numOfScrew;
	int capacity; // вместимость
	const int maxdist = 800; //макс. дальность полета вертолета
	const int maxheight = 9150; //макс. высота полета вертолета
	const int maxpass = 85; //макс. количество пассажиров вертолета
	int maxspeed = 295; //макс. скорость полета вертолета
public:
	int Fuel;
	helicopter();
	helicopter(int S, int Dis, int num, int H, int numS, int Cap);
	~helicopter(); //сбросить 
	int GetNumOfScrew();
	int SetNumOfScrew();
	int GetCapacity();
	int SetCapacity();
	int AddFuel(int F);
	int operator~();
	int SetDistance();
	int SetSpeed();
	int SetNumOfPass();
	int SetHeight();
	void print();
	void Edit();
};
class RadioactiveHelicopter : public helicopter, public RadioactiveFuel {
	void use() {
		if (capacity >= 30){} // кол-во топлива для ускорения
		capacity -= 30;
				std::cout << "Я ускорился" << std::endl;
	}
}; 