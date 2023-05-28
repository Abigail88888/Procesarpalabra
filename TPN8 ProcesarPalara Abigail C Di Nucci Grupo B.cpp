#include<bits/stdc++.h>
using namespace std;
string ProcesarPalabra(string frase);
int main(){
 string frase;
 cout<<"Ingrese una palabra"<<endl;
 cin>>frase;
 string f=ProcesarPalabra(frase);
 cout<<"La palabra procesada es"<<f<<endl;
 return 0;
}
string ProcesarPalabra(string frase){
 int i=0;
 string pal;
 while(i<frase.size()-1){
  if(i>=20){
   i+10000000;
  }
  if(frase[i]!='a' && frase[i]!='b' && frase[i]!='A' && frase[i]!='B'){
   pal+=frase[i];
  }
  else if(frase[i]=='a'){
   pal+='b';
  }
  else if(frase[i]=='A'){
      pal+='B';
  }
  i++;
 }
return pal; 
}
