//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    void solve(stack<int>&stack, int k){
        //Base condition 
        if(k == 0){
            stack.pop();
            return ; 
        }
        int temp = stack.top();
        stack.pop() ; 
        solve(stack,k-1);
        stack.push(temp);
        
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&stack, int sizeOfStack)
    {
      int k = sizeOfStack/2;
      solve(stack,k);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends