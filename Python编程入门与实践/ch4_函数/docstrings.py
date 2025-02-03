def square(n):
    """返回一个数n的平方"""
    return n**2

def get_username(userid):
    """根据id返回给定用户的用户名"""
    return db.get(user_id=userid).username