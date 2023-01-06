// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std ;

int main(){
    cout << "Press Enter 3 times to reveal your future." ;
    string y ;
    cin.get();
    cin.get();
    cin.get();
    srand(time(NULL));
    int x = rand()%9;

    cout << "You will get " ;
    if (x == 0)  y = "A"  ;
    else if (x == 1 ) y = "B+";
    else if (x == 2 ) y = "B";
    else if (x == 3 ) y = "C+";
    else if (x == 4 )  y = "C";
    else if (x == 5 ) y = "D+";
    else if (x == 6 ) y = "D";
    else if (x == 7 ) y = "F";
    else if (x == 8 ) y = "W";
    cout << y << " in this 261102." ;

    return 0 ;
    
 
 }