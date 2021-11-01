#include<iostream>
using namespace std;
class war{
	private:
		int k=1,q=1,r=2,b=2,kn=2,p=8;
	public:
		int getk(){
			return k;
		}
		int getq(){
			return q;
		}
		int getr(){
			return r;
		}
		int getb(){
			return b;
		}
		int getkn(){
			return kn;
		}
		int getp(){
			return p;
		}
};

int main(){
	//
	war w;
	int kk,qq,rr,bb,knkn,pp;
	cin>>kk>>qq>>rr>>bb>>knkn>>pp;
	cout<<w.getk()-kk<<" "<<w.getq()-qq<<" "<<w.getr()-rr<<" "<<w.getb()-bb<<" "<<w.getkn()-knkn<<" "<<w.getp()-pp;
	
}
