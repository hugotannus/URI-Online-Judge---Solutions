odd = []
even = []

for t in 1..(gets.to_i)
  n = gets.to_i
  odd.push n if n.odd?
  even.push n if n.even?
end

even.sort!
odd.sort!.reverse!

even.each { |e| puts e }
odd.each { |o| puts o }
