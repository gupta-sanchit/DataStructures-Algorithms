public class main {

    public class Node
    {
        int data;
        Node left;
        Node right;

        public Node(int data, node l, node r)
        {
            this.data = data;
            this.left = l;
            this.right = r;
        }
        public Node(int data)
        {
            this.data = data;
            left = right = null;
        }

    }

    public static class BinaryTree
    {
        Node root;


        BinaryTree(int data)
        {
            Node root = new Node(data);
        }
    }

    public static void main(String args[])
    {
        BinaryTree tree = new BinaryTree(10);

        tree.root.left = new Node(5);
        tree.root.right = new Node(20);
    }





}
