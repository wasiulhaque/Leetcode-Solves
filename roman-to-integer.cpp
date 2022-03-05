class Solution {
public:
    int romanToInt(string s) {
        double sum = 0;
        map<char, int>mymap;
        
        mymap.insert({'I',1});
        mymap.insert({'V',5});
        mymap.insert({'X',10});
        mymap.insert({'L',50});
        mymap.insert({'C',100});
        mymap.insert({'D',500});
        mymap.insert({'M',1000});
        
        
        for(int i = s.size() - 1; i >= 0; i--){
            if(mymap.find(s[i])->second < mymap.find(s[i+1])->second)
                sum -= mymap.find(s[i])->second;
            else 
                sum += mymap.find(s[i])->second;
        }
        
        return sum;
    }
};