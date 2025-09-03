{F,1,A,R,E,150,300,"WIP2025"|

T,31,10,V,138,12,0,1,1,1,B,L,0,0|
T,3,20,V,138,46,0,1,1,1,B,L,0,0|

T,41,5,V,138,200,0,1,1,1,B,L,0,0|
T,4,5,V,138,236,0,1,1,1,B,L,0,0|

T,51,20,V,122,12,0,1,1,1,B,L,0,0|
T,5,20,V,122,68,0,1,1,1,B,L,0,0|

T,10,10,V,122,200,0,1,1,1,B,L,0,0|
T,11,10,V,122,262,0,1,1,1,B,L,0,0|

T,21,15,V,106,12,0,1,1,1,B,L,0,0|
T,2,10,V,106,66,0,1,1,1,B,L,0,0|


T,121,15,V,106,200,0,1,1,1,B,L,0,0|
T,12,5,V,106,250,0,1,1,1,B,L,0,0|

T,61,15,V,86,12,0,1,1,1,B,L,0,0|
T,71,20,V,86,120,0,1,1,1,B,L,0,0|
T,81,20,V,86,200,0,1,1,1,B,L,0,0|
T,91,20,V,86,255,0,1,1,1,B,L,0,0|

T,101,16,V,68,12,0,1,1,1,B,L,0,0|
T,102,20,V,68,122,0,1,1,1,B,L,0,0|
T,103,20,V,68,205,0,1,1,1,B,L,0,0|
T,104,20,V,68,256,0,1,1,1,B,L,0,0|

T,105,16,V,54,12,0,1,1,1,B,L,0,0|
T,106,20,V,54,122,0,1,1,1,B,L,0,0|
T,107,20,V,54,205,0,1,1,1,B,L,0,0|
T,108,20,V,54,256,0,1,1,1,B,L,0,0|

T,109,16,V,40,12,0,1,1,1,B,L,0,0| 
T,110,20,V,40,122,0,1,1,1,B,L,0,0|
T,111,20,V,40,205,0,1,1,1,B,L,0,0|
T,112,20,V,40,256,0,1,1,1,B,L,0,0|

T,113,16,V,26,12,0,1,1,1,B,L,0,0|
T,114,20,V,26,122,0,1,1,1,B,L,0,0|
T,115,20,V,26,205,0,1,1,1,B,L,0,0|
T,116,20,V,26,256,0,1,1,1,B,L,0,0|


T,555,20,V,6,12,0,1,1,1,B,L,0,0|
T,777,5,V,6,260,0,1,1,1,B,L,0,0|

L,V,98,10,0,280,6,"11111111"|
L,V,80,10,0,280,6,"11111111"|
}
{B,1,N,1|E,0,0,1,1,0,1|




31,"PO#:"|
41,"MKT:"|
51,"MPS No:"|
21,"Pick No:"|

61,"STYLE"|
71,"COLOR"|
81,"SIZE"|
91,"QTY"|


2,"@Model.PICKNO"|
3,"@Model.CUSTOMERPO"|
4,"@Model.MKT"|
@{
int index = 5;
for (int i = 0; i < 1; i++)
{
var line = string.Format(" {0},\"{1}\"|\r\n", index++, Model.DETAILS.Count > i? Model.DETAILS[i].MPSNO : "");
@Raw(line)
}
}

@{
    index = 101;
    for (int i = 0; i < 4; i++)
    {
        var detail = (Model.DETAILS.Count > i) ? Model.DETAILS[i] : null;

        var style = (detail != null && detail.STYLECODE != null) ? detail.STYLECODE.Replace("\"", "'") : "";
        var color = (detail != null && detail.COLORNAME != null) ? detail.COLORNAME.Replace("\"", "'") : "";
        var size = (detail != null && detail.SIZE != null) ? detail.SIZE.Replace("\"", "'") : "";
        var qty = (detail != null) ? detail.SCANQTY.ToString() : "";

        @Raw(string.Format("{0},\"{1}\"|\r\n", index++, style))
        @Raw(string.Format("{0},\"{1}\"|\r\n", index++, color))
        @Raw(string.Format("{0},\"{1}\"|\r\n", index++, size))
        @Raw(string.Format("{0},\"{1}\"|\r\n", index++, qty))
    }
}


10,"Total Qty:"|
11,"@Model.TOTALSCANQTY"|

121,"Weight:"|
12,"@Model.GROSSWEIGHT"|

555,"@Model.CARTONNO"|
777,"@Model.SEQ"|
}