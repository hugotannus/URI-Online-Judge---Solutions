for i in 1..(gets.to_i)
  array = []; count = 0

  (gets).each_char do |c|
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
end
