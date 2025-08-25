{F,1,A,R,E,150,250,"BU2024Anderson"|
T,1,30,V,120,50,0,512,1,1,B,L,0,0|
T,2,5,V,120,190,0,512,1,1,B,L,0,0|
T,3,18,V,100,20,0,512,1,1,B,L,0,0|
T,4,5,V,100,120,0,512,1,1,B,L,0,0|
T,5,20,V,100,150,0,512,1,1,B,L,0,0|
T,6,20,V,80,20,0,512,1,1,B,L,0,0|
T,7,10,V,80,150,0,512,1,1,B,L,0,0|
T,8,10,V,60,20,0,512,1,1,B,L,0,0|
T,9,5,V,60,150,0,512,1,1,B,L,0,0|
T,10,10,V,40,20,0,512,1,1,B,L,0,0|
T,11,5,V,40,150,0,512,1,1,B,L,0,0|
L,V,10,10,0,225,6,"11111111"|
L,V,10,10,90,130,6,"11111111"|
L,V,140,10,0,225,6,"11111111"|
L,V,10,230,90,130,6,"11111111"|
}
{B,1,N,1|E,0,0,1,1,0,1|

@{
int index = 1;
for (int i = 0; i < 1; i++)
{
var line = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].CUSTOMERUPC  : "");
@Raw(line)
}
}

2,"@Model.SEQ"|
3,"@Model.CUSTOMERPO"|
8,"SIZE"|
10,"QTY"|



@{
index = 4;
for (int i = 0; i < 1; i++)
{
var line = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].LABEL : "");
@Raw(line)
}
}

@{
index = 5;
for (int i = 0; i < 1; i++)
{
var line = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].MPSNO : "");
@Raw(line)
}
}

@{
index = 6;
for (int i = 0; i < 1; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].CUSTOMERSTYLE : "");
@Raw(line1)
}
}

@{
index = 7;
for (int i = 0; i < 1; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].COLORCODE : "");
@Raw(line1)
}
}

@{
index = 9;
for (int i = 0; i < 1; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].SIZE : "");
@Raw(line1)
}
}

@{
index = 11;
for (int i = 0; i < 1; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].SCANQTY.ToString() : "");
@Raw(line1)
}
}

}