
# Function for finding sum of larger numbers 
def findSum(str1, str2): 

	
	# make sure length  of str2 is larger. 
	if len(str1)> len(str2): 
		temp = str1 
		str1 = str2 
		str2 = temp 

	# Take an empty string for storing result 
	str3 = "" 

	# Calculate length of both string 
	n1 = len(str1) 
	n2 = len(str2) 
	diff = n2 - n1 

	# Initially take carry zero 
	carry = 0

	# Traverse from end of both strings 
	for i in range(n1-1,-1,-1): 
	
		# Simple Mathematics to calculate sum+carry
		
		sum = ((ord(str1[i])-ord('0')) +
				int((ord(str2[i+diff])-ord('0'))) + carry) 
	
		str3 = str3+str(sum%10 ) 
		
		
		carry = sum//10

	# Add remaining digits of str2[] 
	for i in range(n2-n1-1,-1,-1): 
	
		sum = ((ord(str2[i])-ord('0'))+carry) 
		str3 = str3+str(sum%10 ) 
		carry = sum//10

	# Add remaining carry 
	if (carry): 
		str3+str(carry+'0') 

	#remove first two string and append result
	str3 = str3[::-1] 
	l.remove(str1)
	l.remove(str2)
	l.append(str3)

	return l

# Driver code 
if __name__ == "__main__": 
    l=[]
    n=int(input("enter no of inputs"))
    for i in range(n):
        k=input("enter no")
        l.append(k)
    for j in range(n-1):
        findSum(l[0],l[1])
        
    print(l[0][0:10] )#splicing upto 10 digits
	    
	


