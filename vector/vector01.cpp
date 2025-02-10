#include <iostream>
#include <vector>
using namespace std;
int main ()
{
	vector <int> vc = {1,2,3,4,5,6,7,8,9,10};
	
	for(int i=0;i<vc.size();i++){
		cout<<vc[i]<<" ";
		}
		cout<<endl;
		
	vc.push_back(20);
	for(int i=0;i<vc.size();i++){
		cout<<vc[i]<<" ";
		}
		cout<<endl;
		
	vc.pop_back();
	for(int i : vc){
		cout<<i<<" ";
		}
		cout<<endl;
		
	vc.insert(vc.begin()+2,40);
	for(int i : vc){
		cout<<i<<" ";
		}
		cout<<endl;
		
	vc.insert(vc.end(),50);
	for(int i : vc){
		cout<<i<<" ";
		}
		cout<<endl;
	vc.erase(vc.begin()+2);
	for(int i : vc){
		cout<<i<<" ";
		}
		cout<<endl;
		
	for(int i=vc.size()-1;i>=0;i--){
		cout<<vc[i]<<" ";
	}
	cout<<endl;
		

		return 0;
}
