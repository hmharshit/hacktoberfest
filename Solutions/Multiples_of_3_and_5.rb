puts 'Please enter number of inputs'
inputs = gets.chomp.to_i

n = 0
test_cases = []
while n < inputs do
  puts "please enter test case #{n+1}:"
  test_case = gets.chomp.to_i
  test_cases.push(test_case)
  n+=1
end

for test_case in test_cases do
  sum = 0
  for num in 3...test_case do
    sum+=num if (num % 3 == 0) || (num % 5 == 0)
  end
  puts sum
end

