class TrieNode {
public:
    TrieNode* children[26];
    bool isEnd;

    TrieNode() {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
        isEnd = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;

        for (char ch : word) {
            int idx = ch - 'a';

            if (node->children[idx] == nullptr)
                node->children[idx] = new TrieNode();

            node = node->children[idx];
        }

        node->isEnd = true;
    }

    bool search(string word) {
        TrieNode* node = root;

        for (char ch : word) {
            int idx = ch - 'a';
            if (node->children[idx] == nullptr)
                return false;

            node = node->children[idx];
        }

        return node->isEnd;
    }

    bool startsWith(string prefix) {
        TrieNode* node = root;

        for (char ch : prefix) {
         int idx = ch - 'a';

            if (node->children[idx] == nullptr)
                return false;

            node = node->children[idx];
        }

        return true;
    }
};