class MinStack {
        stack <int> st;
        stack <int> MinSt;
public:
    MinStack() {}
    
    void push(int val) {
        st.push(val);
        if( MinSt.empty()){
            MinSt.push(val);
        }
        else{
            MinSt.push(min(val, MinSt.top()));
        }
    }
    
    void pop() {
        st.pop();
        MinSt.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return MinSt.top();
    }
};
