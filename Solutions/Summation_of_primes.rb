def get_primes(num)
  start = 2
  primes = (start..num).to_a 

  (start..num).each do |i|
    (start..i).each do |ii|
      if (i % ii == 0) && i != ii
        primes.delete(i)
        break
      end
    end
  end
  primes.sum
end

print 'Please Enter a number? '
num = gets.chomp
puts get_primes(num.to_i)

