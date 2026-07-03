# include <iostream>
using namespace std;

inline int sqr(int a){ // Compiler will decide whether to make it inline or not 
    return a*a;
}

int main(){
    cout <<sqr(2);
    return 0;
}