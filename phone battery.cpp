//Marshon Sellers

#include <iostream>
using namespace std;

class PhoneBattery
{
private:
    int battery_level = 50;

public:
    void charge(int amount)
    {
        battery_level += amount;
        if (battery_level > 100)
            battery_level = 100;
    }

    void use_phone(int minutes)
    {
        battery_level -= minutes;
        if (battery_level < 0)
            battery_level = 0;
    }

    void display_battery()
    {
        cout << "Battery Left: " << battery_level << "%" << endl;
    }
};

int main()
{
    PhoneBattery myPhone;
    myPhone.use_phone(40);
    myPhone.display_battery();
    myPhone.charge(70);
    myPhone.display_battery();
    return 0;
}