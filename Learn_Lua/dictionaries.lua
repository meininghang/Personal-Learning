local info = {
    name = "sid",
    age = 20,
    isAlive = true,
}

print(info["name"])
print(info.name)

for key,value in pairs(info) do
    print(key .. " ".. tostring(value))
end