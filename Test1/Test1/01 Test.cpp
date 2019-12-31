#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include<algorithm>

void myPrint(int val){
	cout << val << endl;
}

void test01(){
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//vector<int>::iterator begin = v1.begin();
	//vector<int>::iterator end = v1.end();
	//while (begin != end){
	//	cout << *begin << endl;
	//	begin++;
	//}
	for_each(v1.begin(), v1.end(), myPrint);
}
void main(){

	test01();
	system("pause");
	return;
}