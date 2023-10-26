#include <iostream>

using namespace std;

int main()
{
setlocale(0, "");
int min_count=10000, max_count=0, max_in, min_in;
int const N=7;
int x[N]={12, 15, 45, 89, 9999, 5307, 789};
for(int i=0; i<N; i++){
    cout<<x[i];
}
for(int j=0; j<N; j++){
    if(x[j]<min_count){
        min_count=x[j];
        min_in=j;
    }
}
for(int a=0; a<N; a++){
    if(x[a]>max_count){
        max_count=x[a];
        max_in=a;
    }
}
cout<<endl<<"Минимальный элемент массива: "<<min_count<<" индекс: "<<min_in;
cout<<endl<<"Максимальный элемент массива: "<<max_count<<" индекс: "<<max_in;
return 0;
}