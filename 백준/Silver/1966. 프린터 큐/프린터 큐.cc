#include <iostream>
#include <queue>
using namespace std;

int max(queue<int>& q);
void PushBack(queue<int>& q);

int main(){
	int n, i;
	cin >> n;
	
	while(n > 0) {
		int a;
		int b;
		queue<int> num;
		queue<int> data;
		
		cin >> a >> b;
		
		for(i = 0; i < a; i++){
			int x;
			cin >> x;
			data.push(x);
			num.push(i);
		}
		
		i = 0;
		while(1){
			if(data.front() < max(data)) {
				PushBack(data);
				PushBack(num);
			}
			else{
				if(num.front() == b) {
					cout << i+1 << endl;
					break;
				}
				else{
					num.pop();
					data.pop();
					i++;
				}
			}
		}	
		n--;
	}
	return 0;
}

int max(queue<int>& q){
	int m = 0;
	for(int i = 0; i < q.size(); i++){
		if(q.front() > m) m = q.front();
		PushBack(q);
	}
	return m;
}

void PushBack(queue<int>& q){
	int t = q.front();
	q.pop();
	q.push(t);
}