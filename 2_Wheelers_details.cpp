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
    Vehicle(string model, int price, int engine, int milage){
            this -> model = model;
            this -> price = price;
            this -> engine = engine;
            this -> milage = milage;
        }
        string get_model(){
            return model;
        }
        
        int get_price(){
            return price;
        }
        
        int get_milage(){
            return milage;
        }
        
        int get_engine(){
            return engine;
        }
};

class Customer{
    private:
        string name;
        string email;
    public:
        Customer(string name, string email){
            this -> name = name;
            this -> email = email;
        }
        string get_name(){
            return name;
        }
        string get_email(){
            return email;
        }
};

int main(){

    Vehicle vehicles[3] = {
        Vehicle("bajaj ns200",150000,200,45);
        Vehicle("Apache rtr160", 100000, 160 , 40),
        Vehicle("bajaj rs160", 170000, 160 , 45),
        Vehicle("hunter 350", 200000, 350 , 30)
    };  

    for (int i = 0; i < 3; i++) {
        cout << "Model: " << vehicles[i].get_model() << endl;
        cout << "Price: " << vehicles[i].get_price() << endl;
        cout << "milage: " << vehicles[i].get_milage() << endl;
        cout << "engine: " << vehicles[i].get_engine() << endl;
        cout << endl;
    }
    
    Customer customers[2] = {
        Customer("John Doe", "johndoe@example.com"),
        Customer("Jane Smith", "janesmith@example.com")
    };

    for (int i = 0; i < 2; i++) {
        cout << "Name: " << customers[i].get_name() << endl;
        cout << "Email: " << customers[i].get_email() << endl;
        cout << endl;
    }
}

