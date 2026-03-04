#include <iostream>
#include <ctime>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	time_t timer;
	struct tm* t;
	timer = time(NULL);
	t = localtime(&timer);
	
	cout << t -> tm_year + 1900 << "\n";
	cout << t -> tm_mon + 1 << "\n";
	cout << t -> tm_mday;
	
	return 0;
}