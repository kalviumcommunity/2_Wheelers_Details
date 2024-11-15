#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

class vehicle
{
public:
    void show(string model, int price, int milage, int engine)
    {
        cout << "Model = " << model << endl;
        cout << "Price = " << price << endl;
        cout << "Milage = " << milage << endl;
        cout << "Engine = " << engine << endl;
    };
};

class Bike : public vehicle
{
private:
    string model;
    int price;
    int engine;
    float milage;
    float monthlyExpense;
    static int count;

public:
    Bike(string model, int price, int engine, int milage)
    {
        this->model = model;
        this->price = price;
        this->engine = engine;
        this->milage = milage;
        count++;
    };
    ~Bike()
    {
        cout << "-----------------Thank you for visiting our page-------------------" << endl;
    };

    // void set_count(){
    //     count++;
    // };
    // void set_model(string model){
    //     this->model = model;
    // };
    // void set_price(int price){
    //     this->price = price;
    // };
    // void set_engine(int engine){
    //     this->engine = engine;
    // };
    // void set_milage(int milage){
    //     this->milage = milage;
    // };
    // void get_model(){
    //     cout<< "Model = " << model << endl;
    // };
    // void get_price(){
    //     cout<< "Price = " << price << endl;
    // };
    // void get_milage(){
    //     cout<< "Milage = " << milage << endl;
    // };
    // void get_engine(){
    //     cout<< "Engine = " << engine << endl;
    // };

    void display()
    {
        show(model, price, milage, engine);
    }

    void get_monthly_expense_with_daily_km(int km)
    {
        monthlyExpense = ((km * 30) / milage) * 104;
        cout << "Monthly Expense = " << monthlyExpense << endl;
    };
    void get_monthly_expense_with_daily_km(int km,int days)
    {
        monthlyExpense = ((km * days) / milage) * 104;
        cout << "Monthly Expense = " << monthlyExpense << endl;
    };
    void get_monthly_expense_with_daily_km(int km,int days,float price)
    {
        monthlyExpense = ((km * days) / milage) * price;
        cout << "Monthly Expense = " << monthlyExpense << endl;
    };
    void get_count(){
        cout<< count << endl;
    };
};

class Scooty : public vehicle
{
private:
    string model;
    int price;
    int engine;
    float milage;
    float monthlyExpense;
    static int count;

public:
    Scooty(string model, int price, int engine, int milage)
    {
        this->model = model;
        this->price = price;
        this->engine = engine;
        this->milage = milage;
        count++;
    };
    ~Scooty()
    {
        cout << "-----------------Thank you for visiting our page-------------------" << endl;
    };

    void display()
    {
        show(model, price, milage, engine);
    }

    void get_monthly_expense_with_daily_km(int km)
    {
        monthlyExpense = ((km * 30) / milage) * 104;
        cout << "Monthly Expense = " << monthlyExpense << endl;
    };
    void get_monthly_expense_with_daily_km(int km,int days)
    {
        monthlyExpense = ((km * days) / milage) * 104;
        cout << "Monthly Expense = " << monthlyExpense << endl;
    };
    void get_monthly_expense_with_daily_km(int km,int days,float price)
    {
        monthlyExpense = ((km * days) / milage) * price;
        cout << "Monthly Expense = " << monthlyExpense << endl;
    };
    void get_count(){
        cout<< count << endl;
    };
};

class Customer
{
private:
    string name;
    string email;

public:
    Customer(string name, string email)
    {
        this->name = name;
        this->email = email;
    }
    // void set_name(string name){
    //     this->name=name;
    // };
    // void set_email(string email){
    //     this->email=email;
    // };
    ~Customer() {

    };

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Email = " << email << endl;
    };
};

int Bike::count = 0;
int Scooty::count = 0;

int main()
{

    // Bike Bikes[4] = {
    //     Bike("bajaj ns200",150000,200,45),
    //     Bike("Apache rtr160", 100000, 160 , 40),
    //     Bike("bajaj rs160", 170000, 160 , 45),
    //     Bike("hunter 350", 200000, 350 , 30)
    // };
    // Customer customers[2] = {
    //     Customer("John Doe", "johndoe@example.com"),
    //     Customer("Jane Smith", "janesmith@example.com")
    // };
    // for (int i = 0; i < 4; i++) {
    //     cout << "Model: " << Bikes[i].get_model() << endl;
    //     cout << "Price: " << Bikes[i].get_price() << endl;
    //     cout << "milage: " << Bikes[i].get_milage() << endl;
    //     cout << "engine: " << Bikes[i].get_engine() << endl;
    //     cout << endl;
    // };
    // for (int i = 0; i < 2; i++) {
    //     cout << "Name: " << customers[i].get_name() << endl;
    //     cout << "Email: " << customers[i].get_email() << endl;
    //     cout << endl;
    // };

    Bike *Bikes1 = new Bike("bajaj ns200", 150000, 200, 45);
    // Bikes1->set_model("bajaj ns200");
    // Bikes1->set_price(150000);
    // Bikes1->set_engine(200);
    // Bikes1->set_milage(45);
    // Bikes1->set_count();

    Bikes1->display();
    Bikes1->get_monthly_expense_with_daily_km(34);
    Bikes1->get_monthly_expense_with_daily_km(34,25);
    Bikes1->get_monthly_expense_with_daily_km(34,25,100);
    Bikes1->get_count();

    Scooty *Scooty1 = new Scooty("Ntorq 125", 110000, 125, 35);
    // Scooty1->set_model("bajaj ns125");
    // Scooty1->set_price(120000);
    // Scooty1->set_engine(125);
    // Scooty1->set_milage(55);
    // Scooty1->set_count();

    Scooty1->display();
    Scooty1->get_monthly_expense_with_daily_km(34);
    Scooty1->get_monthly_expense_with_daily_km(34,25);
    Scooty1->get_monthly_expense_with_daily_km(34,25,100);
    Scooty1->get_count();
    

    // Bike* Bikes3 = new Bike;
    // Bikes3->set_Bike("bajaj ns160",135000,160,40);
    // Bikes3->get_price();
    // Bikes3->get_model();
    // Bikes3->get_milage();
    // Bikes3->get_engine();
    // Bikes3->get_count();

    Customer *customers1 = new Customer("John Doe", "johndoe@example.com");

    customers1->display();

    delete Bikes1;
    delete customers1;
}