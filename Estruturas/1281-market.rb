for c in 1..(gets.to_i)
  dict = {}
  spent = 0.0

  for i in 1..(gets.to_i)
    t = (gets).split
    dict[t.first] = t.last.to_f
  end

  for i in 1..(gets.to_i)
    t = (gets).split
    spent += dict[t.first] * t.last.to_i
  end

  puts "R$ #{'%.2f' % spent}"
end
