# All types of inheritance

# 1] single level 
class A():
    def __init__(self):
        print("This is class A")

class B(A):
    def __init__(self):
        super().__init__()
        print("This is class B")

print("\nSingle Level")
b = B()

# 2] Multiple 
class D():
    def __init__(self):
        print("This is class D")

class E():
    def __init__(self):  
        print("This is class E")

class F(E,D):
    def __init__(self):
        super().__init__()
        D.__init__(self)
        
        print("This is claas F")

print("\nMultiple Level")
f = F()

# 3] Multilevel

class G():
    def __init__(self):
        print("This is class G")

class H(G):
    def __init__(self):
        super().__init__()
        print("This is class H")

class I(H):
    def __init__(self):
        super().__init__()
        print("This is class I")

print("\nMultilevel Level")
i = I()

# 3] Hybrid

class J():
    def __init__(self):
        print("This is class J")

class K(J):
    def __init__(self):
        super().__init__()
        print("This is class K")

class L():
    def __init__(self):
        print("This is class L")

class M(K,L):
    def __init__(self):
        super().__init__()
        L.__init__(self)
        print("This is class M")


print("\nHibrid Level")
m = M()







