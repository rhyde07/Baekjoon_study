#include <iostream>
using namespace std;
char grade_change(string now_grade, string last_grade);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, was_char = 0;
	string last_grade = "", now_grade = "", l, ans = "";
	
	cin >> n;
	cin >> l;
	
	for(int i = 0; i < l.length(); i++) {
		
		if(l[i] >= 'A' && l[i] <= 'C') {
			if(was_char == 1) {
				now_grade += '0';
				ans += grade_change(now_grade, last_grade);
				
				last_grade = now_grade;
				now_grade = l[i];
			}
			else {
				was_char = 1;
				now_grade = l[i];
			}
			
		}
		else {
			was_char = 0;
			now_grade += l[i];
			ans += grade_change(now_grade, last_grade);
			
			last_grade = now_grade;
		}
		
	} 
	
	if(l[l.length() - 1] >= 'A' && l[l.length() - 1] <= 'C') {
		now_grade += '0';
		ans += grade_change(now_grade, last_grade);
	}
	cout << ans;
	
	return 0;
}

char grade_change(string now_grade, string last_grade) {
	
	if(now_grade[0] == 'C') return 'B';
	else if(now_grade == "A+") return 'E';
	else if(now_grade == "B0" || now_grade == "B-") {
		
		if(last_grade == "" || last_grade[0] == 'C') return 'D';
		else return 'B';
		
	}
	else if(now_grade == "A-" || now_grade == "B+") {
		
		if(last_grade == "" || last_grade[0] == 'C' || last_grade == "B0" || last_grade == "B-") {
			return 'P';
		}
		else return 'D';
		
	}
	else {
		
		if(last_grade == "" || last_grade == "A-" || last_grade[0] == 'B' || last_grade[0] == 'C') {
			return 'E';
		}
		else return 'P';
	}
	
}