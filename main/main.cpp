#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string word;//�����
	stringstream ss;	//��������� �����

	bool flag = false;
	getline(in, word, '\0');
	for(int i = 0; i < word.size(); ++i){
		if(word[i] == '"'){
			flag = !flag;
			ss << '\n';
			continue;
		}
		if(flag){
		  ss << word[i];
		}
	}
	cout << ss.str();
	in.close();//��������� ����										   
	system("pause>>void");

}