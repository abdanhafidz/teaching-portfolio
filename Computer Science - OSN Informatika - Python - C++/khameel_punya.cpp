#include <iostream>
#include <stack>
using namespace std;
int q,y,x,lo,hi,flag,ans;
int main() {
	stack<int> st;
	cin>>q>>flag;
	for(int i=0;i<q;i++){
	    cin>>x>>y;
	    if(x>y){
	        st.push(x);
	        st.push(y);
	    }else if(x==y){
	        st.push(x);
	    }else{
	        st.push(y);
	        st.push(x);
	    }
	}
	for(int i=0;i<flag;i++){
	    cout<<st.top()<<endl;
	    st.pop();
	}
}