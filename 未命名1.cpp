
void setup() {
   pinMode(13,OUTPUT);
   Serial.begin(9600);
}
void heigh()
{
     digitalWrite(13,HIGH);
     delay(900);
     digitalWrite(13,LOW);
     delay(300);
};
void low()
{
     digitalWrite(13,HIGH);
     delay(900);
     digitalWrite(13,LOW);
     delay(300);
};
void printsign(char xx[])
{
           for(int i=0;i<strlen(xx);i++)
           {
                if(xx[i]=='0')
                {
                  low();
                }
                else
                {
                  heigh();
                }
            
           }         
};
void loop() {
   char inchar[]="hello world";
   char abcchar[][5]={
         "01" ,   //a
         "1000" , //b
         "1010",  //c
         "100"  , //d
         "0"   ,  //e
         "0010" , //f
         "110"  , //g
         "0000" , //h
         "00"  ,  //i
         "0111",  //j
         "101"  , //k
         "0100" , //l
          "11"  , //m
          "10"   ,//n
          "111" , //o
          "0110", //p
          "1101", //q
          "010" , //r
          "000" , //s
          "1"  ,  //t
          "001" , //u
          "0001", //v
          "011" , //w
          "1001" ,//x
          "1011", //y
          "1100" //z
   };
   char numchar[][6]{
      "11111",
      "01111",
      "00111",
      "00011",
      "00001",
      "00000",
      "10000",
      "11000",
      "11100",
      "11110"
   };
   int t;
   for(int i=0;i<strlen(inchar);i++)
   {
    
       if(inchar[i]>='a'&& inchar[i]<='z')
       {
            t=inchar[i]-'a';
            printsign(abcchar[t]);
       }
       else if(inchar[i]>='A' && inchar[i]<='Z')
       {
            t=inchar[i]-'A';
            printsign(abcchar[t]);
       }
       else if(inchar[i]>='0' && inchar[i]<='9')
       {
            t=inchar[i]-'0';
            printsign(numchar[t]);

       }
       else if (inchar[i]=='/')
       {
           char otherchar[10]="10010";
           printsign(otherchar);
       }
       else if (inchar[i]=='-')
       {
           char otherchar[10]="100001";
           printsign(otherchar);
       }
       else if (inchar[i]=='?')
       {
           char otherchar[10]="001100";
            printsign(otherchar);
       }
       else
       {
            char otherchar[10]="101101";
            printsign(otherchar);    
       }
   }
}
