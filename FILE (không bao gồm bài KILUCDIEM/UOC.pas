const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        n,i,j:longint;
        a:array[1..1000000]of longint;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(n);
        j:=0;
        for i:=1 to trunc(sqrt(n)) do
        if n  mod i=0 then
        begin
                inc(j);a[j]:=i;
        end;
        writeln('Cac uoc so cua ',n);
        for i:=1 to j-1 do writeln(a[i]);
        if a[j]*a[j]<>n then writeln(a[j]);
        for i:=j downto 1 do writeln(n div a[i]);
end.
