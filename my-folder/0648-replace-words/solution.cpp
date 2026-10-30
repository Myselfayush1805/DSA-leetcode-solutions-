struct TrieNode{
    bool end;
    TrieNode* children[26];
    TrieNode(){
        end=false;
        for(int i=0;i<26;i++) children[i]=NULL;
    }
};
class Solution {
private:
    TrieNode* root=new TrieNode();
    void insert(string word){
        TrieNode* curr=root;
        for(char c:word){
            if(!curr->children[c-'a']) curr->children[c-'a']=new TrieNode();
            curr=curr->children[c-'a'];
        }
        curr->end=true;
    }
    string search(string word){
        TrieNode* curr=root;
        string prefix="";
        for(char c:word){
            if(!curr->children[c-'a']) break;
            prefix+=c;
            curr=curr->children[c-'a'];
            if(curr->end) return prefix;
        }
        return word;
    }
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        for(const string& rootWord:dictionary) insert(rootWord); 
        stringstream ss(sentence);
        string word;
        string result;
        while(ss>>word){
            if(result!="") result+=" ";
            result+=search(word);
        }    
        return result;
    }
};
