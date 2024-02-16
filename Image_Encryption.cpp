/*
This code takes an image and a key from the user and encrypts the image using the key and then decrypts the image using the same key. 
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// Function to encrypt the image
void encryptImage(string image, string key) {
	ifstream infile(image, ios::binary); // Open the image file
	ofstream outfile("encrypted.jpg", ios::binary); // Create new file for encrypted image

	vector<char> buffer((istreambuf_iterator<char>(infile)), istreambuf_iterator<char>()); // Copy the contents of the file into a vector

	// Iterate through the vector
	for (int i = 0; i < buffer.size(); i++) {
		// XOR each byte of the image with a byte of the key
		buffer[i] = buffer[i] ^ key[i % key.length()];
	}

	// Write the contents of the vector to the new file
	for (int i = 0; i < buffer.size(); i++) {
		outfile << buffer[i];
	}

	cout << "\nEncrypted Image is Saved to the PC successfully!\n" << endl;
}

// Function to decrypt the image
void decryptImage(string image, string key) {
	ifstream infile(image, ios::binary); // Open the image file
	ofstream outfile("decrypted.jpg", ios::binary); // Create new file for decrypted image

	vector<char> buffer((istreambuf_iterator<char>(infile)), istreambuf_iterator<char>()); // Copy the contents of the file into a vector

	// Iterate through the vector
	for (int i = 0; i < buffer.size(); i++) {
		// XOR each byte of the image with a byte of the key
		buffer[i] = buffer[i] ^ key[i % key.length()];
	}

	// Write the contents of the vector to the new file
	for (int i = 0; i < buffer.size(); i++) {
		outfile << buffer[i];
	}

	cout << "\nDecrypted Image is Saved to the PC successfully!\n" << endl;
}

int main() {
	cout<<"\t\t\t------------------------------------\n";
	cout<<"\t\t\t------------------------------------\n";
    cout<<"\t\t\t\t_IMAGE ENCRYPTION_\n\n";
    cout<<"\t\t\t------------------------------------\n";
    cout<<"\t\t\t------------------------------------\n";
	string image;int choice;
	string key;
    int x;
	do{
	cout<<" Select one of the following :\n\t1.Encryption\n\t2.Decryption"<<endl;
    cin>>choice;
    if(choice==1){
	// Get the image and key from the user
	cout << "Enter the name of the image file: ";
	cin >> image;
	cout << "Enter the encryption key: ";
	cin >> key;

	// Encrypt the image
	encryptImage(image, key);
}
 else if(choice==2){
  	
  		cout << "\n Enter the encryption key: ";
	cin >> key;
	
	// Decrypt the image
	decryptImage("encrypted.jpg", key);
	}
else
cout<<" INVALID INPUT"<<endl;

cout<<"\n\n Do you want to continue encryption? (1.Yes/2.No): \n"<<endl;
cin>>x;
if((x!=1)&&(x!=2))
cout<<" Invalid Input."<<endl;
}
while(x==1);
       cout<<"##########   ###   ###   #######\t #######   ####    ##   ########"<<endl;
       cout<<"    ##       ###   ###   ##     \t ##        ## ##   ##   ##    ##"<<endl;
	   cout<<"    ##       #########   #######\t #######   ##  ##  ##   ##    ##"<<endl;
	   cout<<"    ##       ###   ###   ##     \t ##        ##   ## ##   ##    ##"<<endl;
	   cout<<"    ##       ###   ###   #######\t #######   ##   #####   ########"<<endl;
	return 0;
}