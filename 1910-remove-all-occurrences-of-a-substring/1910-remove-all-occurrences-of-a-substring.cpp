class Solution {
public:
    string removeOccurrences(string s, string part) {
      
    int s_size = s.length();
    int p_size = part.length();

      while( s_size > 0 && s.find(part) < s_size ){
        int index = s.find(part);
        s.erase(index , p_size);
    }

    return s;
}

};