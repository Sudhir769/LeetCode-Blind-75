#include <bits/stdc++.h>
using namespace std;


class Trie {
public:
    struct trieNode{
        bool isEndOfWord;
        trieNode* children[26];
    };

    trieNode* getNode(){
        trieNode* newNode = new trieNode();
        newNode->isEndOfWord = false;
        for(int i=0; i<26; i++){
            newNode->children[i] = NULL;
        }
        return newNode;
    }
    trieNode* root;

    Trie() {
        root = getNode();
    }
    
    void insert(string word) {
        trieNode* crawler = root;

        for(int i=0; i<word.length(); i++){
            int idx = word[i] - 'a';

            if(crawler->children[idx] == NULL){
                crawler->children[idx] = getNode();
            }
            crawler = crawler->children[idx];
        }
        crawler->isEndOfWord = true;
    }
    
    bool search(string word) {
        trieNode* crawler = root;
        for(int i=0; i<word.length(); i++){
            int idx = word[i] - 'a';

            if(crawler->children[idx] == NULL){
                return false;
            }
            crawler = crawler->children[idx];
        }
        if(crawler != NULL and crawler->isEndOfWord==true){
            return true;
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        trieNode* crawler = root;
        for(int i=0; i<prefix.length(); i++){
            int idx = prefix[i] - 'a';

            if(crawler->children[idx] == NULL){
                return false;
            }
            crawler = crawler->children[idx];
        }
        return true;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
