def is_palindrome(word):
    # Menghapus spasi dan mengubah huruf menjadi huruf kecil
    clean_word = word.lower().replace(" ", "")

    # Membandingkan kata dengan kebalikannya
    return clean_word == clean_word[::-1]


# Contoh penggunaan fungsi
kata_input = input("Masukkan kata: ")
if is_palindrome(kata_input):
    print(f"{kata_input} adalah palindrome.")
else:
    print(f"{kata_input} bukan palindrome.")
