def solve(input_line):
    numbers = input_line.split('+')
    numbers2 = numbers[1].split('=')
    if not (numbers[0].isnumeric()):
        resp = int(numbers2[1]) - int(numbers2[0])
    if not (numbers2[0].isnumeric()):
        resp = int(numbers2[1]) - int(numbers[0])
    if not (numbers2[1].isnumeric()):
        resp = int(numbers[0]) + int(numbers2[0])

    print(resp)
    

while True:
    try: input_line = input()
    except EOFError: break
    solve(input_line)
