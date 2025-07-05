local colors = {"red","green","blue"}

print(colors[1])

for i = 1, #colors do
    print(colors[i])
end

for index,value in ipairs(colors) do
    print(colors[index])
end

for _,value in ipairs(colors) do
    print(value)
end