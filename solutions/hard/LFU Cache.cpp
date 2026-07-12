// Title: LFU Cache
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/lfu-cache/

    }

    void updateFreqListMap(Node*node){
        keyNode.erase(node->key);
        freqListMap[node->cnt]->removeNode(node);
        if(node->cnt==miniFreq && freqListMap[node->cnt]->size==0){
            miniFreq++;

        }
        List* nextHigherFreqList=new List();
        if(freqListMap.find(node->cnt+1)!=freqListMap.end()){
            nextHigherFreqList=freqListMap[node->cnt+1];
        }
        node->cnt+=1;
        nextHigherFreqList->addFront(node);
        freqListMap[node->cnt]=nextHigherFreqList;
        keyNode[node->key]=node;
    }
    
    int get(int key) {
