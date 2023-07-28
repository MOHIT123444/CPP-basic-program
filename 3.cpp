#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_POSITION = 100;

class Car {
private:
    int position;

public:
    Car() {
        position = 0;
    }

    void move() {
        int distance = rand() % 10 + 1;
        position += distance;
    }

    int getPosition() {
        return position;
    }
};

int main() {
    srand(time(NULL));

    Car car1, car2;
    while (car1.getPosition() < MAX_POSITION && car2.getPosition() < MAX_POSITION) {
        car1.move();
        car2.move();

        cout << "Car 1: " << car1.getPosition() << "  Car 2: " << car2.getPosition() << endl;
    }

    if (car1.getPosition() > car2.getPosition()) {
        cout << "Car 1 wins!" << endl;
    } else if (car2.getPosition() > car1.getPosition()) {
        cout << "Car 2 wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
