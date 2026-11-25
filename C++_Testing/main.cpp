#include <iostream>
#include <random>
using namespace std;

int main(){
    srand(time(0));
    int random_numl = rand() % 11;
    int responce;
    // cout << random_numl;

    cout << "Welcome to the guessing game! Please anwser with numbers only";
    cout << random_numl;
    cin >> responce;

    if(responce == random_numl){
        cout << "You got it!";
    }
    else{
        cout << "No try again";
    }
}