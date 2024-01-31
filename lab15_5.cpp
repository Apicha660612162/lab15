#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //เรียก adress 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b, int *c,int *d){ // pointer มารับ
     int T;
     int x = rand()%3;
     for(int i = 0; i <10 ; i++){
       if( x == 0 ){
       T = *a;
       *a = *b;
       *b = T;
       }if( x ==1 ){
       T = *b;
       *b = *c;
       *c = T;
       }if( x == 2){
       T = *c;
       *c = *d;
       *d = T;
       }
      }
     }
