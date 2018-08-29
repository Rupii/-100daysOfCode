class LinkedList {
    Node head;

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public static void insert(int data, Node head) {
        if (head == null) {
            head = new Node(data);
        }
        while (head.next != null)
            head = head.next;
        head.next = new Node(data);
    }

    public static void print(Node head) {
        while (head != null) {
            System.out.printf(head.data + " ");
            head = head.next;
        }
    }

    public static void main(String[] args) {
        LinkedList l = new LinkedList();
        l.head = new Node(10);
        insert(9, l.head);
        insert(8, l.head);
        print(l.head);
    }
}