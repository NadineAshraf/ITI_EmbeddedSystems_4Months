def count_substring(string, sub_string):
    count = 0
    while string.find(sub_string) >= 0:
        count+=1
        pos = string.find(sub_string)
        string = "".join(list(string)[:pos]+list(string)[pos+1:])
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
