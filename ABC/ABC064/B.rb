gets
a = gets.chomp.split(" ").map(&:to_i)

p a.max - a.min
