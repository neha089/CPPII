#include <iostream>
#include <vector>
#include <string>

using namespace std;

class bill {
protected:
    int tcost = 0;
    int num_unit;

public:
    bill(int u) {
        num_unit = u;
    }

    void compute() {
        if (num_unit <= 300) {
            tcost += 50 * num_unit;
        }
        else if (num_unit > 300) {
            tcost += 60 * num_unit;
        }
    }
};

class tbill : public bill {
public:
    tbill(int u) : bill(u) {
    }

    void compute() {
        bill::compute(); // Invoke the compute() function from the base class

        if (tcost > 250) {
            tcost += tcost * 0.15;
        }
        cout << tcost;
    }
};

int main() {
    tbill b(200);
    b.compute();
}
