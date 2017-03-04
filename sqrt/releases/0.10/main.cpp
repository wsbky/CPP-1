#include "sqrt.h"
#include <iostream>
#include <math.h>

using namespace std;

int main(void){

    CSqrt f;

    int a;
    cout << "Input number: " ;
    cin >> a;

    int digit;
    digit = f.divide_counter(a);

    //cout << digit << endl << endl;

    int divided[digit];
    f.divide(a, digit, divided);

    cout << endl;

    for(int i=0; i<digit; i++){
        //cout <<  divided[i] << "\t" << i << endl;
    }

    cout << endl;

    int d;
    cout << "Input how long: ";
    cin >> d;
    cout << endl << endl;
    int ans[d];
    f.sqrt(divided, d, digit, ans);

//    for(int ii=0; ii<d; ii++){
//        cout << ans[ii];
//    }

    cout << endl;

    return 0;

}
