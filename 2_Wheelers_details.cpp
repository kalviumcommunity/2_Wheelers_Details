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
    Vehicle(string type, int price, string color){
            this->model = model;
            this->price = price;
            this->engine = engine;
            this->millage = millage;
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
        Customer(string type, int price, string color){
            this->name = name;
            this->email = email;
        }
        string get_name(){
            return name;
        }
        string get_email(){
            return email;
        }
};

int main(){
    

    return 0;
}

