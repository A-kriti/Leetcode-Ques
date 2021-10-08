// ques - https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
    stack<int> s;
    MyQueue() {
       stack<int> t;
       s=t;
    }
    
    void push(int x) {
        stack<int>t1;
        while(!s.empty()){
            t1.push(s.top());
            s.pop();
        }
        s.push(x);
        while(!t1.empty()){
            s.push(t1.top());
            t1.pop();
        }
    }
    
    int pop() {
        
        if(!s.empty()){
            int ans=s.top();
            s.pop();
            return ans;
        }
        return -1;
    }
    
    int peek() {
        
        return s.top();
    }
    
    bool empty() {
        
        return (s.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
