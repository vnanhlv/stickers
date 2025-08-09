^XA
^PW711
^LL508
^CI0

^LH0,0

^FO20,20^GB530,270,2,B^FS

^FO40,70^A0N,30,30^FDPO#: @Model.CUSTOMERPO^FS

@foreach(var item in @Model.DETAILS)
{
    @:^FO40,@(30+ Model.DETAILS.IndexOf(item)*28)^A0N,28,28^FDUPC: @(item.CUSTOMERUPC)^FS
    @:^FO40,@(105+ Model.DETAILS.IndexOf(item)*28)^A0N,28,28^FDMPS: @(item.MPSNO)^FS
    @:^FO40,@(140 + Model.DETAILS.IndexOf(item)*28)^A0N,28,28^FDSTYLE: @(item.STYLECODE+'-'+item.LABEL)^FS
    @:^FO40,@(175 + Model.DETAILS.IndexOf(item)*28)^A0N,28,28^FDCOLOR: @(item.COLORNAME)^FS
    @:^FO40,@(210 + Model.DETAILS.IndexOf(item)*28)^A0N,28,28^FDSIZE: @(item.SIZE)^FS

}

^FO40,245^A0N,30,30^FDTotal Qty: @Model.TOTALSCANQTY^FS
^FO250,245^A0N,30,30^FDGW:

^PQ1
^XZ