#!/usr/bin/ruby
# module Test
# compare ruby and c code
module Test
  # oh lol..
  def factorial n
    n; n > 1 ? n * factorial(n - 1) : 1 
  end
  
  # 10 billions times
  def say_hello
    num = 0
    
    10_000_000.times do |i|
      num = sin factorial(5)
    end
    puts "sin = #{num}"
  end
end

include Math
include Test
# run
say_hello
