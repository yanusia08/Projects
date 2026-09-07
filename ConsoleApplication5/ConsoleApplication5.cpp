#include <iostream>
#include <fstream> // ƒл€ роботи з файлами

using namespace std;

class Point {
private:
    // «м≥нн≥-члени класу дл€ збер≥ганн€ координат
    double x;
    double y;
    double z;

public:
    // јксесори (getters та setters)
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    void setZ(double z) { this->z = z; }

    double getX() { return x; }
    double getY() { return y; }
    double getZ() { return z; }

    void Input() {
        cout << "¬вед≥ть x: "; cin >> x;
        cout << "¬вед≥ть y: "; cin >> y;
        cout << "¬вед≥ть z: "; cin >> z;
    }
    void Print() {
        cout << " оординати точки: (" << x << ", " << y << ", " << z << ")" << endl;
    }
};


    main() {
        Point pt{};

        // 1. ¬веденн€ даних
        pt.Input();
        pt.Print();


        // 2. «м≥на координат через сетери
        pt.setX(10.5);
        cout << "\n«м≥нена координата X через аксесор: " << pt.getX() << endl;
        pt.Print();


        return 0;
    }