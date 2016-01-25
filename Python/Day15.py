    def insert(self,head,data): 
        if not head:
            head=Node(data)
            self.top=head
            return head
        else:
            tn=Node(data)
            self.top.next=tn
            self.top=tn
            return  head
