def solve(s):
    cap_str = s.split(" ")
    newstr=[]
    for x in cap_str:
        newstr .append(x.capitalize())
    return " ".join(newstr)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
