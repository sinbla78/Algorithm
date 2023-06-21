세트는 순서가  보장 되지 않아 인덱스를 통해 접근은 불가하지만  튜플처럼 읽기 전용은 아니다.
my_set = {'돈가스', '보쌈', '제육덮밥'}
my_set.add('닭갈비')
print(my_set) #실행 : {'돈가스', '보쌈', '제육덮밥', '닭갈비'}

my_set = {'돈가스', '보쌈', '제육덮밥'}
my_set.remove('제육덮밥')
print(my_set) #실행 : {'돈가스', '보쌈'}

my_set = {'돈가스', '보쌈', '제육덮밥'}
my_set.clear() #모든 값 삭제
print(my_set) #실행 : set()

my_set = {'돈가스', '보쌈', '제육덮밥'}
del my_set
print(my_set) #실행 : NameError: my_set 누구세요?

copy() : 세트복사, discard() :값 삭제(해당 값이 없어도 에러 발생 x), isdisjoint() 두 세트에겹치는 값이 없는지 여부
issdisbst() : 다른 세트의 부분집합인지 여부, issuperset() : 다른 세트의 상위집합인지 여부, update() : 다은 세트의 값들을 
