# 9.06.20 - F(Was not able to think) , F(Saw solution and copy)

def countAndSay(n:int) -> str:
    s = '1'
    for _ in range(n-1): # Upto n-1
        let,temp,count = s[0],'',0
        for l in s:
            if let == l:
                count +=1
            else:
                temp += str(count) + let
                let = l
                count = 1
        temp += str(count) + let
        s = temp
    return s


if __name__ == "__main__":
    print(countAndSay(6))