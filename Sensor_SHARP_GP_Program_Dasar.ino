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

//    Kondisi Normal(Pencahayaan Normal, dalam ruangan)
//    ->Sensor 1                                                     ->Sensor 6
//      => Pergeseran data sebesar 2-3 cm                             => Pergeseran data sebesar 0.1-0.8 cm

//    ->Sensor 2                                                     ->Sensor 7
//      => Pergeseran data sebesar 1-2 cm                             => Pergeseran data sebesar 0 cm (Bagus)

//    ->Sensor 3                                                     ->Sensor 8
//      => Pergeseran data sebesar 1-2 cm                             => Pergeseran data sebesar 1-2 cm

//    ->Sensor 4                                                     ->Sensor 9
//      => Pergeseran data sebesar 0.2-0.9 cm                         => Pergeseran data sebesar 0.2-0.5 cm

//    ->Sensor 5                                                     ->Sensor 10
//      => Pergeseran data sebesar 1-2 cm                             => Pergeseran data sebesar 0 cm(Bagus)
