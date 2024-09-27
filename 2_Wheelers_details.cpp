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
    Vehicle(string m, int p, int e, int mil) : model(m), price(p), engine(e), millage(mil) {}
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
        Customer(string n, string e) : name(n), email(e) {}
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

