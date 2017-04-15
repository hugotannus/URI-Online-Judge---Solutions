while str = gets and str != nil do
  stack = []; answer = 'correct'

  str.each_char do |c|
    if c == '('
      stack.push(1)
    elsif c == ')'
      if !stack.empty?
        stack.pop
      else
        answer = 'incorrect'
      end
    end
  end

  answer = 'incorrect' if !stack.empty?

  puts answer
end
