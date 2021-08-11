//
// Created by 이인성 on 2021/08/12.
//

#include <iostream>
using namespace std;

int fibo[301];

void getFibonacci(int N) {
  fibo[0] = 0;
  fibo[1] = 1;
  for(int i=2; i<=N; i++) {
    fibo[i] = fibo[i-1] + fibo[i-2];
  }
}

int main() {
  int day;
  int mochi;
  int mochi1;
  int mochi2;
  cin >> day >> mochi;
  getFibonacci(day);
  int a = fibo[day-2];
  int b = fibo[day-1];
  int n = mochi / b;
  for(int i=n; i>=0; i--) {
    if(((mochi - b * i) % a == 0) && ((mochi - b * i) / a != 0)) {
      mochi1 = (mochi - b * i) / a;
      mochi2 = i;
      break;
    }
  }
  cout << mochi1 << '\n' << mochi2 << endl;

  return 0;
}