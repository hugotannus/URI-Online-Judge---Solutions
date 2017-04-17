while n = gets.to_i and n.nonzero? do
  while queue = gets.split.map { |e| e.to_i } and queue[0].nonzero? do
    stack = []
    failed = false

    (1..n).each do |i|
      stack.push i
      while stack.size.nonzero? and queue.first == stack.last do
        stack.pop
        queue.shift
      end

      if stack.size.nonzero? and queue.first < stack.last
        failed = true
        break
      end
    end

    puts ( failed ? 'No' : 'Yes')
  end
  puts
end
