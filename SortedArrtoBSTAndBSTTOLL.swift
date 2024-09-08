import Foundation
 public class TreeNode {
      public var val: Int
      public var left: TreeNode?
      public var right: TreeNode?
      public init() { self.val = 0; self.left = nil; self.right = nil; }
      public init(_ val: Int) { self.val = val; self.left = nil; self.right = nil; }
      public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
          self.val = val
          self.left = left
          self.right = right
      }
}

// Generate inorder Tree from sorted array
func genTree(_ nums: [Int]) -> TreeNode? {
    return dfsPre(nums, 0, nums.count - 1)
}

func dfsPre(_ nums: [Int], _ l:Int, _ h:Int) -> TreeNode? {
  guard l <= h else { return nil }
  let mid = l + (h - l ) / 2
  let node = TreeNode(nums[mid])
  node.left = dfsPre(nums, l, mid - 1)
  node.right = dfsPre(nums, mid + 1, h)

  return node
}


class DLinkedList {
  public var val: Int
  public var left: DLinkedList?
  public var right: DLinkedList?
  public init(_ val: Int, _ left: DLinkedList? = nil, _ right: DLinkedList? = nil) {
          self.val = val
          self.left = left
          self.right = right
      }
}

let arr = [0,1,2,4,5,9]
let tree = genTree(arr)

func bstToLL(_ root: TreeNode) -> DLinkedList? {

      var listHead: DLinkedList? = nil
      var prevNode: DLinkedList? = nil

      dfsWithLLLinking(root)

      listHead?.right = prevNode
      prevNode?.left = listHead

      return listHead ?? nil


  // Inorder will gives us a sorted data output from BST as we want 1 -> 2 -> 3 -> 4 -> 1
  // We need to keep track of first and last to connect them in circular manner
  func dfsWithLLLinking(_ currRoot: TreeNode?) -> Void {
    guard let curr = currRoot else { return }

    // Traverse the left subtree first (in-order traversal).
    dfsWithLLLinking(curr.left)
    
    let ll = DLinkedList(curr.val)

    if prevNode != nil {
      // If there is a last then link it
      prevNode?.right = ll
      ll.left = prevNode
    } else {
      // Last is nil // If this is the leftmost node, it will be the head of the doubly linked list.
      listHead = ll
    }

    // Move prevNode to the current node before traversing the right subtree.
    prevNode = ll

    dfsWithLLLinking(curr.right)

  }
}

var ll = bstToLL(tree!)

var l = 0
while(l < 5) {
  if let val = ll?.val {
    print(val, "->")
    ll = ll?.right
  }
  
  l += 1
}
