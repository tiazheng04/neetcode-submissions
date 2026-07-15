class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        int a;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                st.push(tokens[i]);
            } else if(tokens[i]=="+"){
                a = stoi(st.top());
                st.pop();
                a+=stoi(st.top());
                st.pop();
                st.push(to_string(a));
                cout << "add "<<a << '/n';
            } else if(tokens[i]=="-"){
                a = stoi(st.top());
                st.pop();
                a=stoi(st.top())-a;
                st.pop();
                st.push(to_string(a));
                cout << "minus "<<a << '/n';

            } else if(tokens[i]=="*"){
                a = stoi(st.top());
                st.pop();
                a*=stoi(st.top());
                st.pop();
                st.push(to_string(a));
                cout << "multiply "<<a << '/n';
            } else if(tokens[i]=="/"){
                a = stoi(st.top());
                st.pop();
                a =stoi(st.top())/a;
                st.pop();
                st.push(to_string(a));
                cout << "divide "<<a << '/n';
            }
        }

        return stoi(st.top());
    }
};
