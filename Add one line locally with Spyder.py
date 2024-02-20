# -*- coding: utf-8 -*-
"""
Created on Tue Feb 20 16:10:34 2024

@author: Hegel
"""

# -*- coding: utf-8 -*-
"""
Created on Tue Aug  8 16:11:02 2023

@author: Hegel
"""

# First, let's learn what a class means.
class ExampleClass:
    """This is equivalent to typedef struct in c."""
    num = 999
    def f (self):
        return ("Hello from ExampleClass.f called by self")
    """That said, a class in python is a collection of variables, structures and functions."""

# No brackets in the class definition.
# But there are brackets when instances of classes are created.

InstanceClass = ExampleClass()
print("Number:", InstanceClass.num)
print("Function:", InstanceClass.f())


# Second, initialise our class by using self in the method.
class MethodClass:
    def __init__(self, name, gender, age): # two underscores on each side. predefined function.
        self.n = name
        self.g = gender
        self.a = age
        
exampleMethod = MethodClass("Hegel", "M", 25)
print(exampleMethod.n)
print("g:", exampleMethod.g)
print("a:", exampleMethod.a)    

print("A new line is added through Spyder locally in Github repository folder on 1611 20 Feb 2024.")

        
        
        
        
        
        
        
        
        
        
        
