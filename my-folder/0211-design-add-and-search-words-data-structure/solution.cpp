struct TrieNode {
    TrieNode* children[26];
    bool endOfWord;
    TrieNode(){
        endOfWord=false;
        for(int i=0;i<26;i++) children[i]=NULL;
    }
};
class WordDictionary {
private:
    TrieNode* root;

    bool searchHelp(string& word, int index, TrieNode* curr) {
        if(index==word.size()) return curr->endOfWord;
        char c=word[index];
        if(c=='.'){
            for(int i=0;i<26;i++){
                if(curr->children[i]!=NULL){
                    if(searchHelp(word,index+1,curr->children[i])) return true;
                }
            }
            return false;
        }
        else{
            int idx=c-'a';
            if(!curr->children[idx]) return false;
            return searchHelp(word,index+1,curr->children[idx]);
        }
    }
public:
    WordDictionary() {
        root=new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* curr=root;
        for(char c:word){
            int idx=c-'a';
            if(!curr->children[idx]) curr->children[idx]=new TrieNode();
            curr=curr->children[idx];
        }        
        curr->endOfWord=true;
    }
    
    bool search(string word) {
        return searchHelp(word,0,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
