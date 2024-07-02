#include <bits/stdc++.h>

void insert(stack<int> &stack,int val){
   //base condition 
   if(stack.empty() || stack.top() < val){
	   stack.push(val);
	   return ; 
   }

   int temp = stack.top();
   stack.pop() ;
   insert(stack,val);
   stack.push(temp);
    
}
void sortStack(stack<int> &stack)
{
	// base condition 
	if(stack.empty()){
		return ; 

	}
	int val = stack.top() ;
	stack.pop() ;
	sortStack(stack);
	insert(stack,val);
}