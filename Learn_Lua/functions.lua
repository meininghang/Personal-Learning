local function print_num(a)
    print(a)
end

print_num(9)

local print_num = function (a)
    print(a)
end

print_num(99)

function sum(a,b)
    return a + b
end

print(sum(2,3))