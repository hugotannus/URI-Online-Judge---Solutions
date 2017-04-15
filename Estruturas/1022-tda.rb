OP = 3 # position of the operand

for c in 1..(gets.to_i)
  terms = gets.split
  numbers = terms.select.with_index { |t, i| i.even? }

  n1, d1, n2, d2 = numbers.map { |n| n.to_i }
  num, dem = 1, 1

  op = terms[OP]

  case op
  when '+', '-'
    n2 = -n2 if op == '-'
    num, dem = (n1*d2) + (n2*d1), d1*d2
  when '*', '/'
    n2, d2 = d2, n2 if op == '/'
    num, dem = n1 * n2, d1 * d2
  end

  g = num.gcd(dem)
  num_s, dem_s = num/g, dem/g

  puts "#{num}/#{dem} = #{num_s}/#{dem_s}"
end
