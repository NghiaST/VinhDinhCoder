uses math;
const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        x,y,z:int64;
        a,f:array[0..1000000]of longint;
        m,t,k:longint;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(x,y,z);
        write((x*1000-z) div (y+z));
end.
