#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int &w ,int &x ,int &y ,int &z){
    int data[] = {w , x , y , z};
    int N = 4;
    for(int j = 0 ; j < N ; j++){
        int R = rand() % N;
        swap(data[j] , data[R]);
    }
    w = data[0];
    x = data[1];
    y = data[2];
    z = data[3];
    
}

void swap(int &h , int &k){
    int temp =  h;
    h = k;
    k = temp;
}