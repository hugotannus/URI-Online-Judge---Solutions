count = 1

while line = gets and line.chomp != "0 0" do
  n, q = line.split.map { |e| e.to_i }
  marbles = []

  (1..n).each { marbles.push (gets).to_i }
  marbles.sort!

  puts "CASE\# #{count}:"
  (1..q).each do
    x = gets.to_i
    y = marbles.index(x)

    if y == nil
      puts "#{x} not found"
    else
      puts "#{x} found at #{y+1}"
    end
  end

  count += 1
end
