#include<iostream>
using namespace std;
int main(){
    int my_int = 5;
    double y = 10.5;
    float z = 11.5f;

    cout << my_int << endl;
    cout << z << y << endl;

    //write a program to take use input for two numbers of type int
    //from the user
    //add those two numbers and store the sum in a third variable of type int
    //and display the result of third variable

    int number1, number2;
    cout << "Enter two numbers :"<< endl;
    cin >> number1 >> number2;
    int sum = number1 + number2;
    cout << "The sum is : " << sum << endl;

    string username, lastname;
    cout << "Enter your first name :";
    cin >> username;
    cout << "Enter your last name :";
    cin >> lastname;
    string fullname = "FN :" + username + " LN :" + lastname;
    cout << fullname;
}