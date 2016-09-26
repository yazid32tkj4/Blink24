/*
  Blink
  Menyalakan LED pada Pin 9 selama 4 detik dan Mematikanya selama 4 detik.
 
  Ini contoh Kode Programnya.
 */
 
int led = 9;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital Pin 9.

void setup() 
{                
  pinMode(led, OUTPUT);//Mengatur Digital Pin sebagai Output.     
}

void loop() 
{
  digitalWrite(led, HIGH);   // Mengatur LED agar Menyala.
  delay(5000);               // Tunggu sampai 5 detik.
  digitalWrite(led, LOW);    // Mengatur LED agar Mati.
  delay(5000);               // Tunggu samapi 5 detik.
}
