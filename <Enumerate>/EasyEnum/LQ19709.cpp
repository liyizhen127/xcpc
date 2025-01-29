#include <iostream>
using namespace std;
const int BASE = 10;
int main()
{
  int number = 0;
  cin>>number;
  int cnt = 0;  
  for (int i=1;i<=number;i++){
    int temp = i;
    int flag_odd = 1;
    int flag_good = 1;
    for(;temp;temp/=BASE){
      int digit = temp % BASE;
        if (flag_odd == 1){
          if (digit % 2 != 1)
          {
              flag_good = 0;
              break;
          }
        }
        else{
          if (digit % 2 != 0)
          {
              flag_good = 0;
              break;
          }
        }
        flag_odd *= -1;
    }
    if (flag_good == 1){
      cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}