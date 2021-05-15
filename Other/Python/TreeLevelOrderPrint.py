def printlevelorder(root): 
    h = height(root) 
    for i in range(1, h + 1): 
        givenspirallevel(root, i) 
  
def printGivenLevel(root, level): 
    if root is None: 
        return root 
      
    if level == 1: 
        print(root.val, end = ' ') 
    elif level > 1: 
        printGivenLevel(root.left, level - 1) 
        printGivenLevel(root.right, level - 1) 