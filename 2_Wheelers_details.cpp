#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

class Vehicle{
    private:
        string model;
        int price;
        int engine;
        int milage;

    public:
        void set_Vehicle(string model, int price, int engine, int milage){
            this -> model = model;
            this -> price = price;
            this -> engine = engine;
            this -> milage = milage;
        }
        void get_model(){
            cout<< model << endl;
        };
        
        void get_price(){
            cout<< price << endl;
        };
        
        void get_milage(){
            cout<< milage << endl;
        };
        
        void get_engine(){
            cout<< engine << endl;
        };
};

class Customer{
    private:
        string name;
        string email;
    public:
        void set_Customer(string name, string email){
            this -> name = name;
            this -> email = email;
        }
        void get_name(){
            cout<< name << endl;
        };
        void get_email(){
            cout<< email << endl;
        };
};

int main(){

    // Vehicle vehicles[4] = {
    //     Vehicle("bajaj ns200",150000,200,45),
    //     Vehicle("Apache rtr160", 100000, 160 , 40),
    //     Vehicle("bajaj rs160", 170000, 160 , 45),
    //     Vehicle("hunter 350", 200000, 350 , 30)
    // };

    // Customer customers[2] = {
    //     Customer("John Doe", "johndoe@example.com"),
    //     Customer("Jane Smith", "janesmith@example.com")
    // };

    // for (int i = 0; i < 4; i++) {
    //     cout << "Model: " << vehicles[i].get_model() << endl;
    //     cout << "Price: " << vehicles[i].get_price() << endl;
    //     cout << "milage: " << vehicles[i].get_milage() << endl;
    //     cout << "engine: " << vehicles[i].get_engine() << endl;
    //     cout << endl;
    // };

    // for (int i = 0; i < 2; i++) {
    //     cout << "Name: " << customers[i].get_name() << endl;
    //     cout << "Email: " << customers[i].get_email() << endl;
    //     cout << endl;
    // };
    Vehicle* vehicles1 = new Vehicle;
    vehicles1->set_Vehicle("bajaj ns200",150000,200,45);

    Customer* customers1 = new Customer;
    customers1->set_Customer("John Doe", "johndoe@example.com");
    
    vehicles1->get_price();
    vehicles1->get_model();
    vehicles1->get_milage();
    vehicles1->get_engine();

    customers1->get_name();
    customers1->get_email();
    
    delete vehicles1;
    delete customers1;
    
}