import java.util.LinkedList;
import java.util.Queue;
public class NumberOfNodes 
{
  public static class Node {
        String data;
        Node left;
        Node right;
        public Node(String data)
        {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }
    public static class BinaryTree {
        public Node CreateTree()
        {
            Node n1 = new Node("1");
            Node n2 = new Node("2");
            Node n3 = new Node("3");
            Node n4 = new Node("4");
            Node n5 = new Node("5");
            Node n6 = new Node("6");
            Node n7 = new Node("7");
            n1.left = n2;
            n1.right = n3;
            n2.left = n4;
            n2.right = n5;
            n3.left = n6;
            n3.right = n7;
            return n1;
        }
        public void PrintNumberOfNodes(Node root)
        {
            Queue<Node> queue = new LinkedList<>();
            queue.add(root);
            int num = 0;
            while(!queue.isEmpty())
            {
                Node temp = queue.remove();
                num++;
                if(temp.left!=null)
                    queue.add(temp.left);
                if(temp.right!=null)
                    queue.add(temp.right);
            }
            System.out.println("Number of Nodes are " + num);
        }
    }
    public static void main(String[] args) {
        System.out.println("Creating a Tree");
        BinaryTree bt = new BinaryTree();
        Node root = bt.CreateTree(); //creating a tree
        bt.PrintNumberOfNodes(root);
    }
}
