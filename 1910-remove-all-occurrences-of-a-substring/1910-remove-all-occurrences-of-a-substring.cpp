class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos){//run the loop till no part is found in the string
            int pos = s.find(part);//create a variable and store the position of that part  in that variable eg daabc pos = 2
            s.erase(pos, part.length());//remove the part using erase function
            //erase function ask for the start index so which we calculated in pos so pass that index and the length we want to delete that is part's lenght 
        }
        return s; //return the remaining string
    }
};