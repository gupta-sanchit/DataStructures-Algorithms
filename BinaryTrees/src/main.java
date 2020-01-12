
    class Node
    {
        int data;
        Node left;
        Node right;

        public Node(int data, Node l, Node r)
        {
            this.data = data;
            this.left = l;
            this.right = r;
        }
        public Node(int data)
        {
            this.data = data;
            this.left = this.right = null;
        }

    }

    class BinaryTree
    {
        Node root;


        BinaryTree(int data)
        {
            Node root = new Node(data);
        }
    }
public class main
{
    public static void main(String args[])
    {
        BinaryTree tree = new BinaryTree(10);

        tree.root = new Node(4);

        tree.root.left = new Node(5);
        tree.root.right = new Node(20);
    }
}




