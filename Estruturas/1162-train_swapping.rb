for c in 1..(gets.to_i)
  l = gets.to_i
  trains = gets.split.map { |e| e.to_i }
  count = 0;

  (l-1).downto 1 do |k|
    (1).upto k do |j|
      i = j-1
      if trains[i] > trains[j]
        trains[i], trains[j] = trains[j], trains[i]
        count += 1
      end
    end
  end

  puts "Optimal train swapping takes #{count} swaps."
end
