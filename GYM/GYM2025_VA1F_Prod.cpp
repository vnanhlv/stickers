{F,1,A,R,E,600,300,"GYM2025Anderson"|

B,100,18,V,70,90,7,4,50,7,L,1| `Barcode`

T,101,15,V,20,167,0,1,1,1,B,L,0,1| `Product`
T,102,15,V,20,185,0,1,1,1,B,L,0,1| `Code`

T,2,25,V,110,175,0,1,1,1,B,L,0,1| `ProductCodeValue`

T,3,15,V,20,215,0,1,1,1,B,L,0,1| `Color`
T,4,15,V,110,215,0,1,1,1,B,L,0,1| `Color Value`

T,6,15,V,20,255,0,1,1,1,B,L,0,1| `Size`
T,7,15,V,110,255,0,1,1,1,B,L,0,1| `SizeValue`

T,11,15,V,325,95,0,1,1,1,B,L,0,1| `Quantity`
T,12,15,V,420,95,0,1,1,1,B,L,0,1| `QuantityValue`

T,13,15,V,325,135,0,1,1,1,B,L,0,1| `DIM`
T,14,15,V,420,135,0,1,1,1,B,L,0,1| `DimValue`

T,15,15,V,325,175,0,1,1,1,B,L,0,1| `Weight`
T,16,15,V,420,175,0,1,1,1,B,L,0,1| `WeightValue`

T,17,15,V,325,207,0,1,1,1,B,L,0,1| `Carton`
T,18,15,V,325,225,0,1,1,1,B,L,0,1| `Number`
T,185,15,V,480,215,0,1,1,1,B,L,0,1| `OF`

T,19,15,V,325,255,0,1,1,1,B,L,0,1| `PO`
T,20,20,V,350,255,0,1,1,1,B,L,0,1| `POValue`


L,S,20,150,280,150,6,"11111111"|
L,S,20,190,280,190,6,"11111111"|
L,S,20,230,280,230,6,"11111111"|
L,S,20,270,280,270,6,"11111111"|


L,S,325,70,585,70,6,"11111111"|
L,S,325,110,585,110,6,"11111111"|
L,S,325,150,585,150,6,"11111111"|
L,S,325,190,585,190,6,"11111111"|
L,S,325,230,585,230,6,"11111111"|
L,S,325,270,585,270,6,"11111111"|

}
}
{B,1,N,1|E,0,0,1,1,0,1|

@{
int index = 100;
for (int i = 0; i < 1; i++)
{
var line = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].UPC  : "");
@Raw(line)
}
}

101,"PRODUCT"|
102,"CODE:"|
@{
index = 2;
for (int i = 0; i < 1; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].STYLECODE : "");
@Raw(line1)
}
}


3,"COLOUR:"|
@{
index = 4;
for (int i = 0; i < 1; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].COLORNAME : "");
@Raw(line1)
}
}

6,"SIZE:"|
@{
index = 7;
for (int i = 0; i < 1; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].SIZE : "");
@Raw(line1)
}
}


11,"QUANTITY:"|
@{
index = 12;
for (int i = 0; i < 1; i++)
{
var line1 = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].SCANQTY.ToString() : "");
@Raw(line1)
}
}

13,"DIMENSIONS:"|
14,"@Model.DIMENSIONSINCM"|

15,"WEIGHT:"|
16,"@Model.GROSSWEIGHT"|

17,"CARTON"|
18,"NUMBER:"|
185,"OF"|


19,"PO:"|
20,"@Model.CUSTOMERPO"|


}