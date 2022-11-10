def swap_case(s):
    output =""
    for ch in s:
        if ch.isupper() is True:
            output += ch.lower()
        elif ch.islower() is True:
            output+= ch.upper()
        else:
            output+= ch
    return output

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
