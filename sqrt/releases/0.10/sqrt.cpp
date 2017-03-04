#include "sqrt.h"
#include <iostream>
#include <math.h>

using namespace std;

// a は入力される平方根の元

int CSqrt::divide_counter(int a){

    int b;

    b = (int)log10((double)a);
    b = (int)(round(b/2))+1;

    return b;

}

//この b を次の関数に digit として main.cpp で渡す
void CSqrt::divide(int a, int digit, int *divided){

    //2桁ごとの格納
    int i;
    
    for(i=digit-1;i>=0;i--){
        divided[i] = a % 100;
        a /= 100;

        // cout << divided[i] << "\t" << i << endl;
    }

}

void CSqrt::sqrt(int *factorial,int digit,int digit2, int *ans){

    int ii;
    int originals[digit];
    for(ii=0;ii<digit2;ii++){
        originals[ii] = factorial[ii];
    }
    for(ii=digit-digit2;ii<digit;ii++){
        originals[ii] = 0;
        cout << "digit:\t" << digit;

        int o;
        int p;
        //int m;

        int n;
        int mem;

        //最初
        o = 0;  //初期化
        while(o*o <= 0){
            o++;
        }

        p = o;

        //次から
        //int digit;      //何桁求めるか。実際では main.cpp で入力を受け取る
        int i;

        n = originals[0] - o * p;
        for(i=0;i<digit;i++){
            n = n * 100 + originals[i+1];
            int l = 0;
            for(l = 0;mem <= n; l++){
                mem = o + p;
                mem = (mem * 10 + l) * l;

                cout << "mem:\t" << mem << endl << "o:\t" << o << endl << "p:\t" << p << endl;
                cout << "l:\t" << l << endl;
            }

            cout << "l : " << l << endl;

            if(l!=0){
                o = mem / l;
            }
            p = l;
        }
    }

    int iii;
    for(iii=0;iii<digit;iii++){
        ans[iii] = originals[iii];
        cout << ans[iii];
    }
}
