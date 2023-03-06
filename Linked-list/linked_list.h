class List;

class Node {
    int data;
    
public :
    
    int getData(){
        return data;
    }

    Node* next;
    Node(int d):data(d),next(NULL){}
    friend class List;
};

class List{
    Node* head;
    Node* tail;
public:

    List():head(NULL),tail(NULL){}

    Node* begin(){
        return head;
    }

    void push_front(int data){
        if (head==NULL){
            Node* n = new Node(data);
            head=tail=n;
            return;
        }
        else {
            Node* n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data){
        if (head==NULL){
            Node* n = new Node(data);
            head=tail=n;
            return;
        }
        else {
            Node* n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos){
        if (pos==0){
            push_front(data);
        }
        else {
            Node* n = new Node(data);
            Node* temp = head;
            while(pos-1>0){
                temp=temp->next;
                pos--;
            }
            n->next = temp->next;
            temp->next = n;
        }
    }
};