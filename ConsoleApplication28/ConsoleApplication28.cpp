
#include <iostream>
using namespace std;

class Transport {
protected:
    string name;
    double weight;
    double razhodTopl;
public:
    Transport() = default;
    Transport(string _name, double _weiight, double _razhodTopl) {
        name = _name;
        weight = _weiight;
        razhodTopl = _razhodTopl;
    }
    void setAll(string _name, double _weiight, double _razhodTopl, double _klvoPass) {
        name = _name;
        weight = _weiight;
        razhodTopl = _razhodTopl;
    }
    virtual void costOfDelivery() {
        cout << "NONE" << endl;
    }
};

class Car :public Transport {
    double klvoPass;
public:
    Car() = default;
    Car(string _name, double _weiight, double _razhodTopl, double _klvoPass) :Transport(_name, _weiight, _razhodTopl) {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _razhodTopl, double _klvoPass) {
        name = _name;
        weight = _weiight;
        razhodTopl = _razhodTopl;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Delivery = 100$";
    }
};



class Airplane :public Transport {
    double klvoPass;
public:
    Airplane() = default;
    Airplane(string _name, double _weiight, double _razhodTopl, double _klvoPass) :Transport(_name, _weiight, _razhodTopl) {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _razhodTopl, double _klvoPass) {
        name = _name;
        weight = _weiight;
        razhodTopl = _razhodTopl;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Delivery = 5000$";
    }
};



class waterShip :public Transport {
    double klvoPass;
public:
    waterShip() = default;
    waterShip(string _name, double _weiight, double _razhodTopl, double _klvoPass) :Transport(_name, _weiight, _razhodTopl) {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _razhodTopl, double _klvoPass) {
        name = _name;
        weight = _weiight;
        razhodTopl = _razhodTopl;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Delivery = 1100$";
    }
};



class Gruz :public Transport {
    double klvoPass;
public:
    Gruz() = default;
    Gruz(string _name, double _weiight, double _razhodTopl, double _klvoPass) :Transport(_name, _weiight, _razhodTopl) {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _razhodTopl, double _klvoPass) {
        name = _name;
        weight = _weiight;
        razhodTopl = _razhodTopl;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Delivery = 400$";
    }
};



int main()
{
    Transport* transport = nullptr;
    cout << "1. Car" << endl;
    cout << "2. Airplane" << endl;
    cout << "3. Ship" << endl;
    cout << "4. Gruzovik" << endl;
    int ch = 0;
    cin >> ch;
    switch (ch)
    {
    case(1):
    {
        transport = new Car;
        transport->setAll("BMW", 300, 100, 4);
        break;
    }
    case(2):
    {
        transport = new Airplane;
        transport->setAll("BMW", 300, 100, 4);
        break;
    }
    case(3):
    {
        transport = new waterShip;
        transport->setAll("BMW", 300, 100, 4);
        break;
    }
    case(4):
    {
        transport = new Gruz;
        transport->setAll("BMW", 300, 100, 4);
        break;
    }
    }
    transport->costOfDelivery();

}
