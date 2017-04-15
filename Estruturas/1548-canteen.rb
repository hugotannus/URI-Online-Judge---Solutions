for t in 1..(gets.to_i)
  q = gets.to_i

  queue = (gets).split.map { |e| e.to_i }
  pq = queue.sort.reverse

  count = 0
  for i in 0...q
    count += 1 if queue[i] == pq[i]
  end

  puts count
end
