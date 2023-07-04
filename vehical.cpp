#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

class Point
{
private:
    float x, y;

public:
    Point(float x_, float y_) : x(x_), y(y_) {} // Constructor to initialize x and y
    void print() const
    {
        cout << fixed << setprecision(2) << x << " " << y << endl;
    }
    void set_x(float x_) { x = x_; }  // Setter for x
    void set_y(float y_) { y = y_; }  // Setter for y
    float get_x() const { return x; } // Getter for x
    float get_y() const { return y; } // Getter for y
};

class Vehicle
{
private:
    float calculate_displacement() const
    {
        return sqrt(pow(current_position.get_x() - starting_position.get_x(), 2) +
                    pow(current_position.get_y() - starting_position.get_y(), 2));
    }
    const Point starting_position;
    Point current_position;
    float distance_covered;

public:
    Vehicle(const Point &starting_position_) : starting_position(starting_position_), current_position(starting_position_), distance_covered(0.0) {} // Constructor to initialize starting position and current position
    void move_north(float units)
    {
        current_position.set_y(current_position.get_y() + units);
        distance_covered += units;
    }
    void move_south(float units)
    {
        current_position.set_y(current_position.get_y() - units);
        distance_covered += units;
    }
    void move_west(float units)
    {
        current_position.set_x(current_position.get_x() - units);
        distance_covered += units;
    }
    void move_east(float units)
    {
        current_position.set_x(current_position.get_x() + units);
        distance_covered += units;
    }
    void print() const
    {
        cout << "Starting position: ";
        starting_position.print();
        cout << "current_position: ";
        current_position.print();
        cout << "Distance covered: " << fixed << setprecision(2) << distance_covered << endl;
        cout << "Displacement: " << fixed << setprecision(2) << calculate_displacement() << endl;
    }
};

int main()
{
    float initial_x, initial_y;
    cin >> initial_x >> initial_y;
    Point starting_position(initial_x, initial_y);
    Vehicle vehicle(starting_position);
    int number_of_moves;
    char direction;
    float units;
    cin >> number_of_moves;
    for (int i = 0; i < number_of_moves; i++)
    {
        getchar();
        cin >> direction >> units;
        switch (direction)
        {
        case 'N':
            vehicle.move_north(units);
            break;
        case 'S':
            vehicle.move_south(units);
            break;
        case 'W':
            vehicle.move_west(units);
            break;
        case 'E':
            vehicle.move_east(units);
            break;
        }
    }
    vehicle.print();
}
