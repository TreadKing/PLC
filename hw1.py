import re
p = re.compile(r'[^A-Za-z0-9]+')

file1 = open('SampleText.txt', 'r+')
strings = file1.readlines()

for string1 in strings:
    index = 0
    length = len(string1)
    for i in range(length):
        if(re.match(p,string1[i])):
            if(i != index):
                print(string1[index: i - 1])
                print()
            if(string1[i]!= ' '):
                print(string1[i])
                print()
            index = i + 1
        if (i == (length-1)):
            print(string1[index + 1 : length])

