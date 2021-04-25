#include<bits/stdc++.h>
using namespace std;

class node {
  public:
    int data;
    node* next;

    node(int val){
      data = val;
      next = NULL;
    }
};

int backToTheTop(node* &head, int value){
  int position = 1;
  if (head->data == value){
    return position;
  }
  
  node* temp = head;
  while (temp->next->data != value){
    temp = temp->next;
    position++;
  }
  node* todelete = temp->next;
  temp->next = temp->next->next;
  node* topCard = new node(value);
  topCard->next = head;
  head = topCard;
  delete todelete;
  return position + 1;
}

// void display(node* head){
//    while(head != NULL){
//     cout << head->data << " ";
//     head = head->next; 
//    }
//    return;
// }

int main() {
  long long int n, q;
  cin >> n >> q;
  int topCardColor;
  cin >> topCardColor;
  node* head = new node(topCardColor);
  node* tail = head;
  while (--n){
    int cardColor;
    cin >> cardColor;
    node* card = new node(cardColor);
    tail->next = card;
    tail = tail->next;
  }
  while(q--){
    int t;
    cin >> t;
    cout << backToTheTop(head, t) << " ";
  }
  return 0;
} 