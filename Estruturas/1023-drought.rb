c = 1

while n = gets.to_i and n.nonzero? do
  cities = []
  people = 0
  consunption = 0.0

  for i in 1..n
    x, y = gets.split.map { |e| e.to_i }
    cities.push({:x => x, :y => y, :mean => y / x})
    people += x
    consunption += y
  end

  cities.sort_by! { |e| e[:mean] }

  puts "Cidade\# #{c}:"
  line = cities.map { |e| "#{e[:x]}-#{e[:mean]}" }
  puts line.join(' ')
  puts "Consumo medio: #{'%.2f' % (consunption / people)} m3."

  c += 1
end
