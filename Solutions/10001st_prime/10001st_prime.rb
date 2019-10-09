require 'prime'
prime = [*1..1000000].select(&:prime?)
# or regex method (slower) -> prime = [*1..1000000].select{|i|!(?1*i=~/^1?$|^(11+?)\1+$/)}
gets.to_i.times{p prime[gets.to_i-1]}