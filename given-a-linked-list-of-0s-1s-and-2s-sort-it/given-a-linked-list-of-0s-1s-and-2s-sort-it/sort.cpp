Node* segregate(Node *head) {
 if (!head || !(head->next)) 
        return head; 
 
    Node* zeroD = new Node(0); 
    Node* oneD = new Node(0); 
    Node* twoD = new Node(0); 
    Node* zero = zeroD, *one = oneD, *two = twoD; 
  
    // Traverse list 
    Node* curr = head; 
    while (curr) { 
        if (curr->data == 0) { 
            zero->next = curr; 
            zero = zero->next; 
            curr = curr->next; 
        } else if (curr->data == 1) { 
            one->next = curr; 
            one = one->next; 
            curr = curr->next; 
        } else { 
            two->next = curr; 
            two = two->next; 
            curr = curr->next; 
        } 
    } 
  
    // Attach three lists 
    zero->next = (oneD->next) ? (oneD->next) : (twoD->next); 
    one->next = twoD->next; 
    two->next = NULL; 
  
    // Updated head 
    head = zeroD->next; 
  
    // Delete dummy nodes 
    delete zeroD; 
    delete oneD; 
    delete twoD; 
  
    return head; 
    // Add code here
    
}
