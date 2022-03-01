/* //First Draft
class Solution  //Runtime: 4 ms, faster than 88.16% of C++ online submissions for Counting Bits.
{ 
public:
    vector<int> countBits(int n)        //In this question the  pattern repeats itself
    {
        ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
        vector<int> ans = {0,1,1,2}, temp = {1,2,2,3};    //The firrst two values dont really join the pattern or maybe i couldnt connect it
        if(n < 4)                                         //if less than 4, resize and return
        {
            ans.resize(n+1);
            return ans;
        }
        int x = ceil(log2(n));                            
        for(int i = 1;i<x;i++)
        {
            int l = temp.size(),r = 0,z = 2;
            while(ans.size() < n+1)                       //Fill the vector with values from temp
            {
                ans.push_back(temp[r]);
                ++r;
                if(r == l)
                    break;
            }
            if(ans.size() == n+1)
                return ans;
            for(int k = 1; k < floor(log2(l));k++,z*=2)    //Using the temp vector to increase itself, using its halves
                for(int j = l - l/z;j < l;j++)             //reducing the previous half to half its size and using the later half
                    temp.push_back(temp[j]);               //The pattern repeats itself
            
            temp.push_back(temp[l-1]);
            temp.push_back(temp[l-1] + 1);
        }
        return ans;
    }
};
*/