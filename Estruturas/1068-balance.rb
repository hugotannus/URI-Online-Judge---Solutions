while str = gets and str != nil do
  array = []; answer = 'correct'

  str.each_char do |c|
    if c == '('
      array.push(1)
    elsif c == ')'
      if array.size > 0
        array.pop
      else
        answer = 'incorrect'
      end
    end
  end

  answer = 'incorrect' if array.size > 0

  puts answer
end
