for c in 1..(gets.to_i)
  words = gets.split

  (words.size - 1).downto 1 do |k|
    (1).upto k do |j|
      i = j-1
      if words[i].size < words[j].size
        words[i], words[j] = words[j], words[i]
      end
    end
  end

  puts "#{words.join ' '}"
end
