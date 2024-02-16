```markdown
```
# Image-Encryption

Encryption and Decryption of the Image file using C++

## Overview
This repository contains a C++ program that enables users to encrypt and decrypt images using a simple XOR encryption technique. The program prompts users to choose between encryption and decryption, accepts input for the image file name and encryption key, and performs the desired operation accordingly. It provides a basic yet functional implementation for image encryption and decryption.

## Key Components
1. **Encryption Function** (`encryptImage`):
   - Opens the input image file and creates a new output file for the encrypted image.
   - Reads the contents of the input file into a vector.
   - Performs XOR encryption on each byte of the image using the provided key.
   - Writes the encrypted bytes to the output file.

2. **Decryption Function** (`decryptImage`):
   - Opens the encrypted image file and creates a new output file for the decrypted image.
   - Reads the contents of the encrypted file into a vector.
   - Performs XOR decryption on each byte of the image using the provided key.
   - Writes the decrypted bytes to the output file.

3. **Main Function** (`main`):
   - Displays a menu for users to choose between encryption and decryption.
   - Accepts user input for the image file name and encryption key.
   - Calls the appropriate encryption or decryption function based on user choice.
   - Provides an option for users to continue encrypting additional images.
   - Prints a decorative message upon program completion.

## Usage
1. **Compilation**: Compile the program using a C++ compiler.
   ```
   g++ image_encrypt_decrypt.cpp -o image_encrypt_decrypt
   ```

2. **Execution**: Run the compiled program.
   ```
   ./image_encrypt_decrypt
   ```

3. **Encryption**: Choose encryption, provide the image file name, and enter the encryption key when prompted. The encrypted image will be saved as "encrypted.jpg".

4. **Decryption**: Choose decryption, provide the encrypted image file name, and enter the encryption key when prompted. The decrypted image will be saved as "decrypted.jpg".

## Example
```cpp
// Encrypt the image
encryptImage("input_image.jpg", "my_secret_key");

// Decrypt the image
decryptImage("encrypted.jpg", "my_secret_key");
```

## Dependencies
- C++ compiler (e.g., g++)
- Standard C++ libraries
```

