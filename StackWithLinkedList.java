public class StackWithLinkedList {

    private class Node {
        private int value;
        private Node next;

        public Node(int value) {
            this.value = value;
        }
    }

    private Node top;

    public StackWithLinkedList() {
        this.top = null;
    }

    public void push(int value) {
        var node = new Node(value);

        // if heap memory is full, Although 99% this will not occur but still
        if (node == null)
            throw new StackOverflowError();

        node.next = top;
        top = node;
    }

    public int pop(){
        if(top==null)
            throw new IllegalStateException();

        int popped = top.value;
        top = (top).next;
        return popped;
    }

    public boolean isEmpty(){
        return top == null;
    }

    public int peek(){
        if (!isEmpty())
            return top.value;
        else
            throw new IllegalStateException();
    }

    public void print(){
        if(top == null)
            throw new IllegalStateException();
        else {
            var temp = top;
            while (temp != null){
                System.out.println(temp.value);
                temp = temp.next;
            }
        }
    }

}
