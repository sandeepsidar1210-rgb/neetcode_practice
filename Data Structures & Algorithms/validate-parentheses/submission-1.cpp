class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        int stack[n];
        int top = -1 ;

        for ( int i = 0 ; i < n ; i++ ){
           

            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[') {
                stack[++top] = ch;
            }

                else{

                    if ( top == -1 ) return false ;

                    char popped = stack[top--];
                    if (( popped != '(' && ch == ')') ||
                        ( popped != '{' && ch == '}') || 
                        ( popped != '[' && ch == ']')
                    ){
                        return false ;
                    }

                    
                }

            }
            return top == -1;
        }
        
    };
