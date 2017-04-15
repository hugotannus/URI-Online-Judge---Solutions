while n = gets.to_i and n > 0 do
  queue = (1..n).to_a
  discard = []

  while queue.size > 1 do
    discard.push(queue.shift)
    queue.push(queue.shift)
  end

  puts "Discarded cards: #{discard.join ', '}"
  puts "Remaining card: #{queue.first}"
end
