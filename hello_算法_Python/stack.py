#初始化栈
stack:list[int] = []

#入栈
stack.append(1)
stack.append(3)
stack.append(2)
stack.append(5)
stack.append(4)

#访问栈顶元素
peek:int = stack[-1]

#出栈
pop:int = stack.pop()

#获取栈的长度
size:int = len(stack)

#判断是否为空
is_empty :bool = len(stack) == 0