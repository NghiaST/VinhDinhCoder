const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        m,n,i,j:longint;
        a:array[1..1000000]of longint;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(n);
        j:=0;
        for i:=1 to n do begin read(a[i]);if j<a[i] then j:=a[i];end;
        m:=0;
        for i:=1 to n do m:=m+j-a[i];
        write(m);
end.
    
