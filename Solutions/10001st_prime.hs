import Control.Applicative
import Control.Monad

primes = 2 : filter (null . tail . primeFactors) [3,5..]

primeFactors n = factor n primes
    where factor n (x:xs)
              | x*x > n = [n]
              | n `mod` x == 0 = x : factor (n `div` x) (x:xs)
              | otherwise = factor n xs

solve n = primes !! (n-1)

main :: IO ()
main = do
    putStrLn $ show $ solve 10001
