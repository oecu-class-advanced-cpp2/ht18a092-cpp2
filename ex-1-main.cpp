#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */
bool is_prime(int num){
    if ( num ==1 ) return false;
    for(int i=2; i<=num-1; i++){
        return false;
    } 
        return true;

}
int nth_prime(unsigned int a, unsigned int d, unsigned int n){
     int num = a;
 while(num <=CPP2_PRIME_UPPER_LIMIT){
     std::cout << num << std::endl;
     num += d;
 }
 return(-1);
}

int main() {
 
 nth_prime(367, 186, 151);
return 0;
}