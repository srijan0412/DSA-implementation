Node* head = l.begin();
    while (head != NULL){
        cout << head->getData() << " -> ";
        head = head->next;
    }