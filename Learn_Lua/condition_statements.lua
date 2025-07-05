local age = 10

if age > 18 then
    print("over 18")
end

age = 20

if age > 18 then
    print("over 18")
elseif age==18 then
    print("18 huh")
else
    print("Kiddo")
end

local isAlive = true

if isAlive then
    print("Be grateful!")
end

local name = "sid"

if name ~= "sid" then
    print("not sid")
else print("sid huh")
end