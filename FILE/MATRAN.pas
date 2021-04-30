const
        fi='NPUT.TXT';
        fo='OUTPUT.TXT';
var
        x,res:real;
        m,n,i,j:longint;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(m,n);
        for i:=1 to m do
        begin
                read(res);
                for j:=2 to n do
                begin
                        read(x);
                        if res<x then res:=x;
                end;
                writeln(res:0:2);
                readln;
        end;
end.
    
