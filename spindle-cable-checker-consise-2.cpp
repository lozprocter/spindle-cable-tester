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

//run counter to stop while loop
run_counter = 0;
//list of pins with assigned names
int pins[40] = {cable_1_24v, cable_1_gnd, cable_1_ol, cable_1_sc, cable_2_24v, cable_2_gnd,  cable_2_ol, cable_2_sc, cable_3_24v, cable_3_gnd,  cable_3_ol, cable_3_sc, cable_4_24v, cable_4_gnd, cable_4_ol, cable_4_sc, cable_5_24v, cable_5_gnd, cable_5_ol, cable_5_sc, cable_6_24v, cable_6_gnd, cable_6_ol, cable_6_sc, cable_7_24v, cable_7_gnd, cable_7_ol, cable_7_sc, cable_8_24v, cable_8_gnd, cable_8_ol, cable_8_sc, cable_9_24v, cable_9_gnd, cable_9_ol, cable_9_sc, cable_10_24v, cable_10_gnd, cable_10_ol, cable_10_sc,};

void setup(){
    Serial.begin(9600);
    for (int i : pins){
        pinMode(i, INPUT);
    }
}

void loop(){
    for (int i : pins){
        digitalRead(i);
        if (i == HIGH){
            Serial.println(i": PASS");
            }else if (i == LOW){
                Serial.println(i": FAIL");
            }else{
                Serial.println(i": No Result");
            }
    }

    run_counter += 1; 
    delay(100);
    

}