

#include<string>
#include <iostream>
#include<string>
#include<vector>
#include<list>
#include<iterator>

using namespace std;
void showList(list<int> l) {
	list<int>::iterator it; 
	for (it = l.begin(); it != l.end(); it++) 
		cout << *it << " -> "; 
		cout << "null  \n=======================================================================\n"; 
	
}


int main() {
	list<int>l; 
	for (int i = 10; i <= 100; i+= 10)
		l.push_front(i);
	

	//l.pop_back(); 
	//l.pop_front(); 
	showList(l); 

	//cout << l.front() << endl; 
	//cout << l.back() << endl; 
	//l.reverse(); 
	//showList(l); 
	l.push_back(-4); 
	l.push_front(200); 
	l.sort(); 
	showList(l);
}
