class ListNode:
    """双向链表节点类"""
    def __init__(self,val:int):
        self.val = val  #节点值
        self.next:ListNode | None = None # 指向后续节点的引用
        self.prev:ListNode | None = None # 指向前驱节点的引用
        