#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Abstract base class
class Vehicle {
protected:
    string model;
    int price;
    int engine;
    float milage;

public:
    Vehicle(string model, int price, int engine, int milage)
        : model(model), price(price), engine(engine), milage(milage) {}

    virtual void display() = 0; // Pure virtual function for displaying details
    virtual ~Vehicle() {}       // Virtual destructor for proper cleanup
};

// Separate class for expense calculation
class ExpenseCalculator {
public:
    static float calculate_monthly_expense(float daily_km, float milage) {
        return ((daily_km * 30) / milage) * 104;
    }
};

// Separate class for tracking count
class VehicleCount {
private:
    static int bike_count;
    static int scooty_count;

public:
    static void increment_bike_count() { bike_count++; }
    static void increment_scooty_count() { scooty_count++; }

    static void display_counts() {
        cout << "Total Bikes: " << bike_count << endl;
        cout << "Total Scooties: " << scooty_count << endl;
    }
};

int VehicleCount::bike_count = 0;
int VehicleCount::scooty_count = 0;

// Bike class
class Bike : public Vehicle {
public:
    Bike(string model, int price, int engine, int milage)
        : Vehicle(model, price, engine, milage) {
        VehicleCount::increment_bike_count();
    }

    ~Bike() {
        cout << "-----------------Thank you for visiting our Bike section-------------------" << endl;
    }

    void display() override {
        cout << "Type: Bike\n";
        cout << "Model = " << model << "\nPrice = " << price << "\nMilage = " << milage << "\nEngine = " << engine << endl;
    }

    void get_monthly_expense_with_daily_km(float daily_km) {
        float monthlyExpense = ExpenseCalculator::calculate_monthly_expense(daily_km, milage);
        cout << "Monthly Expense (Bike) = " << monthlyExpense << endl;
    }
};

// Scooty class
class Scooty : public Vehicle {
public:
    Scooty(string model, int price, int engine, int milage)
        : Vehicle(model, price, engine, milage) {
        VehicleCount::increment_scooty_count();
    }

    ~Scooty() {
        cout << "----------------Thank you for visiting our Scooty section------------------" << endl;
    }

    void display() override {
        cout << "Type: Scooty\n";
        cout << "Model = " << model << "\nPrice = " << price << "\nMilage = " << milage << "\nEngine = " << engine << endl;
    }

    void get_monthly_expense_with_daily_km(float daily_km) {
        float monthlyExpense = ExpenseCalculator::calculate_monthly_expense(daily_km, milage);
        cout << "Monthly Expense (Scooty) = " << monthlyExpense << endl;
    }
};

int main() {
    Vehicle* bike1 = new Bike("Bajaj NS200", 150000, 200, 45);
    bike1->display();
    static_cast<Bike*>(bike1)->get_monthly_expense_with_daily_km(34);
    delete bike1;

    Vehicle* scooty1 = new Scooty("Ntorq 125", 110000, 125, 35);
    scooty1->display();
    static_cast<Scooty*>(scooty1)->get_monthly_expense_with_daily_km(34);
    VehicleCount::display_counts();
    delete scooty1;

    return 0;
}
