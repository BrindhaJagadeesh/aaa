#include <iostream>
#include<string.h>
using namespace std;
int main() {
int tescase;
cin>>tescase;
while(tescase--){
char str[100];
cin>>str;
for(int i=0;i<strlen(str);i++){
if(str[i]!='.'){
cout<<str[i];
}
}cout<<endl;
}
return 0;
}
