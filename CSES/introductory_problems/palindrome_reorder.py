import sys
from collections import Counter

def solve():
    s = sys.stdin.read().strip()
    if not s:
        return
    
    counts = Counter(s)
    
    # Verifica quantas letras possuem contagem ímpar
    odd_chars = [char for char, freq in counts.items() if freq % 2 != 0]
    
    # Se o tamanho for par e houver letras ímpares, ou se houver mais de 1 letra ímpar
    if len(odd_chars) > 1 or (len(s) % 2 == 0 and len(odd_chars) > 0):
        print("NO SOLUTION")
        return
        
    left_half = []
    middle_char = ""
    
    for char in sorted(counts.keys()):
        freq = counts[char]
        
        # Se a quantidade for ímpar, guardamos uma unidade para o meio
        if freq % 2 != 0:
            middle_char = char 
            
        # A metade inteira (ou a metade do que sobrou após tirar 1 para o meio) vai para a esquerda
        left_half.append(char * (freq // 2))
        
    left_str = "".join(left_half)
    right_str = left_str[::-1] # Inverte a metade esquerda para formar a direita
    
    print(left_str + middle_char + right_str)

if __name__ == '__main__':
    solve()