for i in 1..(gets.to_i)
  stack = []; count = 0

  (gets).each_char do |c|
    if c == '<'
      stack.push(1)
    elsif c == '>'
      if !stack.empty?
        stack.pop
        count += 1
      end
    end
  end

  puts count
end
