# XOR Cipher in C

This repository contains a clean and modular implementation of the **XOR cipher**, written in C.  
It allows you to encrypt and decrypt messages using a repeating key and the XOR (exclusive OR) operation.

Perfect for understanding how symmetric encryption works at the byte level.

---

##  What is the XOR Cipher?

The XOR cipher is a simple symmetric encryption method.  
It works by applying the **bitwise XOR (`^`) operation** between each character of the message and the corresponding character of the key.

Because `A ^ B ^ B = A`, the same operation is used for both encryption and decryption.

---

## How it works:

Each character in the message is XORed with the corresponding character in the key:

cipher[i] = message[i] ^ key[i % key_length]


If the key is shorter than the message, it **repeats** automatically.

---

##  Example:

Message : HELLO
Key : KEY
Encrypted : [Non-printable characters or strange symbols]
Decrypted : HELLO (after XORing again with same key)


Note: The output may contain non-printable or strange characters. This is normal when using XOR at the byte level.

---

##  Features

✅ Encrypt and decrypt with a single function  
✅ Handles variable-length keys (repeats automatically)  
✅ Clean, readable and modular C code  
✅ Cross-platform (Linux/Windows)  
✅ Ideal for learning XOR logic and symmetric encryption  

---

##  How to Compile?

## bash
gcc  -o xor xor.c

## How to Run?
./xor       # on Linux/macOS
xor.exe     # on Windows (Code::Blocks or cmd)
