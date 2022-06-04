class Solution {
public:
    bool isValid(string s) {
        char c;
        int flag = 0;
        stack<char>pstack;
        for(int i=0; i<s.size(); i++){
            c = s[i];
            switch(c){
                case '(':
                    {
                        pstack.push(')');
                        break;
                    }
                case '{':
                    {
                        pstack.push('}');
                        break;
                    }
                case '[':
                    {
                        pstack.push(']');
                        break;
                    }

                default:
                    {
                        if(pstack.size()==0 or c!=pstack.top())
                            return false;
                        else
                            pstack.pop();
                    }
            }
        }
        return pstack.size()==0;
    }
};