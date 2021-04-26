const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        n,i,j,k:longint;
        a:array[1..1000000]of longint;
        f:array[1..1000]of longint;
begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(n);
        for j:=1 to n do begin read(i);inc(a[i]);end;
        k:=0;
        for i:=1 to 1000000 do for j:=1 to a[i] do
        begin
                inc(k);
                f[k]:=i;
        end;
        write(f[k div 2+k mod 2]);
end.
    
