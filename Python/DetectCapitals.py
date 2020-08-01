def detectCapitals(word:str):
    # Flag to keep track of the cases 
    c = 0

    for i in word:
        if i == i.upper():
            c += 1

    # If all words are small || If first cap and rest are small || All are caps
    return  c == len(word) or (c == 1 and word[0] == word[0].upper()) or c == 0


print(detectCapitals("Thisshouldreturntrue"))
print(detectCapitals("ReturnFaLSe"))