//cable 1
const int cable_1_24v = 1;
const int cable_1_gnd = 2; 
const int cable_1_ol = 3;
const int cable_1_sc = 4;

//cable 2
const int cable_2_24v = 5;
const int cable_2_gnd = 6; 
const int cable_2_ol = 7;
const int cable_2_sc = 8;

//cable 3
const int cable_3_24v = 9;
const int cable_3_gnd = 10; 
const int cable_3_ol = 11;
const int cable_3_sc = 12;

//cable 4
const int cable_4_24v = 13;
const int cable_4_gnd = 14; 
const int cable_4_ol = 15;
const int cable_4_sc = 16;

//cable 5
const int cable_5_24v = 17;
const int cable_5_gnd = 18; 
const int cable_5_ol = 19;
const int cable_5_sc = 20;

//cable 6
const int cable_6_24v = 21;
const int cable_6_gnd = 22; 
const int cable_6_ol = 23;
const int cable_6_sc = 24;

//cable 7
const int cable_7_24v = 25;
const int cable_7_gnd = 26; 
const int cable_7_ol = 27;
const int cable_7_sc = 28;

//cable 8
const int cable_8_24v = 29;
const int cable_8_gnd = 30; 
const int cable_8_ol = 31;
const int cable_8_sc = 32;

//cable 9
const int cable_9_24v = 33;
const int cable_9_gnd = 34; 
const int cable_9_ol = 35;
const int cable_9_sc = 36;

//cable 10
const int cable_10_24v = 37;
const int cable_10_gnd = 38; 
const int cable_10_ol = 39;
const int cable_10_sc = 40;

run_counter = 0;


void setup() {
    Serial.begin(9600);
    pinMode(cable_1_24v,INPUT);
    pinMode(cable_1_gnd,INPUT);
    pinMode(cable_1_ol,INPUT);
    pinMode(cable_1_sc,INPUT);

    pinMode(cable_2_24v,INPUT);
    pinMode(cable_2_gnd,INPUT);
    pinMode(cable_2_ol,INPUT);
    pinMode(cable_2_sc,INPUT);

    pinMode(cable_3_24v,INPUT);
    pinMode(cable_3_gnd,INPUT);
    pinMode(cable_3_ol,INPUT);
    pinMode(cable_3_sc,INPUT);

    pinMode(cable_4_24v,INPUT);
    pinMode(cable_4_gnd,INPUT);
    pinMode(cable_4_ol,INPUT);
    pinMode(cable_4_sc,INPUT);

    pinMode(cable_5_24v,INPUT);
    pinMode(cable_5_gnd,INPUT);
    pinMode(cable_5_ol,INPUT);
    pinMode(cable_5_sc,INPUT);
    
    pinMode(cable_6_24v,INPUT);
    pinMode(cable_6_gnd,INPUT);
    pinMode(cable_6_ol,INPUT);
    pinMode(cable_6_sc,INPUT);
    
    pinMode(cable_7_24v,INPUT);
    pinMode(cable_7_gnd,INPUT);
    pinMode(cable_7_ol,INPUT);
    pinMode(cable_7_sc,INPUT);

    pinMode(cable_8_24v,INPUT);
    pinMode(cable_8_gnd,INPUT);
    pinMode(cable_8_ol,INPUT);
    pinMode(cable_8_sc,INPUT);

    pinMode(cable_9_24v,INPUT);
    pinMode(cable_9_gnd,INPUT);
    pinMode(cable_9_ol,INPUT);
    pinMode(cable_9_sc,INPUT);

    pinMode(cable_10_24v,INPUT);
    pinMode(cable_10_gnd,INPUT);
    pinMode(cable_10_ol,INPUT);
    pinMode(cable_10_sc,INPUT);
}

void loop() {
    int val_cable_1_24v = digitalRead(cable_1_24v);
    int val_cable_1_gnd = digitalRead(cable_1_24v);
    int val_cable_1_ol = digitalRead(cable_1_24v);
    int val_cable_1_sc = digitalRead(cable_1_24v);

    int val_cable_2_24v = digitalRead(cable_1_24v);
    int val_cable_2_gnd = digitalRead(cable_1_24v);
    int val_cable_2_ol = digitalRead(cable_1_24v);
    int val_cable_2_sc = digitalRead(cable_1_24v);

    int val_cable_3_24v = digitalRead(cable_1_24v);
    int val_cable_3_gnd = digitalRead(cable_1_24v);
    int val_cable_3_ol = digitalRead(cable_1_24v);
    int val_cable_3_sc = digitalRead(cable_1_24v);
    
    int val_cable_4_24v = digitalRead(cable_1_24v);
    int val_cable_4_gnd = digitalRead(cable_1_24v);
    int val_cable_4_ol = digitalRead(cable_1_24v);
    int val_cable_4_sc = digitalRead(cable_1_24v);
    
    int val_cable_5_24v = digitalRead(cable_1_24v);
    int val_cable_5_gnd = digitalRead(cable_1_24v);
    int val_cable_5_ol = digitalRead(cable_1_24v);
    int val_cable_5_sc = digitalRead(cable_1_24v);
    
    int val_cable_6_24v = digitalRead(cable_1_24v);
    int val_cable_6_gnd = digitalRead(cable_1_24v);
    int val_cable_6_ol = digitalRead(cable_1_24v);
    int val_cable_6_sc = digitalRead(cable_1_24v);
    
    int val_cable_7_24v = digitalRead(cable_1_24v);
    int val_cable_7_gnd = digitalRead(cable_1_24v);
    int val_cable_7_ol = digitalRead(cable_1_24v);
    int val_cable_7_sc = digitalRead(cable_1_24v);
    
    int val_cable_8_24v = digitalRead(cable_1_24v);
    int val_cable_8_gnd = digitalRead(cable_1_24v);
    int val_cable_8_old = digitalRead(cable_1_24v);
    int val_cable_8_sc = digitalRead(cable_1_24v);
    
    int val_cable_9_24v = digitalRead(cable_1_24v);
    int val_cable_9_gnd = digitalRead(cable_1_24v);
    int val_cable_9_ol = digitalRead(cable_1_24v);
    int val_cable_9_sc = digitalRead(cable_1_24v);
    
    int val_cable_10_24v = digitalRead(cable_1_24v);
    int val_cable_10_gnd = digitalRead(cable_1_24v);
    int val_cable_10_ol = digitalRead(cable_1_24v);
    int val_cable_10_sc = digitalRead(cable_1_24v);
    
    while (run_counter < 100000){
        //cable 1
        if (val_cable_1_24v == HIGH){
            Serial.println("Cable 1 24V: PASS")
            }else if (val_cable_1_24v == LOW){
                Serial.println("Cable 1 24V: FAIL")
            }else{
                Serial.println("Cable 1 24V: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        if (val_cable_1_ol == HIGH){
            Serial.println("Cable 1 OL: PASS")
            }else if (val_cable_1_ol == LOW){
                Serial.println("Cable 1 OL: FAIL")
            }else{
                Serial.println("Cable 1 OL: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        
        //cable 2
        if (val_cable_2_24v == HIGH){
            Serial.println("Cable 2 24V: PASS")
            }else if (val_cable_2_24v == LOW){
                Serial.println("Cable 2 24V: FAIL")
            }else{
                Serial.println("Cable 2 24V: No Result")
            }
        if (val_cable_2_gnd == HIGH){
            Serial.println("Cable 2 GND: PASS")
            }else if (val_cable_2_gnd == LOW){
                Serial.println("Cable 2 GND: FAIL")
            }else{
                Serial.println("Cable 2 GND: No Result")
            }
        if (val_cable_2_ol == HIGH){
            Serial.println("Cable 2 OL: PASS")
            }else if (val_cable_2_ol == LOW){
                Serial.println("Cable 2 OL: FAIL")
            }else{
                Serial.println("Cable 2 OL: No Result")
            }
        if (val_cable_2_gnd == HIGH){
            Serial.println("Cable 2 GND: PASS")
            }else if (val_cable_2_gnd == LOW){
                Serial.println("Cable 2 GND: FAIL")
            }else{
                Serial.println("Cable 2 GND: No Result")
            }

        //cable 3
        if (val_cable_1_24v == HIGH){
            Serial.println("Cable 1 24V: PASS")
            }else if (val_cable_1_24v == LOW){
                Serial.println("Cable 1 24V: FAIL")
            }else{
                Serial.println("Cable 1 24V: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        if (val_cable_1_ol == HIGH){
            Serial.println("Cable 1 OL: PASS")
            }else if (val_cable_1_ol == LOW){
                Serial.println("Cable 1 OL: FAIL")
            }else{
                Serial.println("Cable 1 OL: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }

        //cable 4
        if (val_cable_1_24v == HIGH){
            Serial.println("Cable 1 24V: PASS")
            }else if (val_cable_1_24v == LOW){
                Serial.println("Cable 1 24V: FAIL")
            }else{
                Serial.println("Cable 1 24V: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        if (val_cable_1_ol == HIGH){
            Serial.println("Cable 1 OL: PASS")
            }else if (val_cable_1_ol == LOW){
                Serial.println("Cable 1 OL: FAIL")
            }else{
                Serial.println("Cable 1 OL: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }

        //cable 5
        if (val_cable_1_24v == HIGH){
            Serial.println("Cable 1 24V: PASS")
            }else if (val_cable_1_24v == LOW){
                Serial.println("Cable 1 24V: FAIL")
            }else{
                Serial.println("Cable 1 24V: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        if (val_cable_1_ol == HIGH){
            Serial.println("Cable 1 OL: PASS")
            }else if (val_cable_1_ol == LOW){
                Serial.println("Cable 1 OL: FAIL")
            }else{
                Serial.println("Cable 1 OL: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }

        //cable 6
        if (val_cable_1_24v == HIGH){
            Serial.println("Cable 1 24V: PASS")
            }else if (val_cable_1_24v == LOW){
                Serial.println("Cable 1 24V: FAIL")
            }else{
                Serial.println("Cable 1 24V: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        if (val_cable_1_ol == HIGH){
            Serial.println("Cable 1 OL: PASS")
            }else if (val_cable_1_ol == LOW){
                Serial.println("Cable 1 OL: FAIL")
            }else{
                Serial.println("Cable 1 OL: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }

        //cable 7
        if (val_cable_1_24v == HIGH){
            Serial.println("Cable 1 24V: PASS")
            }else if (val_cable_1_24v == LOW){
                Serial.println("Cable 1 24V: FAIL")
            }else{
                Serial.println("Cable 1 24V: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        if (val_cable_1_ol == HIGH){
            Serial.println("Cable 1 OL: PASS")
            }else if (val_cable_1_ol == LOW){
                Serial.println("Cable 1 OL: FAIL")
            }else{
                Serial.println("Cable 1 OL: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }

        //cable 8
        if (val_cable_1_24v == HIGH){
            Serial.println("Cable 1 24V: PASS")
            }else if (val_cable_1_24v == LOW){
                Serial.println("Cable 1 24V: FAIL")
            }else{
                Serial.println("Cable 1 24V: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        if (val_cable_1_ol == HIGH){
            Serial.println("Cable 1 OL: PASS")
            }else if (val_cable_1_ol == LOW){
                Serial.println("Cable 1 OL: FAIL")
            }else{
                Serial.println("Cable 1 OL: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }

        //cable 9
        if (val_cable_1_24v == HIGH){
            Serial.println("Cable 1 24V: PASS")
            }else if (val_cable_1_24v == LOW){
                Serial.println("Cable 1 24V: FAIL")
            }else{
                Serial.println("Cable 1 24V: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        if (val_cable_1_ol == HIGH){
            Serial.println("Cable 1 OL: PASS")
            }else if (val_cable_1_ol == LOW){
                Serial.println("Cable 1 OL: FAIL")
            }else{
                Serial.println("Cable 1 OL: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }

        //cable 10
        if (val_cable_1_24v == HIGH){
            Serial.println("Cable 1 24V: PASS")
            }else if (val_cable_1_24v == LOW){
                Serial.println("Cable 1 24V: FAIL")
            }else{
                Serial.println("Cable 1 24V: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }
        if (val_cable_1_ol == HIGH){
            Serial.println("Cable 1 OL: PASS")
            }else if (val_cable_1_ol == LOW){
                Serial.println("Cable 1 OL: FAIL")
            }else{
                Serial.println("Cable 1 OL: No Result")
            }
        if (val_cable_1_gnd == HIGH){
            Serial.println("Cable 1 GND: PASS")
            }else if (val_cable_1_gnd == LOW){
                Serial.println("Cable 1 GND: FAIL")
            }else{
                Serial.println("Cable 1 GND: No Result")
            }

            

        run_counter += 1; 
        delay(100)
        }

        
    
    
    


}