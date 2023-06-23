#include <iostream>
#include <unordered_map>
using namespace std;

bool checkCircular(Node * head){

    unordered_map<Node* , bool> vis;

    Node* temp = head;

    while(temp != NULL){

        if(vis.find(temp) != vis.end()){
            vis[temp] = true;
            
        }else{
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){


    return 0;
}