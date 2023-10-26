#include <iostream>

using namespace std;

int main()
{
setlocale(0, "");
int count=100, count_num;
int const SIZE=6;
int arr[SIZE]={13, 29, 13, 44, 98, 99};
for(int i=0; i<SIZE; i++){
    cout<<arr[i];
}
for(int j=0; j<SIZE; j++){
    if(arr[j]<=count){
        count=arr[j];
    }
}
for(int a=0; a<SIZE; a++){
    if(arr[a]==count){
        count_num+=1;
    }
}
cout<<endl<<"Минимальное число массива: "<<count;
cout<<endl<<"Количество минмального числа в массиве: "<<count_num;
return 0;
}