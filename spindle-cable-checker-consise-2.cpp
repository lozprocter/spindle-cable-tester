//cable 1
const int cable_1_24v = 6;
const int cable_1_gnd = 9; 
const int cable_1_ol = 8;
const int cable_1_sc = 7;

//cable 2
const int cable_2_24v = 10;
const int cable_2_gnd = 13; 
const int cable_2_ol = 12;
const int cable_2_sc = 11;

//cable 3
const int cable_3_24v = 22;
const int cable_3_gnd = 25; 
const int cable_3_ol = 24;
const int cable_3_sc = 23;

//cable 4
const int cable_4_24v = 26;
const int cable_4_gnd = 29; 
const int cable_4_ol = 28;
const int cable_4_sc = 27;

//cable 5
const int cable_5_24v = 30;
const int cable_5_gnd = 33; 
const int cable_5_ol = 32;
const int cable_5_sc = 31;

//cable 6
const int cable_6_24v = 34;
const int cable_6_gnd = 37; 
const int cable_6_ol = 36;
const int cable_6_sc = 35;

//cable 7
const int cable_7_24v = 38;
const int cable_7_gnd = 41; 
const int cable_7_ol = 40;
const int cable_7_sc = 39;

//cable 8
const int cable_8_24v = 42;
const int cable_8_gnd = 45; 
const int cable_8_ol = 44;
const int cable_8_sc = 43;

//cable 9
const int cable_9_24v = 46;
const int cable_9_gnd = 49; 
const int cable_9_ol = 48;
const int cable_9_sc = 47;

//cable 10
const int cable_10_24v = 50;
const int cable_10_gnd = 53; 
const int cable_10_ol = 52;
const int cable_10_sc = 51;

//list of pins with assigned names
int pins[40] = {cable_1_24v, cable_1_gnd, cable_1_ol, cable_1_sc, cable_2_24v, cable_2_gnd,  cable_2_ol, cable_2_sc, cable_3_24v, cable_3_gnd,  cable_3_ol, cable_3_sc, cable_4_24v, cable_4_gnd, cable_4_ol, cable_4_sc, cable_5_24v, cable_5_gnd, cable_5_ol, cable_5_sc, cable_6_24v, cable_6_gnd, cable_6_ol, cable_6_sc, cable_7_24v, cable_7_gnd, cable_7_ol, cable_7_sc, cable_8_24v, cable_8_gnd, cable_8_ol, cable_8_sc, cable_9_24v, cable_9_gnd, cable_9_ol, cable_9_sc, cable_10_24v, cable_10_gnd, cable_10_ol, cable_10_sc,};
char pin_names[40] = {"cable_1_24v", "cable_1_gnd", "cable_1_ol", "cable_1_sc", "cable_2_24v", "cable_2_gnd",  "cable_2_ol", "cable_2_sc", "cable_3_24v", "cable_3_gnd",  "cable_3_ol", "cable_3_sc", "cable_4_24v", "cable_4_gnd", "cable_4_ol", "cable_4_sc", "cable_5_24v", "cable_5_gnd", "cable_5_ol", "cable_5_sc", "cable_6_24v", "cable_6_gnd", "cable_6_ol", "cable_6_sc", "cable_7_24v", "cable_7_gnd", "cable_7_ol", "cable_7_sc", "cable_8_24v", "cable_8_gnd", "cable_8_ol", "cable_8_sc", "cable_9_24v", "cable_9_gnd", "cable_9_ol", "cable_9_sc", "cable_10_24v", "cable_10_gnd", "cable_10_ol", "cable_10_sc"};
int fails[40] = {};

//run counter to stop while loop
int run_counter = 0;

void setup(){
    Serial.begin(9600);
    for (int i : pins){
        pinMode(i, INPUT);
        fails[i] = 0;
    }
}

void loop(){
    for (int i : pins){
        if (digitalRead(i) == HIGH){
            Serial.print(pin_names[i]);
            Serial.println(": PASS");
            }else{
                Serial.print(pin_names[i]);
                Serial.println(": FAIL");
                fails[i] += 1;
            }
    }

    run_counter += 1; 
    delay(100);
    

}