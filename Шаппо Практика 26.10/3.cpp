#include <iostream>

using namespace std;

int main()
{
setlocale(0, "");
int count;
int const SIZE=6;
int arr[SIZE]={10 , 20 , 30 , 40 , 50 , 60 };
for(int i=0; i<SIZE; i++){
    cout<<arr[i];
}
for(int j=0; j<SIZE; j++){
    if(arr[j]%3==0){
        count=count+arr[j];
    }
}
cout<<endl<<"Количество чисел в массиве: "<<SIZE;
cout<<endl<<"Сумма чисел кратных трем в массиве: "<<count;
return 0;
}