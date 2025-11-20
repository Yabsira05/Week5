#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    float price;

public:
    Product(int i, string n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called\n";
    }

    ~Product() {
        cout << "Destructor called\n";
    }
    
    void printDetails() const {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Price: $" << price << endl;
    }
};

int main() {
    Product p(101, "Notebook", 4.99);

    
    p.printDetails();


    return 0;
}
/*Constructor called
 ID: 101, Name: Notebook, Price: $4.99
 Destructor called
 Program ended with exit code: 0 */
