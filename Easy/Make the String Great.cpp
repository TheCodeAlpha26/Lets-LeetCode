class Solution {
public:
    string makeGood(string s)         //O(1) space solution
    {
        int l=s.size();
        if(l == 1)
            return(s);
        for(int i=0;i<s.size();i++)
        {
            if(abs(s[i] - s[i+1]) == 32)
            {
                s.erase(i, 2);
                i-=2;
                if(i<-1)
                    i=-1;
            }
        }
        return s;
    }
};
/*                    // stack based approach
class Solution {
public:
    string makeGood(string s) 
    {
        int l=s.size();
        if(l == 1)
            return(s);
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty()     &&  (abs(st.top() - s[i]) == 32))
               {
                  st.pop();
               }
            else 
            {
                st.push(s[i]);
            }
        }
        string w="";
        while(!st.empty())
        {
            w = st.top() + w;
            st.pop();
        }
        return w;
    }
};
*/
