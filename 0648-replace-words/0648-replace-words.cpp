class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        // string ans;
        // unordered_set<string> dict;
        // for(int i=0; i<dictionary.size(); i++) dict.insert(dictionary[i]);
        // for(int i=0; i<sentence.size(); i++)
        // {
        //     string str="";
        //     while(sentence[i]!=' ')
        //     {
        //         str+=sentence[i];
        //         if(dict.find(str)!=dict.end()) {
        //             if()ans+=str+' '; break;
        //         }
        //         i++;
        //     }
        // }
        // return ans;
        
        vector<string> arr;
        unordered_set<string> dict;
        for(int i=0; i<dictionary.size(); i++) dict.insert(dictionary[i]);
        for(int i=0; i<sentence.size(); i++)
        {
            string str="";
            while(i<sentence.size() && sentence[i]!=' ')
            {
                str+=sentence[i]; i++;
            }
            arr.push_back(str);
        }
        for(int i=0; i<arr.size(); i++)
        {
            string str="";
            for(int j=0; j<arr[i].size(); j++)
            {
                str+=arr[i][j];
                if(dict.find(str)!=dict.end()) {
                    arr[i]=str; break;
                }
            }
        }
        string ans=arr[0];
        for(int i=1; i<arr.size(); i++)
        {
            ans+= ' ' + arr[i];
        }
        return ans;
    }
};