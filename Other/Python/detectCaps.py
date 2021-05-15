def detectCapitalUse(word: str) -> bool:
    if word[0].islower():
        for i in range(len(word)):
            if not (word[i].islower()):
                print("False0")
        print("True0")

    
    elif word[0].isupper():
        if word[1].islower():
            for i in range(len(word) - 2):
                if not (word[i+2].islower()):
                    print("False1")
        print("True1")

        if word[1].isupper():
            for i in range(len(word) - 2):
                if not word[i+2].isupper():
                    print("False2")
            print("True2")
    
    


            

    

            

detectCapitalUse("SSSD")

                    