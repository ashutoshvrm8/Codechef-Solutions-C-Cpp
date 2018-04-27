    //Complete Numeric Encoding Vol.2.cpp : Defines the entry point for the console application.
    //#include "stdafx.h"
    #include <iostream>
    #include <math.h>
    #include <bits/stdc++.h>
    using namespace std;
    #include <stdlib.h>
    #include <ctype.h>

    //Pinakes gia metatroph apo akeraious se dunameis tou a, kai to antistrofo //???a?e? ??a µetat??p? ?p? a???a???? se d???µe?? t?? a, ?a? t? a?t?st??f?
    const unsigned int f[256]={1,2,4,8,16,32,64,128,29,58,116,232,205,135,19,38,76,152,45,90,180,117,234,201,143,3,6,12,24,48,96,192,157,39,78,156,37,74,148,53,106,212,181,119,238,193,159,35,70,140,5,10,20,40,80,160,93,186,105,210,185,111,222,161,95,190,97,194,153,47,94,188,101,202,137,15,30,60,120,240,253,231,211,187,107,214,177,127,254,225,223,163,91,182,113,226,217,175,67,134,17,34,68,136,13,26,52,104,208,189,103,206,129,31,62,124,248,237,199,147,59,118,236,197,151,51,102,204,133,23,46,92,184,109,218,169,79,158,33,66,132,21,42,84,168,77,154,41,82,164,85,170,73,146,57,114,228,213,183,115,230,209,191,99,198,145,63,126,252,229,215,179,123,246,241,255,227,219,171,75,150,49,98,196,149,55,110,220,165,87,174,65,130,25,50,100,200,141,7,14,28,56,112,224,221,167,83,166,81,162,89,178,121,242,249,239,195,155,43,86,172,69,138,9,18,36,72,144,61,122,244,245,247,243,251,235,203,139,11,22,44,88,176,125,250,233,207,131,27,54,108,216,173,71,142,1};
    const unsigned int re[256]={0,0,1,25,2,50,26,198,3,223,51,238,27,104,199,75,4,100,224,14,52,141,239,129,28,193,105,248,200,8,76,113,5,138,101,47,225,36,15,33,53,147,142,218,240,18,130,69,29,181,194,125,106,39,249,185,201,154,9,120,77,228,114,166,6,191,139,98,102,221,48,253,226,152,37,179,16,145,34,136,54,208,148,206,143,150,219,189,241,210,19,92,131,56,70,64,30,66,182,163,195,72,126,110,107,58,40,84,250,133,186,61,202,94,155,159,10,21,121,43,78,212,229,172,115,243,167,87,7,112,192,247,140,128,99,13,103,74,222,237,49,197,254,24,227,165,153,119,38,184,180,124,17,68,146,217,35,32,137,46,55,63,209,91,149,188,207,205,144,135,151,178,220,252,190,97,242,86,211,171,20,42,93,158,132,60,57,83,71,109,65,162,31,45,67,216,183,123,164,118,196,23,73,236,127,12,111,246,108,161,59,82,41,157,85,170,251,96,134,177,187,204,62,90,203,89,95,176,156,169,160,81,11,245,22,235,122,117,44,215,79,174,213,233,230,231,173,232,116,214,244,234,168,80,88,175};
    const char al[45]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ','$','%','*','+','-','.','/',':'};

    int binary(int digits);
    int FinalBitStream(int bitpos);
    int CCICalc(int CCIBits,int CCIFirstbitpos);
    int FinalBitStream2(int digits2,int bitpos2);
    int ECCFunction(int EC);
    int LFSR_compact(int NumberECC, int EC,int PP0,int PP1,int PP2,int PP3,int PP4,int PP5,int PP6,int PP7,int PP8,int PP9,int PP10,int PP11,int PP12,int PP13,int PP14,int PP15,int PP16);
    int ECbinary(int ECCD,int bits3);
    int ECCFunction2(int pos4);
    int Eval(int Board[11][11],int size);
    int SUMS(int evaluation,int number);
    int FormatInfo(int A1,int B1,int C1,int D1,int E2);
    int FIPlacement(int Board[11][11],int dim);
    int PlacementUP(int linestart,int linefinish,int column1,int column2);
    int PlacementDOWN(int linestart,int linefinish,int column1,int column2);
    int FormatInfoQRC(int A,int B,int C, int D, int E,int Board[21][21]);
    int printPixels(int Board[21][21]);
    int printPixels2(int Board[11][11]);
    int MaskingQRC(int Board[21][21],int Board2[21][21],int Board3[21][21],int Board4[21][21],int Board5[21][21],int Board6[21][21],int Board7[21][21],int Board8[21][21]);
    int Evaluation(int Board[21][21]);
    int EvaluationResult();
    int Format1M();
    int AlphaInput(int ByteLength);
    int NumericDimensions(int ByteLength2);
    int MaskingMQRC();
    int ByteModeInput(int ByteLength3);
    int PlacementQRC();
    int Evaluation1 ();
    int InvertBit(int x);

    int Penalty000=0,Penalty001=0, Penalty010=0, Penalty011=0, Penalty100=0, Penalty101=0, Penalty110=0, Penalty111=0;
    int D[17],QRC[21][21],QRCMP000[21][21],QRCMP001[21][21],QRCMP010[21][21],QRCMP011[21][21],QRCMP100[21][21],QRCMP101[21][21],QRCMP110[21][21],QRCMP111[21][21];
    char E4[26];
    int ECC[40],FormatBits[15], AP[15], AP2[15],AP3[15];
    int FBS[300], Bin[300], CCI[15];  //Final Bit Stream //?????t???? p??a?a? ??a µetat??p? se d?ad??? //Character Count Indicator
    int MQRC[11][11],MQRCMP00[11][11],MQRCMP01[11][11],MQRCMP10[11][11],MQRCMP11[11][11];
    int W,E1,j,k,SUM1,SUM2,hev,hev1,l,num,p,i;


    int main(){
        //Dhlwseis metavlitwn
        int O,y,F,eval00,eval01,eval10,eval11;
        int ycount=0;
        int jcount=0;
        bool V;
        int NumTable[40];
        //Arxikopoihseis//??????p???se??
        for (i=0;i<11;i++){
            for (j=0;j<11;j++)
                MQRC[i][j]=0;
        }
        for (i=0;i<18;i++)
            D[i]=0;

        AP[0]=AP[2]=AP[5]=AP[6]=AP[8]=AP[9]=AP[10]=1;
        AP[1]=AP[3]=AP[4]=AP[7]=0;
        AP3[0]=AP3[4]=AP3[8]=AP3[12]=AP3[14]=1;
        AP3[1]=AP3[2]=AP3[3]=AP3[5]=AP3[6]=AP3[7]=AP3[9]=AP3[10]=AP3[11]=AP3[13]=0;
        for (i=0;i<15;i++)  CCI[i]=0;
        for (i=0;i<40;i++)  ECC[i]=0;
        for (i=0;i<300;i++){
            Bin[i]=0;
            FBS[i]=0;
            }
        //Finder Patterns
        for (i=0;i<7;i++)
            MQRC[0][i]=MQRC[i][0]=MQRC[6][i]=MQRC[i][6]=QRC[i][0]=QRC[i][6]=QRC[0][i]=QRC[6][i]=QRC[14][i]=QRC[20][i]=QRC[i][14]=QRC[i][20]=1;
        for (i=2;i<5;i++)
            for (j=2;j<5;j++)
                MQRC[i][j]=QRC[i][j]=1;
        for (i=14;i<21;i++)
            QRC[i][0]=QRC[i][6]=QRC[0][i]=QRC[6][i]=1;
        for (i=2;i<5;i++)
            for (j=16;j<19;j++)
                QRC [i][j]=1;
        for (i=16;i<19;i++)
            for (j=2;j<5;j++)
                QRC[i][j]=1;

        //Timing Patterns
        MQRC[0][8]=MQRC[8][0]=MQRC[10][0]=MQRC[0][10]=QRC[8][6]=QRC[10][6]=QRC[12][6]=QRC[6][8]=QRC[6][10]=QRC[6][12]=QRC[13][8]=1;
        i=j=k=0;
        //Dialegoume Mode//??a?????µe Mode (Numeric/Alphanumeric)
        cout << "Enter 1 for Numeric Mode, 2 for Alphanumeric Mode,3 for Byte Mode:" << "\n";
        cin >> O;
        while ((O != 1) && (O != 2) && (O != 3)){
            cout << "I'm sorry, you didn't enter a valid number. Please try again." << endl;
            cout << "Enter 1 for Numeric Mode, 2 for Alphanumeric Mode,3 for Byte Mode:" << "\n";
            cin.clear();
            cin.ignore();
            cin >> O;
            }
        switch(O){
            case 1:
            cout << "Enter the number of digits you want to encode (max. 41): " << endl;
            while ((scanf("%d", &W) != 1) || (W>41) || (W<1))
            {
                cout << "You either didn't enter a number, or you entered more than 41 digits. (Or maybe a negative number?!) Remember! This program can only encode up to 41 digits! Please try again." << endl;
                fflush(stdin);
            }
                if (W < 6){ //M1 Micro QR Code
                cout << "M1 Micro QR Code will be used for encoding." << endl;
                if (W < 4) {
                    //3 ??f?a
                    if (W==3) {
                        cout << "Enter the three digits:" << endl;
                        int Digits = 0;
                        do {
                            while (scanf("%d", &E1) != 1){
                                fflush(stdin);
                                cout << "You entered letters. Please enter numbers." << endl;
                            }
                            Digits = floor(log10(abs(E1))) + 1;
                            if (Digits != 3)
                                cout << "Please enter three digits." << endl;
                        } while (Digits != 3);
                        binary(10);
                    }
                    if (W==1){ //1 ??f??
                        cout << "Enter the digit:" << endl;
                        int Digits = 0;
                        do {
                            while (scanf("%d", &E1) != 1){
                                fflush(stdin);
                                cout << "You entered letters. Please enter numbers." << endl;
                            }
                            Digits = floor(log10(abs(E1))) + 1;
                                if (Digits != 1)
                                    cout << "Please enter one digit." << endl;
                        } while (Digits != 1);
                        binary(4);
                    }
                    if (W==2){ //2 ??f?a
                        cout << "Enter the two digits:" << endl;
                        int Digits = 0;
                        do {
                            while (scanf("%d", &E1) != 1){
                                fflush(stdin);
                                cout << "You entered letters. Please enter numbers." << endl;
                                }
                            Digits = floor(log10(abs(E1))) + 1;
                            if (Digits != 2)
                                cout << "Please enter two digits." << endl;
                        } while (Digits != 2);
                        binary(7);
                    }
                    FinalBitStream(3);
                    CCICalc(3,0);
                }
                if (W > 3){
                    cout << "Enter the first three digits:" << endl;
                    int Digits = 0;
                        do {
                            while (scanf("%d", &E1) != 1){
                                fflush(stdin);
                                cout << "You entered letters. Please enter numbers." << endl;
                            }
                            Digits = floor(log10(abs(E1))) + 1;
                            if (Digits != 3)
                                cout << "Please enter three digits." << endl;
                        } while (Digits != 3);
                    FinalBitStream2(10,3);
                    if (W == 4){ //4 ??f?a
                        cout << "Enter the last digit:" << endl;
                        int Digits = 0;
                        do {
                            while (scanf("%d", &E1) != 1){
                                fflush(stdin);
                                cout << "You entered letters. Please enter numbers." << endl;
                            }
                            Digits = floor(log10(abs(E1))) + 1;
                                if (Digits != 1)
                                    cout << "Please enter one digit." << endl;
                        } while (Digits != 1);
                        FinalBitStream2(4,k);
                        CCICalc(3,0);
                    }
                    if (W == 5){ //5 ??f?a  //5 Psifia
                        cout << "Enter the last two digits:" << endl;
                        int Digits = 0;
                        do {
                            while (scanf("%d", &E1) != 1){
                                fflush(stdin);
                                cout << "You entered letters. Please enter numbers." << endl;
                                }
                            Digits = floor(log10(abs(E1))) + 1;
                            if (Digits != 2)
                                cout << "Please enter two digits." << endl;
                        } while (Digits != 2);
                        FinalBitStream2(7,k);
                        CCICalc(3,0);
                    }
                }
            cout << endl;
            ECCFunction (2);
            ECCFunction2 (16);
            ECC[2] = num;
            LFSR_compact(2,3,1,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
            ECbinary(2,20);
            //??p???t?s? st?? p??a?a  // Topothetisi ston pinaka
            k=0;
            for (i=10;i>0;i--){
                MQRC[i][10]=FBS[k];
                k=k+1;
                MQRC[i][9]=FBS[k];
                k=k+1;
            }
            for (j=8;j>0;j=j-4){
                MQRC[9][j]=FBS[k];
                k=k+1;
                MQRC[9][j-1]=FBS[k];
                k=k+1;
                MQRC[10][j]=FBS[k];
                k=k+1;
                MQRC[10][j-1]=FBS[k];
                k=k+1;
                MQRC[10][j-2]=FBS[k];
                k=k+1;
                MQRC[10][j-3]=FBS[k];
                k=k+1;
                MQRC[9][j-2]=FBS[k];
                k=k+1;
                MQRC[9][j-3]=FBS[k];
                k=k+1;
            }
            //MASKING
            MaskingMQRC();
            //EVALUATION
            eval00=eval01=eval10=eval11=hev1=hev=0;
            Eval(MQRCMP00,11);
            SUMS(eval00,0);
            Eval(MQRCMP01,11);
            SUMS(eval01,1);
            Eval(MQRCMP10,11);
            SUMS(eval10,2);
            Eval(MQRCMP11,11);
            SUMS(eval11,3);
            switch (hev){ //+ Format Info ?a? t?p???t?s? t?? bits
                case 0:
                    for(i=0;i<15;i++)
                    AP2[i]=(AP[i]^AP3[i]);
                    FIPlacement(MQRCMP00,11);
                    printPixels2(MQRCMP00);
                    break;
                case 1:
                    FormatInfo(0,0,0,0,1);
                    FIPlacement(MQRCMP01,11);
                    printPixels2(MQRCMP01);
                    break;
                case 2:
                    FormatInfo(0,0,0,1,0);
                    FIPlacement(MQRCMP10,11);
                    printPixels2(MQRCMP10);
                    break;
                case 3:
                    FormatInfo(0,0,0,1,1);
                    FIPlacement(MQRCMP11,11);
                    printPixels2(MQRCMP11);
                    break;
                }
            }
            F=(W/3); //QRCodes
            i=0;
            for (p=0;p<F;p++){
                cout << "Enter the next three digits:" << endl;
                int Digits = 0;
                        do {
                            while (scanf("%d", &E1) != 1){
                                fflush(stdin);
                                cout << "You entered letters. Please enter numbers." << endl;
                            }
                            Digits = floor(log10(abs(E1))) + 1;
                            if (Digits != 3)
                                cout << "Please enter three digits." << endl;
                        } while (Digits != 3);
                NumTable[p]=E1;
                }
            i=0;
            for(int z=0;z<F;z++)
                for (int s=0;s<10;s++){
                Bin[i++] = NumTable[z]%2;
                    NumTable[z] /= 2;
            }
            l=14;
            for (int z=0;z<F;z++)
            {
                int m=9;
                for (int y=0;y<10;y++){
                FBS[l]=Bin[((z*10)+m)];
                m--;
                l++;
                }
                }
                if ((W % 3) == 1){
                cout << "Enter the last digit:" << endl;
                int Digits = 0;
                        do {
                            while (scanf("%d", &E1) != 1){
                                fflush(stdin);
                                cout << "You entered letters. Please enter numbers." << endl;
                            }
                            Digits = floor(log10(abs(E1))) + 1;
                                if (Digits != 1)
                                    cout << "Please enter one digit." << endl;
                        } while (Digits != 1);
                NumTable[p+1]=E1;
                for (int s=0;s<4;s++){
                Bin[i++] = NumTable[p+1]%2;
                NumTable[p+1] /= 2;
                }
                for (int z=F;z<(F+1);z++)
                {
                int m=3;
                for (int y=0;y<4;y++){
                FBS[l]=Bin[((z*10)+m)];
                m--;
                l++;
                }
                }
                }
                if ((W % 3) == 2){
                cout << "Enter the last two digits:" << endl;
                int Digits = 0;
                        do {
                            while (scanf("%d", &E1) != 1){
                                fflush(stdin);
                                cout << "You entered letters. Please enter numbers." << endl;
                                }
                            Digits = floor(log10(abs(E1))) + 1;
                            if (Digits != 2)
                                cout << "Please enter two digits." << endl;
                        } while (Digits != 2);
                        FinalBitStream2(7,k);
                        CCICalc(3,0);
                NumTable[p+1]=E1;
                for (int s=0;s<7;s++){
                Bin[i++] = NumTable[p+1]%2;
                NumTable[p+1] /= 2;
            }
                for (int z=F;z<(F+1);z++)
            {
                int m=6;
                for (int y=0;y<7;y++){
                FBS[l]=Bin[((z*10)+m)];
                m--;
                l++;
                }
            }
            }
            l--;
        if ((W<18)&&(W>5)){   //Version 1-H
        NumericDimensions(71);
        CCICalc(10,4);
        FBS[3]=1;
        ECCFunction(9);
        LFSR_compact(17,9,136,163,243,39,150,99,24,147,214,206,123,239,43,78,206,139,43);
        ECbinary(17,72);
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        FormatInfoQRC(1,0,0,0,0,QRCMP000);
        FormatInfoQRC(1,0,0,0,1,QRCMP001);
        FormatInfoQRC(1,0,0,1,0,QRCMP010);
        FormatInfoQRC(1,0,0,1,1,QRCMP011);
        FormatInfoQRC(1,0,1,0,0,QRCMP100);
        FormatInfoQRC(1,0,1,0,1,QRCMP101);
        FormatInfoQRC(1,0,1,1,0,QRCMP110);
        FormatInfoQRC(1,0,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
        }

        if ((W>17)&&(W<28)){   //Version 1-Q
        NumericDimensions(103);
        CCICalc(10,4);
        FBS[3]=1;
        ECCFunction(13);
        LFSR_compact(13,13,78,140,206,218,130,104,106,100,86,100,176,152,74,0,0,0,0);
        ECbinary(13,104);
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        FormatInfoQRC(1,1,0,0,0,QRCMP000);
        FormatInfoQRC(1,1,0,0,1,QRCMP001);
        FormatInfoQRC(1,1,0,1,0,QRCMP010);
        FormatInfoQRC(1,1,0,1,1,QRCMP011);
        FormatInfoQRC(1,1,1,0,0,QRCMP100);
        FormatInfoQRC(1,1,1,0,1,QRCMP101);
        FormatInfoQRC(1,1,1,1,0,QRCMP110);
        FormatInfoQRC(1,1,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
        }

        if ((W > 27) && (W < 35)) { //Version 1-M
        NumericDimensions(127);
        CCICalc(10,4);
        FBS[3]=1;
        ECCFunction(16);
        LFSR_compact(10,16,45,32,94,64,70,118,61,46,67,251,0,0,0,0,0,0,0);
        ECbinary(10,128);
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        Format1M();
        FormatInfoQRC(0,0,0,0,1,QRCMP001);
        FormatInfoQRC(0,0,0,1,0,QRCMP010);
        FormatInfoQRC(0,0,0,1,1,QRCMP011);
        FormatInfoQRC(0,0,1,0,0,QRCMP100);
        FormatInfoQRC(0,0,1,0,1,QRCMP101);
        FormatInfoQRC(0,0,1,1,0,QRCMP110);
        FormatInfoQRC(0,0,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
           }

        if ((W > 34) && (W < 42)){ //Version 1-L
            NumericDimensions(151);
            CCICalc(10,4);
            FBS[3]=1;
            ECCFunction(19);
        LFSR_compact(7,19,21,102,238,149,146,229,87,0,0,0,0,0,0,0,0,0,0);
        ECbinary(7,152);
        cout << endl;
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        FormatInfoQRC(0,1,0,0,0,QRCMP000);
        FormatInfoQRC(0,1,0,0,1,QRCMP001);
        FormatInfoQRC(0,1,0,1,0,QRCMP010);
        FormatInfoQRC(0,1,0,1,1,QRCMP011);
        FormatInfoQRC(0,1,1,0,0,QRCMP100);
        FormatInfoQRC(0,1,1,0,1,QRCMP101);
        FormatInfoQRC(0,1,1,1,0,QRCMP110);
        FormatInfoQRC(0,1,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
        }
        if (W>41)   cout << "We're sorry. This program is able to encode up to 41 Numeric characters. Please try again." << endl;
        break;
    //Alphanumeric Monde
    case 2:{
    //Elegxos eisodou. H metavliti F (true, false) kathorizei to an ta stoixeia pou dothikan ws eisodos, mporoun na kwdikopoihthoun sto alphanumeric mode.
    //O Elegxos ginetai me ti metavliti jcount. H ycount elegxei an oi xarakthres pou dothikan, einai idioi se megethos me aftous pou edwse o xrhsths ws eisodo sth metavlith W.
    //Me thn scanf, elegxoume an o xrhsths edwse xarakthres anti gia arithmous.
        do{
            V = true;
            cout << "Enter the number of letters/numbers you want to encode, including the space character (max. 25):" << endl;
            while ((scanf("%d", &W) != 1) || (W > 25) || (W < 1))
            {
                cout << "You either didn't enter a number, or you entered more than 25 digits. (Or maybe a negative number?!) Remember! This program can only encode up to 41 digits! Please try again." << endl;
                fflush(stdin);
            }
            cout << "Enter the characters you want to encode:" << endl;
            cin.ignore();
            cin.getline(E4, 26);
            ycount = 0;
            for (int m = 0; E4[m] != 0; m++){
                ycount++;
            }
            if (ycount != W) {
                cout << "You didn't enter the exact same number of characters that you stated above. Please try again." << endl;
            }
            if (ycount == W){
                for (i = 0; i < W; i++){
                    jcount = 0;
                    for (j = 0; j < 45; j++){
                        if (E4[i] == al[j])
                            break;
                        else jcount++;
                    }
                    if (jcount > 44)
                        V = false;
                }
                if (V == false)
                    cout << "One or more of the characters you entered, cannot be encoded in this mode. Please try again." << endl;
            }
            } while ((ycount != W) || (V == false));
    //Version 1-H
    if (W<11)
    {
        AlphaInput(71);
        CCICalc(9,4);
        FBS[2]=1;
        ECCFunction(9);
        LFSR_compact(17,9,136,163,243,39,150,99,24,147,214,206,123,239,43,78,206,139,43);
        ECbinary(17,72);
        cout << endl;
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        FormatInfoQRC(1,0,0,0,0,QRCMP000);
        FormatInfoQRC(1,0,0,0,1,QRCMP001);
        FormatInfoQRC(1,0,0,1,0,QRCMP010);
        FormatInfoQRC(1,0,0,1,1,QRCMP011);
        FormatInfoQRC(1,0,1,0,0,QRCMP100);
        FormatInfoQRC(1,0,1,0,1,QRCMP101);
        FormatInfoQRC(1,0,1,1,0,QRCMP110);
        FormatInfoQRC(1,0,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
    }
    //Version 1-Q
    if ((W>10)&&(W<17)){
        AlphaInput(103);
        CCICalc(9,4);
        FBS[2]=1;
        ECCFunction(13);
        LFSR_compact(13,13,78,140,206,218,130,104,106,100,86,100,176,152,74,0,0,0,0);
        ECbinary(13,104);
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        FormatInfoQRC(1,1,0,0,0,QRCMP000);
        FormatInfoQRC(1,1,0,0,1,QRCMP001);
        FormatInfoQRC(1,1,0,1,0,QRCMP010);
        FormatInfoQRC(1,1,0,1,1,QRCMP011);
        FormatInfoQRC(1,1,1,0,0,QRCMP100);
        FormatInfoQRC(1,1,1,0,1,QRCMP101);
        FormatInfoQRC(1,1,1,1,0,QRCMP110);
        FormatInfoQRC(1,1,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
          }
    //Version 1-M
    if ((W>16) && (W<21)){
        AlphaInput(127);
        CCICalc(9,4);
        FBS[2]=1;
        ECCFunction(16);
        LFSR_compact(10,16,45,32,94,64,70,118,61,46,67,251,0,0,0,0,0,0,0);
        ECbinary(10,128);
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];

        Format1M();
        FormatInfoQRC(0,0,0,0,1,QRCMP001);
        FormatInfoQRC(0,0,0,1,0,QRCMP010);
        FormatInfoQRC(0,0,0,1,1,QRCMP011);
        FormatInfoQRC(0,0,1,0,0,QRCMP100);
        FormatInfoQRC(0,0,1,0,1,QRCMP101);
        FormatInfoQRC(0,0,1,1,0,QRCMP110);
        FormatInfoQRC(0,0,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
     }
    //Version 1-L
    if ((W<26) && (W>20)){
        AlphaInput(151);
        CCICalc(9,4);
        FBS[2]=1;
        ECCFunction(19);
        LFSR_compact(7,19,21,102,238,149,146,229,87,0,0,0,0,0,0,0,0,0,0);
        ECbinary(7,152);
        cout << endl;
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        FormatInfoQRC(0,1,0,0,0,QRCMP000);
        FormatInfoQRC(0,1,0,0,1,QRCMP001);
        FormatInfoQRC(0,1,0,1,0,QRCMP010);
        FormatInfoQRC(0,1,0,1,1,QRCMP011);
        FormatInfoQRC(0,1,1,0,0,QRCMP100);
        FormatInfoQRC(0,1,1,0,1,QRCMP101);
        FormatInfoQRC(0,1,1,1,0,QRCMP110);
        FormatInfoQRC(0,1,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
    if (W>25)   cout << "We're sorry, this program is able to encode up to 25 Alphanumeric Characters. Please try again." << endl;
    }break;

    case 3:
    cout << "Enter the number of characters you want to encode(Max. 17):" << endl;
    while ((scanf("%d", &W) != 1) || (W>17) || (W<1))
            {
                cout << "You either didn't enter a number, or you entered more than 17 characters. (Or maybe a negative number?!) Remember! This program can only encode up to 17 characters in byte mode! Please try again." << endl;
                fflush(stdin);
            }
    cout << "Enter the bits of the characters you want to encode. Be careful! Make sure you enter 8 bits!:" << endl;
    if (W<8){
        ByteModeInput(71);
        CCICalc(8,4);
        FBS[1]=1;
        ECCFunction(9);
        LFSR_compact(17,9,136,163,243,39,150,99,24,147,214,206,123,239,43,78,206,139,43);
        ECbinary(17,72);
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        FormatInfoQRC(1,0,0,0,0,QRCMP000);
        FormatInfoQRC(1,0,0,0,1,QRCMP001);
        FormatInfoQRC(1,0,0,1,0,QRCMP010);
        FormatInfoQRC(1,0,0,1,1,QRCMP011);
        FormatInfoQRC(1,0,1,0,0,QRCMP100);
        FormatInfoQRC(1,0,1,0,1,QRCMP101);
        FormatInfoQRC(1,0,1,1,0,QRCMP110);
        FormatInfoQRC(1,0,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
    }
    if ((W>7)&&(W<12)){
        ByteModeInput(103);
        CCICalc(8,4);
        FBS[1]=1;
        ECCFunction(13);
        LFSR_compact(13,13,78,140,206,218,130,104,106,100,86,100,176,152,74,0,0,0,0);
        ECbinary(13,104);
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        FormatInfoQRC(1,1,0,0,0,QRCMP000);
        FormatInfoQRC(1,1,0,0,1,QRCMP001);
        FormatInfoQRC(1,1,0,1,0,QRCMP010);
        FormatInfoQRC(1,1,0,1,1,QRCMP011);
        FormatInfoQRC(1,1,1,0,0,QRCMP100);
        FormatInfoQRC(1,1,1,0,1,QRCMP101);
        FormatInfoQRC(1,1,1,1,0,QRCMP110);
        FormatInfoQRC(1,1,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
    }
    if ((W>11)&&(W<15)){
        ByteModeInput(127);
        CCICalc(8,4);
        FBS[1]=1;
        ECCFunction(16);
        LFSR_compact(10,16,45,32,94,64,70,118,61,46,67,251,0,0,0,0,0,0,0);
        ECbinary(10,128);
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        Format1M();
        FormatInfoQRC(0,0,0,0,1,QRCMP001);
        FormatInfoQRC(0,0,0,1,0,QRCMP010);
        FormatInfoQRC(0,0,0,1,1,QRCMP011);
        FormatInfoQRC(0,0,1,0,0,QRCMP100);
        FormatInfoQRC(0,0,1,0,1,QRCMP101);
        FormatInfoQRC(0,0,1,1,0,QRCMP110);
        FormatInfoQRC(0,0,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
    }
    if ((W>14)&&(W<18)){
        ByteModeInput(151);
        CCICalc(8,4);
        FBS[1]=1;
        ECCFunction(19);
        LFSR_compact(7,19,21,102,238,149,146,229,87,0,0,0,0,0,0,0,0,0,0);
        ECbinary(7,152);
        cout << endl;
        k=0;
        PlacementQRC();
        for (i=0;i<21;i++)
            for (j=0;j<21;j++) QRCMP000[i][j]=QRCMP001[i][j]=QRCMP010[i][j]=QRCMP011[i][j]=QRCMP100[i][j]=QRCMP101[i][j]=QRCMP110[i][j]=QRCMP111[i][j]=QRC[i][j];
        FormatInfoQRC(0,1,0,0,0,QRCMP000);
        FormatInfoQRC(0,1,0,0,1,QRCMP001);
        FormatInfoQRC(0,1,0,1,0,QRCMP010);
        FormatInfoQRC(0,1,0,1,1,QRCMP011);
        FormatInfoQRC(0,1,1,0,0,QRCMP100);
        FormatInfoQRC(0,1,1,0,1,QRCMP101);
        FormatInfoQRC(0,1,1,1,0,QRCMP110);
        FormatInfoQRC(0,1,1,1,1,QRCMP111);
        MaskingQRC(QRCMP000,QRCMP001,QRCMP010,QRCMP011,QRCMP100,QRCMP101,QRCMP110,QRCMP111);
        Evaluation1();
        EvaluationResult();
        }
    break;
    }
    }
        return 0;
    }

    //?etat??p? st? d?ad??? (µ??? ??a t? M1 Micro QR Code) // Metatropi sto diadiko (mono gia M1 MQRC)
    int binary(int digits){
        for (int s=0;s<digits;s++) {
            Bin[i++] = E1%2;//Ston pinaka Bin apothikevetai prosorina i diadiki morfh tou arithmou, me to LIB na einai sthn prwti thesi
            //St?? p??a?a Bin ap????e?eta? p??s????? ? d?ad??? µ??f? t?? a???µ??, µe t? Least Important Bit ?a e??a? st?? p??t? ??s?
            E1 /= 2;
        }
        return i;
    }
    //Ypologismos twn Message Codewords. H metavlith EC, sumvolizei ton arithmo twn Message Codewords.
    //?p?????sµ?? t?? Message Codewords. H µetaﬂ??t? EC, s?µﬂ????e? t?? a???µ? t?? Message Codewords.
    int ECCFunction(int EC) {
        i=0;
        j=0;
        k=0;
        for (i=0;i<EC;i++){
            num=0;
            for (j=0;j<8;j++){
                num =(num + (1<<(7-j))*FBS[k]);
                k=k+1;
            }
            ECC[i] = num;
        }
        return 0;
    }
    //Ypologismos twn Message Codewords gia tis periptwseis M1 Micro kai M3-L Micro, opou ta teleftaia bits twn Message Codewords einai 4.
    //To pos4 sumvolizei th thesi pou ksekinoun afta ta 4 bit (16 gia M1, 80 gia M3).
    //?p?????sµ?? t?? Message Codewords ??a t?? pe??pt?se?? ?1 Micro ?a? M3-L Micro, ?p?? ta te?e?ta?a bits t?? Message Codewords e??a? 4.
    //?? pos4, s?µﬂ????e? t? ??s? p?? ?e?????? a?t? ta 4 bit (16 ??a M1, 80 ??a M3).
    int ECCFunction2(int pos4) {
        j=0;
        num=0;
        for (j=0;j<3;j++){
            num=(num + (1<<(3-j))*FBS[pos4]);
            pos4=pos4+1;
        }
        return 0;
    }

    //bitpos=CCI+MI
    int FinalBitStream(int bitpos) {
        k=bitpos;
        for(j=i-1;j>=0;j--)
            FBS[k++]=Bin[j];
        return 0;
    }
    //Ypologismos tou Character Count Indicator. Prwto orisma, CCIBits, prosdiorizei ton arithmo twn Bits pou anaparistoun to CCI,
    //kathw einai diaforetiko gia kathe version. Episis, prwta uparxei to Mode Indicator, gi'ayto me ti metavliti firstbitpos,
    //prosdiorizoume th thesi tou prwtou bit tou CCI.
    //?p?????sµ?? t?? Character Count Indicator.???to ???sµa, CCIBits, p??sd?????e? t?? a???µ? t?? Bits p?? a?apa??st??? t? CCI,
    //?a??? e??a? d?af??et??? ??a ???e version. ?p?s??, p??ta ?p???e? t? Mode Indicator, ??'a?t? µe t? µetaﬂ??t? firstbitpos,
    //p??sd???????µe t? ??s? t?? p??t?? bit t?? CCI.
    int CCICalc(int CCIBits,int CCIFirstbitpos){
        i=0;
        j=0;
        for (int s=0;s<CCIBits;s++) {
            CCI[i++]  = W % 2;
            W /= 2;
        }
        k=CCIFirstbitpos;
        for(j=i-1;j>=0;j--){ //?e t?? ?d?a ?????? ?p??????eta? t? CCI // Me tin idia logiki upologizetai to CCI
            FBS[k]=CCI[j];
            k=k+1;
        }
        return 0;
    }
    //Metatroph sto duadiko kai upologismos tou Final Bit Stream. To orisma digits2, anaparista ton arithmo twn bits pou
    //xreiazontai gia ton arithmo twn psifiwn pou epithimoume. To orisma bitpos2, anaparista th thesi tou prwtou bit. (Sunhthws k)
    //?etat??p? st? d?ad???, ?a? ?p?????sµ?? t?? Final Bit Stream. ?? ???sµa digits2, a?apa??st? t?? a???µ? t?? bits p??
    //??e?????ta? ??a t?? a???µ? t?? ??f??? p?? ep???µ??µe. To ???sµa bitpos2, a?apa??st? t? ??s? t?? p??t?? bit. (S?????? k)
    int FinalBitStream2(int digits2,int bitpos2) {
        i=0;
        for (int s=0;s<digits2;s++){
             Bin[i++] = E1%2;
             E1 /= 2;
             k=bitpos2;
            for(j=i-1;j>=0;j--)
             FBS[k++]=Bin[j];
        }
        return 0;
    }
    //Kuklwma LFSR. NumberECC=Arithmos twn Error Correction Codewords pou tha paragei to kyklwma.
    //EC, o arithmos twn Message Codewords. PP0-PP16- o ekthetis twn suntelestwn a tou paragwgou polywnumou.
    //?????µa LFSR. NumberECC=????µ??  t?? Error Correction Codewords p?? ?a pa???e? t? ?????µa.
    //EC, o a???µ?? t?? Message Codewords. PP0-PP16 ? e???t?? t?? s??te?est?? a, t?? pa??????? p??????µ??. PP0=x^0, PP1=x^1 ?.?.?.
    int LFSR_compact(int NumberECC, int EC,int PP0,int PP1,int PP2,int PP3,int PP4,int PP5,int PP6,int PP7,int PP8,int PP9,
        int PP10,int PP11,int PP12,int PP13,int PP14,int PP15,int PP16) {
        int FB,B;
        int X[17];
        for (i=0;i<18;i++){
            X[i]=0;
        }
        for (int t=0;t<EC;t++){ //??se? epa?a???e?? ?s? t? p??????µ? µ???µat?? // Toses epanalipseis oses to polyonymo munimatos
            B = ECC[t]; //???????µ? µ???µat?? //Polywnumo minimatos
            FB = (B ^ X[NumberECC-1]);
            for(int count = 16; count >0; count--){
                int temp = 0;
                switch (count){
                    case 16: temp = PP16; break;    case 15: temp = PP15; break;
                    case 14: temp = PP14; break;    case 13: temp = PP13; break;
                    case 12: temp = PP12; break;    case 11: temp = PP11; break;
                    case 10: temp = PP10; break;    case 9: temp = PP9; break;
                    case 8: temp = PP8; break;      case 7: temp = PP7; break;
                    case 6: temp = PP6; break;      case 5: temp = PP5; break;
                    case 4: temp = PP4; break;      case 3: temp = PP3; break;
                    case 2: temp = PP2; break;      case 1: temp = PP1; break;
                }
                if (NumberECC > count) {
                    if (FB == 0)    D[count] = X[count-1];
                    if (FB !=0){
                        D[count] = (re[FB] + temp);
                        if (D[count] > 255)     D[count] = (D[count]%255);
                        D[count] = (f[D[count]] ^ X[count-1]);
                    }
                    X[count] = D[count];

                    if ( count == 1){
                        if (FB == 0){
                            D[0] = 0;
                        }
                        if (FB !=0){
                            D[0] = (re[FB] + PP0);
                            if (D[0] > 255)     D[0] = (D[0]%255);
                            D[0] = (f[D[0]]);
                        }
                        X[0] = D[0];
                    }
                }
            }
        }
        return 0;
    }
    //Metatropi twn Error Correction Codewords se diadiko. ECCD=Arithmos twn Codewords, bits=3thesi
    //?etat??p? t?? Error Correction Codewords se d?ad???. ECCD=A???µ?? t?? Codewords, bits3=??s?
    int ECbinary(int ECCD,int bits3){
        int u=0;
        for (u=0;u<ECCD;u++)
            for (int s=0;s<8;s++){ //Ta 3 ??f?a a?apa??sta?ta? µe 10 bits
               Bin[i++] = D[u]%2;
     //St?? p??a?a Bin ap????e?eta? p??s????? ? d?ad??? µ??f? t?? a???µ??, µe t? Least Important Bit ?a e??a? st?? p??t? ??s?
               D[u] /= 2;
               k=bits3;
               for(j=i-1;j>=0;j--)
                    FBS[k++]=Bin[j]; //?p??????eta? µ?sa st?? epa??????, ?a??? a? ???e? e?t?? a?t??, a?t????f??ta? µe ????? se???
            }
        return 0;
    }
    //Evaluation gia Micro M1 QRC
    //Evaluation ??a Micro M1 QRC
    int Eval(int Board[11][11],int size){
        SUM1 = SUM2 = 0;
        for (i=1;i<size;i++){
           if (Board[10][i]==1)
               SUM1++;
           if (Board[i][10]==1)
               SUM2++;
        }
        return 0;
    }

    //Evaluation sta M1 MQRC
    int SUMS(int evaluation,int number){
        if ((SUM1<SUM2)||(SUM1==SUM2))
            evaluation = (SUM1*16 + SUM2);
        else evaluation = (SUM2*16 + SUM1);
        if (evaluation>hev1){
            hev=number;
            hev1=evaluation;
        }
        return 0;
    }
    //Format Info (a,b,c,d,e ta  Format Info bits, analoga me to Version kai ti maska pou exoume dialeksei)
    //Format Info (a,b,c,d,e ta Format Info bits, a?????a µe t? Version ?a? t? µ?s?a p?? ????µe d?a???e?)
    int FormatInfo(int A1,int B1,int C1,int D1,int E2){
        FormatBits[0]=A1;
        FormatBits[1]=B1;
        FormatBits[2]=C1;
        FormatBits[3]=D1;
        FormatBits[4]=E2;
        for (i=5;i<15;i++)  FormatBits[i]=0;
        for (l=0;l<5;l++)
            if (FormatBits[l]!=0) break;
        do  l++;    while(FormatBits[l-1]==0);
        l--;
        if (l<4)
            for (i=0;i<l;i++)
                AP[11+l]=0;
        do{
            for (i=l;i<15;i++)  AP2[i]=(FormatBits[i]^AP[i-l]);
            while(true){    // WARNING
                l++;
                if(AP2[l] != 0) break;
            }
            //do    {
            //  l++;
            //}while (AP2[l-1] == 0);
            //l--;
        } while (l<5);
        for (i=0;i<5;i++)   AP2[i]=FormatBits[i];
        for (i=0;i<15;i++)  AP2[i]=(AP2[i]^AP3[i]);
        return 0;
    }

    //Format Info Bits Placement sta M1 MQRC
    //Format Info Bits Placement sta M1 MQRC
    int FIPlacement(int Board[11][11],int dim){
        for (i=1;i<9;i++) //Top???t?s? t?? FI Bits
            Board[8][i]=AP2[i-1];
        int g=8;
        for (i=7;i>0;i--){
            Board[i][8]=AP2[g];
            g++;
        }
        return 0;
    }

    //Topothetisi twn Bits sto Version 1
    //??p???t?s? t?? Bits st? Version 1
    int PlacementUP(int linestart,int linefinish,int column1,int column2){
        for (i=linestart;i>=linefinish;i--)
        {
            QRC[i][column1]=FBS[k++];
            QRC[i][column2]=FBS[k++];
        }
        return 0;
    }

    int PlacementDOWN(int linestart,int linefinish,int column1,int column2){
        for (i=linestart;i<=linefinish;i++)
        {
            QRC[i][column1]=FBS[k++];
            QRC[i][column2]=FBS[k++];
        }
        return 0;
    }

    //Ypologismos Format Info gia Version 1
    //?p?????sµ?? Format Info ??a Version 1
    int FormatInfoQRC(int A,int B,int C, int D, int E,int Board[21][21])
    {
        int AP4[15];
        AP4[0]=AP4[2]=AP4[4]=AP4[10]=AP4[13]=1;
        AP4[1]=AP4[3]=AP4[5]=AP4[6]=AP4[7]=AP4[8]=AP4[9]=AP4[12]=AP4[11]=AP4[14]=0;
        l=0;
        FormatBits[0]=AP2[0]=A;
        FormatBits[1]=AP2[1]=B;
        FormatBits[2]=AP2[2]=C;
        FormatBits[3]=AP2[3]=D;
        FormatBits[4]=AP2[4]=E;
        for (i=5;i<15;i++)  AP2[i]=0;
        do  l++;    while(AP2[l-1]==0);
        l--;
        if (l<4)
            for (i=l;i<4;i++){
                int e=0;
                AP[11+e]=0;
                e++;}
        do{
            for (i=l;i<15;i++)  AP2[i]=(AP2[i]^AP[i-l]);
            while(true){    // WARNING
                l++;
                if(AP2[l] != 0) break;
            }
            //do
            //  l++;
            //}while (AP2[l-1] == 0);
            //l--;
        } while (l<5);

        for (i=0;i<5;i++)   AP2[i]=FormatBits[i];

        for (i=0;i<15;i++)      AP2[i]=(AP2[i]^AP4[i]);
        for (i=0;i<=5;i++)      Board[8][i]=AP2[i];
        Board[8][7]=AP2[i++];
        Board[8][8]=AP2[i++];
        Board[7][8]=AP2[i++];
        for (j=5;j>=0;j--) Board[j][8]=AP2[i++];
        for (j=20;j>=14;j--) Board[j][8]=AP2[i++];
        for (j=13;j<=20;j++) Board[8][j]=AP2[i++];
        return 0;
    }


    //M1QRC me Unicode mavrous/asprous xaraktires
    //?1QRC µe Unicode µa?????/?sp???? ?a?a?t??e?
    int printPixels2(int Board[11][11]){
        for (i=0;i<11;i++){
            for (j=0;j<11;j++)  cout << ((Board[i][j] == 0) ? "  " : "\u2588\u2588");
            cout << endl;
        }
        return 0;
        }

    //-||- QRC
    int printPixels(int Board[21][21]){
        for (i=0;i<21;i++){
            for (j=0;j<21;j++)  cout << ((Board[i][j] == 0) ? "  " : "\u2588\u2588");
            cout << endl;
        }
        return 0;
        }

    int InvertBit(int x)
    {
        if (x==0)
            return 1;
        else if (x==1)
            return 0;
        else
        {
            cout << "ERROR: Something went wrong ... very wrong" << endl;
            return -1;
        }
    //  return x^1; // invert bit value with XOR function
    }
    //Apply tis 8 maskes
    //Apply t?? 8 µ?s?e?
    int MaskingQRC(int Board[21][21],int Board2[21][21],int Board3[21][21],int Board4[21][21],int Board5[21][21],int Board6[21][21],int Board7[21][21],int Board8[21][21]){
    for(int op=0;op<8;op++){
        for (i=9;i<=12;i++)
            for (j=0;j<=5;j++)
                switch(op){
                    case 0: if ((i+j)%2==0) Board[i][j]=InvertBit(Board[i][j]);                 break;
                    case 1: if (i%2==0) Board2[i][j]=InvertBit(Board2[i][j]);                   break;
                    case 2: if ((j)%3==0) Board3[i][j]=InvertBit(Board3[i][j]);                 break;
                    case 3: if ((i+j)%3==0) Board4[i][j]=InvertBit(Board4[i][j]);               break;
                    case 4: if (((i/2)+(j/3))%2==0) Board5[i][j]=InvertBit(Board5[i][j]);       break;
                    case 5: if ((i*j)%2+(i*j)%3==0) Board6[i][j]=InvertBit(Board6[i][j]);       break;
                    case 6: if (((i*j)%2+(i*j)%3)%2==0) Board7[i][j]=InvertBit(Board7[i][j]);   break;
                    case 7: if (((i+j)%2+(i*j)%3)%2==0) Board8[i][j]=InvertBit(Board8[i][j]);   break;
                }
        for (i=9;i<=12;i++)
            for (j=7;j<=20;j++)
                switch(op){
                    case 0: if ((i+j)%2==0) Board[i][j]=InvertBit(Board[i][j]);                 break;
                    case 1: if (i%2==0) Board2[i][j]=InvertBit(Board2[i][j]);                   break;
                    case 2: if ((j)%3==0) Board3[i][j]=InvertBit(Board3[i][j]);                 break;
                    case 3: if ((i+j)%3==0) Board4[i][j]=InvertBit(Board4[i][j]);               break;
                    case 4: if (((i/2)+(j/3))%2==0) Board5[i][j]=InvertBit(Board5[i][j]);       break;
                    case 5: if ((i*j)%2+(i*j)%3==0) Board6[i][j]=InvertBit(Board6[i][j]);       break;
                    case 6: if (((i*j)%2+(i*j)%3)%2==0) Board7[i][j]=InvertBit(Board7[i][j]);   break;
                    case 7: if (((i+j)%2+(i*j)%3)%2==0) Board8[i][j]=InvertBit(Board8[i][j]);   break;
                }
        for (i=0;i<=5;i++)
            for (j=9;j<=12;j++)
                switch(op){
                    case 0: if ((i+j)%2==0) Board[i][j]=InvertBit(Board[i][j]);                 break;
                    case 1: if (i%2==0) Board2[i][j]=InvertBit(Board2[i][j]);                   break;
                    case 2: if ((j)%3==0) Board3[i][j]=InvertBit(Board3[i][j]);                 break;
                    case 3: if ((i+j)%3==0) Board4[i][j]=InvertBit(Board4[i][j]);               break;
                    case 4: if (((i/2)+(j/3))%2==0) Board5[i][j]=InvertBit(Board5[i][j]);       break;
                    case 5: if ((i*j)%2+(i*j)%3==0) Board6[i][j]=InvertBit(Board6[i][j]);       break;
                    case 6: if (((i*j)%2+(i*j)%3)%2==0) Board7[i][j]=InvertBit(Board7[i][j]);   break;
                    case 7: if (((i+j)%2+(i*j)%3)%2==0) Board8[i][j]=InvertBit(Board8[i][j]);   break;
                }
        for (i=7;i<=8;i++)
            for (j=9;j<=12;j++)
                switch(op){
                    case 0: if ((i+j)%2==0) Board[i][j]=InvertBit(Board[i][j]);                 break;
                    case 1: if (i%2==0) Board2[i][j]=InvertBit(Board2[i][j]);                   break;
                    case 2: if ((j)%3==0) Board3[i][j]=InvertBit(Board3[i][j]);                 break;
                    case 3: if ((i+j)%3==0) Board4[i][j]=InvertBit(Board4[i][j]);               break;
                    case 4: if (((i/2)+(j/3))%2==0) Board5[i][j]=InvertBit(Board5[i][j]);       break;
                    case 5: if ((i*j)%2+(i*j)%3==0) Board6[i][j]=InvertBit(Board6[i][j]);       break;
                    case 6: if (((i*j)%2+(i*j)%3)%2==0) Board7[i][j]=InvertBit(Board7[i][j]);   break;
                    case 7: if (((i+j)%2+(i*j)%3)%2==0) Board8[i][j]=InvertBit(Board8[i][j]);   break;
                }
        for (i=13;i<=20;i++)
            for (j=9;j<=20;j++)
                switch(op){
                    case 0: if ((i+j)%2==0) Board[i][j]=InvertBit(Board[i][j]);                 break;
                    case 1: if (i%2==0) Board2[i][j]=InvertBit(Board2[i][j]);                   break;
                    case 2: if ((j)%3==0) Board3[i][j]=InvertBit(Board3[i][j]);                 break;
                    case 3: if ((i+j)%3==0) Board4[i][j]=InvertBit(Board4[i][j]);               break;
                    case 4: if (((i/2)+(j/3))%2==0) Board5[i][j]=InvertBit(Board5[i][j]);       break;
                    case 5: if ((i*j)%2+(i*j)%3==0) Board6[i][j]=InvertBit(Board6[i][j]);       break;
                    case 6: if (((i*j)%2+(i*j)%3)%2==0) Board7[i][j]=InvertBit(Board7[i][j]);   break;
                    case 7: if (((i+j)%2+(i*j)%3)%2==0) Board8[i][j]=InvertBit(Board8[i][j]);   break;
                }
    }
    return 0;
    }

    //Evaluation QRC
    int Evaluation(int Board[21][21]){
    int Penalty=0;
    int count;
    //Prwto evaluation condition. To i paei mexri to 20, giati panta tsekaroume kai to epomeno module.
    //Episis to count ginetai 1, giati metraei kai to paron module.
    //???t? evaluation condition. To i p?e? µ???? 20, ??at? p??ta tse?????µe ?a? t? ep?µe?? module.
    //?p?s?? t? count ???eta? 1, ??at? µet??e? t? pa??? module
    for (j=0;j<21;j++){
        for (i=0;i<21;i++){
            count=1;
            while (Board[j][i]==Board[j][i+1])      {
                if (i==20) break;
                count++;
                i++; }
                if (count >=5)
                Penalty=Penalty + 3+(count-5);
               }
           }

    for (j=0;j<21;j++)
        for (i=0;i<21;i++){
            count=1;
            if (i==0) count=0;
            while (Board[i][j]==Board[i+1][j])      {
                if (i==20) break;
                count++;
                i++; }
            if (count >=5)
                Penalty=Penalty + 3+(count-5);
               }
    //Deftero Evaluation condition
    //?e?te?? Evaluation condition
    for (i=0;i<20;i++)
        for (j=0;j<20;j++)
            if ((Board[i][j]==Board[i+1][j]) && (Board[i][j]==Board[i][j+1]) && (Board[i][j]==Board[i+1][j+1]))
            Penalty=Penalty+3;

    //Trito evaluation condition
    //T??t? evaluation condition
    for (i=0;i<21;i++)
        for (j=0;j<=10;j++){
            if (((Board[i][j]==1) && (Board[i][j+1]==0) && (Board[i][j+2]==1) && (Board[i][j+3]==1) && (Board[i][j+4]==1) && (Board[i][j+5]==0) && (Board[i][j+6]==1) && (Board[i][j+7]==0) && (Board[i][j+8]==0) && (Board[i][j+9]==0) && (Board[i][j+10]==0)) || ((Board[i][j]==0) && (Board[i][j+1]==0) && (Board[i][j+2]==0) && (Board[i][j+3]==0) && (Board[i][j+4]==1) && (Board[i][j+5]==0) && (Board[i][j+6]==1) && (Board[i][j+7]==1) && (Board[i][j+8]==1) && (Board[i][j+9]==0) && (Board[i][j+10]==1)))
    Penalty=Penalty+40;
            if (((Board[j][i]==0) && (Board[j+1][i]==0) && (Board[j+2][i]==0) && (Board[j+3][i]==0) && (Board[j+4][i]==1) && (Board[j+5][i]==0) && (Board[j+6][i]==1) && (Board[j+7][i]==1) && (Board[j+8][i]==1) && (Board[j+9][i]==0) && (Board[j+10][i]==1)) || ((Board[j][i]==1) && (Board[j+1][i]==0) && (Board[j+2][i]==1) && (Board[j+3][i]==1) && (Board[j+4][i]==1) && (Board[j+5][i]==0) && (Board[j+6][i]==1) && (Board[j+7][i]==0) && (Board[j+8][i]==0) && (Board[j+9][i]==0) && (Board[j+10][i]==0)))
    Penalty=Penalty+40;
    }
    //Tetarto evaluation condition
    //T?ta?t? evaluation condition
    int countv=0;
    for (i=0;i<21;i++)
        for (j=0;j<21;j++)
            if (Board[i][j]==1) countv++;
        countv=((countv*100/441));
    int Final=0;
    int y=0;
    int m=0;
    i=0;
    do{
        i++;
        Final=i*5;
    } while (Final<=countv);
    y=fabs((Final-50)/5);
    m=fabs((Final-55)/5);//Meion 55 giati exoume ti megaluterh apo tis 2 times pou einai anamesa sta count.  //?e??? 55 ??at? ????µe t? µe?a??te?? ap? t?? 2 t?µ?? p?? e??a? a??µesa t? count.
    if (y>m)    Penalty=(m*10)+Penalty;
    else Penalty=(y*10+Penalty);
    return Penalty;
    }
    //Sugkrisi twn Penalty twn maskwn kai kathorismos tou idanikoterou pattern
    //S?????s? t?? Penalty t?? µas??? ?a? ?a????sµ?? t?? ?da????te??? pattern
    int EvaluationResult()
    {
        int countev=0;
        int EvaluationBoard[8]{Penalty000,Penalty001,Penalty010,Penalty011,Penalty100,Penalty101,Penalty110,Penalty111};
        for (i=1;i<8;i++)
        if (EvaluationBoard[i]<EvaluationBoard[0]) {
            EvaluationBoard[0]=EvaluationBoard[i];
            countev=i;}

    switch (countev){
                    case 0: printPixels(QRCMP000); break;   case 1: printPixels(QRCMP001); break;
                    case 2: printPixels(QRCMP010); break;   case 3: printPixels(QRCMP011); break;
                    case 4: printPixels(QRCMP100); break;   case 5: printPixels(QRCMP101); break;
                    case 6: printPixels(QRCMP110); break;   case 7: printPixels(QRCMP111); break;
                    }
                    return 0;
    }
    //Input oi alphanumeric xarakthres pou theloume na kanoume encode
    //Input ?? alphanumeric ?a?a?t??e? p?? ?????µe ?a ?????µe encode
    int AlphaInput(int ByteLength)
    {
        int AlphaTable[25];
        int inp=0;
        int AlphaTable2[13];
        for (i=0;i<W;i++)
        {

            j=0;
            do{
            if (al[j]==E4[inp]) AlphaTable[i]=j;
            j++;
            } while (al[j-1]!= E4[inp]);
        inp++;
        }
        if (W%2==0)
        {
            for (i=0;i<W-1;i=i+2){
                AlphaTable2[p]=AlphaTable[i]*45+AlphaTable[i+1];
                p++;
            }
            }

        if (W%2!=0)
        {
            for (i=0;i<W-1;i=i+2){
                AlphaTable2[p]=AlphaTable[i]*45+AlphaTable[i+1];
                p++;
            }
            AlphaTable2[p]=AlphaTable[i];
        }
    i=0;
    for(int z=0;z<=p-1;z++)
    {
        for (int s=0;s<11;s++){
             Bin[i++] = AlphaTable2[z]%2;
             AlphaTable2[z] /= 2;
             }
    }
    int l=13;
    for (int z=0;z<W/2;z++)
    {
        int m=10;
        for (int y=0;y<11;y++){
            FBS[l]=Bin[((z*11)+m)];
        m--;
        l++;
        }
    }
    if (W%2 !=0)
    {
        i=0;
        for (int s=0;s<6;s++){
             Bin[i++] = AlphaTable2[W/2]%2;
             AlphaTable2[W/2] /= 2;
             }
        int m=5;
        for (int y=0;y<6;y++){
            FBS[l]=Bin[m];
        m--;
        l++;
        }
    }
    l--;
    if (l<ByteLength)
    {
        for (i=0;i<4;i++)
            if (l<ByteLength) l++;
    }
    if ((l+1)%8!=0)
        switch ((l+1)%8){
        case 1: l=l+8; break;  case 2: l=l+7; break;
        case 3: l=l+6; break;  case 4: l=l+5; break;
        case 5:l=l+4;  break;  case 6:l=l+3; break;
        case 7: l=l+2; break;
    }
    else l++;
    while (l<ByteLength){
        FBS[l++]=1;
        FBS[l++]=1;
        FBS[l++]=1;
        FBS[l++]=0;
        FBS[l++]=1;
        FBS[l++]=1;
        FBS[l++]=0;
        FBS[l++]=0;
        if (l<ByteLength){
            FBS[l++]=0;
            FBS[l++]=0;
            FBS[l++]=0;
            FBS[l++]=1;
            FBS[l++]=0;
            FBS[l++]=0;
            FBS[l++]=0;
            FBS[l++]=1; }

    }
    return 0;
    }
    //Diaforetiki sunarthsh gia to Format Info tou 1M, kathw einai 0000000000000.
    //??af??et??? s????t?s? ??a t? Format t?? 1?, ?a??? e??a? 000000000000000.
    int Format1M()
    {
        AP2[0]=AP2[2]=AP2[4]=AP2[10]=AP2[13]=1;
        AP2[1]=AP2[3]=AP2[5]=AP2[6]=AP2[7]=AP2[8]=AP2[9]=AP2[11]=AP2[12]=AP2[14]=0;
        for (i=0;i<=5;i++)      QRCMP000[8][i]=AP2[i];
        QRCMP000[8][7]=AP2[i++];
        QRCMP000[8][8]=AP2[i++];
        QRCMP000[7][8]=AP2[i++];
        for (j=5;j>=0;j--) QRCMP000[j][8]=AP2[i++];
        for (j=20;j>=14;j--) QRCMP000[j][8]=AP2[i++];
        for (j=13;j<=20;j++) QRCMP000[8][j]=AP2[i++];
        return 0;
    }


    int NumericDimensions(int ByteLength2){
    if (l<ByteLength2)   {
               for (i=0;i<4;i++)
                    if (l<ByteLength2) l++;
            }
            if ((l+1)%8!=0)
                    switch ((l+1)%8){
                        case 1: l=l+8; break;  case 2: l=l+7; break;
                        case 3: l=l+6; break;  case 4: l=l+5; break;
                        case 5: l=l+4; break;  case 6: l=l+3; break;
                        case 7: l=l+2; break;
                        }
            else l++;
            while (l<ByteLength2){
                FBS[l++]=1;
                FBS[l++]=1;
                FBS[l++]=1;
                FBS[l++]=0;
                FBS[l++]=1;
                FBS[l++]=1;
                FBS[l++]=0;
                FBS[l++]=0;
                    if (l<ByteLength2){
                        FBS[l++]=0;
                        FBS[l++]=0;
                        FBS[l++]=0;
                        FBS[l++]=1;
                        FBS[l++]=0;
                        FBS[l++]=0;
                        FBS[l++]=0;
                        FBS[l++]=1; }

    }
    return 0;
    }

    int MaskingMQRC(){
    for (i=0;i<11;i++)
                for (j=0;j<11;j++)
                    MQRCMP00[i][j]=MQRCMP01[i][j]=MQRCMP10[i][j]=MQRCMP11[i][j]=MQRC[i][j];

    //MASKING MICRO QRC 00
        for (i=1;i<9;i++)
            for (j=9;j<11;j++)
                if (i%2==0)                            MQRCMP00[i][j]=(1^MQRCMP00[i][j]);
          for (i=9;i<11;i++)
                for (j=1;j<11;j++)
                    if (i%2==0)                        MQRCMP00[i][j]=(1^MQRCMP00[i][j]);

    //MASKING MICRO QRC 01
        for (i=1;i<9;i++)
            for (j=9;j<11;j++)
                if ((((i/2)+(j/3))%2)==0)               MQRCMP01[i][j]=(1^MQRCMP01[i][j]);

        for (i=9;i<11;i++)
            for (j=1;j<11;j++)
                if ((((i/2)+(j/3))%2)==0)               MQRCMP01[i][j]=(1^MQRCMP01[i][j]);


    //MASKING MICRO QRC 10
        for (i=1;i<9;i++)
            for (j=9;j<11;j++)
                if ((((i*j)%2)+((i*j)%3)%2)==0)         MQRCMP10[i][j]=(1^MQRCMP10[i][j]);

        for (i=9;i<11;i++)
            for (j=1;j<11;j++)
                if ((((i*j)%2)+((i*j)%3)%2)==0)         MQRCMP10[i][j]=(1^MQRCMP10[i][j]);

    //MASKING MICRO QRC 11
        for (i=1;i<9;i++)
            for (j=9;j<11;j++)
                if (((((i+j)%2)+((i*j)%3))%2)==0)       MQRCMP11[i][j]=(1^MQRCMP11[i][j]);

        for (i=9;i<11;i++)
            for (j=1;j<11;j++)
                if (((((i+j)%2)+((i*j)%3))%2)==0)       MQRCMP11[i][j]=(1^MQRCMP11[i][j]);

    return 0;
    }

    int ByteModeInput(int ByteLength3){
        int encodingbits;
        int h=0;
        int m=0;
        int kcount;
        char encodingbits2[20];
        bool Logic;
        for (i = 0; i < W; i++)
        {
            do{
                Logic = false;
                h = i * 8;
                do{
                    cin >> encodingbits2;
                    kcount = 0;
                    for (int n = 0; encodingbits2[n] != 0; n++)
                        kcount++;
                    if (kcount != 8) {
                        cout << "You didn't enter 8 bits. Please try again." << endl;
                    }
                } while (kcount != 8);
                encodingbits = atoi(encodingbits2);

                m = 7;
                if (((encodingbits % 10) != 1) && ((encodingbits % 10) != 0))
                    Logic = true;
                Bin[h + m] = encodingbits % 10;
                encodingbits /= 10;
                m--;
                if (((encodingbits % 10) != 1) && ((encodingbits % 10) != 0))
                    Logic = true;
                Bin[h + m] = encodingbits % 10;
                encodingbits /= 10;
                m--;
                if (((encodingbits % 10) != 1) && ((encodingbits % 10) != 0))
                    Logic = true;
                Bin[h + m] = encodingbits % 10;
                encodingbits /= 10;
                m--;
                if (((encodingbits % 10) != 1) && ((encodingbits % 10) != 0))
                    Logic = true;
                Bin[h + m] = encodingbits % 10;
                encodingbits /= 10;
                m--;
                if (((encodingbits % 10) != 1) && ((encodingbits % 10) != 0))
                    Logic = true;
                Bin[h + m] = encodingbits % 10;
                encodingbits /= 10;
                m--;
                if (((encodingbits % 10) != 1) && ((encodingbits % 10) != 0))
                    Logic = true;
                Bin[h + m] = encodingbits % 10;
                encodingbits /= 10;
                m--;
                if (((encodingbits % 10) != 1) && ((encodingbits % 10) != 0))
                    Logic = true;
                Bin[h + m] = encodingbits % 10;
                encodingbits /= 10;
                m--;
                if (((encodingbits % 10) != 1) && ((encodingbits % 10) != 0))
                    Logic = true;
                Bin[h + m] = encodingbits % 10;
                encodingbits /= 10;
                if (Logic == true)
                    cout << "One or more bits have been incorrectly entered. Please try again.";
                cout << endl;
            } while (Logic == true);
        }
    int l=12;
    int u=0;
    for (int z=0;z<W;z++)
    {
        for (int y=0;y<8;y++){
            FBS[l]=Bin[u];
        l++;
        u++;
        }
    }
    l--;
    if (l<ByteLength3)
    {
        for (i=0;i<4;i++)
            if (l<ByteLength3) l++;
    }
    if ((l+1)%8!=0)
        switch ((l+1)%8){
        case 1: l=l+8; break;  case 2: l=l+7; break;
        case 3: l=l+6; break;  case 4: l=l+5; break;
        case 5:l=l+4;  break;  case 6:l=l+3; break;
        case 7: l=l+2; break;
    }
    else l++;
    while (l<ByteLength3){
        FBS[l++]=1;
        FBS[l++]=1;
        FBS[l++]=1;
        FBS[l++]=0;
        FBS[l++]=1;
        FBS[l++]=1;
        FBS[l++]=0;
        FBS[l++]=0;
        if (l<ByteLength3){
            FBS[l++]=0;
            FBS[l++]=0;
            FBS[l++]=0;
            FBS[l++]=1;
            FBS[l++]=0;
            FBS[l++]=0;
            FBS[l++]=0;
            FBS[l++]=1; }
    cout << endl;
    }
    return 0;
    }

    int PlacementQRC (){
    PlacementUP(20,9,20,19);
    PlacementDOWN(9,20,18,17);
    PlacementUP(20,9,16,15);
    PlacementDOWN(9,20,14,13);
    PlacementUP(20,7,12,11);
    PlacementUP(5,0,12,11);
    PlacementDOWN(0,5,10,9);
    PlacementDOWN(7,20,10,9);
    PlacementUP(12,9,8,7);
    PlacementDOWN(9,12,5,4);
    PlacementUP(12,9,3,2);
    PlacementDOWN(9,12,1,0);
    return 0;
    }

    int Evaluation1 (){

    Penalty000=Evaluation(QRCMP000);
    Penalty001=Evaluation(QRCMP001);
    Penalty010=Evaluation(QRCMP010);
    Penalty011=Evaluation(QRCMP011);
    Penalty100=Evaluation(QRCMP100);
    Penalty101=Evaluation(QRCMP101);
    Penalty110=Evaluation(QRCMP110);
    Penalty111=Evaluation(QRCMP111);
    return 0;
    }
