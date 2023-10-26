#include <iostream>

using namespace std;

int main()
{
setlocale(0, "");
int n, count=0;
cout<<"введите число: ";
cin>>n;
for(int i=0; i<=n; i++){
    count=count+i;
}
cout<<endl;
cout<<"ответ: "<<count;
return 0;
}