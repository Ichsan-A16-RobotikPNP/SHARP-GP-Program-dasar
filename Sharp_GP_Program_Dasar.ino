#define sensorIR A0
float sensorValue,cm;

void setup() {
Serial.begin (9600);
}

void loop() {
  sensorValue =analogRead(sensorIR);
  //baca data analog
  //Rumus Sensor Sharp GP
  cm=4192.936*pow(sensorValue,-0.935)-3.937;
  //-------------------------------------------
    delay(100);
    Serial.print("|Cm: ");
    Serial.println(cm);
}
// nb :
// 1. data sensor sharp GP tergantung pada kondisi pencahayaan suatu ruangan...
// 2. data sensor sharp gp akan bernilai 'inf' jika ada salah satu kabel yang copot
// 3. sensor sharp GP disebut sensor aktif karena sumber infrarednya berasal dari sensor itu sendiri
// 4. sensor sharp GP sangat sensitif terhadap cahaya terang karena akan mengganggu kinerja dari sensor.
// 5. hasil pembacaan data pada kondisi terang terganggu dengan adanya sumber cahaya lain  dari cahaya selain sharp gp itu
