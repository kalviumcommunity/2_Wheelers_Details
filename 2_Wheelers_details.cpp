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
        int millage;

    public:
    Vehicle(string model, int price, int engine, int millage){
            this -> model = model;
            this -> price = price;
            this -> engine = engine;
            this -> millage = millage;
        }
        string get_model(){
            return model;
        }
        
        int get_price(){
            return price;
        }
        
        int get_millage(){
            return millage;
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
    Customer c("admin", "admin@gmail.com");
    Vehicle v("bajaj ns200",1500000,200,45);

    cout << "Customer Name: " << c.get_name() << endl;
    cout << "Customer Email: " << c.get_email() << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Vehicle Model: " << v.get_model() << endl;
    cout << "Vehicle Price: " << v.get_price() << endl;
    cout << "Vehicle Engine" << v.get_engine()<<endl;
    cout << "Vehicle Millage: " << v.get_millage() << endl;
    return 0;
}

