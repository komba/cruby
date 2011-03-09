require 'mkmf'
if create_makefile('test')
  puts 'OK'
else
  puts 'something wrong. Please fix errors and try again'
end
