#include<iostream>
using namespace std;

FILE *stream;

int main(){
	freopen_s(&stream, "in.txt", "r", stdin);

	return 0;
}

