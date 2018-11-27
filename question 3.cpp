#include <iostream>
#include <vector>
using namespace std;

void average ( vector <int> buhh ){

    double avg;
    int sum = 0;
    int x = 0;

        for ( x : buhh ){
            sum += x;
            avg = sum/5.0;
    }
}

int main ()
{

    vector <int> grades(5);
    cout << "Enter 5 grades." << endl;

    for ( int x = 0; x < 5; x++ ){
        cin >> grades[x];
    }

    cout << "Thanks. Here's your average: " <<  average (grades);

}



