#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main(int argc, char const *argv[]){
	int random_integer, random_integer2, random_integer3;
	int final = 10000;
	for (int i = 0; i < 500; ++i){
		random_integer = (rand()%18)+1;
		random_integer2 = (rand()%50)+1;
		random_integer3 = rand() % 98 + 1900;
		if (random_integer <= 9){
			cout << "0" << random_integer;
		}else{
			cout << random_integer;
		}
		if (random_integer2 <= 9){
			cout << "0" << random_integer2;
		}else{
			cout << random_integer2;
		}
		cout << "-" << random_integer3 << "-" << final << endl;
		final++;
	}
	return 0;
}