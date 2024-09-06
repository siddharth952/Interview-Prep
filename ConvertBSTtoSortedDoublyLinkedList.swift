// Definition for a binary tree node.
public class Node {
    public var val: Int
    public var left: Node?
    public var right: Node?
    public init(_ val: Int, _ left: Node? = nil, _ right: Node? = nil) {
        self.val = val
        self.left = left
        self.right = right
    }
}

class Solution {
    private var prevNode: Node?
    private var listHead: Node?

    func treeToDoublyList(_ root: Node?) -> Node? {
        guard let root = root else { return nil }
        
        // Reset the prevNode and listHead pointers before starting the DFS.
        prevNode = nil
        listHead = nil
        
        // Perform a depth-first search to traverse the tree in order.
        DFSInOrder(root)
        
        // After the DFS is done, connect the head and tail to make it circular.
        if let listHead = listHead, let prevNode = prevNode {
            prevNode.right = listHead
            listHead.left = prevNode
        }
        
        return listHead
    }

    // Helper DFS function to perform in-order traversal.
    private func DFSInOrder(_ currentNode: Node?) {
        guard let currentNode = currentNode else { return }
        
        // Traverse the left subtree first (in-order traversal).
        DFSInOrder(currentNode.left)
        
        // When processing the current node:
        if let prevNode = prevNode {
            // If prevNode is not null, link it with the current node.
            prevNode.right = currentNode
            currentNode.left = prevNode
        } else {
            // If this is the leftmost node, it will be the head of the doubly linked list.
            listHead = currentNode
        }
        
        // Move prevNode to the current node before traversing the right subtree.
        self.prevNode = currentNode
        
        // Traverse the right subtree.
        DFSInOrder(currentNode.right)
    }
}
