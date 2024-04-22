#include <iostream>

using namespace std;

class Amigo {
private:
    string name;
    int age;

public:
    // Constructor
    Amigo(string n, int a) {
        name = n;
        age = a;
    }

    // Function to set name
    void setName(string n) {
        name = n;
    }

    // Function to get name
    string getName() {
        return name;
    }

    // Function to set age
    void setAge(int a) {
        age = a;
    }

    // Function to get age
    int getAge() {
        return age;
    }
};


float add(const float *i, const float *j){
    return *i + *j;
}
int main(){
    Amigo migo1("Vini",18);
    float number1, number2;
    cout << "Type TWO numbers to sum then together: ";
    cin >> number1>>number2;
    cout << add(&number1,&number2);
    return 0;
}

