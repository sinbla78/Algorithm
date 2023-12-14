python = '파이썬'
java = '자바'
#문장이 복잡해지고 보기 불편해진다.
print('개발 언어에는 ' + python +','+ java+' 등이 있어요.')
print('개발 언어에는',python,',',java,'등이 있어요.')
#문자열 포멧
print('개발 언어에는 {},{} 등이 있어요.'.format(python,java))
print('개발 언어에는 {0},{1} 등이 있어요.'.format(python,java)) #순서를 정할 수 있다.
print(f'개발 언어에는 {python},{java} 등이 있어요.') #f-string 파이썬 3.6이상
