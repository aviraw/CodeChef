class calculation: 
	first = 0
	second = 0
	answer = 0
	def __init__(self, f, s):   # parameterized constructor
		self.first = f 
		self.second = s 
	def display(self): 
		print("First number = " + str(self.first)) 
		print("Second number = " + str(self.second)) 
		print("Addition of two numbers = " + str(self.answer)) 
	def calculate(self): 
		self.answer = self.first + self.second 
obj = calculation(2, 3)   # creating object of the class this will invoke parameterized constructor
obj.calculate() 
obj.display() 
