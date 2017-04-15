n = gets.to_i

while n > 0 do
  array = []; count = 0

  str = gets

  str.each_char do |c|
    if c == '<'
      array.push(1)
    elsif c == '>'
      if array.size > 0
        array.pop
        count += 1
      end
    end
  end

  puts count
  n -= 1
end
