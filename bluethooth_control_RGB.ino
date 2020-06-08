// Designed by: Juan Rodrigo Guzman Martinez

//conexiones del modulo bluethooth al arduino
//    Arduino        bluethooth
//     tx     -       rx
//     rx     -       tx
//     Gnd    -       Gnd
//     5v     -       5v


/* ojo... desconecte el modulo bluethooth antes de cargar el programa
 si no lo hace habra un conflicto y no permitira subir el codigo.
 
 */

int LED_ROJO= 2; // Declaramos el pin 2 con el nombre de LED_ROJO
int LED_VERDE= 3; // Declaramos el pin 3 con el nombre de LED_VERDE
int LED_AZUL= 4; // Declaramos el pin 4 con el nombre de LED_AZUL

int estado; // Declaramos una variable llamada estado donde se almacenaran los datos recibidos

void setup() {
 Serial.begin(9600); // Inicializamos el monitor serial a 9600 baudios
 pinMode(LED_ROJO, OUTPUT); // Declaramos LED_ROJO como salida
 pinMode(LED_VERDE, OUTPUT); // Declaramos LED_VERDE como salida
 pinMode(LED_AZUL, OUTPUT); // Declaramos LED_AZUL como salida
}

void loop() {
if(Serial.available()>0) { // Recibimos los datos y realizamos la lectura por la variable estado
  estado=Serial.read();
}

if(estado=='1'){ // Si recibimos el dato 1 entonces enciende el LED_ROJO
digitalWrite(LED_ROJO, HIGH);
}
if(estado=='2'){ // Si recibimos el dato 2 entonces apaga el LED_ROJO
digitalWrite(LED_ROJO, LOW);
}
if(estado=='3'){ // Si recibimos el dato 3 entonces enciende el LED_VERDE
digitalWrite(LED_VERDE, HIGH);
}
if(estado=='4'){ // Si recibimos el dato 4 entonces apaga el LED_VERDE
digitalWrite(LED_VERDE, LOW);
}
if(estado=='5'){ // Si recibimos el dato 5 entonces enciende el LED_AZUL
digitalWrite(LED_AZUL, HIGH);
}
if(estado=='6'){ // Si recibimos el dato 6 entonces apaga el LED_AZUL
digitalWrite(LED_AZUL, LOW);
}
}
