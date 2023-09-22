username = "halip"
password = "123456"

enterUsername = str(input("Masukkan username kamu: "))
enterPassword = str(input("Masukkan password kamu: "))

if username == enterUsername and password == enterPassword:
    print("Anda berhasil log in, " + username)
elif username != enterUsername and password == enterPassword:
    print("Username anda tidak sama")
elif username == enterUsername and password != enterPassword:
    print("Password anda tidak sama")
else:
    print("Username & Password tidak ada")
