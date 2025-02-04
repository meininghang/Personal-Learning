class Price:
    def final_price(self,vat,discount=0):
        """应用了增值税和固定税折扣之后返回价格"""
        return (self.net_price * (100+vat)/100) - discount

p1 = Price()
p1.net_price = 100
print(Price.final_price(p1,20,10))
print(p1.final_price(20,10))