{F,1,A,R,E,600,400,"1CT"|
T,1,13,V,570,19,0,512,1,1,B,L,0,0|
T,2,14,V,570,145,0,512,1,1,B,L,0,0|
T,3,10,V,550,260,0,511,1,1,B,L,0,0|
T,4,3,V,550,350,0,511,1,1,B,L,0,0|
T,5,14,V,550,19,0,512,1,1,B,L,0,0|
T,6,4,V,550,145,0,512,1,1,B,L,0,0|
L,V,510,5,0,390,6,"11111111"|
T,7,11,V,520,20,0,1,1,1,B,L,0,0|
T,8,3,V,520,285,0,1,1,1,B,L,0,0|
T,9,13,V,520,315,0,1,1,1,B,L,0,0|
T,10,8,V,520,230,0,1,1,1,B,L,0,0|
T,31,8,V,520,155,0,1,1,1,B,L,0,0|
B,11,21,V,444,13,8,8,50,8,L,0|
R,50,2,6|
T,12,21,V,426,15,0,1,1,1,B,L,0,0|
B,13,21,V,332,13,8,8,50,8,L,0|
R,50,2,6|
T,14,21,V,314,15,0,1,1,1,B,L,0,0|
B,15,21,V,220,13,8,8,50,8,L,0|
R,50,2,6|
T,16,21,V,202,15,0,1,1,1,B,L,0,0|
B,17,21,V,108,13,8,8,50,8,L,0|
R,50,2,6|
T,18,21,V,90,15,0,1,1,1,B,L,0,0|
B,19,21,V,444,250,8,8,50,8,L,0|
R,50,2,6|	
T,20,18,V,426,255,0,1,1,1,B,L,0,0|
B,21,21,V,332,250,8,8,50,8,L,0|
R,50,2,6|
T,22,18,V,314,255,0,1,1,1,B,L,0,0|
B,23,21,V,220,250,8,8,50,8,L,0|
R,50,2,6|
T,24,18,V,202,255,0,1,1,1,B,L,0,0|
B,25,21,V,108,250,8,8,50,8,L,0|
R,50,2,6|
T,26,18,V,90,255,0,1,1,1,B,L,0,0|
T,27,3,V,460,230,0,1,1,1,B,R,0,0|
T,28,3,V,348,230,0,1,1,1,B,R,0,0|
T,29,3,V,236,230,0,1,1,1,B,R,0,0|
T,30,3,V,124,230,0,1,1,1,B,R,0,0|
T,32,30,V,460,150,0,11,1,1,B,L,0,0|
T,33,30,V,348,150,0,11,1,1,B,L,0,0|
T,34,30,V,236,150,0,11,1,1,B,L,0,0|
T,35,30,V,124,150,0,11,1,1,B,L,0,0|
}
{B,1,N,1|E,0,0,1,1,0,1|
1,"Order Number:"|
2,"@Model.CUSTOMERPO"|
3,"Total Qty:"|
4,"@Model.TOTALSCANQTY"|
5,"Carton Number:"|
6,"@Model.POCARTONSEQ"|
7,"CT/ID"|
8,"SKU"|
9,"BARCODE"|
10,"QTY"|

@{
int index = 11;
for (int i = 0; i < 4; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.CUSTOMERPO + "-" + Model.POCARTONSEQ  + "-" + (Model.DETAILS[i].SEQ + 1).ToString() : "");
@Raw(line1)
var line2 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.CUSTOMERPO + "-" + Model.POCARTONSEQ  + "-" + (Model.DETAILS[i].SEQ + 1).ToString() : "");
@Raw(line2)
}
}

@{
index = 19;
for (int i = 0; i < 4; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].CUSTOMERUPC : "");
@Raw(line1)
var line2 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].CUSTOMERUPC : "");
@Raw(line2)
}
}

@{
index = 27;
for (int i = 0; i < 4; i++)
{
var line = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].SCANQTY.ToString() : "");
@Raw(line)
}
}

31,"SKU CODE"|
@{
index = 32;
for (int i = 0; i < 4; i++)
{
var line = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].CUSTOMERUPC : "");
@Raw(line)
}
}
}