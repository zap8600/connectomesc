// Yippee! My first ever C program is a Connectome of the C. Elegans!
#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

typedef struct {
    void (*fireNeuron)();
    int values[2];
} neuron;

std::unordered_map<std::string, neuron> postSynaptic;

int thisState = 0;
int nextState = 1;

int fireThreshold = 30;

int accumLeft = 0;
int accumRight = 0;

bool stimulateHungerNeurons = true;
bool stimulateNoseTouchNeurons = false;
bool stimulateFoodSenseNeurons = false;

void ADAL() {
    postSynaptic["ADAR"].values[nextState] += 2;
    postSynaptic["ADFL"].values[nextState] += 1;
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 2;
    postSynaptic["ASHL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 4;
    postSynaptic["AVBR"].values[nextState] += 7;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVJR"].values[nextState] += 5;
    postSynaptic["FLPR"].values[nextState] += 1;
    postSynaptic["PVQL"].values[nextState] += 1;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 3;
    postSynaptic["RIPL"].values[nextState] += 1;
    postSynaptic["SMDVR"].values[nextState] += 2;
}

void ADAR() {
    postSynaptic["ADAL"].values[nextState] += 1;
    postSynaptic["ADFR"].values[nextState] += 1;
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["ASHR"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 5;
    postSynaptic["AVDL"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 3;
    postSynaptic["PVQR"].values[nextState] += 1;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RIMR"].values[nextState] += 5;
    postSynaptic["RIPR"].values[nextState] += 1;
    postSynaptic["RIVR"].values[nextState] += 1;
    postSynaptic["SMDVL"].values[nextState] += 2;
}

void ADEL() {
    postSynaptic["ADAL"].values[nextState] += 1;
    postSynaptic["ADER"].values[nextState] += 1;
    postSynaptic["AINL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 3;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVKR"].values[nextState] += 1;
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["BDUL"].values[nextState] += 1;
    postSynaptic["CEPDL"].values[nextState] += 1;
    postSynaptic["FLPL"].values[nextState] += 1;
    postSynaptic["IL1L"].values[nextState] += 1;
    postSynaptic["IL2L"].values[nextState] += 1;
    postSynaptic["MDL05"].values[nextState] += 1;
    postSynaptic["OLLL"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 1;
    postSynaptic["RIFL"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 5;
    postSynaptic["RIGR"].values[nextState] += 3;
    postSynaptic["RIH"].values[nextState] += 2;
    postSynaptic["RIVL"].values[nextState] += 1;
    postSynaptic["RIVR"].values[nextState] += 1;
    postSynaptic["RMDL"].values[nextState] += 2;
    postSynaptic["RMGL"].values[nextState] += 1;
    postSynaptic["RMHL"].values[nextState] += 1;
    postSynaptic["SIADR"].values[nextState] += 1;
    postSynaptic["SIBDR"].values[nextState] += 1;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["URBL"].values[nextState] += 1;
}

void ADER() {
    postSynaptic["ADAR"].values[nextState] += 1;
    postSynaptic["ADEL"].values[nextState] += 2;
    postSynaptic["ALA"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 5;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 2;
    postSynaptic["AVKR"].values[nextState] += 1;
    postSynaptic["CEPDR"].values[nextState] += 1;
    postSynaptic["FLPL"].values[nextState] += 1;
    postSynaptic["FLPR"].values[nextState] += 1;
    postSynaptic["OLLR"].values[nextState] += 2;
    postSynaptic["PVR"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 7;
    postSynaptic["RIGR"].values[nextState] += 4;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 2;
    postSynaptic["SAAVR"].values[nextState] += 1;
}

void ADFL() {
    postSynaptic["ADAL"].values[nextState] += 2;
    postSynaptic["AIZL"].values[nextState] += 12;
    postSynaptic["AUAL"].values[nextState] += 5;
    postSynaptic["OLQVL"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 15;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RIR"].values[nextState] += 2;
    postSynaptic["SMBVL"].values[nextState] += 2;
}

void ADFR() {
    postSynaptic["ADAR"].values[nextState] += 2;
    postSynaptic["AIAR"].values[nextState] += 1;
    postSynaptic["AIYR"].values[nextState] += 1;
    postSynaptic["AIZR"].values[nextState] += 8;
    postSynaptic["ASHR"].values[nextState] += 1;
    postSynaptic["AUAR"].values[nextState] += 4;
    postSynaptic["AWBR"].values[nextState] += 1;
    postSynaptic["PVPR"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 16;
    postSynaptic["RIGR"].values[nextState] += 3;
    postSynaptic["RIR"].values[nextState] += 3;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["SMBVR"].values[nextState] += 2;
    postSynaptic["URXR"].values[nextState] += 1;
}

void ADLL() {
    postSynaptic["ADLR"].values[nextState] += 1;
    postSynaptic["AIAL"].values[nextState] += 6;
    postSynaptic["AIBL"].values[nextState] += 7;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["ALA"].values[nextState] += 2;
    postSynaptic["ASER"].values[nextState] += 3;
    postSynaptic["ASHL"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 3;
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AVJR"].values[nextState] += 3;
    postSynaptic["AWBL"].values[nextState] += 2;
    postSynaptic["OLQVL"].values[nextState] += 2;
    postSynaptic["RIPL"].values[nextState] += 1;
    postSynaptic["RMGL"].values[nextState] += 1;
}

void ADLR() {
    postSynaptic["ADLL"].values[nextState] += 1;
    postSynaptic["AIAR"].values[nextState] += 10;
    postSynaptic["AIBR"].values[nextState] += 10;
    postSynaptic["ASER"].values[nextState] += 1;
    postSynaptic["ASHR"].values[nextState] += 3;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["AVDL"].values[nextState] += 5;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["AWCR"].values[nextState] += 3;
    postSynaptic["OLLR"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RICR"].values[nextState] += 1;
}

void AFDL() {
    postSynaptic["AFDR"].values[nextState] += 1;
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AINR"].values[nextState] += 1;
    postSynaptic["AIYL"].values[nextState] += 7;
}

void AFDR() {
    postSynaptic["AFDL"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AIYR"].values[nextState] += 13;
    postSynaptic["ASER"].values[nextState] += 1;
}

void AIAL() {
    postSynaptic["ADAL"].values[nextState] += 1;
    postSynaptic["AIAR"].values[nextState] += 1;
    postSynaptic["AIBL"].values[nextState] += 10;
    postSynaptic["AIML"].values[nextState] += 2;
    postSynaptic["AIZL"].values[nextState] += 1;
    postSynaptic["ASER"].values[nextState] += 3;
    postSynaptic["ASGL"].values[nextState] += 1;
    postSynaptic["ASHL"].values[nextState] += 1;
    postSynaptic["ASIL"].values[nextState] += 2;
    postSynaptic["ASKL"].values[nextState] += 3;
    postSynaptic["AWAL"].values[nextState] += 1;
    postSynaptic["AWCR"].values[nextState] += 1;
    postSynaptic["HSNL"].values[nextState] += 1;
    postSynaptic["RIFL"].values[nextState] += 1;
    postSynaptic["RMGL"].values[nextState] += 1;
}

void AIAR() {
    postSynaptic["ADAR"].values[nextState] += 1;
    postSynaptic["ADFR"].values[nextState] += 1;
    postSynaptic["ADLR"].values[nextState] += 2;
    postSynaptic["AIAL"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 14;
    postSynaptic["AIZR"].values[nextState] += 1;
    postSynaptic["ASER"].values[nextState] += 1;
    postSynaptic["ASGR"].values[nextState] += 1;
    postSynaptic["ASIR"].values[nextState] += 2;
    postSynaptic["AWAR"].values[nextState] += 2;
    postSynaptic["AWCL"].values[nextState] += 1;
    postSynaptic["AWCR"].values[nextState] += 3;
    postSynaptic["RIFR"].values[nextState] += 2;
}

void AIBL() {
    postSynaptic["AFDL"].values[nextState] += 1;
    postSynaptic["AIYL"].values[nextState] += 1;
    postSynaptic["ASER"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 5;
    postSynaptic["DVC"].values[nextState] += 1;
    postSynaptic["FLPL"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 4;
    postSynaptic["RIFL"].values[nextState] += 1;
    postSynaptic["RIGR"].values[nextState] += 3;
    postSynaptic["RIML"].values[nextState] += 2;
    postSynaptic["RIMR"].values[nextState] += 1;
    postSynaptic["RIVL"].values[nextState] += 1;
    postSynaptic["SAADL"].values[nextState] += 2;
    postSynaptic["SAADR"].values[nextState] += 2;
    postSynaptic["SMDDR"].values[nextState] += 4;
}

void AIBR() {
    postSynaptic["AFDR"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 3;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["DB1"].values[nextState] += 1;
    postSynaptic["DVC"].values[nextState] += 2;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 4;
    postSynaptic["RIGL"].values[nextState] += 3;
    postSynaptic["RIML"].values[nextState] += 1;
    postSynaptic["RIMR"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["RIVR"].values[nextState] += 1;
    postSynaptic["SAADL"].values[nextState] += 1;
    postSynaptic["SMDDL"].values[nextState] += 3;
    postSynaptic["SMDVL"].values[nextState] += 1;
    postSynaptic["VB1"].values[nextState] += 3;
}

void AIML() {
    postSynaptic["AIAL"].values[nextState] += 5;
    postSynaptic["ALML"].values[nextState] += 1;
    postSynaptic["ASGL"].values[nextState] += 2;
    postSynaptic["ASKL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["AVFL"].values[nextState] += 4;
    postSynaptic["AVFR"].values[nextState] += 1;
    postSynaptic["AVHL"].values[nextState] += 2;
    postSynaptic["AVHR"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["PVQL"].values[nextState] += 1;
    postSynaptic["RIFL"].values[nextState] += 1;
    postSynaptic["SIBDR"].values[nextState] += 1;
    postSynaptic["SMBVL"].values[nextState] += 1;
}

void AIMR() {
    postSynaptic["AIAR"].values[nextState] += 5;
    postSynaptic["ASGR"].values[nextState] += 2;
    postSynaptic["ASJR"].values[nextState] += 2;
    postSynaptic["ASKR"].values[nextState] += 3;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVFL"].values[nextState] += 1;
    postSynaptic["AVFR"].values[nextState] += 1;
    postSynaptic["HSNL"].values[nextState] += 1;
    postSynaptic["HSNR"].values[nextState] += 2;
    postSynaptic["OLQDR"].values[nextState] += 1;
    postSynaptic["PVNR"].values[nextState] += 1;
    postSynaptic["RIFR"].values[nextState] += 1;
    postSynaptic["RMGR"].values[nextState] += 1;
}

void AINL() {
    postSynaptic["ADEL"].values[nextState] += 1;
    postSynaptic["AFDR"].values[nextState] += 5;
    postSynaptic["AINR"].values[nextState] += 2;
    postSynaptic["ASEL"].values[nextState] += 3;
    postSynaptic["ASGR"].values[nextState] += 2;
    postSynaptic["AUAR"].values[nextState] += 2;
    postSynaptic["BAGL"].values[nextState] += 3;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 2;
}

void AINR() {
    postSynaptic["AFDL"].values[nextState] += 4;
    postSynaptic["AFDR"].values[nextState] += 1;
    postSynaptic["AIAL"].values[nextState] += 2;
    postSynaptic["AIBL"].values[nextState] += 2;
    postSynaptic["AINL"].values[nextState] += 2;
    postSynaptic["ASEL"].values[nextState] += 1;
    postSynaptic["ASER"].values[nextState] += 1;
    postSynaptic["ASGL"].values[nextState] += 1;
    postSynaptic["AUAL"].values[nextState] += 1;
    postSynaptic["AUAR"].values[nextState] += 1;
    postSynaptic["BAGR"].values[nextState] += 3;
    postSynaptic["RIBL"].values[nextState] += 2;
    postSynaptic["RID"].values[nextState] += 1;
}

void AIYL() {
    postSynaptic["AIYR"].values[nextState] += 1;
    postSynaptic["AIZL"].values[nextState] += 13;
    postSynaptic["AWAL"].values[nextState] += 3;
    postSynaptic["AWCL"].values[nextState] += 1;
    postSynaptic["AWCR"].values[nextState] += 1;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 7;
    postSynaptic["RIBL"].values[nextState] += 4;
    postSynaptic["RIML"].values[nextState] += 1;
}

void AIYR() {
    postSynaptic["ADFR"].values[nextState] += 1;
    postSynaptic["AIYL"].values[nextState] += 1;
    postSynaptic["AIZR"].values[nextState] += 8;
    postSynaptic["AWAR"].values[nextState] += 1;
    postSynaptic["HSNL"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 6;
    postSynaptic["RIBR"].values[nextState] += 2;
    postSynaptic["RIMR"].values[nextState] += 1;
}

void AIZL() {
    postSynaptic["AIAL"].values[nextState] += 3;
    postSynaptic["AIBL"].values[nextState] += 2;
    postSynaptic["AIBR"].values[nextState] += 8;
    postSynaptic["AIZR"].values[nextState] += 2;
    postSynaptic["ASEL"].values[nextState] += 1;
    postSynaptic["ASGL"].values[nextState] += 1;
    postSynaptic["ASHL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 5;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 8;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 4;
    postSynaptic["SMBDL"].values[nextState] += 9;
    postSynaptic["SMBVL"].values[nextState] += 7;
    postSynaptic["VB2"].values[nextState] += 1;
}

void AIZR() {
    postSynaptic["AIAR"].values[nextState] += 1;
    postSynaptic["AIBL"].values[nextState] += 8;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AIZL"].values[nextState] += 2;
    postSynaptic["ASGR"].values[nextState] += 1;
    postSynaptic["ASHR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 4;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["AWAR"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 7;
    postSynaptic["RIMR"].values[nextState] += 4;
    postSynaptic["SMBDR"].values[nextState] += 5;
    postSynaptic["SMBVR"].values[nextState] += 3;
    postSynaptic["SMDDR"].values[nextState] += 1;
}

void ALA() {
    postSynaptic["ADEL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 2;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["RID"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 1;
}

void ALML() {
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVM"].values[nextState] += 1;
    postSynaptic["BDUL"].values[nextState] += 6;
    postSynaptic["CEPDL"].values[nextState] += 3;
    postSynaptic["CEPVL"].values[nextState] += 2;
    postSynaptic["PVCL"].values[nextState] += 2;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVR"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 1;
    postSynaptic["RMGL"].values[nextState] += 1;
    postSynaptic["SDQL"].values[nextState] += 1;
}

void ALMR() {
    postSynaptic["AVM"].values[nextState] += 1;
    postSynaptic["BDUR"].values[nextState] += 5;
    postSynaptic["CEPDR"].values[nextState] += 1;
    postSynaptic["CEPVR"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 3;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["SIADL"].values[nextState] += 1;
}

void ALNL() {
    postSynaptic["SAAVL"].values[nextState] += 3;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["SMDVL"].values[nextState] += 1;
}

void ALNR() {
    postSynaptic["ADER"].values[nextState] += 1;
    postSynaptic["RMHR"].values[nextState] += 1;
    postSynaptic["SAAVR"].values[nextState] += 2;
    postSynaptic["SMBDL"].values[nextState] += 2;
    postSynaptic["SMDDR"].values[nextState] += 1;
    postSynaptic["SMDVL"].values[nextState] += 1;
}

void AQR() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 3;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 4;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 2;
    postSynaptic["AVKR"].values[nextState] += 1;
    postSynaptic["BAGL"].values[nextState] += 2;
    postSynaptic["BAGR"].values[nextState] += 2;
    postSynaptic["PVCR"].values[nextState] += 2;
    postSynaptic["PVPL"].values[nextState] += 7;
    postSynaptic["PVPR"].values[nextState] += 9;
    postSynaptic["RIAL"].values[nextState] += 3;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 2;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["URXL"].values[nextState] += 1;
}

void AS1() {
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["DA1"].values[nextState] += 2;
    postSynaptic["MDL05"].values[nextState] += 3;
    postSynaptic["MDL08"].values[nextState] += 3;
    postSynaptic["MDR05"].values[nextState] += 3;
    postSynaptic["MDR08"].values[nextState] += 4;
    postSynaptic["VA3"].values[nextState] += 1;
    postSynaptic["VD1"].values[nextState] += 5;
    postSynaptic["VD2"].values[nextState] += 1;
}

void AS2() {
    postSynaptic["DA2"].values[nextState] += 1;
    postSynaptic["DB1"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 1;
    postSynaptic["MDL07"].values[nextState] += 3;
    postSynaptic["MDL08"].values[nextState] += 2;
    postSynaptic["MDR07"].values[nextState] += 3;
    postSynaptic["MDR08"].values[nextState] += 3;
    postSynaptic["VA4"].values[nextState] += 2;
    postSynaptic["VD2"].values[nextState] += 10;
}

void AS3() {
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["DA2"].values[nextState] += 1;
    postSynaptic["DA3"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 1;
    postSynaptic["MDL09"].values[nextState] += 3;
    postSynaptic["MDL10"].values[nextState] += 3;
    postSynaptic["MDR09"].values[nextState] += 3;
    postSynaptic["MDR10"].values[nextState] += 3;
    postSynaptic["VA5"].values[nextState] += 2;
    postSynaptic["VD2"].values[nextState] += 1;
    postSynaptic["VD3"].values[nextState] += 15;
}

void AS4() {
    postSynaptic["AS5"].values[nextState] += 1;
    postSynaptic["DA3"].values[nextState] += 1;
    postSynaptic["MDL11"].values[nextState] += 2;
    postSynaptic["MDL12"].values[nextState] += 2;
    postSynaptic["MDR11"].values[nextState] += 3;
    postSynaptic["MDR12"].values[nextState] += 2;
    postSynaptic["VD4"].values[nextState] += 11;
}

void AS5() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["DD2"].values[nextState] += 1;
    postSynaptic["MDL11"].values[nextState] += 2;
    postSynaptic["MDL14"].values[nextState] += 3;
    postSynaptic["MDR11"].values[nextState] += 2;
    postSynaptic["MDR14"].values[nextState] += 3;
    postSynaptic["VA7"].values[nextState] += 1;
    postSynaptic["VD5"].values[nextState] += 9;
}

void AS6() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DA5"].values[nextState] += 2;
    postSynaptic["MDL13"].values[nextState] += 3;
    postSynaptic["MDL14"].values[nextState] += 2;
    postSynaptic["MDR13"].values[nextState] += 3;
    postSynaptic["MDR14"].values[nextState] += 2;
    postSynaptic["VA8"].values[nextState] += 1;
    postSynaptic["VD6"].values[nextState] += 13;
}

void AS7() {
    postSynaptic["AVAL"].values[nextState] += 6;
    postSynaptic["AVAR"].values[nextState] += 5;
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["MDL13"].values[nextState] += 2;
    postSynaptic["MDL16"].values[nextState] += 3;
    postSynaptic["MDR13"].values[nextState] += 2;
    postSynaptic["MDR16"].values[nextState] += 3;
}

void AS8() {
    postSynaptic["AVAL"].values[nextState] += 4;
    postSynaptic["AVAR"].values[nextState] += 3;
    postSynaptic["MDL15"].values[nextState] += 2;
    postSynaptic["MDL18"].values[nextState] += 3;
    postSynaptic["MDR15"].values[nextState] += 2;
    postSynaptic["MDR18"].values[nextState] += 3;
}

void AS9() {
    postSynaptic["AVAL"].values[nextState] += 4;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["DVB"].values[nextState] += 7;
    postSynaptic["MDL17"].values[nextState] += 2;
    postSynaptic["MDL20"].values[nextState] += 3;
    postSynaptic["MDR17"].values[nextState] += 2;
    postSynaptic["MDR20"].values[nextState] += 3;
}

void AS10() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["MDL19"].values[nextState] += 3;
    postSynaptic["MDL20"].values[nextState] += 2;
    postSynaptic["MDR19"].values[nextState] += 3;
    postSynaptic["MDR20"].values[nextState] += 2;
}

void AS11() {
    postSynaptic["MDL21"].values[nextState] += 1;
    postSynaptic["MDL22"].values[nextState] += 1;
    postSynaptic["MDL23"].values[nextState] += 1;
    postSynaptic["MDL24"].values[nextState] += 1;
    postSynaptic["MDR21"].values[nextState] += 1;
    postSynaptic["MDR22"].values[nextState] += 1;
    postSynaptic["MDR23"].values[nextState] += 1;
    postSynaptic["MDR24"].values[nextState] += 1;
    postSynaptic["PDA"].values[nextState] += 1;
    postSynaptic["PDB"].values[nextState] += 2;
    postSynaptic["VD13"].values[nextState] += 2;
}

void ASEL() {
    postSynaptic["ADFR"].values[nextState] += 1;
    postSynaptic["AIAL"].values[nextState] += 3;
    postSynaptic["AIBL"].values[nextState] += 7;
    postSynaptic["AIBR"].values[nextState] += 2;
    postSynaptic["AIYL"].values[nextState] += 13;
    postSynaptic["AIYR"].values[nextState] += 6;
    postSynaptic["AWCL"].values[nextState] += 4;
    postSynaptic["AWCR"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 1;
}

void ASER() {
    postSynaptic["AFDL"].values[nextState] += 1;
    postSynaptic["AFDR"].values[nextState] += 2;
    postSynaptic["AIAL"].values[nextState] += 1;
    postSynaptic["AIAR"].values[nextState] += 3;
    postSynaptic["AIBL"].values[nextState] += 2;
    postSynaptic["AIBR"].values[nextState] += 10;
    postSynaptic["AIYL"].values[nextState] += 2;
    postSynaptic["AIYR"].values[nextState] += 14;
    postSynaptic["AWAR"].values[nextState] += 1;
    postSynaptic["AWCL"].values[nextState] += 1;
    postSynaptic["AWCR"].values[nextState] += 1;
}

void ASGL() {
    postSynaptic["AIAL"].values[nextState] += 9;
    postSynaptic["AIBL"].values[nextState] += 3;
    postSynaptic["AINR"].values[nextState] += 2;
    postSynaptic["AIZL"].values[nextState] += 1;
    postSynaptic["ASKL"].values[nextState] += 1;
}

void ASGR() {
    postSynaptic["AIAR"].values[nextState] += 10;
    postSynaptic["AIBR"].values[nextState] += 2;
    postSynaptic["AINL"].values[nextState] += 1;
    postSynaptic["AIYR"].values[nextState] += 1;
    postSynaptic["AIZR"].values[nextState] += 1;
}

void ASHL() {
    postSynaptic["ADAL"].values[nextState] += 2;
    postSynaptic["ADFL"].values[nextState] += 3;
    postSynaptic["AIAL"].values[nextState] += 7;
    postSynaptic["AIBL"].values[nextState] += 5;
    postSynaptic["AIZL"].values[nextState] += 1;
    postSynaptic["ASHR"].values[nextState] += 1;
    postSynaptic["ASKL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 6;
    postSynaptic["AVDL"].values[nextState] += 2;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["RIAL"].values[nextState] += 4;
    postSynaptic["RICL"].values[nextState] += 2;
    postSynaptic["RIML"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 1;
    postSynaptic["RMGL"].values[nextState] += 1;
}

void ASHR() {
    postSynaptic["ADAR"].values[nextState] += 3;
    postSynaptic["ADFR"].values[nextState] += 2;
    postSynaptic["AIAR"].values[nextState] += 10;
    postSynaptic["AIBR"].values[nextState] += 3;
    postSynaptic["AIZR"].values[nextState] += 1;
    postSynaptic["ASHL"].values[nextState] += 1;
    postSynaptic["ASKR"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 5;
    postSynaptic["AVBR"].values[nextState] += 3;
    postSynaptic["AVDL"].values[nextState] += 5;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 3;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["PVPR"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 2;
    postSynaptic["RICR"].values[nextState] += 2;
    postSynaptic["RMGR"].values[nextState] += 1;
}

void ASIL() {
    postSynaptic["AIAL"].values[nextState] += 2;
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AIYL"].values[nextState] += 2;
    postSynaptic["AIZL"].values[nextState] += 1;
    postSynaptic["ASER"].values[nextState] += 1;
    postSynaptic["ASIR"].values[nextState] += 1;
    postSynaptic["ASKL"].values[nextState] += 2;
    postSynaptic["AWCL"].values[nextState] += 1;
    postSynaptic["AWCR"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 1;
}

void ASIR() {
    postSynaptic["AIAL"].values[nextState] += 1;
    postSynaptic["AIAR"].values[nextState] += 2;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["ASEL"].values[nextState] += 2;
    postSynaptic["ASHR"].values[nextState] += 1;
    postSynaptic["ASIL"].values[nextState] += 1;
    postSynaptic["AWCL"].values[nextState] += 1;
    postSynaptic["AWCR"].values[nextState] += 1;
}

void ASJL() {
    postSynaptic["ASJR"].values[nextState] += 1;
    postSynaptic["ASKL"].values[nextState] += 4;
    postSynaptic["HSNL"].values[nextState] += 1;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["PVQL"].values[nextState] += 14;
}

void ASJR() {
    postSynaptic["ASJL"].values[nextState] += 1;
    postSynaptic["ASKR"].values[nextState] += 4;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["PVQR"].values[nextState] += 13;
}

void ASKL() {
    postSynaptic["AIAL"].values[nextState] += 11;
    postSynaptic["AIBL"].values[nextState] += 2;
    postSynaptic["AIML"].values[nextState] += 2;
    postSynaptic["ASKR"].values[nextState] += 1;
    postSynaptic["PVQL"].values[nextState] += 5;
    postSynaptic["RMGL"].values[nextState] += 1;
}

void ASKR() {
    postSynaptic["AIAR"].values[nextState] += 11;
    postSynaptic["AIMR"].values[nextState] += 1;
    postSynaptic["ASHR"].values[nextState] += 1;
    postSynaptic["ASKL"].values[nextState] += 1;
    postSynaptic["AWAR"].values[nextState] += 1;
    postSynaptic["CEPVR"].values[nextState] += 1;
    postSynaptic["PVQR"].values[nextState] += 4;
    postSynaptic["RIFR"].values[nextState] += 1;
    postSynaptic["RMGR"].values[nextState] += 1;
}

void AUAL() {
    postSynaptic["AINR"].values[nextState] += 1;
    postSynaptic["AUAR"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 3;
    postSynaptic["AWBL"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 5;
    postSynaptic["RIBL"].values[nextState] += 9;
}

void AUAR() {
    postSynaptic["AINL"].values[nextState] += 1;
    postSynaptic["AIYR"].values[nextState] += 1;
    postSynaptic["AUAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 4;
    postSynaptic["AWBR"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 6;
    postSynaptic["RIBR"].values[nextState] += 13;
    postSynaptic["URXR"].values[nextState] += 1;
}

void AVAL() {
    postSynaptic["AS1"].values[nextState] += 3;
    postSynaptic["AS10"].values[nextState] += 3;
    postSynaptic["AS11"].values[nextState] += 4;
    postSynaptic["AS2"].values[nextState] += 1;
    postSynaptic["AS3"].values[nextState] += 3;
    postSynaptic["AS4"].values[nextState] += 1;
    postSynaptic["AS5"].values[nextState] += 4;
    postSynaptic["AS6"].values[nextState] += 1;
    postSynaptic["AS7"].values[nextState] += 14;
    postSynaptic["AS8"].values[nextState] += 9;
    postSynaptic["AS9"].values[nextState] += 12;
    postSynaptic["AVAR"].values[nextState] += 7;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVHL"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 2;
    postSynaptic["DA1"].values[nextState] += 4;
    postSynaptic["DA2"].values[nextState] += 4;
    postSynaptic["DA3"].values[nextState] += 6;
    postSynaptic["DA4"].values[nextState] += 10;
    postSynaptic["DA5"].values[nextState] += 8;
    postSynaptic["DA6"].values[nextState] += 21;
    postSynaptic["DA7"].values[nextState] += 4;
    postSynaptic["DA8"].values[nextState] += 4;
    postSynaptic["DA9"].values[nextState] += 3;
    postSynaptic["DB5"].values[nextState] += 2;
    postSynaptic["DB6"].values[nextState] += 4;
    postSynaptic["FLPL"].values[nextState] += 1;
    postSynaptic["LUAL"].values[nextState] += 2;
    postSynaptic["PVCL"].values[nextState] += 12;
    postSynaptic["PVCR"].values[nextState] += 11;
    postSynaptic["PVPL"].values[nextState] += 1;
    postSynaptic["RIMR"].values[nextState] += 3;
    postSynaptic["SABD"].values[nextState] += 4;
    postSynaptic["SABVR"].values[nextState] += 1;
    postSynaptic["SDQR"].values[nextState] += 1;
    postSynaptic["URYDL"].values[nextState] += 1;
    postSynaptic["URYVR"].values[nextState] += 1;
    postSynaptic["VA1"].values[nextState] += 3;
    postSynaptic["VA10"].values[nextState] += 6;
    postSynaptic["VA11"].values[nextState] += 7;
    postSynaptic["VA12"].values[nextState] += 2;
    postSynaptic["VA2"].values[nextState] += 5;
    postSynaptic["VA3"].values[nextState] += 3;
    postSynaptic["VA4"].values[nextState] += 3;
    postSynaptic["VA5"].values[nextState] += 8;
    postSynaptic["VA6"].values[nextState] += 10;
    postSynaptic["VA7"].values[nextState] += 2;
    postSynaptic["VA8"].values[nextState] += 19;
    postSynaptic["VA9"].values[nextState] += 8;
    postSynaptic["VB9"].values[nextState] += 5;
}

void AVAR() {
    postSynaptic["ADER"].values[nextState] += 1;
    postSynaptic["AS1"].values[nextState] += 3;
    postSynaptic["AS10"].values[nextState] += 2;
    postSynaptic["AS11"].values[nextState] += 6;
    postSynaptic["AS2"].values[nextState] += 2;
    postSynaptic["AS3"].values[nextState] += 2;
    postSynaptic["AS4"].values[nextState] += 1;
    postSynaptic["AS5"].values[nextState] += 2;
    postSynaptic["AS6"].values[nextState] += 3;
    postSynaptic["AS7"].values[nextState] += 8;
    postSynaptic["AS8"].values[nextState] += 9;
    postSynaptic["AS9"].values[nextState] += 6;
    postSynaptic["AVAL"].values[nextState] += 6;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 2;
    postSynaptic["AVER"].values[nextState] += 2;
    postSynaptic["DA1"].values[nextState] += 8;
    postSynaptic["DA2"].values[nextState] += 4;
    postSynaptic["DA3"].values[nextState] += 5;
    postSynaptic["DA4"].values[nextState] += 8;
    postSynaptic["DA5"].values[nextState] += 7;
    postSynaptic["DA6"].values[nextState] += 13;
    postSynaptic["DA7"].values[nextState] += 3;
    postSynaptic["DA8"].values[nextState] += 9;
    postSynaptic["DA9"].values[nextState] += 2;
    postSynaptic["DB3"].values[nextState] += 1;
    postSynaptic["DB5"].values[nextState] += 3;
    postSynaptic["DB6"].values[nextState] += 5;
    postSynaptic["LUAL"].values[nextState] += 1;
    postSynaptic["LUAR"].values[nextState] += 3;
    postSynaptic["PDEL"].values[nextState] += 1;
    postSynaptic["PDER"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 7;
    postSynaptic["PVCR"].values[nextState] += 8;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 2;
    postSynaptic["RIMR"].values[nextState] += 1;
    postSynaptic["SABD"].values[nextState] += 1;
    postSynaptic["SABVL"].values[nextState] += 6;
    postSynaptic["SABVR"].values[nextState] += 1;
    postSynaptic["URYDR"].values[nextState] += 1;
    postSynaptic["URYVL"].values[nextState] += 1;
    postSynaptic["VA10"].values[nextState] += 5;
    postSynaptic["VA11"].values[nextState] += 15;
    postSynaptic["VA12"].values[nextState] += 1;
    postSynaptic["VA2"].values[nextState] += 2;
    postSynaptic["VA3"].values[nextState] += 7;
    postSynaptic["VA4"].values[nextState] += 5;
    postSynaptic["VA5"].values[nextState] += 4;
    postSynaptic["VA6"].values[nextState] += 5;
    postSynaptic["VA7"].values[nextState] += 4;
    postSynaptic["VA8"].values[nextState] += 16;
    postSynaptic["VB9"].values[nextState] += 10;
    postSynaptic["VD13"].values[nextState] += 2;
}

void AVBL() {
    postSynaptic["AQR"].values[nextState] += 1;
    postSynaptic["AS10"].values[nextState] += 1;
    postSynaptic["AS3"].values[nextState] += 1;
    postSynaptic["AS4"].values[nextState] += 1;
    postSynaptic["AS5"].values[nextState] += 1;
    postSynaptic["AS6"].values[nextState] += 1;
    postSynaptic["AS7"].values[nextState] += 2;
    postSynaptic["AS9"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 7;
    postSynaptic["AVAR"].values[nextState] += 7;
    postSynaptic["AVBR"].values[nextState] += 4;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 2;
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["DB3"].values[nextState] += 1;
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["DB5"].values[nextState] += 1;
    postSynaptic["DB6"].values[nextState] += 2;
    postSynaptic["DB7"].values[nextState] += 2;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["PVNR"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RID"].values[nextState] += 1;
    postSynaptic["SDQR"].values[nextState] += 1;
    postSynaptic["SIBVL"].values[nextState] += 1;
    postSynaptic["VA10"].values[nextState] += 1;
    postSynaptic["VA2"].values[nextState] += 1;
    postSynaptic["VA7"].values[nextState] += 1;
    postSynaptic["VB1"].values[nextState] += 1;
    postSynaptic["VB10"].values[nextState] += 2;
    postSynaptic["VB11"].values[nextState] += 2;
    postSynaptic["VB2"].values[nextState] += 4;
    postSynaptic["VB4"].values[nextState] += 1;
    postSynaptic["VB5"].values[nextState] += 1;
    postSynaptic["VB6"].values[nextState] += 1;
    postSynaptic["VB7"].values[nextState] += 2;
    postSynaptic["VB8"].values[nextState] += 7;
    postSynaptic["VB9"].values[nextState] += 1;
    postSynaptic["VC3"].values[nextState] += 1;
}

void AVBR() {
    postSynaptic["AS1"].values[nextState] += 1;
    postSynaptic["AS10"].values[nextState] += 1;
    postSynaptic["AS3"].values[nextState] += 1;
    postSynaptic["AS4"].values[nextState] += 1;
    postSynaptic["AS5"].values[nextState] += 1;
    postSynaptic["AS6"].values[nextState] += 2;
    postSynaptic["AS7"].values[nextState] += 3;
    postSynaptic["AVAL"].values[nextState] += 6;
    postSynaptic["AVAR"].values[nextState] += 7;
    postSynaptic["AVBL"].values[nextState] += 4;
    postSynaptic["DA5"].values[nextState] += 1;
    postSynaptic["DB1"].values[nextState] += 3;
    postSynaptic["DB2"].values[nextState] += 1;
    postSynaptic["DB3"].values[nextState] += 1;
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["DB5"].values[nextState] += 1;
    postSynaptic["DB6"].values[nextState] += 1;
    postSynaptic["DB7"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["PVNL"].values[nextState] += 2;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RID"].values[nextState] += 2;
    postSynaptic["SIBVL"].values[nextState] += 1;
    postSynaptic["VA4"].values[nextState] += 1;
    postSynaptic["VA8"].values[nextState] += 1;
    postSynaptic["VA9"].values[nextState] += 2;
    postSynaptic["VB10"].values[nextState] += 1;
    postSynaptic["VB11"].values[nextState] += 1;
    postSynaptic["VB2"].values[nextState] += 1;
    postSynaptic["VB3"].values[nextState] += 1;
    postSynaptic["VB4"].values[nextState] += 1;
    postSynaptic["VB6"].values[nextState] += 2;
    postSynaptic["VB7"].values[nextState] += 2;
    postSynaptic["VB8"].values[nextState] += 3;
    postSynaptic["VB9"].values[nextState] += 6;
    postSynaptic["VD10"].values[nextState] += 1;
    postSynaptic["VD3"].values[nextState] += 1;
}

void AVDL() {
    postSynaptic["ADAR"].values[nextState] += 2;
    postSynaptic["AS1"].values[nextState] += 1;
    postSynaptic["AS10"].values[nextState] += 1;
    postSynaptic["AS11"].values[nextState] += 2;
    postSynaptic["AS4"].values[nextState] += 1;
    postSynaptic["AS5"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 13;
    postSynaptic["AVAR"].values[nextState] += 19;
    postSynaptic["AVM"].values[nextState] += 2;
    postSynaptic["DA1"].values[nextState] += 1;
    postSynaptic["DA2"].values[nextState] += 1;
    postSynaptic["DA3"].values[nextState] += 4;
    postSynaptic["DA4"].values[nextState] += 1;
    postSynaptic["DA5"].values[nextState] += 1;
    postSynaptic["DA8"].values[nextState] += 1;
    postSynaptic["FLPL"].values[nextState] += 1;
    postSynaptic["FLPR"].values[nextState] += 1;
    postSynaptic["LUAL"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["SABD"].values[nextState] += 1;
    postSynaptic["SABVL"].values[nextState] += 1;
    postSynaptic["SABVR"].values[nextState] += 1;
    postSynaptic["VA5"].values[nextState] += 1;
}

void AVDR() {
    postSynaptic["ADAL"].values[nextState] += 2;
    postSynaptic["ADLL"].values[nextState] += 1;
    postSynaptic["AS10"].values[nextState] += 1;
    postSynaptic["AS5"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 16;
    postSynaptic["AVAR"].values[nextState] += 15;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVDL"].values[nextState] += 2;
    postSynaptic["AVJL"].values[nextState] += 2;
    postSynaptic["DA1"].values[nextState] += 2;
    postSynaptic["DA2"].values[nextState] += 1;
    postSynaptic["DA3"].values[nextState] += 1;
    postSynaptic["DA4"].values[nextState] += 1;
    postSynaptic["DA5"].values[nextState] += 2;
    postSynaptic["DA8"].values[nextState] += 1;
    postSynaptic["DA9"].values[nextState] += 1;
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["DVC"].values[nextState] += 1;
    postSynaptic["FLPR"].values[nextState] += 1;
    postSynaptic["LUAL"].values[nextState] += 2;
    postSynaptic["PQR"].values[nextState] += 1;
    postSynaptic["SABD"].values[nextState] += 1;
    postSynaptic["SABVL"].values[nextState] += 3;
    postSynaptic["SABVR"].values[nextState] += 1;
    postSynaptic["VA11"].values[nextState] += 1;
    postSynaptic["VA2"].values[nextState] += 1;
    postSynaptic["VA3"].values[nextState] += 2;
    postSynaptic["VA6"].values[nextState] += 1;
}

void AVEL() {
    postSynaptic["AS1"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 12;
    postSynaptic["AVAR"].values[nextState] += 7;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["DA1"].values[nextState] += 5;
    postSynaptic["DA2"].values[nextState] += 1;
    postSynaptic["DA3"].values[nextState] += 3;
    postSynaptic["DA4"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 2;
    postSynaptic["RIMR"].values[nextState] += 3;
    postSynaptic["RMDVR"].values[nextState] += 1;
    postSynaptic["RMEV"].values[nextState] += 1;
    postSynaptic["SABD"].values[nextState] += 6;
    postSynaptic["SABVL"].values[nextState] += 7;
    postSynaptic["SABVR"].values[nextState] += 3;
    postSynaptic["VA1"].values[nextState] += 5;
    postSynaptic["VA3"].values[nextState] += 3;
    postSynaptic["VD2"].values[nextState] += 1;
    postSynaptic["VD3"].values[nextState] += 1;
}

void AVER() {
    postSynaptic["AS1"].values[nextState] += 3;
    postSynaptic["AS2"].values[nextState] += 2;
    postSynaptic["AS3"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 7;
    postSynaptic["AVAR"].values[nextState] += 16;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["DA1"].values[nextState] += 5;
    postSynaptic["DA2"].values[nextState] += 3;
    postSynaptic["DA3"].values[nextState] += 1;
    postSynaptic["DB3"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 3;
    postSynaptic["RIMR"].values[nextState] += 2;
    postSynaptic["RMDVL"].values[nextState] += 1;
    postSynaptic["RMDVR"].values[nextState] += 1;
    postSynaptic["RMEV"].values[nextState] += 1;
    postSynaptic["SABD"].values[nextState] += 2;
    postSynaptic["SABVL"].values[nextState] += 3;
    postSynaptic["SABVR"].values[nextState] += 3;
    postSynaptic["VA1"].values[nextState] += 1;
    postSynaptic["VA2"].values[nextState] += 1;
    postSynaptic["VA3"].values[nextState] += 2;
    postSynaptic["VA4"].values[nextState] += 1;
    postSynaptic["VA5"].values[nextState] += 1;
}

void AVFL() {
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["AVFR"].values[nextState] += 30;
    postSynaptic["AVG"].values[nextState] += 1;
    postSynaptic["AVHL"].values[nextState] += 4;
    postSynaptic["AVHR"].values[nextState] += 7;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["HSNL"].values[nextState] += 1;
    postSynaptic["MVL11"].values[nextState] += 1;
    postSynaptic["MVL12"].values[nextState] += 1;
    postSynaptic["PDER"].values[nextState] += 1;
    postSynaptic["PVNL"].values[nextState] += 2;
    postSynaptic["PVQL"].values[nextState] += 1;
    postSynaptic["PVQR"].values[nextState] += 2;
    postSynaptic["VB1"].values[nextState] += 1;
}

void AVFR() {
    postSynaptic["ASJL"].values[nextState] += 1;
    postSynaptic["ASKL"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 5;
    postSynaptic["AVFL"].values[nextState] += 24;
    postSynaptic["AVHL"].values[nextState] += 4;
    postSynaptic["AVHR"].values[nextState] += 2;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["MVL14"].values[nextState] += 2;
    postSynaptic["MVR14"].values[nextState] += 2;
    postSynaptic["PVQL"].values[nextState] += 1;
    postSynaptic["VC4"].values[nextState] += 1;
    postSynaptic["VD11"].values[nextState] += 1;
}

void AVG() {
    postSynaptic["AVAR"].values[nextState] += 3;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["AVFL"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["DA8"].values[nextState] += 1;
    postSynaptic["PHAL"].values[nextState] += 2;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVNR"].values[nextState] += 1;
    postSynaptic["PVPR"].values[nextState] += 1;
    postSynaptic["PVQR"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIFL"].values[nextState] += 1;
    postSynaptic["RIFR"].values[nextState] += 1;
    postSynaptic["VA11"].values[nextState] += 1;
}

void AVHL() {
    postSynaptic["ADFR"].values[nextState] += 3;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVFL"].values[nextState] += 2;
    postSynaptic["AVFR"].values[nextState] += 5;
    postSynaptic["AVHR"].values[nextState] += 2;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AWBR"].values[nextState] += 1;
    postSynaptic["PHBR"].values[nextState] += 1;
    postSynaptic["PVPR"].values[nextState] += 2;
    postSynaptic["PVQL"].values[nextState] += 1;
    postSynaptic["PVQR"].values[nextState] += 2;
    postSynaptic["RIMR"].values[nextState] += 1;
    postSynaptic["RIR"].values[nextState] += 3;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["SMBVR"].values[nextState] += 1;
    postSynaptic["VD1"].values[nextState] += 1;
}

void AVHR() {
    postSynaptic["ADLL"].values[nextState] += 1;
    postSynaptic["ADLR"].values[nextState] += 2;
    postSynaptic["AQR"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVFL"].values[nextState] += 1;
    postSynaptic["AVFR"].values[nextState] += 2;
    postSynaptic["AVHL"].values[nextState] += 2;
    postSynaptic["AVJR"].values[nextState] += 4;
    postSynaptic["PVNL"].values[nextState] += 1;
    postSynaptic["PVPL"].values[nextState] += 3;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RIR"].values[nextState] += 4;
    postSynaptic["SMBDL"].values[nextState] += 1;
    postSynaptic["SMBVL"].values[nextState] += 1;
}

void AVJL() {
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 4;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVFR"].values[nextState] += 1;
    postSynaptic["AVHL"].values[nextState] += 2;
    postSynaptic["AVJR"].values[nextState] += 4;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["PLMR"].values[nextState] += 2;
    postSynaptic["PVCL"].values[nextState] += 2;
    postSynaptic["PVCR"].values[nextState] += 5;
    postSynaptic["PVNR"].values[nextState] += 1;
    postSynaptic["RIFR"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 2;
}

void AVJR() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 3;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 3;
    postSynaptic["AVER"].values[nextState] += 3;
    postSynaptic["AVJL"].values[nextState] += 5;
    postSynaptic["PVCL"].values[nextState] += 3;
    postSynaptic["PVCR"].values[nextState] += 4;
    postSynaptic["PVQR"].values[nextState] += 1;
    postSynaptic["SABVL"].values[nextState] += 1;
}

void AVKL() {
    postSynaptic["ADER"].values[nextState] += 1;
    postSynaptic["AQR"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 2;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["AVKR"].values[nextState] += 2;
    postSynaptic["AVM"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["PDEL"].values[nextState] += 3;
    postSynaptic["PDER"].values[nextState] += 1;
    postSynaptic["PVM"].values[nextState] += 1;
    postSynaptic["PVPL"].values[nextState] += 1;
    postSynaptic["PVPR"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 2;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 2;
    postSynaptic["RIMR"].values[nextState] += 1;
    postSynaptic["RMFR"].values[nextState] += 1;
    postSynaptic["SAADR"].values[nextState] += 1;
    postSynaptic["SIAVR"].values[nextState] += 1;
    postSynaptic["SMBDL"].values[nextState] += 1;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["SMBVR"].values[nextState] += 1;
    postSynaptic["SMDDR"].values[nextState] += 1;
    postSynaptic["VB1"].values[nextState] += 4;
    postSynaptic["VB10"].values[nextState] += 1;
}

void AVKR() {
    postSynaptic["ADEL"].values[nextState] += 1;
    postSynaptic["AQR"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 2;
    postSynaptic["BDUL"].values[nextState] += 1;
    postSynaptic["MVL10"].values[nextState] += 1;
    postSynaptic["PVPL"].values[nextState] += 6;
    postSynaptic["PVQL"].values[nextState] += 1;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 2;
    postSynaptic["RIMR"].values[nextState] += 2;
    postSynaptic["RMDR"].values[nextState] += 1;
    postSynaptic["RMFL"].values[nextState] += 1;
    postSynaptic["SAADL"].values[nextState] += 1;
    postSynaptic["SMBDL"].values[nextState] += 2;
    postSynaptic["SMBDR"].values[nextState] += 2;
    postSynaptic["SMBVR"].values[nextState] += 1;
    postSynaptic["SMDDL"].values[nextState] += 1;
    postSynaptic["SMDDR"].values[nextState] += 2;
}

void AVL() {
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVFR"].values[nextState] += 1;
    postSynaptic["DA2"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 1;
    postSynaptic["DD6"].values[nextState] += 2;
    postSynaptic["DVB"].values[nextState] += 1;
    postSynaptic["DVC"].values[nextState] += 9;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["MVL10"].values[nextState] += -5;
    postSynaptic["MVR10"].values[nextState] += -5;
    postSynaptic["PVM"].values[nextState] += 1;
    postSynaptic["PVPR"].values[nextState] += 1;
    postSynaptic["PVWL"].values[nextState] += 1;
    postSynaptic["SABD"].values[nextState] += 5;
    postSynaptic["SABVL"].values[nextState] += 4;
    postSynaptic["SABVR"].values[nextState] += 3;
    postSynaptic["VD12"].values[nextState] += 4;
}

void AVM() {
    postSynaptic["ADER"].values[nextState] += 1;
    postSynaptic["ALML"].values[nextState] += 1;
    postSynaptic["ALMR"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 6;
    postSynaptic["AVBR"].values[nextState] += 6;
    postSynaptic["AVDL"].values[nextState] += 2;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["BDUL"].values[nextState] += 3;
    postSynaptic["BDUR"].values[nextState] += 2;
    postSynaptic["DA1"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 4;
    postSynaptic["PVCR"].values[nextState] += 5;
    postSynaptic["PVNL"].values[nextState] += 1;
    postSynaptic["PVR"].values[nextState] += 3;
    postSynaptic["RID"].values[nextState] += 1;
    postSynaptic["SIBVL"].values[nextState] += 1;
    postSynaptic["VA1"].values[nextState] += 2;
}

void AWAL() {
    postSynaptic["ADAL"].values[nextState] += 1;
    postSynaptic["AFDL"].values[nextState] += 5;
    postSynaptic["AIAL"].values[nextState] += 1;
    postSynaptic["AIYL"].values[nextState] += 1;
    postSynaptic["AIZL"].values[nextState] += 10;
    postSynaptic["ASEL"].values[nextState] += 4;
    postSynaptic["ASGL"].values[nextState] += 1;
    postSynaptic["AWAR"].values[nextState] += 1;
    postSynaptic["AWBL"].values[nextState] += 1;
}

void AWAR() {
    postSynaptic["ADFR"].values[nextState] += 3;
    postSynaptic["AFDR"].values[nextState] += 7;
    postSynaptic["AIAR"].values[nextState] += 1;
    postSynaptic["AIYR"].values[nextState] += 2;
    postSynaptic["AIZR"].values[nextState] += 1;
    postSynaptic["ASEL"].values[nextState] += 1;
    postSynaptic["ASER"].values[nextState] += 2;
    postSynaptic["AUAR"].values[nextState] += 1;
    postSynaptic["AWAL"].values[nextState] += 1;
    postSynaptic["AWBR"].values[nextState] += 1;
    postSynaptic["RIFR"].values[nextState] += 2;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RIR"].values[nextState] += 2;
}

void AWBL() {
    postSynaptic["ADFL"].values[nextState] += 9;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AIZL"].values[nextState] += 9;
    postSynaptic["AUAL"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AWBR"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 3;
    postSynaptic["RMGL"].values[nextState] += 1;
    postSynaptic["SMBDL"].values[nextState] += 1;
}

void AWBR() {
    postSynaptic["ADFR"].values[nextState] += 4;
    postSynaptic["AIZR"].values[nextState] += 4;
    postSynaptic["ASGR"].values[nextState] += 1;
    postSynaptic["ASHR"].values[nextState] += 2;
    postSynaptic["AUAR"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["AWBL"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RIR"].values[nextState] += 2;
    postSynaptic["RMGR"].values[nextState] += 1;
    postSynaptic["SMBVR"].values[nextState] += 1;
}

void AWCL() {
    postSynaptic["AIAL"].values[nextState] += 2;
    postSynaptic["AIAR"].values[nextState] += 4;
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AIYL"].values[nextState] += 10;
    postSynaptic["ASEL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AWCR"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 3;
}

void AWCR() {
    postSynaptic["AIAR"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 4;
    postSynaptic["AIYL"].values[nextState] += 4;
    postSynaptic["AIYR"].values[nextState] += 9;
    postSynaptic["ASEL"].values[nextState] += 1;
    postSynaptic["ASGR"].values[nextState] += 1;
    postSynaptic["AWCL"].values[nextState] += 5;
}

void BAGL() {
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 4;
    postSynaptic["BAGR"].values[nextState] += 2;
    postSynaptic["RIAR"].values[nextState] += 5;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 7;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RIR"].values[nextState] += 1;
}

void BAGR() {
    postSynaptic["AIYL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 2;
    postSynaptic["BAGL"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 5;
    postSynaptic["RIBL"].values[nextState] += 4;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RIR"].values[nextState] += 1;
}

void BDUL() {
    postSynaptic["ADEL"].values[nextState] += 3;
    postSynaptic["AVHL"].values[nextState] += 1;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["HSNL"].values[nextState] += 1;
    postSynaptic["PVNL"].values[nextState] += 2;
    postSynaptic["PVNR"].values[nextState] += 2;
    postSynaptic["SAADL"].values[nextState] += 1;
    postSynaptic["URADL"].values[nextState] += 1;
}

void BDUR() {
    postSynaptic["ADER"].values[nextState] += 1;
    postSynaptic["ALMR"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["AVHL"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 2;
    postSynaptic["HSNR"].values[nextState] += 4;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVNL"].values[nextState] += 2;
    postSynaptic["PVNR"].values[nextState] += 1;
    postSynaptic["SDQL"].values[nextState] += 1;
    postSynaptic["URADR"].values[nextState] += 1;
}

void CEPDL() {
    postSynaptic["AVER"].values[nextState] += 5;
    postSynaptic["IL1DL"].values[nextState] += 4;
    postSynaptic["OLLL"].values[nextState] += 2;
    postSynaptic["OLQDL"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 2;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RICR"].values[nextState] += 2;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 2;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["RMDVL"].values[nextState] += 3;
    postSynaptic["RMGL"].values[nextState] += 4;
    postSynaptic["RMHR"].values[nextState] += 4;
    postSynaptic["SIADR"].values[nextState] += 1;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["URADL"].values[nextState] += 2;
    postSynaptic["URBL"].values[nextState] += 4;
    postSynaptic["URYDL"].values[nextState] += 2;
}

void CEPDR() {
    postSynaptic["AVEL"].values[nextState] += 6;
    postSynaptic["BDUR"].values[nextState] += 1;
    postSynaptic["IL1DR"].values[nextState] += 5;
    postSynaptic["IL1R"].values[nextState] += 1;
    postSynaptic["OLLR"].values[nextState] += 8;
    postSynaptic["OLQDR"].values[nextState] += 2;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RICL"].values[nextState] += 4;
    postSynaptic["RICR"].values[nextState] += 3;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["RMDVR"].values[nextState] += 2;
    postSynaptic["RMGR"].values[nextState] += 1;
    postSynaptic["RMHL"].values[nextState] += 4;
    postSynaptic["RMHR"].values[nextState] += 1;
    postSynaptic["SIADL"].values[nextState] += 1;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["URADR"].values[nextState] += 1;
    postSynaptic["URBR"].values[nextState] += 2;
    postSynaptic["URYDR"].values[nextState] += 1;
}

void CEPVL() {
    postSynaptic["ADLL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 3;
    postSynaptic["IL1VL"].values[nextState] += 2;
    postSynaptic["MVL03"].values[nextState] += 1;
    postSynaptic["OLLL"].values[nextState] += 4;
    postSynaptic["OLQVL"].values[nextState] += 1;
    postSynaptic["RICL"].values[nextState] += 7;
    postSynaptic["RICR"].values[nextState] += 4;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 4;
    postSynaptic["RMHL"].values[nextState] += 1;
    postSynaptic["SIAVL"].values[nextState] += 1;
    postSynaptic["URAVL"].values[nextState] += 2;
}

void CEPVR() {
    postSynaptic["ASGR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 5;
    postSynaptic["IL1VR"].values[nextState] += 1;
    postSynaptic["IL2VR"].values[nextState] += 2;
    postSynaptic["MVR04"].values[nextState] += 1;
    postSynaptic["OLLR"].values[nextState] += 7;
    postSynaptic["OLQVR"].values[nextState] += 1;
    postSynaptic["RICL"].values[nextState] += 2;
    postSynaptic["RICR"].values[nextState] += 2;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RIPR"].values[nextState] += 1;
    postSynaptic["RIVL"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 2;
    postSynaptic["RMHR"].values[nextState] += 2;
    postSynaptic["SIAVR"].values[nextState] += 2;
    postSynaptic["URAVR"].values[nextState] += 1;
}

void DA1() {
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 6;
    postSynaptic["DA4"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 4;
    postSynaptic["MDL08"].values[nextState] += 8;
    postSynaptic["MDR08"].values[nextState] += 8;
    postSynaptic["SABVL"].values[nextState] += 2;
    postSynaptic["SABVR"].values[nextState] += 3;
    postSynaptic["VD1"].values[nextState] += 17;
    postSynaptic["VD2"].values[nextState] += 1;
}

void DA2() {
    postSynaptic["AS2"].values[nextState] += 2;
    postSynaptic["AS3"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["DD1"].values[nextState] += 1;
    postSynaptic["MDL07"].values[nextState] += 2;
    postSynaptic["MDL08"].values[nextState] += 1;
    postSynaptic["MDL09"].values[nextState] += 2;
    postSynaptic["MDL10"].values[nextState] += 2;
    postSynaptic["MDR07"].values[nextState] += 2;
    postSynaptic["MDR08"].values[nextState] += 2;
    postSynaptic["MDR09"].values[nextState] += 2;
    postSynaptic["MDR10"].values[nextState] += 2;
    postSynaptic["SABVL"].values[nextState] += 1;
    postSynaptic["VA1"].values[nextState] += 2;
    postSynaptic["VD1"].values[nextState] += 2;
    postSynaptic["VD2"].values[nextState] += 11;
    postSynaptic["VD3"].values[nextState] += 5;
}

void DA3() {
    postSynaptic["AS4"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["DA4"].values[nextState] += 2;
    postSynaptic["DB3"].values[nextState] += 1;
    postSynaptic["DD2"].values[nextState] += 1;
    postSynaptic["MDL09"].values[nextState] += 5;
    postSynaptic["MDL10"].values[nextState] += 5;
    postSynaptic["MDL12"].values[nextState] += 5;
    postSynaptic["MDR09"].values[nextState] += 5;
    postSynaptic["MDR10"].values[nextState] += 5;
    postSynaptic["MDR12"].values[nextState] += 5;
    postSynaptic["VD3"].values[nextState] += 25;
    postSynaptic["VD4"].values[nextState] += 6;
}

void DA4() {
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["DA1"].values[nextState] += 1;
    postSynaptic["DA3"].values[nextState] += 1;
    postSynaptic["DB3"].values[nextState] += 2;
    postSynaptic["DD2"].values[nextState] += 1;
    postSynaptic["MDL11"].values[nextState] += 4;
    postSynaptic["MDL12"].values[nextState] += 4;
    postSynaptic["MDL14"].values[nextState] += 5;
    postSynaptic["MDR11"].values[nextState] += 4;
    postSynaptic["MDR12"].values[nextState] += 4;
    postSynaptic["MDR14"].values[nextState] += 5;
    postSynaptic["VB6"].values[nextState] += 1;
    postSynaptic["VD4"].values[nextState] += 12;
    postSynaptic["VD5"].values[nextState] += 15;
}

void DA5() {
    postSynaptic["AS6"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 5;
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["MDL13"].values[nextState] += 5;
    postSynaptic["MDL14"].values[nextState] += 4;
    postSynaptic["MDR13"].values[nextState] += 5;
    postSynaptic["MDR14"].values[nextState] += 4;
    postSynaptic["VA4"].values[nextState] += 1;
    postSynaptic["VA5"].values[nextState] += 2;
    postSynaptic["VD5"].values[nextState] += 1;
    postSynaptic["VD6"].values[nextState] += 16;
}

void DA6() {
    postSynaptic["AVAL"].values[nextState] += 10;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["MDL11"].values[nextState] += 6;
    postSynaptic["MDL12"].values[nextState] += 4;
    postSynaptic["MDL13"].values[nextState] += 4;
    postSynaptic["MDL14"].values[nextState] += 4;
    postSynaptic["MDL16"].values[nextState] += 4;
    postSynaptic["MDR11"].values[nextState] += 4;
    postSynaptic["MDR12"].values[nextState] += 4;
    postSynaptic["MDR13"].values[nextState] += 4;
    postSynaptic["MDR14"].values[nextState] += 4;
    postSynaptic["MDR16"].values[nextState] += 4;
    postSynaptic["VD4"].values[nextState] += 4;
    postSynaptic["VD5"].values[nextState] += 3;
    postSynaptic["VD6"].values[nextState] += 3;
}

void DA7() {
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["MDL15"].values[nextState] += 4;
    postSynaptic["MDL17"].values[nextState] += 4;
    postSynaptic["MDL18"].values[nextState] += 4;
    postSynaptic["MDR15"].values[nextState] += 4;
    postSynaptic["MDR17"].values[nextState] += 4;
    postSynaptic["MDR18"].values[nextState] += 4;
}

void DA8() {
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["DA9"].values[nextState] += 1;
    postSynaptic["MDL17"].values[nextState] += 4;
    postSynaptic["MDL19"].values[nextState] += 4;
    postSynaptic["MDL20"].values[nextState] += 4;
    postSynaptic["MDR17"].values[nextState] += 4;
    postSynaptic["MDR19"].values[nextState] += 4;
    postSynaptic["MDR20"].values[nextState] += 4;
}

void DA9() {
    postSynaptic["DA8"].values[nextState] += 1;
    postSynaptic["DD6"].values[nextState] += 1;
    postSynaptic["MDL19"].values[nextState] += 4;
    postSynaptic["MDL21"].values[nextState] += 4;
    postSynaptic["MDL22"].values[nextState] += 4;
    postSynaptic["MDL23"].values[nextState] += 4;
    postSynaptic["MDL24"].values[nextState] += 4;
    postSynaptic["MDR19"].values[nextState] += 4;
    postSynaptic["MDR21"].values[nextState] += 4;
    postSynaptic["MDR22"].values[nextState] += 4;
    postSynaptic["MDR23"].values[nextState] += 4;
    postSynaptic["MDR24"].values[nextState] += 4;
    postSynaptic["PDA"].values[nextState] += 1;
    postSynaptic["PHCL"].values[nextState] += 1;
    postSynaptic["RID"].values[nextState] += 1;
    postSynaptic["VD13"].values[nextState] += 1;
}

void DB1() {
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AS1"].values[nextState] += 1;
    postSynaptic["AS2"].values[nextState] += 1;
    postSynaptic["AS3"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 3;
    postSynaptic["DB2"].values[nextState] += 1;
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 10;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["MDL07"].values[nextState] += 1;
    postSynaptic["MDL08"].values[nextState] += 1;
    postSynaptic["MDR07"].values[nextState] += 1;
    postSynaptic["MDR08"].values[nextState] += 1;
    postSynaptic["RID"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["VB3"].values[nextState] += 1;
    postSynaptic["VB4"].values[nextState] += 1;
    postSynaptic["VD1"].values[nextState] += 21;
    postSynaptic["VD2"].values[nextState] += 15;
    postSynaptic["VD3"].values[nextState] += 1;
}

void DB2() {
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DA3"].values[nextState] += 5;
    postSynaptic["DB1"].values[nextState] += 1;
    postSynaptic["DB3"].values[nextState] += 6;
    postSynaptic["DD2"].values[nextState] += 3;
    postSynaptic["MDL09"].values[nextState] += 3;
    postSynaptic["MDL10"].values[nextState] += 3;
    postSynaptic["MDL11"].values[nextState] += 3;
    postSynaptic["MDL12"].values[nextState] += 3;
    postSynaptic["MDR09"].values[nextState] += 3;
    postSynaptic["MDR10"].values[nextState] += 3;
    postSynaptic["MDR11"].values[nextState] += 3;
    postSynaptic["MDR12"].values[nextState] += 3;
    postSynaptic["VB1"].values[nextState] += 2;
    postSynaptic["VD3"].values[nextState] += 23;
    postSynaptic["VD4"].values[nextState] += 14;
    postSynaptic["VD5"].values[nextState] += 1;
}

void DB3() {
    postSynaptic["AS4"].values[nextState] += 1;
    postSynaptic["AS5"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DA4"].values[nextState] += 1;
    postSynaptic["DB2"].values[nextState] += 6;
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["DD2"].values[nextState] += 4;
    postSynaptic["DD3"].values[nextState] += 10;
    postSynaptic["MDL11"].values[nextState] += 3;
    postSynaptic["MDL12"].values[nextState] += 3;
    postSynaptic["MDL13"].values[nextState] += 4;
    postSynaptic["MDL14"].values[nextState] += 3;
    postSynaptic["MDR11"].values[nextState] += 3;
    postSynaptic["MDR12"].values[nextState] += 3;
    postSynaptic["MDR13"].values[nextState] += 4;
    postSynaptic["MDR14"].values[nextState] += 3;
    postSynaptic["VD4"].values[nextState] += 9;
    postSynaptic["VD5"].values[nextState] += 26;
    postSynaptic["VD6"].values[nextState] += 7;
}

void DB4() {
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DB1"].values[nextState] += 1;
    postSynaptic["DB3"].values[nextState] += 1;
    postSynaptic["DD3"].values[nextState] += 3;
    postSynaptic["MDL13"].values[nextState] += 2;
    postSynaptic["MDL14"].values[nextState] += 2;
    postSynaptic["MDL16"].values[nextState] += 2;
    postSynaptic["MDR13"].values[nextState] += 2;
    postSynaptic["MDR14"].values[nextState] += 2;
    postSynaptic["MDR16"].values[nextState] += 2;
    postSynaptic["VB2"].values[nextState] += 1;
    postSynaptic["VB4"].values[nextState] += 1;
    postSynaptic["VD6"].values[nextState] += 13;
}

void DB5() {
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["MDL15"].values[nextState] += 2;
    postSynaptic["MDL17"].values[nextState] += 2;
    postSynaptic["MDL18"].values[nextState] += 2;
    postSynaptic["MDR15"].values[nextState] += 2;
    postSynaptic["MDR17"].values[nextState] += 2;
    postSynaptic["MDR18"].values[nextState] += 2;
}

void DB6() {
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["MDL17"].values[nextState] += 2;
    postSynaptic["MDL19"].values[nextState] += 2;
    postSynaptic["MDL20"].values[nextState] += 2;
    postSynaptic["MDR17"].values[nextState] += 2;
    postSynaptic["MDR19"].values[nextState] += 2;
    postSynaptic["MDR20"].values[nextState] += 2;
}

void DB7() {
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["MDL19"].values[nextState] += 2;
    postSynaptic["MDL21"].values[nextState] += 2;
    postSynaptic["MDL22"].values[nextState] += 2;
    postSynaptic["MDL23"].values[nextState] += 2;
    postSynaptic["MDL24"].values[nextState] += 2;
    postSynaptic["MDR19"].values[nextState] += 2;
    postSynaptic["MDR21"].values[nextState] += 2;
    postSynaptic["MDR22"].values[nextState] += 2;
    postSynaptic["MDR23"].values[nextState] += 2;
    postSynaptic["MDR24"].values[nextState] += 2;
    postSynaptic["VD13"].values[nextState] += 2;
}

void DD1() {
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DD2"].values[nextState] += 3;
    postSynaptic["MDL07"].values[nextState] += -6;
    postSynaptic["MDL08"].values[nextState] += -6;
    postSynaptic["MDL09"].values[nextState] += -7;
    postSynaptic["MDL10"].values[nextState] += -6;
    postSynaptic["MDR07"].values[nextState] += -6;
    postSynaptic["MDR08"].values[nextState] += -6;
    postSynaptic["MDR09"].values[nextState] += -7;
    postSynaptic["MDR10"].values[nextState] += -6;
    postSynaptic["VD1"].values[nextState] += 4;
    postSynaptic["VD2"].values[nextState] += 2;
}

void DD2() {
    postSynaptic["DA3"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 1;
    postSynaptic["DD3"].values[nextState] += 2;
    postSynaptic["MDL09"].values[nextState] += -6;
    postSynaptic["MDL11"].values[nextState] += -7;
    postSynaptic["MDL12"].values[nextState] += -6;
    postSynaptic["MDR09"].values[nextState] += -6;
    postSynaptic["MDR11"].values[nextState] += -7;
    postSynaptic["MDR12"].values[nextState] += -6;
    postSynaptic["VD3"].values[nextState] += 1;
    postSynaptic["VD4"].values[nextState] += 3;
}

void DD3() {
    postSynaptic["DD2"].values[nextState] += 2;
    postSynaptic["DD4"].values[nextState] += 1;
    postSynaptic["MDL11"].values[nextState] += -7;
    postSynaptic["MDL13"].values[nextState] += -9;
    postSynaptic["MDL14"].values[nextState] += -7;
    postSynaptic["MDR11"].values[nextState] += -7;
    postSynaptic["MDR13"].values[nextState] += -9;
    postSynaptic["MDR14"].values[nextState] += -7;
}

void DD4() {
    postSynaptic["DD3"].values[nextState] += 1;
    postSynaptic["MDL13"].values[nextState] += -7;
    postSynaptic["MDL15"].values[nextState] += -7;
    postSynaptic["MDL16"].values[nextState] += -7;
    postSynaptic["MDR13"].values[nextState] += -7;
    postSynaptic["MDR15"].values[nextState] += -7;
    postSynaptic["MDR16"].values[nextState] += -7;
    postSynaptic["VC3"].values[nextState] += 1;
    postSynaptic["VD8"].values[nextState] += 1;
}

void DD5() {
    postSynaptic["MDL17"].values[nextState] += -7;
    postSynaptic["MDL18"].values[nextState] += -7;
    postSynaptic["MDL20"].values[nextState] += -7;
    postSynaptic["MDR17"].values[nextState] += -7;
    postSynaptic["MDR18"].values[nextState] += -7;
    postSynaptic["MDR20"].values[nextState] += -7;
    postSynaptic["VB8"].values[nextState] += 1;
    postSynaptic["VD10"].values[nextState] += 1;
    postSynaptic["VD9"].values[nextState] += 1;
}

void DD6() {
    postSynaptic["MDL19"].values[nextState] += -7;
    postSynaptic["MDL21"].values[nextState] += -7;
    postSynaptic["MDL22"].values[nextState] += -7;
    postSynaptic["MDL23"].values[nextState] += -7;
    postSynaptic["MDL24"].values[nextState] += -7;
    postSynaptic["MDR19"].values[nextState] += -7;
    postSynaptic["MDR21"].values[nextState] += -7;
    postSynaptic["MDR22"].values[nextState] += -7;
    postSynaptic["MDR23"].values[nextState] += -7;
    postSynaptic["MDR24"].values[nextState] += -7;
}

void DVA() {
    postSynaptic["AIZL"].values[nextState] += 3;
    postSynaptic["AQR"].values[nextState] += 4;
    postSynaptic["AUAL"].values[nextState] += 1;
    postSynaptic["AUAR"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 9;
    postSynaptic["AVER"].values[nextState] += 5;
    postSynaptic["DB1"].values[nextState] += 1;
    postSynaptic["DB2"].values[nextState] += 1;
    postSynaptic["DB3"].values[nextState] += 2;
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["DB5"].values[nextState] += 1;
    postSynaptic["DB6"].values[nextState] += 2;
    postSynaptic["DB7"].values[nextState] += 1;
    postSynaptic["PDEL"].values[nextState] += 3;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVR"].values[nextState] += 2;
    postSynaptic["RIAL"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RIMR"].values[nextState] += 1;
    postSynaptic["RIR"].values[nextState] += 3;
    postSynaptic["SAADR"].values[nextState] += 1;
    postSynaptic["SAAVL"].values[nextState] += 1;
    postSynaptic["SAAVR"].values[nextState] += 1;
    postSynaptic["SABD"].values[nextState] += 1;
    postSynaptic["SMBDL"].values[nextState] += 3;
    postSynaptic["SMBDR"].values[nextState] += 2;
    postSynaptic["SMBVL"].values[nextState] += 3;
    postSynaptic["SMBVR"].values[nextState] += 2;
    postSynaptic["VA12"].values[nextState] += 1;
    postSynaptic["VA2"].values[nextState] += 1;
    postSynaptic["VB1"].values[nextState] += 1;
    postSynaptic["VB11"].values[nextState] += 2;
}

void DVB() {
    postSynaptic["AS9"].values[nextState] += 7;
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["DA8"].values[nextState] += 2;
    postSynaptic["DD6"].values[nextState] += 3;
    postSynaptic["DVC"].values[nextState] += 3;
    postSynaptic["PDA"].values[nextState] += 1;
    postSynaptic["PHCL"].values[nextState] += 1;
    postSynaptic["PVPL"].values[nextState] += 1;
    postSynaptic["VA9"].values[nextState] += 1;
    postSynaptic["VB9"].values[nextState] += 1;
}

void DVC() {
    postSynaptic["AIBL"].values[nextState] += 2;
    postSynaptic["AIBR"].values[nextState] += 5;
    postSynaptic["AVAL"].values[nextState] += 5;
    postSynaptic["AVAR"].values[nextState] += 7;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 2;
    postSynaptic["AVKR"].values[nextState] += 1;
    postSynaptic["AVL"].values[nextState] += 9;
    postSynaptic["PVPL"].values[nextState] += 2;
    postSynaptic["PVPR"].values[nextState] += 13;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 5;
    postSynaptic["RIGR"].values[nextState] += 5;
    postSynaptic["RMFL"].values[nextState] += 2;
    postSynaptic["RMFR"].values[nextState] += 4;
    postSynaptic["VA9"].values[nextState] += 1;
    postSynaptic["VD1"].values[nextState] += 5;
    postSynaptic["VD10"].values[nextState] += 4;
}

void FLPL() {
    postSynaptic["ADEL"].values[nextState] += 2;
    postSynaptic["ADER"].values[nextState] += 2;
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 15;
    postSynaptic["AVAR"].values[nextState] += 17;
    postSynaptic["AVBL"].values[nextState] += 4;
    postSynaptic["AVBR"].values[nextState] += 5;
    postSynaptic["AVDL"].values[nextState] += 7;
    postSynaptic["AVDR"].values[nextState] += 13;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["FLPR"].values[nextState] += 3;
    postSynaptic["RIH"].values[nextState] += 1;
}

void FLPR() {
    postSynaptic["ADER"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 12;
    postSynaptic["AVAR"].values[nextState] += 5;
    postSynaptic["AVBL"].values[nextState] += 5;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 4;
    postSynaptic["AVER"].values[nextState] += 2;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["FLPL"].values[nextState] += 4;
    postSynaptic["PVCL"].values[nextState] += 2;
    postSynaptic["VB1"].values[nextState] += 1;
}

void HSNL() {
    postSynaptic["AIAL"].values[nextState] += 1;
    postSynaptic["AIZL"].values[nextState] += 2;
    postSynaptic["AIZR"].values[nextState] += 1;
    postSynaptic["ASHL"].values[nextState] += 1;
    postSynaptic["ASHR"].values[nextState] += 2;
    postSynaptic["ASJR"].values[nextState] += 1;
    postSynaptic["ASKL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVFL"].values[nextState] += 6;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AWBL"].values[nextState] += 1;
    postSynaptic["AWBR"].values[nextState] += 2;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["MVULVA"].values[nextState] += 7;
    postSynaptic["RIFL"].values[nextState] += 3;
    postSynaptic["RIML"].values[nextState] += 2;
    postSynaptic["SABVL"].values[nextState] += 2;
    postSynaptic["VC5"].values[nextState] += 3;
}

void HSNR() {
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AIZL"].values[nextState] += 1;
    postSynaptic["AIZR"].values[nextState] += 1;
    postSynaptic["AS5"].values[nextState] += 1;
    postSynaptic["ASHL"].values[nextState] += 2;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVFL"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["AWBL"].values[nextState] += 1;
    postSynaptic["BDUR"].values[nextState] += 1;
    postSynaptic["DA5"].values[nextState] += 1;
    postSynaptic["DA6"].values[nextState] += 1;
    postSynaptic["HSNL"].values[nextState] += 2;
    postSynaptic["MVULVA"].values[nextState] += 6;
    postSynaptic["PVNR"].values[nextState] += 2;
    postSynaptic["PVQR"].values[nextState] += 1;
    postSynaptic["RIFR"].values[nextState] += 4;
    postSynaptic["RMGR"].values[nextState] += 1;
    postSynaptic["SABD"].values[nextState] += 1;
    postSynaptic["SABVR"].values[nextState] += 1;
    postSynaptic["VA6"].values[nextState] += 1;
    postSynaptic["VC2"].values[nextState] += 3;
    postSynaptic["VC3"].values[nextState] += 1;
    postSynaptic["VD4"].values[nextState] += 2;
}

void I1L() {
    postSynaptic["I1R"].values[nextState] += 1;
    postSynaptic["I3"].values[nextState] += 1;
    postSynaptic["I5"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 1;
    postSynaptic["RIPR"].values[nextState] += 1;
}

void I1R() {
    postSynaptic["I1L"].values[nextState] += 1;
    postSynaptic["I3"].values[nextState] += 1;
    postSynaptic["I5"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 1;
    postSynaptic["RIPR"].values[nextState] += 1;
}

void I2L() {
    postSynaptic["I1L"].values[nextState] += 1;
    postSynaptic["I1R"].values[nextState] += 1;
    postSynaptic["M1"].values[nextState] += 4;
}

void I2R() {
    postSynaptic["I1L"].values[nextState] += 1;
    postSynaptic["I1R"].values[nextState] += 1;
    postSynaptic["M1"].values[nextState] += 4;
}

void I3() {
    postSynaptic["M1"].values[nextState] += 4;
    postSynaptic["M2L"].values[nextState] += 2;
    postSynaptic["M2R"].values[nextState] += 2;
}

void I4() {
    postSynaptic["I2L"].values[nextState] += 5;
    postSynaptic["I2R"].values[nextState] += 5;
    postSynaptic["I5"].values[nextState] += 2;
    postSynaptic["M1"].values[nextState] += 4;
}

void I5() {
    postSynaptic["I1L"].values[nextState] += 4;
    postSynaptic["I1R"].values[nextState] += 3;
    postSynaptic["M1"].values[nextState] += 2;
    postSynaptic["M5"].values[nextState] += 2;
    postSynaptic["MI"].values[nextState] += 4;
}

void I6() {
    postSynaptic["I2L"].values[nextState] += 2;
    postSynaptic["I2R"].values[nextState] += 2;
    postSynaptic["I3"].values[nextState] += 1;
    postSynaptic["M4"].values[nextState] += 1;
    postSynaptic["M5"].values[nextState] += 2;
    postSynaptic["NSML"].values[nextState] += 2;
    postSynaptic["NSMR"].values[nextState] += 2;
}

void IL1DL() {
    postSynaptic["IL1DR"].values[nextState] += 1;
    postSynaptic["IL1L"].values[nextState] += 1;
    postSynaptic["MDL01"].values[nextState] += 1;
    postSynaptic["MDL02"].values[nextState] += 1;
    postSynaptic["MDL04"].values[nextState] += 2;
    postSynaptic["OLLL"].values[nextState] += 1;
    postSynaptic["PVR"].values[nextState] += 1;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 2;
    postSynaptic["RMDDR"].values[nextState] += 1;
    postSynaptic["RMDVL"].values[nextState] += 4;
    postSynaptic["RMEV"].values[nextState] += 1;
    postSynaptic["URYDL"].values[nextState] += 1;
}

void IL1DR() {
    postSynaptic["IL1DL"].values[nextState] += 1;
    postSynaptic["IL1R"].values[nextState] += 1;
    postSynaptic["MDR01"].values[nextState] += 4;
    postSynaptic["MDR02"].values[nextState] += 3;
    postSynaptic["OLLR"].values[nextState] += 1;
    postSynaptic["RIPR"].values[nextState] += 5;
    postSynaptic["RMDVR"].values[nextState] += 5;
    postSynaptic["RMEV"].values[nextState] += 1;
}

void IL1L() {
    postSynaptic["AVER"].values[nextState] += 2;
    postSynaptic["IL1DL"].values[nextState] += 2;
    postSynaptic["IL1VL"].values[nextState] += 1;
    postSynaptic["MDL01"].values[nextState] += 3;
    postSynaptic["MDL03"].values[nextState] += 3;
    postSynaptic["MDL05"].values[nextState] += 4;
    postSynaptic["MVL01"].values[nextState] += 3;
    postSynaptic["MVL03"].values[nextState] += 3;
    postSynaptic["RMDDL"].values[nextState] += 5;
    postSynaptic["RMDL"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 3;
    postSynaptic["RMDVL"].values[nextState] += 4;
    postSynaptic["RMDVR"].values[nextState] += 2;
    postSynaptic["RMER"].values[nextState] += 1;
}

void IL1R() {
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["IL1DR"].values[nextState] += 2;
    postSynaptic["IL1VR"].values[nextState] += 1;
    postSynaptic["MDR01"].values[nextState] += 3;
    postSynaptic["MDR03"].values[nextState] += 3;
    postSynaptic["MVR01"].values[nextState] += 3;
    postSynaptic["MVR03"].values[nextState] += 3;
    postSynaptic["RMDDL"].values[nextState] += 3;
    postSynaptic["RMDDR"].values[nextState] += 2;
    postSynaptic["RMDL"].values[nextState] += 4;
    postSynaptic["RMDR"].values[nextState] += 2;
    postSynaptic["RMDVL"].values[nextState] += 1;
    postSynaptic["RMDVR"].values[nextState] += 4;
    postSynaptic["RMEL"].values[nextState] += 2;
    postSynaptic["RMHL"].values[nextState] += 1;
    postSynaptic["URXR"].values[nextState] += 2;
}

void IL1VL() {
    postSynaptic["IL1L"].values[nextState] += 2;
    postSynaptic["IL1VR"].values[nextState] += 1;
    postSynaptic["MVL01"].values[nextState] += 5;
    postSynaptic["MVL02"].values[nextState] += 4;
    postSynaptic["RIPL"].values[nextState] += 4;
    postSynaptic["RMDDL"].values[nextState] += 5;
    postSynaptic["RMED"].values[nextState] += 1;
    postSynaptic["URYVL"].values[nextState] += 1;
}

void IL1VR() {
    postSynaptic["IL1R"].values[nextState] += 2;
    postSynaptic["IL1VL"].values[nextState] += 1;
    postSynaptic["IL2R"].values[nextState] += 1;
    postSynaptic["IL2VR"].values[nextState] += 1;
    postSynaptic["MVR01"].values[nextState] += 5;
    postSynaptic["MVR02"].values[nextState] += 5;
    postSynaptic["RIPR"].values[nextState] += 6;
    postSynaptic["RMDDR"].values[nextState] += 10;
    postSynaptic["RMER"].values[nextState] += 1;
}

void IL2DL() {
    postSynaptic["AUAL"].values[nextState] += 1;
    postSynaptic["IL1DL"].values[nextState] += 7;
    postSynaptic["OLQDL"].values[nextState] += 2;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 10;
    postSynaptic["RMEL"].values[nextState] += 4;
    postSynaptic["RMER"].values[nextState] += 3;
    postSynaptic["URADL"].values[nextState] += 3;
}

void IL2DR() {
    postSynaptic["CEPDR"].values[nextState] += 1;
    postSynaptic["IL1DR"].values[nextState] += 7;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RIPR"].values[nextState] += 11;
    postSynaptic["RMED"].values[nextState] += 1;
    postSynaptic["RMEL"].values[nextState] += 2;
    postSynaptic["RMER"].values[nextState] += 2;
    postSynaptic["RMEV"].values[nextState] += 1;
    postSynaptic["URADR"].values[nextState] += 3;
}

void IL2L() {
    postSynaptic["ADEL"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["IL1L"].values[nextState] += 1;
    postSynaptic["OLQDL"].values[nextState] += 5;
    postSynaptic["OLQVL"].values[nextState] += 8;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RIH"].values[nextState] += 7;
    postSynaptic["RMDL"].values[nextState] += 3;
    postSynaptic["RMDR"].values[nextState] += 1;
    postSynaptic["RMER"].values[nextState] += 2;
    postSynaptic["RMEV"].values[nextState] += 2;
    postSynaptic["RMGL"].values[nextState] += 1;
    postSynaptic["URXL"].values[nextState] += 2;
}

void IL2R() {
    postSynaptic["ADER"].values[nextState] += 1;
    postSynaptic["IL1R"].values[nextState] += 1;
    postSynaptic["IL1VR"].values[nextState] += 1;
    postSynaptic["OLLR"].values[nextState] += 1;
    postSynaptic["OLQDR"].values[nextState] += 2;
    postSynaptic["OLQVR"].values[nextState] += 7;
    postSynaptic["RIH"].values[nextState] += 6;
    postSynaptic["RMDL"].values[nextState] += 1;
    postSynaptic["RMEL"].values[nextState] += 2;
    postSynaptic["RMEV"].values[nextState] += 1;
    postSynaptic["RMGR"].values[nextState] += 1;
    postSynaptic["URBR"].values[nextState] += 1;
    postSynaptic["URXR"].values[nextState] += 1;
}

void IL2VL() {
    postSynaptic["BAGR"].values[nextState] += 1;
    postSynaptic["IL1VL"].values[nextState] += 7;
    postSynaptic["IL2L"].values[nextState] += 1;
    postSynaptic["OLQVL"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 1;
    postSynaptic["RIH"].values[nextState] += 2;
    postSynaptic["RIPL"].values[nextState] += 1;
    postSynaptic["RMEL"].values[nextState] += 1;
    postSynaptic["RMER"].values[nextState] += 4;
    postSynaptic["RMEV"].values[nextState] += 1;
    postSynaptic["URAVL"].values[nextState] += 3;
}

void IL2VR() {
    postSynaptic["IL1VR"].values[nextState] += 6;
    postSynaptic["OLQVR"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 2;
    postSynaptic["RIH"].values[nextState] += 3;
    postSynaptic["RIPR"].values[nextState] += 15;
    postSynaptic["RMEL"].values[nextState] += 3;
    postSynaptic["RMER"].values[nextState] += 2;
    postSynaptic["RMEV"].values[nextState] += 3;
    postSynaptic["URAVR"].values[nextState] += 4;
    postSynaptic["URXR"].values[nextState] += 1;
}

void LUAL() {
    postSynaptic["AVAL"].values[nextState] += 6;
    postSynaptic["AVAR"].values[nextState] += 6;
    postSynaptic["AVDL"].values[nextState] += 4;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["PHBL"].values[nextState] += 1;
    postSynaptic["PLML"].values[nextState] += 1;
    postSynaptic["PVNL"].values[nextState] += 1;
    postSynaptic["PVR"].values[nextState] += 1;
    postSynaptic["PVWL"].values[nextState] += 1;
}

void LUAR() {
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["AVAR"].values[nextState] += 7;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 3;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["PLMR"].values[nextState] += 1;
    postSynaptic["PQR"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 3;
    postSynaptic["PVR"].values[nextState] += 2;
    postSynaptic["PVWL"].values[nextState] += 1;
}

void M1() {
    postSynaptic["I2L"].values[nextState] += 2;
    postSynaptic["I2R"].values[nextState] += 2;
    postSynaptic["I3"].values[nextState] += 1;
    postSynaptic["I4"].values[nextState] += 1;
}

void M2L() {
    postSynaptic["I1L"].values[nextState] += 3;
    postSynaptic["I1R"].values[nextState] += 3;
    postSynaptic["I3"].values[nextState] += 3;
    postSynaptic["M2R"].values[nextState] += 1;
    postSynaptic["M5"].values[nextState] += 1;
    postSynaptic["MI"].values[nextState] += 4;
}

void M2R() {
    postSynaptic["I1L"].values[nextState] += 3;
    postSynaptic["I1R"].values[nextState] += 3;
    postSynaptic["I3"].values[nextState] += 3;
    postSynaptic["M3L"].values[nextState] += 1;
    postSynaptic["M3R"].values[nextState] += 1;
    postSynaptic["M5"].values[nextState] += 1;
    postSynaptic["MI"].values[nextState] += 4;
}

void M3L() {
    postSynaptic["I1L"].values[nextState] += 4;
    postSynaptic["I1R"].values[nextState] += 4;
    postSynaptic["I4"].values[nextState] += 2;
    postSynaptic["I5"].values[nextState] += 3;
    postSynaptic["I6"].values[nextState] += 1;
    postSynaptic["M1"].values[nextState] += 2;
    postSynaptic["M3R"].values[nextState] += 1;
    postSynaptic["MCL"].values[nextState] += 1;
    postSynaptic["MCR"].values[nextState] += 1;
    postSynaptic["MI"].values[nextState] += 2;
    postSynaptic["NSML"].values[nextState] += 2;
    postSynaptic["NSMR"].values[nextState] += 3;
}

void M3R() {
    postSynaptic["I1L"].values[nextState] += 4;
    postSynaptic["I1R"].values[nextState] += 4;
    postSynaptic["I3"].values[nextState] += 2;
    postSynaptic["I4"].values[nextState] += 6;
    postSynaptic["I5"].values[nextState] += 3;
    postSynaptic["I6"].values[nextState] += 1;
    postSynaptic["M1"].values[nextState] += 2;
    postSynaptic["M3L"].values[nextState] += 1;
    postSynaptic["MCL"].values[nextState] += 1;
    postSynaptic["MCR"].values[nextState] += 1;
    postSynaptic["MI"].values[nextState] += 2;
    postSynaptic["NSML"].values[nextState] += 2;
    postSynaptic["NSMR"].values[nextState] += 3;
}

void M4() {
    postSynaptic["I3"].values[nextState] += 1;
    postSynaptic["I5"].values[nextState] += 13;
    postSynaptic["I6"].values[nextState] += 3;
    postSynaptic["M2L"].values[nextState] += 1;
    postSynaptic["M2R"].values[nextState] += 1;
    postSynaptic["M4"].values[nextState] += 6;
    postSynaptic["M5"].values[nextState] += 1;
    postSynaptic["NSML"].values[nextState] += 1;
    postSynaptic["NSMR"].values[nextState] += 1;
}

void M5() {
    postSynaptic["I5"].values[nextState] += 1;
    postSynaptic["I6"].values[nextState] += 1;
    postSynaptic["M1"].values[nextState] += 2;
    postSynaptic["M2L"].values[nextState] += 2;
    postSynaptic["M2R"].values[nextState] += 2;
    postSynaptic["M5"].values[nextState] += 4;
}

void MCL() {
    postSynaptic["I1L"].values[nextState] += 3;
    postSynaptic["I1R"].values[nextState] += 3;
    postSynaptic["I2L"].values[nextState] += 1;
    postSynaptic["I2R"].values[nextState] += 1;
    postSynaptic["I3"].values[nextState] += 1;
    postSynaptic["M1"].values[nextState] += 2;
    postSynaptic["M2L"].values[nextState] += 2;
    postSynaptic["M2R"].values[nextState] += 2;
}

void MCR() {
    postSynaptic["I1L"].values[nextState] += 3;
    postSynaptic["I1R"].values[nextState] += 3;
    postSynaptic["I3"].values[nextState] += 1;
    postSynaptic["M1"].values[nextState] += 2;
    postSynaptic["M2L"].values[nextState] += 2;
    postSynaptic["M2R"].values[nextState] += 2;
}

void MI() {
    postSynaptic["I1L"].values[nextState] += 1;
    postSynaptic["I1R"].values[nextState] += 1;
    postSynaptic["I3"].values[nextState] += 1;
    postSynaptic["I4"].values[nextState] += 1;
    postSynaptic["I5"].values[nextState] += 2;
    postSynaptic["M1"].values[nextState] += 1;
    postSynaptic["M2L"].values[nextState] += 2;
    postSynaptic["M2R"].values[nextState] += 2;
    postSynaptic["M3L"].values[nextState] += 1;
    postSynaptic["M3R"].values[nextState] += 1;
    postSynaptic["MCL"].values[nextState] += 2;
    postSynaptic["MCR"].values[nextState] += 2;
}

void NSML() {
    postSynaptic["I1L"].values[nextState] += 1;
    postSynaptic["I1R"].values[nextState] += 2;
    postSynaptic["I2L"].values[nextState] += 6;
    postSynaptic["I2R"].values[nextState] += 6;
    postSynaptic["I3"].values[nextState] += 2;
    postSynaptic["I4"].values[nextState] += 3;
    postSynaptic["I5"].values[nextState] += 2;
    postSynaptic["I6"].values[nextState] += 2;
    postSynaptic["M3L"].values[nextState] += 2;
    postSynaptic["M3R"].values[nextState] += 2;
}

void NSMR() {
    postSynaptic["I1L"].values[nextState] += 2;
    postSynaptic["I1R"].values[nextState] += 2;
    postSynaptic["I2L"].values[nextState] += 6;
    postSynaptic["I2R"].values[nextState] += 6;
    postSynaptic["I3"].values[nextState] += 2;
    postSynaptic["I4"].values[nextState] += 3;
    postSynaptic["I5"].values[nextState] += 2;
    postSynaptic["I6"].values[nextState] += 2;
    postSynaptic["M3L"].values[nextState] += 2;
    postSynaptic["M3R"].values[nextState] += 2;
}

void OLLL() {
    postSynaptic["AVER"].values[nextState] += 21;
    postSynaptic["CEPDL"].values[nextState] += 3;
    postSynaptic["CEPVL"].values[nextState] += 4;
    postSynaptic["IL1DL"].values[nextState] += 1;
    postSynaptic["IL1VL"].values[nextState] += 2;
    postSynaptic["OLLR"].values[nextState] += 2;
    postSynaptic["RIBL"].values[nextState] += 8;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 7;
    postSynaptic["RMDL"].values[nextState] += 2;
    postSynaptic["RMDVL"].values[nextState] += 1;
    postSynaptic["RMEL"].values[nextState] += 2;
    postSynaptic["SMDDL"].values[nextState] += 3;
    postSynaptic["SMDDR"].values[nextState] += 4;
    postSynaptic["SMDVR"].values[nextState] += 4;
    postSynaptic["URYDL"].values[nextState] += 1;
}

void OLLR() {
    postSynaptic["AVEL"].values[nextState] += 16;
    postSynaptic["CEPDR"].values[nextState] += 1;
    postSynaptic["CEPVR"].values[nextState] += 6;
    postSynaptic["IL1DR"].values[nextState] += 3;
    postSynaptic["IL1VR"].values[nextState] += 1;
    postSynaptic["IL2R"].values[nextState] += 1;
    postSynaptic["OLLL"].values[nextState] += 2;
    postSynaptic["RIBR"].values[nextState] += 10;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 10;
    postSynaptic["RMDL"].values[nextState] += 3;
    postSynaptic["RMDVR"].values[nextState] += 3;
    postSynaptic["RMER"].values[nextState] += 2;
    postSynaptic["SMDDR"].values[nextState] += 1;
    postSynaptic["SMDVL"].values[nextState] += 4;
    postSynaptic["SMDVR"].values[nextState] += 3;
}

void OLQDL() {
    postSynaptic["CEPDL"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 2;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 4;
    postSynaptic["RMDVL"].values[nextState] += 1;
    postSynaptic["SIBVL"].values[nextState] += 3;
    postSynaptic["URBL"].values[nextState] += 1;
}

void OLQDR() {
    postSynaptic["CEPDR"].values[nextState] += 2;
    postSynaptic["RIBR"].values[nextState] += 2;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 3;
    postSynaptic["RMDVR"].values[nextState] += 1;
    postSynaptic["RMHR"].values[nextState] += 1;
    postSynaptic["SIBVR"].values[nextState] += 2;
    postSynaptic["URBR"].values[nextState] += 1;
}

void OLQVL() {
    postSynaptic["ADLL"].values[nextState] += 1;
    postSynaptic["CEPVL"].values[nextState] += 1;
    postSynaptic["IL1VL"].values[nextState] += 1;
    postSynaptic["IL2VL"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["RMDVR"].values[nextState] += 4;
    postSynaptic["SIBDL"].values[nextState] += 3;
    postSynaptic["URBL"].values[nextState] += 1;
}

void OLQVR() {
    postSynaptic["CEPVR"].values[nextState] += 1;
    postSynaptic["IL1VR"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RIH"].values[nextState] += 2;
    postSynaptic["RIPR"].values[nextState] += 2;
    postSynaptic["RMDDR"].values[nextState] += 1;
    postSynaptic["RMDVL"].values[nextState] += 4;
    postSynaptic["RMER"].values[nextState] += 1;
    postSynaptic["SIBDR"].values[nextState] += 4;
    postSynaptic["URBR"].values[nextState] += 1;
}

void PDA() {
    postSynaptic["AS11"].values[nextState] += 1;
    postSynaptic["DA9"].values[nextState] += 1;
    postSynaptic["DD6"].values[nextState] += 1;
    postSynaptic["MDL21"].values[nextState] += 2;
    postSynaptic["PVNR"].values[nextState] += 1;
    postSynaptic["VD13"].values[nextState] += 3;
}

void PDB() {
    postSynaptic["AS11"].values[nextState] += 2;
    postSynaptic["MVL22"].values[nextState] += 1;
    postSynaptic["MVR21"].values[nextState] += 1;
    postSynaptic["RID"].values[nextState] += 2;
    postSynaptic["VD13"].values[nextState] += 2;
}

void PDEL() {
    postSynaptic["AVKL"].values[nextState] += 6;
    postSynaptic["DVA"].values[nextState] += 24;
    postSynaptic["PDER"].values[nextState] += 3;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVM"].values[nextState] += 1;
    postSynaptic["PVR"].values[nextState] += 2;
    postSynaptic["VA9"].values[nextState] += 1;
    postSynaptic["VD11"].values[nextState] += 1;
}

void PDER() {
    postSynaptic["AVKL"].values[nextState] += 16;
    postSynaptic["DVA"].values[nextState] += 35;
    postSynaptic["PDEL"].values[nextState] += 3;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVM"].values[nextState] += 1;
    postSynaptic["VA8"].values[nextState] += 1;
    postSynaptic["VD9"].values[nextState] += 1;
}

void PHAL() {
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVFL"].values[nextState] += 3;
    postSynaptic["AVG"].values[nextState] += 5;
    postSynaptic["AVHL"].values[nextState] += 1;
    postSynaptic["AVHR"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 2;
    postSynaptic["PHAR"].values[nextState] += 2;
    postSynaptic["PHBL"].values[nextState] += 5;
    postSynaptic["PHBR"].values[nextState] += 5;
    postSynaptic["PVQL"].values[nextState] += 2;
}

void PHAR() {
    postSynaptic["AVG"].values[nextState] += 3;
    postSynaptic["AVHR"].values[nextState] += 1;
    postSynaptic["DA8"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["PHAL"].values[nextState] += 2;
    postSynaptic["PHBL"].values[nextState] += 1;
    postSynaptic["PHBR"].values[nextState] += 5;
    postSynaptic["PVPL"].values[nextState] += 3;
    postSynaptic["PVQL"].values[nextState] += 2;
}

void PHBL() {
    postSynaptic["AVAL"].values[nextState] += 9;
    postSynaptic["AVAR"].values[nextState] += 6;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["PHBR"].values[nextState] += 3;
    postSynaptic["PVCL"].values[nextState] += 13;
    postSynaptic["VA12"].values[nextState] += 1;
}

void PHBR() {
    postSynaptic["AVAL"].values[nextState] += 7;
    postSynaptic["AVAR"].values[nextState] += 7;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVFL"].values[nextState] += 1;
    postSynaptic["AVHL"].values[nextState] += 1;
    postSynaptic["DA8"].values[nextState] += 1;
    postSynaptic["PHBL"].values[nextState] += 3;
    postSynaptic["PVCL"].values[nextState] += 6;
    postSynaptic["PVCR"].values[nextState] += 3;
    postSynaptic["VA12"].values[nextState] += 2;
}

void PHCL() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["DA9"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 6;
    postSynaptic["LUAL"].values[nextState] += 1;
    postSynaptic["PHCR"].values[nextState] += 1;
    postSynaptic["PLML"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 2;
    postSynaptic["VA12"].values[nextState] += 3;
}

void PHCR() {
    postSynaptic["AVHR"].values[nextState] += 1;
    postSynaptic["DA9"].values[nextState] += 2;
    postSynaptic["DVA"].values[nextState] += 8;
    postSynaptic["LUAR"].values[nextState] += 1;
    postSynaptic["PHCL"].values[nextState] += 2;
    postSynaptic["PVCR"].values[nextState] += 9;
    postSynaptic["VA12"].values[nextState] += 2;
}

void PLML() {
    postSynaptic["HSNL"].values[nextState] += 1;
    postSynaptic["LUAL"].values[nextState] += 1;
    postSynaptic["PHCL"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 1;
}

void PLMR() {
    postSynaptic["AS6"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 4;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 4;
    postSynaptic["DVA"].values[nextState] += 5;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["LUAR"].values[nextState] += 1;
    postSynaptic["PDEL"].values[nextState] += 2;
    postSynaptic["PDER"].values[nextState] += 3;
    postSynaptic["PVCL"].values[nextState] += 2;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVR"].values[nextState] += 2;
}

void PLNL() {
    postSynaptic["SAADL"].values[nextState] += 5;
    postSynaptic["SMBVL"].values[nextState] += 6;
}

void PLNR() {
    postSynaptic["SAADR"].values[nextState] += 4;
    postSynaptic["SMBVR"].values[nextState] += 6;
}

void PQR() {
    postSynaptic["AVAL"].values[nextState] += 8;
    postSynaptic["AVAR"].values[nextState] += 11;
    postSynaptic["AVDL"].values[nextState] += 7;
    postSynaptic["AVDR"].values[nextState] += 6;
    postSynaptic["AVG"].values[nextState] += 1;
    postSynaptic["LUAR"].values[nextState] += 1;
    postSynaptic["PVNL"].values[nextState] += 1;
    postSynaptic["PVPL"].values[nextState] += 4;
}

void PVCL() {
    postSynaptic["AS1"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["AVAR"].values[nextState] += 4;
    postSynaptic["AVBL"].values[nextState] += 5;
    postSynaptic["AVBR"].values[nextState] += 12;
    postSynaptic["AVDL"].values[nextState] += 5;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 3;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 4;
    postSynaptic["AVJR"].values[nextState] += 2;
    postSynaptic["DA2"].values[nextState] += 1;
    postSynaptic["DA5"].values[nextState] += 1;
    postSynaptic["DA6"].values[nextState] += 1;
    postSynaptic["DB2"].values[nextState] += 3;
    postSynaptic["DB3"].values[nextState] += 4;
    postSynaptic["DB4"].values[nextState] += 3;
    postSynaptic["DB5"].values[nextState] += 2;
    postSynaptic["DB6"].values[nextState] += 2;
    postSynaptic["DB7"].values[nextState] += 3;
    postSynaptic["DVA"].values[nextState] += 5;
    postSynaptic["PLML"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 7;
    postSynaptic["RID"].values[nextState] += 5;
    postSynaptic["RIS"].values[nextState] += 2;
    postSynaptic["SIBVL"].values[nextState] += 2;
    postSynaptic["VB10"].values[nextState] += 3;
    postSynaptic["VB11"].values[nextState] += 1;
    postSynaptic["VB3"].values[nextState] += 1;
    postSynaptic["VB4"].values[nextState] += 1;
    postSynaptic["VB5"].values[nextState] += 1;
    postSynaptic["VB6"].values[nextState] += 2;
    postSynaptic["VB8"].values[nextState] += 1;
    postSynaptic["VB9"].values[nextState] += 2;
}

void PVCR() {
    postSynaptic["AQR"].values[nextState] += 1;
    postSynaptic["AS2"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 12;
    postSynaptic["AVAR"].values[nextState] += 10;
    postSynaptic["AVBL"].values[nextState] += 8;
    postSynaptic["AVBR"].values[nextState] += 6;
    postSynaptic["AVDL"].values[nextState] += 5;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 3;
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["DA9"].values[nextState] += 1;
    postSynaptic["DB2"].values[nextState] += 1;
    postSynaptic["DB3"].values[nextState] += 3;
    postSynaptic["DB4"].values[nextState] += 4;
    postSynaptic["DB5"].values[nextState] += 1;
    postSynaptic["DB6"].values[nextState] += 2;
    postSynaptic["DB7"].values[nextState] += 1;
    postSynaptic["FLPL"].values[nextState] += 1;
    postSynaptic["LUAR"].values[nextState] += 1;
    postSynaptic["PDEL"].values[nextState] += 2;
    postSynaptic["PHCR"].values[nextState] += 1;
    postSynaptic["PLMR"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 8;
    postSynaptic["PVDL"].values[nextState] += 1;
    postSynaptic["PVR"].values[nextState] += 1;
    postSynaptic["PVWL"].values[nextState] += 2;
    postSynaptic["PVWR"].values[nextState] += 2;
    postSynaptic["RID"].values[nextState] += 5;
    postSynaptic["SIBVR"].values[nextState] += 2;
    postSynaptic["VA8"].values[nextState] += 2;
    postSynaptic["VA9"].values[nextState] += 1;
    postSynaptic["VB10"].values[nextState] += 1;
    postSynaptic["VB4"].values[nextState] += 3;
    postSynaptic["VB6"].values[nextState] += 2;
    postSynaptic["VB7"].values[nextState] += 3;
    postSynaptic["VB8"].values[nextState] += 1;
}

void PVDL() {
    postSynaptic["AVAL"].values[nextState] += 6;
    postSynaptic["AVAR"].values[nextState] += 6;
    postSynaptic["DD5"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 6;
    postSynaptic["VD10"].values[nextState] += 6;
}

void PVDR() {
    postSynaptic["AVAL"].values[nextState] += 6;
    postSynaptic["AVAR"].values[nextState] += 9;
    postSynaptic["DVA"].values[nextState] += 3;
    postSynaptic["PVCL"].values[nextState] += 13;
    postSynaptic["PVCR"].values[nextState] += 10;
    postSynaptic["PVDL"].values[nextState] += 1;
    postSynaptic["VA9"].values[nextState] += 1;
}

void PVM() {
    postSynaptic["AVKL"].values[nextState] += 11;
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["AVM"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 3;
    postSynaptic["PDEL"].values[nextState] += 1;
    postSynaptic["PDER"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 2;
    postSynaptic["PVR"].values[nextState] += 1;
}

void PVNL() {
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 3;
    postSynaptic["AVDL"].values[nextState] += 3;
    postSynaptic["AVDR"].values[nextState] += 3;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVFR"].values[nextState] += 1;
    postSynaptic["AVG"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 5;
    postSynaptic["AVJR"].values[nextState] += 5;
    postSynaptic["AVL"].values[nextState] += 2;
    postSynaptic["BDUL"].values[nextState] += 1;
    postSynaptic["BDUR"].values[nextState] += 2;
    postSynaptic["DD1"].values[nextState] += 2;
    postSynaptic["MVL09"].values[nextState] += 3;
    postSynaptic["PQR"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVNR"].values[nextState] += 5;
    postSynaptic["PVQR"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["PVWL"].values[nextState] += 1;
    postSynaptic["RIFL"].values[nextState] += 1;
}

void PVNR() {
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 3;
    postSynaptic["AVJL"].values[nextState] += 4;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["AVL"].values[nextState] += 2;
    postSynaptic["BDUL"].values[nextState] += 1;
    postSynaptic["BDUR"].values[nextState] += 2;
    postSynaptic["DD3"].values[nextState] += 1;
    postSynaptic["HSNR"].values[nextState] += 2;
    postSynaptic["MVL12"].values[nextState] += 1;
    postSynaptic["MVL13"].values[nextState] += 2;
    postSynaptic["PQR"].values[nextState] += 2;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVNL"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 2;
    postSynaptic["PVWL"].values[nextState] += 2;
    postSynaptic["VC2"].values[nextState] += 1;
    postSynaptic["VC3"].values[nextState] += 1;
    postSynaptic["VD12"].values[nextState] += 1;
    postSynaptic["VD6"].values[nextState] += 1;
    postSynaptic["VD7"].values[nextState] += 1;
}

void PVPL() {
    postSynaptic["ADAL"].values[nextState] += 1;
    postSynaptic["AQR"].values[nextState] += 8;
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 5;
    postSynaptic["AVBR"].values[nextState] += 6;
    postSynaptic["AVDR"].values[nextState] += 2;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["AVHR"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["AVKR"].values[nextState] += 6;
    postSynaptic["DVC"].values[nextState] += 2;
    postSynaptic["PHAR"].values[nextState] += 3;
    postSynaptic["PQR"].values[nextState] += 4;
    postSynaptic["PVCR"].values[nextState] += 3;
    postSynaptic["PVPR"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 2;
    postSynaptic["VD13"].values[nextState] += 2;
    postSynaptic["VD3"].values[nextState] += 1;
}

void PVPR() {
    postSynaptic["ADFR"].values[nextState] += 1;
    postSynaptic["AQR"].values[nextState] += 11;
    postSynaptic["ASHR"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 4;
    postSynaptic["AVBR"].values[nextState] += 5;
    postSynaptic["AVHL"].values[nextState] += 3;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["AVL"].values[nextState] += 4;
    postSynaptic["DD2"].values[nextState] += 1;
    postSynaptic["DVC"].values[nextState] += 14;
    postSynaptic["PVCL"].values[nextState] += 4;
    postSynaptic["PVCR"].values[nextState] += 7;
    postSynaptic["PVPL"].values[nextState] += 1;
    postSynaptic["PVQR"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 2;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RIMR"].values[nextState] += 1;
    postSynaptic["RMGR"].values[nextState] += 1;
    postSynaptic["VD4"].values[nextState] += 1;
    postSynaptic["VD5"].values[nextState] += 1;
}

void PVQL() {
    postSynaptic["ADAL"].values[nextState] += 1;
    postSynaptic["AIAL"].values[nextState] += 3;
    postSynaptic["ASJL"].values[nextState] += 1;
    postSynaptic["ASKL"].values[nextState] += 5;
    postSynaptic["HSNL"].values[nextState] += 2;
    postSynaptic["PVQR"].values[nextState] += 2;
    postSynaptic["RMGL"].values[nextState] += 1;
}

void PVQR() {
    postSynaptic["ADAR"].values[nextState] += 1;
    postSynaptic["AIAR"].values[nextState] += 7;
    postSynaptic["ASER"].values[nextState] += 1;
    postSynaptic["ASKR"].values[nextState] += 8;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVFL"].values[nextState] += 1;
    postSynaptic["AVFR"].values[nextState] += 1;
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["AWAR"].values[nextState] += 2;
    postSynaptic["DD1"].values[nextState] += 1;
    postSynaptic["DVC"].values[nextState] += 1;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["PVNL"].values[nextState] += 1;
    postSynaptic["PVQL"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIFR"].values[nextState] += 1;
    postSynaptic["VD1"].values[nextState] += 1;
}

void PVR() {
    postSynaptic["ADAL"].values[nextState] += 1;
    postSynaptic["ALML"].values[nextState] += 1;
    postSynaptic["AS6"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 4;
    postSynaptic["AVBR"].values[nextState] += 4;
    postSynaptic["AVJL"].values[nextState] += 3;
    postSynaptic["AVJR"].values[nextState] += 2;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["DA9"].values[nextState] += 1;
    postSynaptic["DB2"].values[nextState] += 1;
    postSynaptic["DB3"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 3;
    postSynaptic["IL1DL"].values[nextState] += 1;
    postSynaptic["IL1DR"].values[nextState] += 1;
    postSynaptic["IL1VL"].values[nextState] += 1;
    postSynaptic["IL1VR"].values[nextState] += 1;
    postSynaptic["LUAL"].values[nextState] += 1;
    postSynaptic["LUAR"].values[nextState] += 1;
    postSynaptic["PDEL"].values[nextState] += 1;
    postSynaptic["PDER"].values[nextState] += 1;
    postSynaptic["PLMR"].values[nextState] += 2;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 3;
    postSynaptic["RIPR"].values[nextState] += 3;
    postSynaptic["SABD"].values[nextState] += 1;
    postSynaptic["URADL"].values[nextState] += 1;
}

void PVT() {
    postSynaptic["AIBL"].values[nextState] += 3;
    postSynaptic["AIBR"].values[nextState] += 5;
    postSynaptic["AVKL"].values[nextState] += 9;
    postSynaptic["AVKR"].values[nextState] += 7;
    postSynaptic["AVL"].values[nextState] += 2;
    postSynaptic["DVC"].values[nextState] += 2;
    postSynaptic["PVPL"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 2;
    postSynaptic["RIGR"].values[nextState] += 3;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RMEV"].values[nextState] += 1;
    postSynaptic["RMFL"].values[nextState] += 2;
    postSynaptic["RMFR"].values[nextState] += 3;
    postSynaptic["SMBDR"].values[nextState] += 1;
}

void PVWL() {
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 2;
    postSynaptic["PVT"].values[nextState] += 2;
    postSynaptic["PVWR"].values[nextState] += 1;
    postSynaptic["VA12"].values[nextState] += 1;
}

void PVWR() {
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 2;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["VA12"].values[nextState] += 1;
}

void RIAL() {
    postSynaptic["CEPVL"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RIVL"].values[nextState] += 2;
    postSynaptic["RIVR"].values[nextState] += 4;
    postSynaptic["RMDDL"].values[nextState] += 12;
    postSynaptic["RMDDR"].values[nextState] += 7;
    postSynaptic["RMDL"].values[nextState] += 6;
    postSynaptic["RMDR"].values[nextState] += 6;
    postSynaptic["RMDVL"].values[nextState] += 9;
    postSynaptic["RMDVR"].values[nextState] += 11;
    postSynaptic["SIADL"].values[nextState] += 2;
    postSynaptic["SMDDL"].values[nextState] += 8;
    postSynaptic["SMDDR"].values[nextState] += 10;
    postSynaptic["SMDVL"].values[nextState] += 6;
    postSynaptic["SMDVR"].values[nextState] += 11;
}

void RIAR() {
    postSynaptic["CEPVR"].values[nextState] += 1;
    postSynaptic["IL1R"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 4;
    postSynaptic["RIVL"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 10;
    postSynaptic["RMDDR"].values[nextState] += 11;
    postSynaptic["RMDL"].values[nextState] += 3;
    postSynaptic["RMDR"].values[nextState] += 8;
    postSynaptic["RMDVL"].values[nextState] += 12;
    postSynaptic["RMDVR"].values[nextState] += 10;
    postSynaptic["SAADR"].values[nextState] += 1;
    postSynaptic["SIADL"].values[nextState] += 1;
    postSynaptic["SIADR"].values[nextState] += 1;
    postSynaptic["SIAVL"].values[nextState] += 1;
    postSynaptic["SMDDL"].values[nextState] += 7;
    postSynaptic["SMDDR"].values[nextState] += 7;
    postSynaptic["SMDVL"].values[nextState] += 13;
    postSynaptic["SMDVR"].values[nextState] += 7;
}

void RIBL() {
    postSynaptic["AIBR"].values[nextState] += 2;
    postSynaptic["AUAL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["AVDR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 5;
    postSynaptic["BAGR"].values[nextState] += 1;
    postSynaptic["OLQDL"].values[nextState] += 2;
    postSynaptic["OLQVL"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 3;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 3;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["SIADL"].values[nextState] += 1;
    postSynaptic["SIAVL"].values[nextState] += 1;
    postSynaptic["SIBDL"].values[nextState] += 1;
    postSynaptic["SIBVL"].values[nextState] += 1;
    postSynaptic["SIBVR"].values[nextState] += 1;
    postSynaptic["SMBDL"].values[nextState] += 1;
    postSynaptic["SMDDL"].values[nextState] += 1;
    postSynaptic["SMDVR"].values[nextState] += 4;
}

void RIBR() {
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AIZR"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 3;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["BAGL"].values[nextState] += 1;
    postSynaptic["OLQDR"].values[nextState] += 2;
    postSynaptic["OLQVR"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 2;
    postSynaptic["RIBL"].values[nextState] += 3;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RIGR"].values[nextState] += 2;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["SIADR"].values[nextState] += 1;
    postSynaptic["SIAVR"].values[nextState] += 1;
    postSynaptic["SIBDR"].values[nextState] += 1;
    postSynaptic["SIBVR"].values[nextState] += 1;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["SMDDL"].values[nextState] += 2;
    postSynaptic["SMDDR"].values[nextState] += 1;
    postSynaptic["SMDVL"].values[nextState] += 2;
}

void RICL() {
    postSynaptic["ADAR"].values[nextState] += 1;
    postSynaptic["ASHL"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 5;
    postSynaptic["AVAR"].values[nextState] += 6;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["AVKR"].values[nextState] += 2;
    postSynaptic["AWBR"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 1;
    postSynaptic["RIMR"].values[nextState] += 3;
    postSynaptic["RIVR"].values[nextState] += 1;
    postSynaptic["RMFR"].values[nextState] += 1;
    postSynaptic["SMBDL"].values[nextState] += 2;
    postSynaptic["SMDDL"].values[nextState] += 3;
    postSynaptic["SMDDR"].values[nextState] += 3;
    postSynaptic["SMDVR"].values[nextState] += 1;
}

void RICR() {
    postSynaptic["ADAR"].values[nextState] += 1;
    postSynaptic["ASHR"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 5;
    postSynaptic["AVAR"].values[nextState] += 5;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["SMDDL"].values[nextState] += 4;
    postSynaptic["SMDDR"].values[nextState] += 3;
    postSynaptic["SMDVL"].values[nextState] += 2;
    postSynaptic["SMDVR"].values[nextState] += 1;
}

void RID() {
    postSynaptic["ALA"].values[nextState] += 1;
    postSynaptic["AS2"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["DA6"].values[nextState] += 3;
    postSynaptic["DA9"].values[nextState] += 1;
    postSynaptic["DB1"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 4;
    postSynaptic["DD2"].values[nextState] += 4;
    postSynaptic["DD3"].values[nextState] += 3;
    postSynaptic["MDL14"].values[nextState] += -2;
    postSynaptic["MDL21"].values[nextState] += -3;
    postSynaptic["PDB"].values[nextState] += 2;
    postSynaptic["VD13"].values[nextState] += 1;
    postSynaptic["VD5"].values[nextState] += 1;
}

void RIFL() {
    postSynaptic["ALML"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 10;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVG"].values[nextState] += 1;
    postSynaptic["AVHR"].values[nextState] += 1;
    postSynaptic["AVJR"].values[nextState] += 2;
    postSynaptic["PVPL"].values[nextState] += 3;
    postSynaptic["RIML"].values[nextState] += 4;
    postSynaptic["VD1"].values[nextState] += 1;
}

void RIFR() {
    postSynaptic["ASHR"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 17;
    postSynaptic["AVFL"].values[nextState] += 1;
    postSynaptic["AVG"].values[nextState] += 1;
    postSynaptic["AVHL"].values[nextState] += 1;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AVJR"].values[nextState] += 2;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVPR"].values[nextState] += 4;
    postSynaptic["RIMR"].values[nextState] += 4;
    postSynaptic["RIPR"].values[nextState] += 1;
}

void RIGL() {
    postSynaptic["AIBR"].values[nextState] += 3;
    postSynaptic["AIZR"].values[nextState] += 1;
    postSynaptic["ALNL"].values[nextState] += 1;
    postSynaptic["AQR"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["AVKR"].values[nextState] += 2;
    postSynaptic["BAGR"].values[nextState] += 2;
    postSynaptic["DVC"].values[nextState] += 1;
    postSynaptic["OLLL"].values[nextState] += 1;
    postSynaptic["OLQDL"].values[nextState] += 1;
    postSynaptic["OLQVL"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 2;
    postSynaptic["RIGR"].values[nextState] += 3;
    postSynaptic["RIR"].values[nextState] += 2;
    postSynaptic["RMEL"].values[nextState] += 2;
    postSynaptic["RMHR"].values[nextState] += 3;
    postSynaptic["URYDL"].values[nextState] += 1;
    postSynaptic["URYVL"].values[nextState] += 1;
    postSynaptic["VB2"].values[nextState] += 1;
    postSynaptic["VD1"].values[nextState] += 2;
}

void RIGR() {
    postSynaptic["AIBL"].values[nextState] += 3;
    postSynaptic["ALNR"].values[nextState] += 1;
    postSynaptic["AQR"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 2;
    postSynaptic["AVKL"].values[nextState] += 4;
    postSynaptic["AVKR"].values[nextState] += 2;
    postSynaptic["BAGL"].values[nextState] += 1;
    postSynaptic["OLLR"].values[nextState] += 1;
    postSynaptic["OLQDR"].values[nextState] += 1;
    postSynaptic["OLQVR"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 2;
    postSynaptic["RIGL"].values[nextState] += 3;
    postSynaptic["RIR"].values[nextState] += 1;
    postSynaptic["RMHL"].values[nextState] += 4;
    postSynaptic["URYDR"].values[nextState] += 1;
    postSynaptic["URYVR"].values[nextState] += 1;
}

void RIH() {
    postSynaptic["ADFR"].values[nextState] += 1;
    postSynaptic["AIZL"].values[nextState] += 4;
    postSynaptic["AIZR"].values[nextState] += 4;
    postSynaptic["AUAR"].values[nextState] += 1;
    postSynaptic["BAGR"].values[nextState] += 1;
    postSynaptic["CEPDL"].values[nextState] += 2;
    postSynaptic["CEPDR"].values[nextState] += 2;
    postSynaptic["CEPVL"].values[nextState] += 2;
    postSynaptic["CEPVR"].values[nextState] += 2;
    postSynaptic["FLPL"].values[nextState] += 1;
    postSynaptic["IL2L"].values[nextState] += 2;
    postSynaptic["IL2R"].values[nextState] += 1;
    postSynaptic["OLQDL"].values[nextState] += 4;
    postSynaptic["OLQDR"].values[nextState] += 2;
    postSynaptic["OLQVL"].values[nextState] += 1;
    postSynaptic["OLQVR"].values[nextState] += 6;
    postSynaptic["RIAL"].values[nextState] += 10;
    postSynaptic["RIAR"].values[nextState] += 8;
    postSynaptic["RIBL"].values[nextState] += 5;
    postSynaptic["RIBR"].values[nextState] += 4;
    postSynaptic["RIPL"].values[nextState] += 4;
    postSynaptic["RIPR"].values[nextState] += 6;
    postSynaptic["RMER"].values[nextState] += 2;
    postSynaptic["RMEV"].values[nextState] += 1;
    postSynaptic["URYVR"].values[nextState] += 1;
}

void RIML() {
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AIYL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 3;
    postSynaptic["AVEL"].values[nextState] += 2;
    postSynaptic["AVER"].values[nextState] += 3;
    postSynaptic["MDR05"].values[nextState] += 2;
    postSynaptic["MVR05"].values[nextState] += 2;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["RMDL"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 1;
    postSynaptic["RMFR"].values[nextState] += 1;
    postSynaptic["SAADR"].values[nextState] += 1;
    postSynaptic["SAAVL"].values[nextState] += 3;
    postSynaptic["SAAVR"].values[nextState] += 2;
    postSynaptic["SMDDR"].values[nextState] += 5;
    postSynaptic["SMDVL"].values[nextState] += 1;
}

void RIMR() {
    postSynaptic["ADAR"].values[nextState] += 1;
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AIYR"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 5;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 5;
    postSynaptic["AVEL"].values[nextState] += 3;
    postSynaptic["AVER"].values[nextState] += 2;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["MDL05"].values[nextState] += 1;
    postSynaptic["MDL07"].values[nextState] += 1;
    postSynaptic["MVL05"].values[nextState] += 1;
    postSynaptic["MVL07"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 2;
    postSynaptic["RMDL"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 1;
    postSynaptic["RMFL"].values[nextState] += 1;
    postSynaptic["RMFR"].values[nextState] += 1;
    postSynaptic["SAAVL"].values[nextState] += 3;
    postSynaptic["SAAVR"].values[nextState] += 3;
    postSynaptic["SMDDL"].values[nextState] += 2;
    postSynaptic["SMDDR"].values[nextState] += 4;
}

void RIPL() {
    postSynaptic["OLQDL"].values[nextState] += 1;
    postSynaptic["OLQDR"].values[nextState] += 1;
    postSynaptic["RMED"].values[nextState] += 1;
}

void RIPR() {
    postSynaptic["OLQDL"].values[nextState] += 1;
    postSynaptic["OLQDR"].values[nextState] += 1;
    postSynaptic["RMED"].values[nextState] += 1;
}

void RIR() {
    postSynaptic["AFDR"].values[nextState] += 1;
    postSynaptic["AIZL"].values[nextState] += 3;
    postSynaptic["AIZR"].values[nextState] += 5;
    postSynaptic["AUAL"].values[nextState] += 1;
    postSynaptic["AWBR"].values[nextState] += 1;
    postSynaptic["BAGL"].values[nextState] += 1;
    postSynaptic["BAGR"].values[nextState] += 2;
    postSynaptic["DVA"].values[nextState] += 2;
    postSynaptic["HSNL"].values[nextState] += 1;
    postSynaptic["PVPL"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 5;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["URXL"].values[nextState] += 5;
    postSynaptic["URXR"].values[nextState] += 1;
}

void RIS() {
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 7;
    postSynaptic["AVER"].values[nextState] += 7;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["AVKR"].values[nextState] += 4;
    postSynaptic["AVL"].values[nextState] += 2;
    postSynaptic["CEPDR"].values[nextState] += 1;
    postSynaptic["CEPVL"].values[nextState] += 2;
    postSynaptic["CEPVR"].values[nextState] += 1;
    postSynaptic["DB1"].values[nextState] += 1;
    postSynaptic["OLLR"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 3;
    postSynaptic["RIBR"].values[nextState] += 5;
    postSynaptic["RIML"].values[nextState] += 2;
    postSynaptic["RIMR"].values[nextState] += 5;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["RMDL"].values[nextState] += 2;
    postSynaptic["RMDR"].values[nextState] += 4;
    postSynaptic["SMDDL"].values[nextState] += 1;
    postSynaptic["SMDDR"].values[nextState] += 3;
    postSynaptic["SMDVL"].values[nextState] += 1;
    postSynaptic["SMDVR"].values[nextState] += 1;
    postSynaptic["URYVR"].values[nextState] += 1;
}

void RIVL() {
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["MVR05"].values[nextState] += -2;
    postSynaptic["MVR06"].values[nextState] += -2;
    postSynaptic["MVR08"].values[nextState] += -3;
    postSynaptic["RIAL"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RIVR"].values[nextState] += 2;
    postSynaptic["RMDL"].values[nextState] += 2;
    postSynaptic["SAADR"].values[nextState] += 3;
    postSynaptic["SDQR"].values[nextState] += 2;
    postSynaptic["SIAVR"].values[nextState] += 2;
    postSynaptic["SMDDR"].values[nextState] += 1;
    postSynaptic["SMDVL"].values[nextState] += 1;
}

void RIVR() {
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["MVL05"].values[nextState] += -2;
    postSynaptic["MVL06"].values[nextState] += -2;
    postSynaptic["MVL08"].values[nextState] += -2;
    postSynaptic["MVR04"].values[nextState] += -2;
    postSynaptic["MVR06"].values[nextState] += -2;
    postSynaptic["RIAL"].values[nextState] += 2;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RIVL"].values[nextState] += 2;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 1;
    postSynaptic["RMDVR"].values[nextState] += 1;
    postSynaptic["RMEV"].values[nextState] += 1;
    postSynaptic["SAADL"].values[nextState] += 2;
    postSynaptic["SDQR"].values[nextState] += 2;
    postSynaptic["SIAVL"].values[nextState] += 2;
    postSynaptic["SMDDL"].values[nextState] += 2;
    postSynaptic["SMDVR"].values[nextState] += 4;
}

void RMDDL() {
    postSynaptic["MDR01"].values[nextState] += 1;
    postSynaptic["MDR02"].values[nextState] += 1;
    postSynaptic["MDR03"].values[nextState] += 1;
    postSynaptic["MDR04"].values[nextState] += 1;
    postSynaptic["MDR08"].values[nextState] += 2;
    postSynaptic["MVR01"].values[nextState] += 1;
    postSynaptic["OLQVL"].values[nextState] += 1;
    postSynaptic["RMDL"].values[nextState] += 1;
    postSynaptic["RMDVL"].values[nextState] += 1;
    postSynaptic["RMDVR"].values[nextState] += 7;
    postSynaptic["SMDDL"].values[nextState] += 1;
}

void RMDDR() {
    postSynaptic["MDL01"].values[nextState] += 1;
    postSynaptic["MDL02"].values[nextState] += 1;
    postSynaptic["MDL03"].values[nextState] += 2;
    postSynaptic["MDL04"].values[nextState] += 1;
    postSynaptic["MDR04"].values[nextState] += 1;
    postSynaptic["MVR01"].values[nextState] += 1;
    postSynaptic["MVR02"].values[nextState] += 1;
    postSynaptic["OLQVR"].values[nextState] += 1;
    postSynaptic["RMDVL"].values[nextState] += 12;
    postSynaptic["RMDVR"].values[nextState] += 1;
    postSynaptic["SAADR"].values[nextState] += 1;
    postSynaptic["SMDDR"].values[nextState] += 1;
    postSynaptic["URYDL"].values[nextState] += 1;
}

void RMDL() {
    postSynaptic["MDL03"].values[nextState] += 1;
    postSynaptic["MDL05"].values[nextState] += 2;
    postSynaptic["MDR01"].values[nextState] += 1;
    postSynaptic["MDR03"].values[nextState] += 1;
    postSynaptic["MVL01"].values[nextState] += 1;
    postSynaptic["MVR01"].values[nextState] += 1;
    postSynaptic["MVR03"].values[nextState] += 1;
    postSynaptic["MVR05"].values[nextState] += 2;
    postSynaptic["MVR07"].values[nextState] += 1;
    postSynaptic["OLLR"].values[nextState] += 2;
    postSynaptic["RIAL"].values[nextState] += 4;
    postSynaptic["RIAR"].values[nextState] += 3;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 3;
    postSynaptic["RMDVL"].values[nextState] += 1;
    postSynaptic["RMER"].values[nextState] += 1;
    postSynaptic["RMFL"].values[nextState] += 1;
}

void RMDR() {
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["MDL03"].values[nextState] += 1;
    postSynaptic["MDL05"].values[nextState] += 1;
    postSynaptic["MDR05"].values[nextState] += 1;
    postSynaptic["MVL03"].values[nextState] += 1;
    postSynaptic["MVL05"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 3;
    postSynaptic["RIAR"].values[nextState] += 7;
    postSynaptic["RIMR"].values[nextState] += 2;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["RMDL"].values[nextState] += 1;
    postSynaptic["RMDVR"].values[nextState] += 1;
}

void RMDVL() {
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["MDR01"].values[nextState] += 1;
    postSynaptic["MVL04"].values[nextState] += 1;
    postSynaptic["MVR01"].values[nextState] += 1;
    postSynaptic["MVR02"].values[nextState] += 1;
    postSynaptic["MVR03"].values[nextState] += 1;
    postSynaptic["MVR04"].values[nextState] += 1;
    postSynaptic["MVR05"].values[nextState] += 1;
    postSynaptic["MVR06"].values[nextState] += 1;
    postSynaptic["MVR08"].values[nextState] += 1;
    postSynaptic["OLQDL"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 6;
    postSynaptic["RMDL"].values[nextState] += 1;
    postSynaptic["RMDVR"].values[nextState] += 1;
    postSynaptic["SAAVL"].values[nextState] += 1;
    postSynaptic["SMDVL"].values[nextState] += 1;
}

void RMDVR() {
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["MDL01"].values[nextState] += 1;
    postSynaptic["MVL01"].values[nextState] += 1;
    postSynaptic["MVL02"].values[nextState] += 1;
    postSynaptic["MVL03"].values[nextState] += 1;
    postSynaptic["MVL04"].values[nextState] += 1;
    postSynaptic["MVL05"].values[nextState] += 1;
    postSynaptic["MVL06"].values[nextState] += 1;
    postSynaptic["MVL08"].values[nextState] += 1;
    postSynaptic["MVR04"].values[nextState] += 1;
    postSynaptic["MVR06"].values[nextState] += 1;
    postSynaptic["MVR08"].values[nextState] += 1;
    postSynaptic["OLQDR"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 4;
    postSynaptic["RMDDR"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 1;
    postSynaptic["RMDVL"].values[nextState] += 1;
    postSynaptic["SAAVR"].values[nextState] += 1;
    postSynaptic["SIBDR"].values[nextState] += 1;
    postSynaptic["SIBVR"].values[nextState] += 1;
    postSynaptic["SMDVR"].values[nextState] += 1;
}

void RMED() {
    postSynaptic["IL1VL"].values[nextState] += 1;
    postSynaptic["MVL02"].values[nextState] += -4;
    postSynaptic["MVL04"].values[nextState] += -4;
    postSynaptic["MVL06"].values[nextState] += -4;
    postSynaptic["MVR02"].values[nextState] += -4;
    postSynaptic["MVR04"].values[nextState] += -4;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RIPL"].values[nextState] += 1;
    postSynaptic["RIPR"].values[nextState] += 1;
    postSynaptic["RMEV"].values[nextState] += 2;
}

void RMEL() {
    postSynaptic["MDR01"].values[nextState] += -5;
    postSynaptic["MDR03"].values[nextState] += -5;
    postSynaptic["MVR01"].values[nextState] += -5;
    postSynaptic["MVR03"].values[nextState] += -5;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RMEV"].values[nextState] += 1;
}

void RMER() {
    postSynaptic["MDL01"].values[nextState] += -7;
    postSynaptic["MDL03"].values[nextState] += -7;
    postSynaptic["MVL01"].values[nextState] += -7;
    postSynaptic["RMEV"].values[nextState] += 1;
}

void RMEV() {
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 1;
    postSynaptic["IL1DL"].values[nextState] += 1;
    postSynaptic["IL1DR"].values[nextState] += 1;
    postSynaptic["MDL02"].values[nextState] += -3;
    postSynaptic["MDL04"].values[nextState] += -3;
    postSynaptic["MDL06"].values[nextState] += -3;
    postSynaptic["MDR02"].values[nextState] += -3;
    postSynaptic["MDR04"].values[nextState] += -3;
    postSynaptic["RMED"].values[nextState] += 2;
    postSynaptic["RMEL"].values[nextState] += 1;
    postSynaptic["RMER"].values[nextState] += 1;
    postSynaptic["SMDDR"].values[nextState] += 1;
}

void RMFL() {
    postSynaptic["AVKL"].values[nextState] += 4;
    postSynaptic["AVKR"].values[nextState] += 4;
    postSynaptic["MDR03"].values[nextState] += 1;
    postSynaptic["MVR01"].values[nextState] += 1;
    postSynaptic["MVR03"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 3;
    postSynaptic["RMGR"].values[nextState] += 1;
    postSynaptic["URBR"].values[nextState] += 1;
}

void RMFR() {
    postSynaptic["AVKL"].values[nextState] += 3;
    postSynaptic["AVKR"].values[nextState] += 3;
    postSynaptic["RMDL"].values[nextState] += 2;
}

void RMGL() {
    postSynaptic["ADAL"].values[nextState] += 1;
    postSynaptic["ADLL"].values[nextState] += 1;
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["ALML"].values[nextState] += 1;
    postSynaptic["ALNL"].values[nextState] += 1;
    postSynaptic["ASHL"].values[nextState] += 2;
    postSynaptic["ASKL"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 2;
    postSynaptic["AWBL"].values[nextState] += 1;
    postSynaptic["CEPDL"].values[nextState] += 1;
    postSynaptic["IL2L"].values[nextState] += 1;
    postSynaptic["MDL05"].values[nextState] += 2;
    postSynaptic["MVL05"].values[nextState] += 2;
    postSynaptic["RID"].values[nextState] += 1;
    postSynaptic["RMDL"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 3;
    postSynaptic["RMDVL"].values[nextState] += 3;
    postSynaptic["RMHL"].values[nextState] += 3;
    postSynaptic["RMHR"].values[nextState] += 1;
    postSynaptic["SIAVL"].values[nextState] += 1;
    postSynaptic["SIBVL"].values[nextState] += 3;
    postSynaptic["SIBVR"].values[nextState] += 1;
    postSynaptic["SMBVL"].values[nextState] += 1;
    postSynaptic["URXL"].values[nextState] += 2;
}

void RMGR() {
    postSynaptic["ADAR"].values[nextState] += 1;
    postSynaptic["AIMR"].values[nextState] += 1;
    postSynaptic["ALNR"].values[nextState] += 1;
    postSynaptic["ASHR"].values[nextState] += 2;
    postSynaptic["ASKR"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 3;
    postSynaptic["AVJL"].values[nextState] += 1;
    postSynaptic["AWBR"].values[nextState] += 1;
    postSynaptic["IL2R"].values[nextState] += 1;
    postSynaptic["MDR05"].values[nextState] += 1;
    postSynaptic["MVR05"].values[nextState] += 1;
    postSynaptic["MVR07"].values[nextState] += 1;
    postSynaptic["RIR"].values[nextState] += 1;
    postSynaptic["RMDL"].values[nextState] += 4;
    postSynaptic["RMDR"].values[nextState] += 2;
    postSynaptic["RMDVR"].values[nextState] += 5;
    postSynaptic["RMHR"].values[nextState] += 1;
    postSynaptic["URXR"].values[nextState] += 2;
}

void RMHL() {
    postSynaptic["MDR01"].values[nextState] += 2;
    postSynaptic["MDR03"].values[nextState] += 3;
    postSynaptic["MVR01"].values[nextState] += 2;
    postSynaptic["RMDR"].values[nextState] += 1;
    postSynaptic["RMGL"].values[nextState] += 3;
    postSynaptic["SIBVR"].values[nextState] += 1;
}

void RMHR() {
    postSynaptic["MDL01"].values[nextState] += 2;
    postSynaptic["MDL03"].values[nextState] += 2;
    postSynaptic["MDL05"].values[nextState] += 2;
    postSynaptic["MVL01"].values[nextState] += 2;
    postSynaptic["RMER"].values[nextState] += 1;
    postSynaptic["RMGL"].values[nextState] += 1;
    postSynaptic["RMGR"].values[nextState] += 1;
}

void SAADL() {
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 6;
    postSynaptic["RIML"].values[nextState] += 3;
    postSynaptic["RIMR"].values[nextState] += 6;
    postSynaptic["RMGR"].values[nextState] += 1;
    postSynaptic["SMBDL"].values[nextState] += 1;
}

void SAADR() {
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 3;
    postSynaptic["OLLL"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 4;
    postSynaptic["RIMR"].values[nextState] += 5;
    postSynaptic["RMDDR"].values[nextState] += 1;
    postSynaptic["RMFL"].values[nextState] += 1;
    postSynaptic["RMGL"].values[nextState] += 1;
}

void SAAVL() {
    postSynaptic["AIBL"].values[nextState] += 1;
    postSynaptic["ALNL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 16;
    postSynaptic["OLLR"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 2;
    postSynaptic["RIMR"].values[nextState] += 12;
    postSynaptic["RMDVL"].values[nextState] += 2;
    postSynaptic["RMFR"].values[nextState] += 2;
    postSynaptic["SMBVR"].values[nextState] += 3;
    postSynaptic["SMDDR"].values[nextState] += 8;
}

void SAAVR() {
    postSynaptic["AVAR"].values[nextState] += 13;
    postSynaptic["RIML"].values[nextState] += 5;
    postSynaptic["RIMR"].values[nextState] += 2;
    postSynaptic["RMDVR"].values[nextState] += 1;
    postSynaptic["SMBVL"].values[nextState] += 2;
    postSynaptic["SMDDL"].values[nextState] += 6;
}

void SABD() {
    postSynaptic["AVAL"].values[nextState] += 4;
    postSynaptic["VA2"].values[nextState] += 4;
    postSynaptic["VA3"].values[nextState] += 2;
    postSynaptic["VA4"].values[nextState] += 1;
}

void SABVL() {
    postSynaptic["AVAR"].values[nextState] += 3;
    postSynaptic["DA1"].values[nextState] += 2;
    postSynaptic["DA2"].values[nextState] += 1;
}

void SABVR() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["DA1"].values[nextState] += 3;
}

void SDQL() {
    postSynaptic["ALML"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 3;
    postSynaptic["AVEL"].values[nextState] += 1;
    postSynaptic["FLPL"].values[nextState] += 1;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 3;
    postSynaptic["RMFL"].values[nextState] += 1;
    postSynaptic["SDQR"].values[nextState] += 1;
}

void SDQR() {
    postSynaptic["ADLL"].values[nextState] += 1;
    postSynaptic["AIBL"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["AVBL"].values[nextState] += 7;
    postSynaptic["AVBR"].values[nextState] += 4;
    postSynaptic["DVA"].values[nextState] += 3;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RIVL"].values[nextState] += 2;
    postSynaptic["RIVR"].values[nextState] += 2;
    postSynaptic["RMHL"].values[nextState] += 2;
    postSynaptic["RMHR"].values[nextState] += 1;
    postSynaptic["SDQL"].values[nextState] += 1;
    postSynaptic["SIBVL"].values[nextState] += 1;
}

void SIADL() {
    postSynaptic["RIBL"].values[nextState] += 1;
}

void SIADR() {
    postSynaptic["RIBR"].values[nextState] += 1;
}

void SIAVL() {
    postSynaptic["RIBL"].values[nextState] += 1;
}

void SIAVR() {
    postSynaptic["RIBR"].values[nextState] += 1;
}

void SIBDL() {
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["SIBVL"].values[nextState] += 1;
}

void SIBDR() {
    postSynaptic["AIML"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["SIBVR"].values[nextState] += 1;
}

void SIBVL() {
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["SDQR"].values[nextState] += 1;
    postSynaptic["SIBDL"].values[nextState] += 1;
}

void SIBVR() {
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RMHL"].values[nextState] += 1;
    postSynaptic["SIBDR"].values[nextState] += 1;
}

void SMBDL() {
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["AVKR"].values[nextState] += 1;
    postSynaptic["MDR01"].values[nextState] += 2;
    postSynaptic["MDR02"].values[nextState] += 2;
    postSynaptic["MDR03"].values[nextState] += 2;
    postSynaptic["MDR04"].values[nextState] += 2;
    postSynaptic["MDR06"].values[nextState] += 3;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RMED"].values[nextState] += 3;
    postSynaptic["SAADL"].values[nextState] += 1;
    postSynaptic["SAAVR"].values[nextState] += 1;
}

void SMBDR() {
    postSynaptic["ALNL"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["AVKR"].values[nextState] += 2;
    postSynaptic["MDL02"].values[nextState] += 1;
    postSynaptic["MDL03"].values[nextState] += 1;
    postSynaptic["MDL04"].values[nextState] += 1;
    postSynaptic["MDL06"].values[nextState] += 2;
    postSynaptic["MDR04"].values[nextState] += 1;
    postSynaptic["MDR08"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RMED"].values[nextState] += 4;
    postSynaptic["SAAVL"].values[nextState] += 3;
}

void SMBVL() {
    postSynaptic["MVL01"].values[nextState] += 1;
    postSynaptic["MVL02"].values[nextState] += 1;
    postSynaptic["MVL03"].values[nextState] += 1;
    postSynaptic["MVL04"].values[nextState] += 1;
    postSynaptic["MVL05"].values[nextState] += 1;
    postSynaptic["MVL06"].values[nextState] += 1;
    postSynaptic["MVL08"].values[nextState] += 1;
    postSynaptic["PLNL"].values[nextState] += 1;
    postSynaptic["RMEV"].values[nextState] += 5;
    postSynaptic["SAADL"].values[nextState] += 3;
    postSynaptic["SAAVR"].values[nextState] += 2;
}

void SMBVR() {
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["AVKR"].values[nextState] += 1;
    postSynaptic["MVR01"].values[nextState] += 1;
    postSynaptic["MVR02"].values[nextState] += 1;
    postSynaptic["MVR03"].values[nextState] += 1;
    postSynaptic["MVR04"].values[nextState] += 1;
    postSynaptic["MVR06"].values[nextState] += 1;
    postSynaptic["MVR07"].values[nextState] += 1;
    postSynaptic["RMEV"].values[nextState] += 3;
    postSynaptic["SAADR"].values[nextState] += 4;
    postSynaptic["SAAVL"].values[nextState] += 3;
}

void SMDDL() {
    postSynaptic["MDL04"].values[nextState] += 1;
    postSynaptic["MDL06"].values[nextState] += 1;
    postSynaptic["MDL08"].values[nextState] += 1;
    postSynaptic["MDR02"].values[nextState] += 1;
    postSynaptic["MDR03"].values[nextState] += 1;
    postSynaptic["MDR04"].values[nextState] += 1;
    postSynaptic["MDR05"].values[nextState] += 1;
    postSynaptic["MDR06"].values[nextState] += 1;
    postSynaptic["MDR07"].values[nextState] += 1;
    postSynaptic["MVL02"].values[nextState] += 1;
    postSynaptic["MVL04"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["SMDVR"].values[nextState] += 2;
}

void SMDDR() {
    postSynaptic["MDL04"].values[nextState] += 1;
    postSynaptic["MDL05"].values[nextState] += 1;
    postSynaptic["MDL06"].values[nextState] += 1;
    postSynaptic["MDL08"].values[nextState] += 1;
    postSynaptic["MDR04"].values[nextState] += 1;
    postSynaptic["MDR06"].values[nextState] += 1;
    postSynaptic["MVR02"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 2;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 1;
    postSynaptic["VD1"].values[nextState] += 1;
}

void SMDVL() {
    postSynaptic["MVL03"].values[nextState] += 1;
    postSynaptic["MVL06"].values[nextState] += 1;
    postSynaptic["MVR02"].values[nextState] += 1;
    postSynaptic["MVR03"].values[nextState] += 1;
    postSynaptic["MVR04"].values[nextState] += 1;
    postSynaptic["MVR06"].values[nextState] += 1;
    postSynaptic["PVR"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 3;
    postSynaptic["RIAR"].values[nextState] += 8;
    postSynaptic["RIBR"].values[nextState] += 2;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["RIVL"].values[nextState] += 2;
    postSynaptic["RMDDR"].values[nextState] += 1;
    postSynaptic["RMDVL"].values[nextState] += 1;
    postSynaptic["SMDDR"].values[nextState] += 4;
    postSynaptic["SMDVR"].values[nextState] += 1;
}

void SMDVR() {
    postSynaptic["MVL02"].values[nextState] += 1;
    postSynaptic["MVL03"].values[nextState] += 1;
    postSynaptic["MVL04"].values[nextState] += 1;
    postSynaptic["MVR07"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 7;
    postSynaptic["RIAR"].values[nextState] += 5;
    postSynaptic["RIBL"].values[nextState] += 2;
    postSynaptic["RIVR"].values[nextState] += 2;
    postSynaptic["RMDDL"].values[nextState] += 1;
    postSynaptic["RMDVR"].values[nextState] += 1;
    postSynaptic["SMDDL"].values[nextState] += 2;
    postSynaptic["SMDVL"].values[nextState] += 1;
    postSynaptic["VB1"].values[nextState] += 1;
}

void URADL() {
    postSynaptic["IL1DL"].values[nextState] += 2;
    postSynaptic["MDL02"].values[nextState] += 2;
    postSynaptic["MDL03"].values[nextState] += 2;
    postSynaptic["MDL04"].values[nextState] += 2;
    postSynaptic["RIPL"].values[nextState] += 3;
    postSynaptic["RMEL"].values[nextState] += 1;
}

void URADR() {
    postSynaptic["IL1DR"].values[nextState] += 1;
    postSynaptic["MDR01"].values[nextState] += 3;
    postSynaptic["MDR02"].values[nextState] += 2;
    postSynaptic["MDR03"].values[nextState] += 3;
    postSynaptic["RIPR"].values[nextState] += 3;
    postSynaptic["RMDVR"].values[nextState] += 1;
    postSynaptic["RMED"].values[nextState] += 1;
    postSynaptic["RMER"].values[nextState] += 1;
    postSynaptic["URYDR"].values[nextState] += 1;
}

void URAVL() {
    postSynaptic["MVL01"].values[nextState] += 2;
    postSynaptic["MVL02"].values[nextState] += 2;
    postSynaptic["MVL03"].values[nextState] += 3;
    postSynaptic["MVL04"].values[nextState] += 2;
    postSynaptic["RIPL"].values[nextState] += 3;
    postSynaptic["RMEL"].values[nextState] += 1;
    postSynaptic["RMER"].values[nextState] += 1;
    postSynaptic["RMEV"].values[nextState] += 2;
}

void URAVR() {
    postSynaptic["IL1R"].values[nextState] += 1;
    postSynaptic["MVR01"].values[nextState] += 2;
    postSynaptic["MVR02"].values[nextState] += 2;
    postSynaptic["MVR03"].values[nextState] += 2;
    postSynaptic["MVR04"].values[nextState] += 2;
    postSynaptic["RIPR"].values[nextState] += 3;
    postSynaptic["RMDVL"].values[nextState] += 1;
    postSynaptic["RMER"].values[nextState] += 2;
    postSynaptic["RMEV"].values[nextState] += 2;
}

void URBL() {
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["CEPDL"].values[nextState] += 1;
    postSynaptic["IL1L"].values[nextState] += 1;
    postSynaptic["OLQDL"].values[nextState] += 1;
    postSynaptic["OLQVL"].values[nextState] += 1;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 1;
    postSynaptic["SIAVL"].values[nextState] += 1;
    postSynaptic["SMBDR"].values[nextState] += 1;
    postSynaptic["URXL"].values[nextState] += 2;
}

void URBR() {
    postSynaptic["ADAR"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["CEPDR"].values[nextState] += 1;
    postSynaptic["IL1R"].values[nextState] += 3;
    postSynaptic["IL2R"].values[nextState] += 1;
    postSynaptic["OLQDR"].values[nextState] += 1;
    postSynaptic["OLQVR"].values[nextState] += 1;
    postSynaptic["RICR"].values[nextState] += 1;
    postSynaptic["RMDL"].values[nextState] += 1;
    postSynaptic["RMDR"].values[nextState] += 1;
    postSynaptic["RMFL"].values[nextState] += 1;
    postSynaptic["SIAVR"].values[nextState] += 2;
    postSynaptic["SMBDL"].values[nextState] += 1;
    postSynaptic["URXR"].values[nextState] += 4;
}

void URXL() {
    postSynaptic["ASHL"].values[nextState] += 1;
    postSynaptic["AUAL"].values[nextState] += 5;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 4;
    postSynaptic["AVJR"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 8;
    postSynaptic["RICL"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 3;
    postSynaptic["RMGL"].values[nextState] += 1;
}

void URXR() {
    postSynaptic["AUAR"].values[nextState] += 4;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["AVER"].values[nextState] += 2;
    postSynaptic["IL2R"].values[nextState] += 1;
    postSynaptic["OLQVR"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 3;
    postSynaptic["RIGR"].values[nextState] += 2;
    postSynaptic["RIPR"].values[nextState] += 3;
    postSynaptic["RMDR"].values[nextState] += 1;
    postSynaptic["RMGR"].values[nextState] += 2;
    postSynaptic["SIAVR"].values[nextState] += 1;
}

void URYDL() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 2;
    postSynaptic["RIBL"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 4;
    postSynaptic["RMDVL"].values[nextState] += 6;
    postSynaptic["SMDDL"].values[nextState] += 1;
    postSynaptic["SMDDR"].values[nextState] += 1;
}

void URYDR() {
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVEL"].values[nextState] += 2;
    postSynaptic["AVER"].values[nextState] += 2;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 3;
    postSynaptic["RMDVR"].values[nextState] += 5;
    postSynaptic["SMDDL"].values[nextState] += 4;
}

void URYVL() {
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVER"].values[nextState] += 5;
    postSynaptic["IL1VL"].values[nextState] += 1;
    postSynaptic["RIAL"].values[nextState] += 1;
    postSynaptic["RIBL"].values[nextState] += 2;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["RIH"].values[nextState] += 1;
    postSynaptic["RIS"].values[nextState] += 1;
    postSynaptic["RMDDL"].values[nextState] += 4;
    postSynaptic["RMDVR"].values[nextState] += 2;
    postSynaptic["SIBVR"].values[nextState] += 1;
    postSynaptic["SMDVR"].values[nextState] += 4;
}

void URYVR() {
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVEL"].values[nextState] += 6;
    postSynaptic["IL1VR"].values[nextState] += 1;
    postSynaptic["RIAR"].values[nextState] += 1;
    postSynaptic["RIBR"].values[nextState] += 1;
    postSynaptic["RIGR"].values[nextState] += 1;
    postSynaptic["RMDDR"].values[nextState] += 6;
    postSynaptic["RMDVL"].values[nextState] += 4;
    postSynaptic["SIBDR"].values[nextState] += 1;
    postSynaptic["SIBVL"].values[nextState] += 1;
    postSynaptic["SMDVL"].values[nextState] += 3;
}

void VA1() {
    postSynaptic["AVAL"].values[nextState] += 3;
    postSynaptic["DA2"].values[nextState] += 2;
    postSynaptic["DD1"].values[nextState] += 9;
    postSynaptic["MVL07"].values[nextState] += 3;
    postSynaptic["MVL08"].values[nextState] += 3;
    postSynaptic["MVR07"].values[nextState] += 3;
    postSynaptic["MVR08"].values[nextState] += 3;
    postSynaptic["VD1"].values[nextState] += 2;
}

void VA2() {
    postSynaptic["AVAL"].values[nextState] += 5;
    postSynaptic["DD1"].values[nextState] += 13;
    postSynaptic["MVL07"].values[nextState] += 5;
    postSynaptic["MVL10"].values[nextState] += 5;
    postSynaptic["MVR07"].values[nextState] += 5;
    postSynaptic["MVR10"].values[nextState] += 5;
    postSynaptic["SABD"].values[nextState] += 3;
    postSynaptic["VA3"].values[nextState] += 2;
    postSynaptic["VB1"].values[nextState] += 2;
    postSynaptic["VD1"].values[nextState] += 1;
    postSynaptic["VD2"].values[nextState] += 11;
}

void VA3() {
    postSynaptic["AS1"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["DD1"].values[nextState] += 18;
    postSynaptic["DD2"].values[nextState] += 11;
    postSynaptic["MVL09"].values[nextState] += 5;
    postSynaptic["MVL10"].values[nextState] += 5;
    postSynaptic["MVL12"].values[nextState] += 5;
    postSynaptic["MVR09"].values[nextState] += 5;
    postSynaptic["MVR10"].values[nextState] += 5;
    postSynaptic["MVR12"].values[nextState] += 5;
    postSynaptic["SABD"].values[nextState] += 2;
    postSynaptic["VA4"].values[nextState] += 1;
    postSynaptic["VD2"].values[nextState] += 3;
    postSynaptic["VD3"].values[nextState] += 3;
}

void VA4() {
    postSynaptic["AS2"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["AVDL"].values[nextState] += 1;
    postSynaptic["DA5"].values[nextState] += 1;
    postSynaptic["DD2"].values[nextState] += 21;
    postSynaptic["MVL11"].values[nextState] += 6;
    postSynaptic["MVL12"].values[nextState] += 6;
    postSynaptic["MVR11"].values[nextState] += 6;
    postSynaptic["MVR12"].values[nextState] += 6;
    postSynaptic["SABD"].values[nextState] += 1;
    postSynaptic["VB3"].values[nextState] += 2;
    postSynaptic["VD4"].values[nextState] += 3;
}

void VA5() {
    postSynaptic["AS3"].values[nextState] += 2;
    postSynaptic["AVAL"].values[nextState] += 5;
    postSynaptic["AVAR"].values[nextState] += 3;
    postSynaptic["DA5"].values[nextState] += 2;
    postSynaptic["DD2"].values[nextState] += 5;
    postSynaptic["DD3"].values[nextState] += 13;
    postSynaptic["MVL11"].values[nextState] += 5;
    postSynaptic["MVL14"].values[nextState] += 5;
    postSynaptic["MVR11"].values[nextState] += 5;
    postSynaptic["MVR14"].values[nextState] += 5;
    postSynaptic["VD5"].values[nextState] += 2;
}

void VA6() {
    postSynaptic["AVAL"].values[nextState] += 6;
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["DD3"].values[nextState] += 24;
    postSynaptic["MVL13"].values[nextState] += 5;
    postSynaptic["MVL14"].values[nextState] += 5;
    postSynaptic["MVR13"].values[nextState] += 5;
    postSynaptic["MVR14"].values[nextState] += 5;
    postSynaptic["VB5"].values[nextState] += 2;
    postSynaptic["VD5"].values[nextState] += 1;
    postSynaptic["VD6"].values[nextState] += 2;
}

void VA7() {
    postSynaptic["AS5"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 4;
    postSynaptic["DD3"].values[nextState] += 3;
    postSynaptic["DD4"].values[nextState] += 12;
    postSynaptic["MVL13"].values[nextState] += 4;
    postSynaptic["MVL15"].values[nextState] += 4;
    postSynaptic["MVL16"].values[nextState] += 4;
    postSynaptic["MVR13"].values[nextState] += 4;
    postSynaptic["MVR15"].values[nextState] += 4;
    postSynaptic["MVR16"].values[nextState] += 4;
    postSynaptic["MVULVA"].values[nextState] += 4;
    postSynaptic["VB3"].values[nextState] += 1;
    postSynaptic["VD7"].values[nextState] += 9;
}

void VA8() {
    postSynaptic["AS6"].values[nextState] += 1;
    postSynaptic["AVAL"].values[nextState] += 10;
    postSynaptic["AVAR"].values[nextState] += 4;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DD4"].values[nextState] += 21;
    postSynaptic["MVL15"].values[nextState] += 6;
    postSynaptic["MVL16"].values[nextState] += 6;
    postSynaptic["MVR15"].values[nextState] += 6;
    postSynaptic["MVR16"].values[nextState] += 6;
    postSynaptic["PDER"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 2;
    postSynaptic["VA8"].values[nextState] += 1;
    postSynaptic["VA9"].values[nextState] += 1;
    postSynaptic["VB6"].values[nextState] += 1;
    postSynaptic["VB8"].values[nextState] += 3;
    postSynaptic["VB9"].values[nextState] += 3;
    postSynaptic["VD7"].values[nextState] += 5;
    postSynaptic["VD8"].values[nextState] += 1;
}

void VA9() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DD4"].values[nextState] += 3;
    postSynaptic["DD5"].values[nextState] += 15;
    postSynaptic["DVB"].values[nextState] += 1;
    postSynaptic["DVC"].values[nextState] += 1;
    postSynaptic["MVL15"].values[nextState] += 5;
    postSynaptic["MVL18"].values[nextState] += 5;
    postSynaptic["MVR15"].values[nextState] += 5;
    postSynaptic["MVR18"].values[nextState] += 5;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["VB8"].values[nextState] += 1;
    postSynaptic["VB9"].values[nextState] += 4;
    postSynaptic["VD7"].values[nextState] += 1;
    postSynaptic["VD9"].values[nextState] += 10;
}

void VA10() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["MVL17"].values[nextState] += 5;
    postSynaptic["MVL18"].values[nextState] += 5;
    postSynaptic["MVR17"].values[nextState] += 5;
    postSynaptic["MVR18"].values[nextState] += 5;
}

void VA11() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["AVAR"].values[nextState] += 7;
    postSynaptic["DD6"].values[nextState] += 10;
    postSynaptic["MVL19"].values[nextState] += 5;
    postSynaptic["MVL20"].values[nextState] += 5;
    postSynaptic["MVR19"].values[nextState] += 5;
    postSynaptic["MVR20"].values[nextState] += 5;
    postSynaptic["PVNR"].values[nextState] += 2;
    postSynaptic["VB10"].values[nextState] += 1;
    postSynaptic["VD12"].values[nextState] += 4;
}

void VA12() {
    postSynaptic["AS11"].values[nextState] += 2;
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["DA8"].values[nextState] += 3;
    postSynaptic["DA9"].values[nextState] += 5;
    postSynaptic["DB7"].values[nextState] += 4;
    postSynaptic["DD6"].values[nextState] += 2;
    postSynaptic["LUAL"].values[nextState] += 2;
    postSynaptic["MVL21"].values[nextState] += 5;
    postSynaptic["MVL22"].values[nextState] += 5;
    postSynaptic["MVL23"].values[nextState] += 5;
    postSynaptic["MVR21"].values[nextState] += 5;
    postSynaptic["MVR22"].values[nextState] += 5;
    postSynaptic["MVR23"].values[nextState] += 5;
    postSynaptic["MVR24"].values[nextState] += 5;
    postSynaptic["PHCL"].values[nextState] += 1;
    postSynaptic["PHCR"].values[nextState] += 1;
    postSynaptic["PVCL"].values[nextState] += 2;
    postSynaptic["PVCR"].values[nextState] += 3;
    postSynaptic["VA11"].values[nextState] += 1;
    postSynaptic["VB11"].values[nextState] += 1;
    postSynaptic["VD12"].values[nextState] += 3;
    postSynaptic["VD13"].values[nextState] += 11;
}

void VB1() {
    postSynaptic["AIBR"].values[nextState] += 1;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 4;
    postSynaptic["DB2"].values[nextState] += 2;
    postSynaptic["DD1"].values[nextState] += 1;
    postSynaptic["DVA"].values[nextState] += 1;
    postSynaptic["MVL07"].values[nextState] += 1;
    postSynaptic["MVL08"].values[nextState] += 1;
    postSynaptic["MVR07"].values[nextState] += 1;
    postSynaptic["MVR08"].values[nextState] += 1;
    postSynaptic["RIML"].values[nextState] += 2;
    postSynaptic["RMFL"].values[nextState] += 2;
    postSynaptic["SAADL"].values[nextState] += 9;
    postSynaptic["SAADR"].values[nextState] += 2;
    postSynaptic["SABD"].values[nextState] += 1;
    postSynaptic["SMDVR"].values[nextState] += 1;
    postSynaptic["VA1"].values[nextState] += 3;
    postSynaptic["VA3"].values[nextState] += 1;
    postSynaptic["VB2"].values[nextState] += 4;
    postSynaptic["VD1"].values[nextState] += 3;
    postSynaptic["VD2"].values[nextState] += 1;
}

void VB2() {
    postSynaptic["AVBL"].values[nextState] += 3;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 20;
    postSynaptic["DD2"].values[nextState] += 1;
    postSynaptic["MVL07"].values[nextState] += 4;
    postSynaptic["MVL09"].values[nextState] += 4;
    postSynaptic["MVL10"].values[nextState] += 4;
    postSynaptic["MVL12"].values[nextState] += 4;
    postSynaptic["MVR07"].values[nextState] += 4;
    postSynaptic["MVR09"].values[nextState] += 4;
    postSynaptic["MVR10"].values[nextState] += 4;
    postSynaptic["MVR12"].values[nextState] += 4;
    postSynaptic["RIGL"].values[nextState] += 1;
    postSynaptic["VA2"].values[nextState] += 1;
    postSynaptic["VB1"].values[nextState] += 4;
    postSynaptic["VB3"].values[nextState] += 1;
    postSynaptic["VB5"].values[nextState] += 1;
    postSynaptic["VB7"].values[nextState] += 2;
    postSynaptic["VC2"].values[nextState] += 1;
    postSynaptic["VD2"].values[nextState] += 9;
    postSynaptic["VD3"].values[nextState] += 3;
}

void VB3() {
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DB1"].values[nextState] += 1;
    postSynaptic["DD2"].values[nextState] += 37;
    postSynaptic["MVL11"].values[nextState] += 6;
    postSynaptic["MVL12"].values[nextState] += 6;
    postSynaptic["MVL14"].values[nextState] += 6;
    postSynaptic["MVR11"].values[nextState] += 6;
    postSynaptic["MVR12"].values[nextState] += 6;
    postSynaptic["MVR14"].values[nextState] += 6;
    postSynaptic["VA4"].values[nextState] += 1;
    postSynaptic["VA7"].values[nextState] += 1;
    postSynaptic["VB2"].values[nextState] += 1;
}

void VB4() {
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DB1"].values[nextState] += 1;
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["DD2"].values[nextState] += 6;
    postSynaptic["DD3"].values[nextState] += 16;
    postSynaptic["MVL11"].values[nextState] += 5;
    postSynaptic["MVL14"].values[nextState] += 5;
    postSynaptic["MVR11"].values[nextState] += 5;
    postSynaptic["MVR14"].values[nextState] += 5;
    postSynaptic["VB5"].values[nextState] += 1;
}

void VB5() {
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["DD3"].values[nextState] += 27;
    postSynaptic["MVL13"].values[nextState] += 6;
    postSynaptic["MVL14"].values[nextState] += 6;
    postSynaptic["MVR13"].values[nextState] += 6;
    postSynaptic["MVR14"].values[nextState] += 6;
    postSynaptic["VB2"].values[nextState] += 1;
    postSynaptic["VB4"].values[nextState] += 1;
    postSynaptic["VB6"].values[nextState] += 8;
}

void VB6() {
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["DA4"].values[nextState] += 1;
    postSynaptic["DD4"].values[nextState] += 30;
    postSynaptic["MVL15"].values[nextState] += 6;
    postSynaptic["MVL16"].values[nextState] += 6;
    postSynaptic["MVR15"].values[nextState] += 6;
    postSynaptic["MVR16"].values[nextState] += 6;
    postSynaptic["MVULVA"].values[nextState] += 6;
    postSynaptic["VA8"].values[nextState] += 1;
    postSynaptic["VB5"].values[nextState] += 1;
    postSynaptic["VB7"].values[nextState] += 1;
    postSynaptic["VD6"].values[nextState] += 1;
    postSynaptic["VD7"].values[nextState] += 8;
}

void VB7() {
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 2;
    postSynaptic["DD4"].values[nextState] += 2;
    postSynaptic["MVL15"].values[nextState] += 5;
    postSynaptic["MVR15"].values[nextState] += 5;
    postSynaptic["VB2"].values[nextState] += 2;
}

void VB8() {
    postSynaptic["AVBL"].values[nextState] += 7;
    postSynaptic["AVBR"].values[nextState] += 3;
    postSynaptic["DD5"].values[nextState] += 30;
    postSynaptic["MVL17"].values[nextState] += 5;
    postSynaptic["MVL18"].values[nextState] += 5;
    postSynaptic["MVL20"].values[nextState] += 5;
    postSynaptic["MVR17"].values[nextState] += 5;
    postSynaptic["MVR18"].values[nextState] += 5;
    postSynaptic["MVR20"].values[nextState] += 5;
    postSynaptic["VA8"].values[nextState] += 3;
    postSynaptic["VA9"].values[nextState] += 1;
    postSynaptic["VB9"].values[nextState] += 6;
    postSynaptic["VD10"].values[nextState] += 1;
    postSynaptic["VD9"].values[nextState] += 10;
}

void VB9() {
    postSynaptic["AVAL"].values[nextState] += 5;
    postSynaptic["AVAR"].values[nextState] += 4;
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVBR"].values[nextState] += 6;
    postSynaptic["DD5"].values[nextState] += 8;
    postSynaptic["DVB"].values[nextState] += 1;
    postSynaptic["MVL17"].values[nextState] += 6;
    postSynaptic["MVL20"].values[nextState] += 6;
    postSynaptic["MVR17"].values[nextState] += 6;
    postSynaptic["MVR20"].values[nextState] += 6;
    postSynaptic["PVCL"].values[nextState] += 2;
    postSynaptic["VA8"].values[nextState] += 3;
    postSynaptic["VA9"].values[nextState] += 4;
    postSynaptic["VB8"].values[nextState] += 3;
    postSynaptic["VD10"].values[nextState] += 5;
}

void VB10() {
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["AVKL"].values[nextState] += 1;
    postSynaptic["DD6"].values[nextState] += 9;
    postSynaptic["MVL19"].values[nextState] += 5;
    postSynaptic["MVL20"].values[nextState] += 5;
    postSynaptic["MVR19"].values[nextState] += 5;
    postSynaptic["MVR20"].values[nextState] += 5;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["VD11"].values[nextState] += 1;
    postSynaptic["VD12"].values[nextState] += 2;
}

void VB11() {
    postSynaptic["AVBL"].values[nextState] += 2;
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DD6"].values[nextState] += 7;
    postSynaptic["MVL21"].values[nextState] += 5;
    postSynaptic["MVL22"].values[nextState] += 5;
    postSynaptic["MVL23"].values[nextState] += 5;
    postSynaptic["MVR21"].values[nextState] += 5;
    postSynaptic["MVR22"].values[nextState] += 5;
    postSynaptic["MVR23"].values[nextState] += 5;
    postSynaptic["MVR24"].values[nextState] += 5;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["VA12"].values[nextState] += 2;
}

void VC1() {
    postSynaptic["AVL"].values[nextState] += 2;
    postSynaptic["DD1"].values[nextState] += 7;
    postSynaptic["DD2"].values[nextState] += 6;
    postSynaptic["DD3"].values[nextState] += 6;
    postSynaptic["DVC"].values[nextState] += 1;
    postSynaptic["MVULVA"].values[nextState] += 6;
    postSynaptic["PVT"].values[nextState] += 2;
    postSynaptic["VC2"].values[nextState] += 9;
    postSynaptic["VC3"].values[nextState] += 3;
    postSynaptic["VD1"].values[nextState] += 5;
    postSynaptic["VD2"].values[nextState] += 1;
    postSynaptic["VD3"].values[nextState] += 1;
    postSynaptic["VD4"].values[nextState] += 2;
    postSynaptic["VD5"].values[nextState] += 5;
    postSynaptic["VD6"].values[nextState] += 1;
}

void VC2() {
    postSynaptic["DB4"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 6;
    postSynaptic["DD2"].values[nextState] += 4;
    postSynaptic["DD3"].values[nextState] += 9;
    postSynaptic["DVC"].values[nextState] += 1;
    postSynaptic["MVULVA"].values[nextState] += 10;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVQR"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 2;
    postSynaptic["VC1"].values[nextState] += 10;
    postSynaptic["VC3"].values[nextState] += 6;
    postSynaptic["VD1"].values[nextState] += 2;
    postSynaptic["VD2"].values[nextState] += 2;
    postSynaptic["VD4"].values[nextState] += 5;
    postSynaptic["VD5"].values[nextState] += 5;
    postSynaptic["VD6"].values[nextState] += 1;
}

void VC3() {
    postSynaptic["AVL"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 2;
    postSynaptic["DD2"].values[nextState] += 4;
    postSynaptic["DD3"].values[nextState] += 5;
    postSynaptic["DD4"].values[nextState] += 13;
    postSynaptic["DVC"].values[nextState] += 1;
    postSynaptic["HSNR"].values[nextState] += 1;
    postSynaptic["MVULVA"].values[nextState] += 11;
    postSynaptic["PVNR"].values[nextState] += 1;
    postSynaptic["PVPR"].values[nextState] += 1;
    postSynaptic["PVQR"].values[nextState] += 4;
    postSynaptic["VC1"].values[nextState] += 4;
    postSynaptic["VC2"].values[nextState] += 3;
    postSynaptic["VC4"].values[nextState] += 1;
    postSynaptic["VC5"].values[nextState] += 2;
    postSynaptic["VD1"].values[nextState] += 1;
    postSynaptic["VD2"].values[nextState] += 1;
    postSynaptic["VD3"].values[nextState] += 1;
    postSynaptic["VD4"].values[nextState] += 2;
    postSynaptic["VD5"].values[nextState] += 4;
    postSynaptic["VD6"].values[nextState] += 4;
    postSynaptic["VD7"].values[nextState] += 5;
}

void VC4() {
    postSynaptic["AVBL"].values[nextState] += 1;
    postSynaptic["AVFR"].values[nextState] += 1;
    postSynaptic["AVHR"].values[nextState] += 1;
    postSynaptic["MVULVA"].values[nextState] += 7;
    postSynaptic["VC1"].values[nextState] += 1;
    postSynaptic["VC3"].values[nextState] += 5;
    postSynaptic["VC5"].values[nextState] += 2;
}

void VC5() {
    postSynaptic["AVFL"].values[nextState] += 1;
    postSynaptic["AVFR"].values[nextState] += 1;
    postSynaptic["DVC"].values[nextState] += 2;
    postSynaptic["HSNL"].values[nextState] += 1;
    postSynaptic["MVULVA"].values[nextState] += 2;
    postSynaptic["OLLR"].values[nextState] += 1;
    postSynaptic["PVT"].values[nextState] += 1;
    postSynaptic["URBL"].values[nextState] += 3;
    postSynaptic["VC3"].values[nextState] += 3;
    postSynaptic["VC4"].values[nextState] += 2;
}

void VC6() {
    postSynaptic["MVULVA"].values[nextState] += 1;
}

void VD1() {
    postSynaptic["DD1"].values[nextState] += 5;
    postSynaptic["DVC"].values[nextState] += 5;
    postSynaptic["MVL05"].values[nextState] += -5;
    postSynaptic["MVL08"].values[nextState] += -5;
    postSynaptic["MVR05"].values[nextState] += -5;
    postSynaptic["MVR08"].values[nextState] += -5;
    postSynaptic["RIFL"].values[nextState] += 1;
    postSynaptic["RIGL"].values[nextState] += 2;
    postSynaptic["SMDDR"].values[nextState] += 1;
    postSynaptic["VA1"].values[nextState] += 2;
    postSynaptic["VA2"].values[nextState] += 1;
    postSynaptic["VC1"].values[nextState] += 1;
    postSynaptic["VD2"].values[nextState] += 7;
}

void VD2() {
    postSynaptic["AS1"].values[nextState] += 1;
    postSynaptic["DD1"].values[nextState] += 3;
    postSynaptic["MVL07"].values[nextState] += -7;
    postSynaptic["MVL10"].values[nextState] += -7;
    postSynaptic["MVR07"].values[nextState] += -7;
    postSynaptic["MVR10"].values[nextState] += -7;
    postSynaptic["VA2"].values[nextState] += 9;
    postSynaptic["VB2"].values[nextState] += 3;
    postSynaptic["VD1"].values[nextState] += 7;
    postSynaptic["VD3"].values[nextState] += 2;
}

void VD3() {
    postSynaptic["MVL09"].values[nextState] += -7;
    postSynaptic["MVL12"].values[nextState] += -9;
    postSynaptic["MVR09"].values[nextState] += -7;
    postSynaptic["MVR12"].values[nextState] += -7;
    postSynaptic["PVPL"].values[nextState] += 1;
    postSynaptic["VA3"].values[nextState] += 2;
    postSynaptic["VB2"].values[nextState] += 2;
    postSynaptic["VD2"].values[nextState] += 2;
    postSynaptic["VD4"].values[nextState] += 1;
}

void VD4() {
    postSynaptic["DD2"].values[nextState] += 2;
    postSynaptic["MVL11"].values[nextState] += -9;
    postSynaptic["MVL12"].values[nextState] += -9;
    postSynaptic["MVR11"].values[nextState] += -9;
    postSynaptic["MVR12"].values[nextState] += -9;
    postSynaptic["PVPR"].values[nextState] += 1;
    postSynaptic["VD3"].values[nextState] += 1;
    postSynaptic["VD5"].values[nextState] += 1;
}

void VD5() {
    postSynaptic["AVAR"].values[nextState] += 1;
    postSynaptic["MVL14"].values[nextState] += -17;
    postSynaptic["MVR14"].values[nextState] += -17;
    postSynaptic["PVPR"].values[nextState] += 1;
    postSynaptic["VA5"].values[nextState] += 2;
    postSynaptic["VB4"].values[nextState] += 2;
    postSynaptic["VD4"].values[nextState] += 1;
    postSynaptic["VD6"].values[nextState] += 2;
}

void VD6() {
    postSynaptic["AVAL"].values[nextState] += 1;
    postSynaptic["MVL13"].values[nextState] += -7;
    postSynaptic["MVL14"].values[nextState] += -7;
    postSynaptic["MVL16"].values[nextState] += -7;
    postSynaptic["MVR13"].values[nextState] += -7;
    postSynaptic["MVR14"].values[nextState] += -7;
    postSynaptic["MVR16"].values[nextState] += -7;
    postSynaptic["VA6"].values[nextState] += 1;
    postSynaptic["VB5"].values[nextState] += 2;
    postSynaptic["VD5"].values[nextState] += 2;
    postSynaptic["VD7"].values[nextState] += 1;
}

void VD7() {
    postSynaptic["MVL15"].values[nextState] += -7;
    postSynaptic["MVL16"].values[nextState] += -7;
    postSynaptic["MVR15"].values[nextState] += -7;
    postSynaptic["MVR16"].values[nextState] += -7;
    postSynaptic["MVULVA"].values[nextState] += -15;
    postSynaptic["VA9"].values[nextState] += 1;
    postSynaptic["VD6"].values[nextState] += 1;
}

void VD8() {
    postSynaptic["DD4"].values[nextState] += 2;
    postSynaptic["MVL15"].values[nextState] += -18;
    postSynaptic["MVR15"].values[nextState] += -18;
    postSynaptic["VA8"].values[nextState] += 5;
}

void VD9() {
    postSynaptic["MVL17"].values[nextState] += -10;
    postSynaptic["MVL18"].values[nextState] += -10;
    postSynaptic["MVR17"].values[nextState] += -10;
    postSynaptic["MVR18"].values[nextState] += -10;
    postSynaptic["PDER"].values[nextState] += 1;
    postSynaptic["VD10"].values[nextState] += 5;
}

void VD10() {
    postSynaptic["AVBR"].values[nextState] += 1;
    postSynaptic["DD5"].values[nextState] += 2;
    postSynaptic["DVC"].values[nextState] += 4;
    postSynaptic["MVL17"].values[nextState] += -9;
    postSynaptic["MVL20"].values[nextState] += -9;
    postSynaptic["MVR17"].values[nextState] += -9;
    postSynaptic["MVR20"].values[nextState] += -9;
    postSynaptic["VB9"].values[nextState] += 2;
    postSynaptic["VD9"].values[nextState] += 5;
}

void VD11() {
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["MVL19"].values[nextState] += -9;
    postSynaptic["MVL20"].values[nextState] += -9;
    postSynaptic["MVR19"].values[nextState] += -9;
    postSynaptic["MVR20"].values[nextState] += -9;
    postSynaptic["VA11"].values[nextState] += 1;
    postSynaptic["VB10"].values[nextState] += 1;
}

void VD12() {
    postSynaptic["MVL19"].values[nextState] += -5;
    postSynaptic["MVL21"].values[nextState] += -5;
    postSynaptic["MVR19"].values[nextState] += -5;
    postSynaptic["MVR22"].values[nextState] += -5;
    postSynaptic["VA11"].values[nextState] += 3;
    postSynaptic["VA12"].values[nextState] += 2;
    postSynaptic["VB10"].values[nextState] += 1;
    postSynaptic["VB11"].values[nextState] += 1;
}

void VD13() {
    postSynaptic["AVAR"].values[nextState] += 2;
    postSynaptic["MVL21"].values[nextState] += -9;
    postSynaptic["MVL22"].values[nextState] += -9;
    postSynaptic["MVL23"].values[nextState] += -9;
    postSynaptic["MVR21"].values[nextState] += -9;
    postSynaptic["MVR22"].values[nextState] += -9;
    postSynaptic["MVR23"].values[nextState] += -9;
    postSynaptic["MVR24"].values[nextState] += -9;
    postSynaptic["PVCL"].values[nextState] += 1;
    postSynaptic["PVCR"].values[nextState] += 1;
    postSynaptic["PVPL"].values[nextState] += 2;
    postSynaptic["VA12"].values[nextState] += 1;
}

void createPostSynaptic() {
    postSynaptic["ADAL"] = { ADAL, { 0, 0 } };
    postSynaptic["ADAR"] = { ADAR, { 0, 0 } };
    postSynaptic["ADEL"] = { ADEL, { 0, 0 } };
    postSynaptic["ADER"] = { ADER, { 0, 0 } };
    postSynaptic["ADFL"] = { ADFL, { 0, 0 } };
    postSynaptic["ADFR"] = { ADFR, { 0, 0 } };
    postSynaptic["ADLL"] = { ADLL, { 0, 0 } };
    postSynaptic["ADLR"] = { ADLR, { 0, 0 } };
    postSynaptic["AFDL"] = { AFDL, { 0, 0 } };
    postSynaptic["AFDR"] = { AFDR, { 0, 0 } };
    postSynaptic["AIAL"] = { AIAL, { 0, 0 } };
    postSynaptic["AIAR"] = { AIAR, { 0, 0 } };
    postSynaptic["AIBL"] = { AIBL, { 0, 0 } };
    postSynaptic["AIBR"] = { AIBR, { 0, 0 } };
    postSynaptic["AIML"] = { AIML, { 0, 0 } };
    postSynaptic["AIMR"] = { AIMR, { 0, 0 } };
    postSynaptic["AINL"] = { AINL, { 0, 0 } };
    postSynaptic["AINR"] = { AINR, { 0, 0 } };
    postSynaptic["AIYL"] = { AIYL, { 0, 0 } };
    postSynaptic["AIYR"] = { AIYR, { 0, 0 } };
    postSynaptic["AIZL"] = { AIZL, { 0, 0 } };
    postSynaptic["AIZR"] = { AIZR, { 0, 0 } };
    postSynaptic["ALA"] = { ALA, { 0, 0 } };
    postSynaptic["ALML"] = { ALML, { 0, 0 } };
    postSynaptic["ALMR"] = { ALMR, { 0, 0 } };
    postSynaptic["ALNL"] = { ALNL, { 0, 0 } };
    postSynaptic["ALNR"] = { ALNR, { 0, 0 } };
    postSynaptic["AQR"] = { AQR, { 0, 0 } };
    postSynaptic["AS1"] = { AS1, { 0, 0 } };
    postSynaptic["AS10"] = { AS10, { 0, 0 } };
    postSynaptic["AS11"] = { AS11, { 0, 0 } };
    postSynaptic["AS2"] = { AS2, { 0, 0 } };
    postSynaptic["AS3"] = { AS3, { 0, 0 } };
    postSynaptic["AS4"] = { AS4, { 0, 0 } };
    postSynaptic["AS5"] = { AS5, { 0, 0 } };
    postSynaptic["AS6"] = { AS6, { 0, 0 } };
    postSynaptic["AS7"] = { AS7, { 0, 0 } };
    postSynaptic["AS8"] = { AS8, { 0, 0 } };
    postSynaptic["AS9"] = { AS9, { 0, 0 } };
    postSynaptic["ASEL"] = { ASEL, { 0, 0 } };
    postSynaptic["ASER"] = { ASER, { 0, 0 } };
    postSynaptic["ASGL"] = { ASGL, { 0, 0 } };
    postSynaptic["ASGR"] = { ASGR, { 0, 0 } };
    postSynaptic["ASHL"] = { ASHL, { 0, 0 } };
    postSynaptic["ASHR"] = { ASHR, { 0, 0 } };
    postSynaptic["ASIL"] = { ASIL, { 0, 0 } };
    postSynaptic["ASIR"] = { ASIR, { 0, 0 } };
    postSynaptic["ASJL"] = { ASJL, { 0, 0 } };
    postSynaptic["ASJR"] = { ASJR, { 0, 0 } };
    postSynaptic["ASKL"] = { ASKL, { 0, 0 } };
    postSynaptic["ASKR"] = { ASKR, { 0, 0 } };
    postSynaptic["AUAL"] = { AUAL, { 0, 0 } };
    postSynaptic["AUAR"] = { AUAR, { 0, 0 } };
    postSynaptic["AVAL"] = { AVAL, { 0, 0 } };
    postSynaptic["AVAR"] = { AVAR, { 0, 0 } };
    postSynaptic["AVBL"] = { AVBL, { 0, 0 } };
    postSynaptic["AVBR"] = { AVBR, { 0, 0 } };
    postSynaptic["AVDL"] = { AVDL, { 0, 0 } };
    postSynaptic["AVDR"] = { AVDR, { 0, 0 } };
    postSynaptic["AVEL"] = { AVEL, { 0, 0 } };
    postSynaptic["AVER"] = { AVER, { 0, 0 } };
    postSynaptic["AVFL"] = { AVFL, { 0, 0 } };
    postSynaptic["AVFR"] = { AVFR, { 0, 0 } };
    postSynaptic["AVG"] = { AVG, { 0, 0 } };
    postSynaptic["AVHL"] = { AVHL, { 0, 0 } };
    postSynaptic["AVHR"] = { AVHR, { 0, 0 } };
    postSynaptic["AVJL"] = { AVJL, { 0, 0 } };
    postSynaptic["AVJR"] = { AVJR, { 0, 0 } };
    postSynaptic["AVKL"] = { AVKL, { 0, 0 } };
    postSynaptic["AVKR"] = { AVKR, { 0, 0 } };
    postSynaptic["AVL"] = { AVL, { 0, 0 } };
    postSynaptic["AVM"] = { AVM, { 0, 0 } };
    postSynaptic["AWAL"] = { AWAL, { 0, 0 } };
    postSynaptic["AWAR"] = { AWAR, { 0, 0 } };
    postSynaptic["AWBL"] = { AWBL, { 0, 0 } };
    postSynaptic["AWBR"] = { AWBR, { 0, 0 } };
    postSynaptic["AWCL"] = { AWCL, { 0, 0 } };
    postSynaptic["AWCR"] = { AWCR, { 0, 0 } };
    postSynaptic["BAGL"] = { BAGL, { 0, 0 } };
    postSynaptic["BAGR"] = { BAGR, { 0, 0 } };
    postSynaptic["BDUL"] = { BDUL, { 0, 0 } };
    postSynaptic["BDUR"] = { BDUR, { 0, 0 } };
    postSynaptic["CEPDL"] = { CEPDL, { 0, 0 } };
    postSynaptic["CEPDR"] = { CEPDR, { 0, 0 } };
    postSynaptic["CEPVL"] = { CEPVL, { 0, 0 } };
    postSynaptic["CEPVR"] = { CEPVR, { 0, 0 } };
    postSynaptic["DA1"] = { DA1, { 0, 0 } };
    postSynaptic["DA2"] = { DA2, { 0, 0 } };
    postSynaptic["DA3"] = { DA3, { 0, 0 } };
    postSynaptic["DA4"] = { DA4, { 0, 0 } };
    postSynaptic["DA5"] = { DA5, { 0, 0 } };
    postSynaptic["DA6"] = { DA6, { 0, 0 } };
    postSynaptic["DA7"] = { DA7, { 0, 0 } };
    postSynaptic["DA8"] = { DA8, { 0, 0 } };
    postSynaptic["DA9"] = { DA9, { 0, 0 } };
    postSynaptic["DB1"] = { DB1, { 0, 0 } };
    postSynaptic["DB2"] = { DB2, { 0, 0 } };
    postSynaptic["DB3"] = { DB3, { 0, 0 } };
    postSynaptic["DB4"] = { DB4, { 0, 0 } };
    postSynaptic["DB5"] = { DB5, { 0, 0 } };
    postSynaptic["DB6"] = { DB6, { 0, 0 } };
    postSynaptic["DB7"] = { DB7, { 0, 0 } };
    postSynaptic["DD1"] = { DD1, { 0, 0 } };
    postSynaptic["DD2"] = { DD2, { 0, 0 } };
    postSynaptic["DD3"] = { DD3, { 0, 0 } };
    postSynaptic["DD4"] = { DD4, { 0, 0 } };
    postSynaptic["DD5"] = { DD5, { 0, 0 } };
    postSynaptic["DD6"] = { DD6, { 0, 0 } };
    postSynaptic["DVA"] = { DVA, { 0, 0 } };
    postSynaptic["DVB"] = { DVB, { 0, 0 } };
    postSynaptic["DVC"] = { DVC, { 0, 0 } };
    postSynaptic["FLPL"] = { FLPL, { 0, 0 } };
    postSynaptic["FLPR"] = { FLPR, { 0, 0 } };
    postSynaptic["HSNL"] = { HSNL, { 0, 0 } };
    postSynaptic["HSNR"] = { HSNR, { 0, 0 } };
    postSynaptic["I1L"] = { I1L, { 0, 0 } };
    postSynaptic["I1R"] = { I1R, { 0, 0 } };
    postSynaptic["I2L"] = { I2L, { 0, 0 } };
    postSynaptic["I2R"] = { I2R, { 0, 0 } };
    postSynaptic["I3"] = { I3, { 0, 0 } };
    postSynaptic["I4"] = { I4, { 0, 0 } };
    postSynaptic["I5"] = { I5, { 0, 0 } };
    postSynaptic["I6"] = { I6, { 0, 0 } };
    postSynaptic["IL1DL"] = { IL1DL, { 0, 0 } };
    postSynaptic["IL1DR"] = { IL1DR, { 0, 0 } };
    postSynaptic["IL1L"] = { IL1L, { 0, 0 } };
    postSynaptic["IL1R"] = { IL1R, { 0, 0 } };
    postSynaptic["IL1VL"] = { IL1VL, { 0, 0 } };
    postSynaptic["IL1VR"] = { IL1VR, { 0, 0 } };
    postSynaptic["IL2L"] = { IL2L, { 0, 0 } };
    postSynaptic["IL2R"] = { IL2R, { 0, 0 } };
    postSynaptic["IL2DL"] = { IL2DL, { 0, 0 } };
    postSynaptic["IL2DR"] = { IL2DR, { 0, 0 } };
    postSynaptic["IL2VL"] = { IL2VL, { 0, 0 } };
    postSynaptic["IL2VR"] = { IL2VR, { 0, 0 } };
    postSynaptic["LUAL"] = { LUAL, { 0, 0 } };
    postSynaptic["LUAR"] = { LUAR, { 0, 0 } };
    postSynaptic["M1"] = { M1, { 0, 0 } };
    postSynaptic["M2L"] = { M2L, { 0, 0 } };
    postSynaptic["M2R"] = { M2R, { 0, 0 } };
    postSynaptic["M3L"] = { M3L, { 0, 0 } };
    postSynaptic["M3R"] = { M3R, { 0, 0 } };
    postSynaptic["M4"] = { M4, { 0, 0 } };
    postSynaptic["M5"] = { M5, { 0, 0 } };
    postSynaptic["MANAL"] = { nullptr, { 0, 0 } }; // why doesnt this have weight????
    postSynaptic["MCL"] = { MCL, { 0, 0 } };
    postSynaptic["MCR"] = { MCR, { 0, 0 } };
    postSynaptic["MDL01"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL02"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL03"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL04"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL05"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL06"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL07"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL08"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL09"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL10"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL11"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL12"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL13"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL14"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL15"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL16"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL17"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL18"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL19"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL20"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL21"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL22"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL23"] = { nullptr, { 0, 0 } };
    postSynaptic["MDL24"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR01"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR02"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR03"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR04"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR05"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR06"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR07"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR08"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR09"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR10"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR11"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR12"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR13"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR14"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR15"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR16"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR17"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR18"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR19"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR20"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR21"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR22"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR23"] = { nullptr, { 0, 0 } };
    postSynaptic["MDR24"] = { nullptr, { 0, 0 } };
    postSynaptic["MI"] = { MI, { 0, 0 } };
    postSynaptic["MVL01"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL02"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL03"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL04"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL05"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL06"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL07"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL08"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL09"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL10"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL11"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL12"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL13"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL14"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL15"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL16"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL17"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL18"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL19"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL20"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL21"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL22"] = { nullptr, { 0, 0 } };
    postSynaptic["MVL23"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR01"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR02"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR03"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR04"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR05"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR06"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR07"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR08"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR09"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR10"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR11"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR12"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR13"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR14"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR15"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR16"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR17"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR18"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR19"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR20"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR21"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR22"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR23"] = { nullptr, { 0, 0 } };
    postSynaptic["MVR24"] = { nullptr, { 0, 0 } };
    postSynaptic["MVULVA"] = { nullptr, { 0, 0 } };
    postSynaptic["NSML"] = { NSML, { 0, 0 } };
    postSynaptic["NSMR"] = { NSMR, { 0, 0 } };
    postSynaptic["OLLL"] = { OLLL, { 0, 0 } };
    postSynaptic["OLLR"] = { OLLR, { 0, 0 } };
    postSynaptic["OLQDL"] = { OLQDL, { 0, 0 } };
    postSynaptic["OLQDR"] = { OLQDR, { 0, 0 } };
    postSynaptic["OLQVL"] = { OLQVL, { 0, 0 } };
    postSynaptic["OLQVR"] = { OLQVR, { 0, 0 } };
    postSynaptic["PDA"] = { PDA, { 0, 0 } };
    postSynaptic["PDB"] = { PDB, { 0, 0 } };
    postSynaptic["PDEL"] = { PDEL, { 0, 0 } };
    postSynaptic["PDER"] = { PDER, { 0, 0 } };
    postSynaptic["PHAL"] = { PHAL, { 0, 0 } };
    postSynaptic["PHAR"] = { PHAR, { 0, 0 } };
    postSynaptic["PHBL"] = { PHBL, { 0, 0 } };
    postSynaptic["PHBR"] = { PHBR, { 0, 0 } };
    postSynaptic["PHCL"] = { PHCL, { 0, 0 } };
    postSynaptic["PHCR"] = { PHCR, { 0, 0 } };
    postSynaptic["PLML"] = { PLML, { 0, 0 } };
    postSynaptic["PLMR"] = { PLMR, { 0, 0 } };
    postSynaptic["PLNL"] = { PLNL, { 0, 0 } };
    postSynaptic["PLNR"] = { PLNR, { 0, 0 } };
    postSynaptic["PQR"] = { PQR, { 0, 0 } };
    postSynaptic["PVCL"] = { PVCL, { 0, 0 } };
    postSynaptic["PVCR"] = { PVCR, { 0, 0 } };
    postSynaptic["PVDL"] = { PVDL, { 0, 0 } };
    postSynaptic["PVDR"] = { PVDR, { 0, 0 } };
    postSynaptic["PVM"] = { PVM, { 0, 0 } };
    postSynaptic["PVNL"] = { PVNL, { 0, 0 } };
    postSynaptic["PVNR"] = { PVNR, { 0, 0 } };
    postSynaptic["PVPL"] = { PVPL, { 0, 0 } };
    postSynaptic["PVPR"] = { PVPR, { 0, 0 } };
    postSynaptic["PVQL"] = { PVQL, { 0, 0 } };
    postSynaptic["PVQR"] = { PVQR, { 0, 0 } };
    postSynaptic["PVR"] = { PVR, { 0, 0 } };
    postSynaptic["PVT"] = { PVT, { 0, 0 } };
    postSynaptic["PVWL"] = { PVWL, { 0, 0 } };
    postSynaptic["PVWR"] = { PVWR, { 0, 0 } };
    postSynaptic["RIAL"] = { RIAL, { 0, 0 } };
    postSynaptic["RIAR"] = { RIAR, { 0, 0 } };
    postSynaptic["RIBL"] = { RIBL, { 0, 0 } };
    postSynaptic["RIBR"] = { RIBR, { 0, 0 } };
    postSynaptic["RICL"] = { RICL, { 0, 0 } };
    postSynaptic["RICR"] = { RICR, { 0, 0 } };
    postSynaptic["RID"] = { RID, { 0, 0 } };
    postSynaptic["RIFL"] = { RIFL, { 0, 0 } };
    postSynaptic["RIFR"] = { RIFR, { 0, 0 } };
    postSynaptic["RIGL"] = { RIGL, { 0, 0 } };
    postSynaptic["RIGR"] = { RIGR, { 0, 0 } };
    postSynaptic["RIH"] = { RIH, { 0, 0 } };
    postSynaptic["RIML"] = { RIML, { 0, 0 } };
    postSynaptic["RIMR"] = { RIMR, { 0, 0 } };
    postSynaptic["RIPL"] = { RIPL, { 0, 0 } };
    postSynaptic["RIPR"] = { RIPR, { 0, 0 } };
    postSynaptic["RIR"] = { RIR, { 0, 0 } };
    postSynaptic["RIS"] = { RIS, { 0, 0 } };
    postSynaptic["RIVL"] = { RIVL, { 0, 0 } };
    postSynaptic["RIVR"] = { RIVR, { 0, 0 } };
    postSynaptic["RMDDL"] = { RMDDL, { 0, 0 } };
    postSynaptic["RMDDR"] = { RMDDR, { 0, 0 } };
    postSynaptic["RMDL"] = { RMDL, { 0, 0 } };
    postSynaptic["RMDR"] = { RMDR, { 0, 0 } };
    postSynaptic["RMDVL"] = { RMDVL, { 0, 0 } };
    postSynaptic["RMDVR"] = { RMDVR, { 0, 0 } };
    postSynaptic["RMED"] = { RMED, { 0, 0 } };
    postSynaptic["RMEL"] = { RMEL, { 0, 0 } };
    postSynaptic["RMER"] = { RMER, { 0, 0 } };
    postSynaptic["RMEV"] = { RMEV, { 0, 0 } };
    postSynaptic["RMFL"] = { RMFL, { 0, 0 } };
    postSynaptic["RMFR"] = { RMFR, { 0, 0 } };
    postSynaptic["RMGL"] = { RMGL, { 0, 0 } };
    postSynaptic["RMGR"] = { RMGR, { 0, 0 } };
    postSynaptic["RMHL"] = { RMHL, { 0, 0 } };
    postSynaptic["RMHR"] = { RMHR, { 0, 0 } };
    postSynaptic["SAADL"] = { SAADL, { 0, 0 } };
    postSynaptic["SAADR"] = { SAADR, { 0, 0 } };
    postSynaptic["SAAVL"] = { SAAVL, { 0, 0 } };
    postSynaptic["SAAVR"] = { SAAVR, { 0, 0 } };
    postSynaptic["SABD"] = { SABD, { 0, 0 } };
    postSynaptic["SABVL"] = { SABVL, { 0, 0 } };
    postSynaptic["SABVR"] = { SABVR, { 0, 0 } };
    postSynaptic["SDQL"] = { SDQL, { 0, 0 } };
    postSynaptic["SDQR"] = { SDQR, { 0, 0 } };
    postSynaptic["SIADL"] = { SIADL, { 0, 0 } };
    postSynaptic["SIADR"] = { SIADR, { 0, 0 } };
    postSynaptic["SIAVL"] = { SIAVL, { 0, 0 } };
    postSynaptic["SIAVR"] = { SIAVR, { 0, 0 } };
    postSynaptic["SIBDL"] = { SIBDL, { 0, 0 } };
    postSynaptic["SIBDR"] = { SIBDR, { 0, 0 } };
    postSynaptic["SIBVL"] = { SIBVL, { 0, 0 } };
    postSynaptic["SIBVR"] = { SIBVR, { 0, 0 } };
    postSynaptic["SMBDL"] = { SMBDL, { 0, 0 } };
    postSynaptic["SMBDR"] = { SMBDR, { 0, 0 } };
    postSynaptic["SMBVL"] = { SMBVL, { 0, 0 } };
    postSynaptic["SMBVR"] = { SMBVR, { 0, 0 } };
    postSynaptic["SMDDL"] = { SMDDL, { 0, 0 } };
    postSynaptic["SMDDR"] = { SMDDR, { 0, 0 } };
    postSynaptic["SMDVL"] = { SMDVL, { 0, 0 } };
    postSynaptic["SMDVR"] = { SMDVR, { 0, 0 } };
    postSynaptic["URADL"] = { URADL, { 0, 0 } };
    postSynaptic["URADR"] = { URADR, { 0, 0 } };
    postSynaptic["URAVL"] = { URAVL, { 0, 0 } };
    postSynaptic["URAVR"] = { URAVR, { 0, 0 } };
    postSynaptic["URBL"] = { URBL, { 0, 0 } };
    postSynaptic["URBR"] = { URBR, { 0, 0 } };
    postSynaptic["URXL"] = { URXL, { 0, 0 } };
    postSynaptic["URXR"] = { URXR, { 0, 0 } };
    postSynaptic["URYDL"] = { URYDL, { 0, 0 } };
    postSynaptic["URYDR"] = { URYDR, { 0, 0 } };
    postSynaptic["URYVL"] = { URYVL, { 0, 0 } };
    postSynaptic["URYVR"] = { URYVR, { 0, 0 } };
    postSynaptic["VA1"] = { VA1, { 0, 0 } };
    postSynaptic["VA10"] = { VA10, { 0, 0 } };
    postSynaptic["VA11"] = { VA11, { 0, 0 } };
    postSynaptic["VA12"] = { VA12, { 0, 0 } };
    postSynaptic["VA2"] = { VA2, { 0, 0 } };
    postSynaptic["VA3"] = { VA3, { 0, 0 } };
    postSynaptic["VA4"] = { VA4, { 0, 0 } };
    postSynaptic["VA5"] = { VA5, { 0, 0 } };
    postSynaptic["VA6"] = { VA6, { 0, 0 } };
    postSynaptic["VA7"] = { VA7, { 0, 0 } };
    postSynaptic["VA8"] = { VA8, { 0, 0 } };
    postSynaptic["VA9"] = { VA9, { 0, 0 } };
    postSynaptic["VB1"] = { VB1, { 0, 0 } };
    postSynaptic["VB10"] = { VB10, { 0, 0 } };
    postSynaptic["VB11"] = { VB11, { 0, 0 } };
    postSynaptic["VB2"] = { VB2, { 0, 0 } };
    postSynaptic["VB3"] = { VB3, { 0, 0 } };
    postSynaptic["VB4"] = { VB4, { 0, 0 } };
    postSynaptic["VB5"] = { VB5, { 0, 0 } };
    postSynaptic["VB6"] = { VB6, { 0, 0 } };
    postSynaptic["VB7"] = { VB7, { 0, 0 } };
    postSynaptic["VB8"] = { VB8, { 0, 0 } };
    postSynaptic["VB9"] = { VB9, { 0, 0 } };
    postSynaptic["VC1"] = { VC1, { 0, 0 } };
    postSynaptic["VC2"] = { VC2, { 0, 0 } };
    postSynaptic["VC3"] = { VC3, { 0, 0 } };
    postSynaptic["VC4"] = { VC4, { 0, 0 } };
    postSynaptic["VC5"] = { VC5, { 0, 0 } };
    postSynaptic["VC6"] = { VC6, { 0, 0 } };
    postSynaptic["VD1"] = { VD1, { 0, 0 } };
    postSynaptic["VD10"] = { VD10, { 0, 0 } };
    postSynaptic["VD11"] = { VD11, { 0, 0 } };
    postSynaptic["VD12"] = { VD12, { 0, 0 } };
    postSynaptic["VD13"] = { VD13, { 0, 0 } };
    postSynaptic["VD2"] = { VD2, { 0, 0 } };
    postSynaptic["VD3"] = { VD3, { 0, 0 } };
    postSynaptic["VD4"] = { VD4, { 0, 0 } };
    postSynaptic["VD5"] = { VD5, { 0, 0 } };
    postSynaptic["VD6"] = { VD6, { 0, 0 } };
    postSynaptic["VD7"] = { VD7, { 0, 0 } };
    postSynaptic["VD8"] = { VD8, { 0, 0 } };
    postSynaptic["VD9"] = { VD9, { 0, 0 } };
}

void motorcontrol() {
    accumLeft = 0;
    accumRight = 0;
    //suboptimal
    std::for_each(postSynaptic.begin(), postSynaptic.end(), [](const auto& pair) {
        if(postSynaptic[pair.first].fireNeuron == nullptr) {
            if((pair.first.find("MVL") != std::string::npos) || (pair.first.find("MDL") != std::string::npos)) {
                accumLeft += postSynaptic[pair.first].values[nextState];
                postSynaptic[pair.first].values[nextState] = 0;
            } else if((pair.first.find("MVR") != std::string::npos) || (pair.first.find("MDR") != std::string::npos)) {
                accumRight += postSynaptic[pair.first].values[nextState];
                postSynaptic[pair.first].values[nextState] = 0;
            }
        }
    });
}

void runconnectome() {
    std::for_each(postSynaptic.begin(), postSynaptic.end(), [](const auto& pair) { // no idea what this is lmao
        if((postSynaptic[pair.first].fireNeuron != nullptr) && (postSynaptic[pair.first].values[thisState] > fireThreshold)) {
            postSynaptic[pair.first].fireNeuron();
        }

        motorcontrol();

        std::for_each(postSynaptic.begin(), postSynaptic.end(), [](const auto& pair) {
            postSynaptic[pair.first].values[thisState] = postSynaptic[pair.first].values[nextState];
        });

        int temp = thisState;
        thisState = nextState;
        nextState = temp;
    });
}

void update() {
    if(stimulateHungerNeurons) {
        RIML();
        RIMR();
        RICL();
        RICR();
        runconnectome();
    }
    if(stimulateNoseTouchNeurons) {
        FLPR();
        FLPL();
        ASHL();
        ASHR();
        IL1VL();
        IL1VR();
        OLQDL();
        OLQDR();
        OLQVR();
        OLQVL();
        runconnectome();
    }
    if(stimulateFoodSenseNeurons) {
        ADFL();
        ADFR();
        ASGR();
        ASGL();
        ASIL();
        ASIR();
        ASJR();
        ASJL();
        runconnectome();
    }
}

int main() {
    createPostSynaptic();
    while(true) {
        update();
        std::cout << "accumLeft: " << accumLeft << ", accumRight: " << accumRight << "\n";
    }
}
