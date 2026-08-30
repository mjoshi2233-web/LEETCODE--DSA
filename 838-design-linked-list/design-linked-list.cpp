class MyLinkedList {
    int val;
    MyLinkedList* next;
    MyLinkedList* head=nullptr;
public:
    MyLinkedList() {
        this->val=0;
        this->next=nullptr;

        
    }
    MyLinkedList(int value){
        this->val=value;
        this->next=nullptr;
    }
    MyLinkedList(int value,MyLinkedList* nexty){
        this->val=value;
        this->next=nexty;
    }
    
    int get(int index) {
        MyLinkedList* temp=head;

        int cnt=0;
        while(temp!=NULL){
           
            if(cnt==index){
                return temp->val;
            }
            temp=temp->next;
             cnt++;
        }
        return -1;
        
    }
    
    void addAtHead(int val) {
        MyLinkedList* temp=new MyLinkedList(val);
        temp->next=head;
        head=temp;
        


        
    }
    
    void addAtTail(int val) {
        if(head == NULL){
    head = new MyLinkedList(val);
    return;
}
        MyLinkedList* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        MyLinkedList* x=new MyLinkedList(val);
        temp->next=x;
        
    }
    
    void addAtIndex(int index, int val) {
        int count=0;
        MyLinkedList* temp=head;
        if(index==0){
            addAtHead(val);
            return ;
        }
        while(temp!=NULL){
           
            if(count==index-1){
                MyLinkedList* x=new MyLinkedList(val);
                x->next=temp->next;
                temp->next=x;

            }
            temp=temp->next; count++;
        }
        
    }
    
    void deleteAtIndex(int index) {
         int count=0;
        MyLinkedList* temp=head;
        if(index == 0){
    MyLinkedList* del = head;
    head = head->next;
    delete del;
    return;
}
        if(temp==NULL || (index==0 && temp->next==NULL)){return ;}
        while(temp->next!=NULL){
            
            if(count==index-1){
                temp->next=temp->next->next;
                break;


            }
            temp=temp->next;count++;
        }
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */