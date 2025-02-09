class listNode:
    """链表节点类"""
    def __init__(self,val:int):
        self.val:int = val #节点值
        self.next:listNode | None = None #指向下一节点的引用


def insert(n0:listNode,P:listNode):
    """在 n0节点之后插入节点 P"""
    n1 = n0.next
    P.next = n1
    n0.next = P

def remove(n0:listNode):
    """删除链表的节点 n0 之后的首个节点"""
    if not n0.next:
        return
    #n0 -> P -> n1
    P = n0.next
    n1 = P.next
    n0.next = n1

def access(head:listNode,index:int) -> listNode | None:
    """访问链表中索引为 index 的节点"""
    for _ in range(index):
        if not head:
            return None
        head = head.next
    return head

def find(head:listNode,target:int) -> int:
    """在链表中查找值为 target 的首个节点"""
    index = 0
    while head:
        if head.val == target:
            return index
        head = head.next
        index += 1
    return -1


if __name__ == "__main__":
    # 初始化链表 1->3->2->5->4
    # 初始化各个节点

    n0 = listNode(1)
    n1 = listNode(3)
    n2 = listNode(2)
    n3 = listNode(5)
    n4 = listNode(4)

    # 构建节点之间的引用

    n0.next = n1
    n1.next = n2
    n2.next = n3
    n3.next = n4

    # 插入节点
    P = listNode(0)
    insert(n0, P)
    print(n0.val,P.val)

    remove(n0)
    print(n0.val)

    node = access(n0,3)
    print(f"链表中索引为 3 处的值为 {node.val}")

    index = find(n0,60)
    print(f"链表中值为 60 的节点的索引为 {index}")