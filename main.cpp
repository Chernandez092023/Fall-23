#include <iostream>
#include <string>
#include <ucm_random>
using namespace std;

int main() {

RNG generator;

string sign1;
int question = 0;
int a = 0;
int b = 0;
int sign = 0;
int answer, input;

if (a < b) {
    int temp = a;
    a = b;
    b = temp;
}




for (int i = 1; i <= 5; i++){
    int a = generator.get(1, 15);
int b = generator.get(1, 15);


for (int i = 0; i < 1; i++){
         sign = generator.get(1,4);
    }


if (sign == 1) {
    sign1 = "+";
 answer = a + b;
}
else if (sign == 2) {
    sign1 = "-" ;
answer = a - b;
} 
else if (sign == 3) {
    sign1 = "*" ;
answer = a * b;
} 
else if (sign == 4 ) {
     sign1 = "/" ; 
answer = a / b;

}


if (sign == 4 && a < b) {
answer = 0;
}

 cout << "Question " << i << ": " << a << " " << sign1 << " " << b << " = "; 

cin >> input;


 for (int i = 0; i < 1; i++){
 if (input == answer) {
    cout << "That is correct!" << endl;
    cout << endl;
} 
if (input != answer) {
    cout << "That is incorrect. The correct answer is: " << answer << endl;
    cout << endl;
}
 }
}





    return 0;
}