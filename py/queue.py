class Queue:
    
    def __init__(self):
        self.queue = []
        
    # add an element
    def enqeue(self, item):
        self.queue.append(item)
        
    # Remove an element
    def dequeue(self):
        if len(self.queue) < 1:
            return None
        return self.queue.pop(0)
    
    # Display the queue
    def display(self):
        print(self.queue)
        
        
    def size(self):
        return len(self.queue)
    
q = Queue()
q.enqeue(1)
q.enqeue(2)
q.enqeue(3)
q.enqeue(4)
q.enqeue(5)

q.display()

q.dequeue()
q.dequeue()

print("After removing an element")
q.display()