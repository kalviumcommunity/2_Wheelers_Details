#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Abstract base class
class Vehicle {
public:
    virtual void display() = 0; // Pure virtual function for displaying details
    virtual void get_monthly_expense_with_daily_km(int km) = 0; // Virtual function
    virtual ~Vehicle() {} // Virtual destructor for proper cleanup
};

class Bike : public Vehicle {
private:
    string model;
    int price;
    int engine;
    float milage;
    float monthlyExpense;
    static int count;

public:
    Bike(string model, int price, int engine, int milage)
        : model(model), price(price), engine(engine), milage(milage) {
        count++;
    }

    ~Bike() {
        cout << "-----------------Thank you for visiting our Bike section-------------------" << endl;
    }

    void display() override {
        cout << "Type: Bike\n";
        cout << "Model = " << model << "\nPrice = " << price << "\nMilage = " << milage << "\nEngine = " << engine << endl;
    }

    void get_monthly_expense_with_daily_km(int km) override {
        monthlyExpense = ((km * 30) / milage) * 104;
        cout << "Monthly Expense (Bike) = " << monthlyExpense << endl;
    }

    static void get_count() {
        cout << "Total Bikes: " << count << endl;
    }
};

int Bike::count = 0;

class Scooty : public Vehicle {
private:
    string model;
    int price;
    int engine;
    float milage;
    float monthlyExpense;
    static int count;

public:
    Scooty(string model, int price, int engine, int milage)
        : model(model), price(price), engine(engine), milage(milage) {
        count++;
    }

    ~Scooty() {
        cout << "-----------------Thank you for visiting our Scooty section-------------------" << endl;
    }

    void display() override {
        cout << "Type: Scooty\n";
        cout << "Model = " << model << "\nPrice = " << price << "\nMilage = " << milage << "\nEngine = " << engine << endl;
    }

    void get_monthly_expense_with_daily_km(int km) override {
        monthlyExpense = ((km * 30) / milage) * 104;
        cout << "Monthly Expense (Scooty) = " << monthlyExpense << endl;
    }

    static void get_count() {
        cout << "Total Scooties: " << count << endl;
    }
};

int Scooty::count = 0;

int main() {
    Vehicle* bike1 = new Bike("Bajaj NS200", 150000, 200, 45);
    Vehicle* scooty1 = new Scooty("Ntorq 125", 110000, 125, 35);

    // Display details and calculate expenses
    bike1->display();
    bike1->get_monthly_expense_with_daily_km(34);
    // Static count calls
    Bike::get_count();
    // Cleanup
    delete bike1;

    scooty1->display();
    scooty1->get_monthly_expense_with_daily_km(34);
    // Static count calls
    Scooty::get_count();
    // Cleanup
    delete scooty1;



    return 0;
}
