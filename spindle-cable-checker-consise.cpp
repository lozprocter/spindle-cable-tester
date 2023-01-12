int pins[40] = {cable_1_24v, cable_1_gnd, cable_1_ol, cable_1_sc, cable_2_24v, cable_2_gnd,  cable_2_ol, cable_2_sc, cable_3_24v, cable_3_gnd,  cable_3_ol, cable_3_sc, cable_4_24v, cable_4_gnd, cable_4_ol, cable_4_sc, cable_5_24v, cable_5_gnd, cable_5_ol, cable_5_sc, cable_6_24v, cable_6_gnd, cable_6_ol, cable_6_sc, cable_7_24v, cable_7_gnd, cable_7_ol, cable_7_sc, cable_8_24v, cable_8_gnd, cable_8_ol, cable_8_sc, cable_9_24v, cable_9_gnd, cable_9_ol, cable_9_sc, cable_10_24v, cable_10_gnd, cable_10_ol, cable_10_sc,};
for (int i : pins){
    pinMode(i, INPUT)
}