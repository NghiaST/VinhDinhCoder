const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        n,dem:longint;
        f:array[0..200000]of longint;

function cnp(l,r,x:longint):longint;
var     m:longint;
begin
        while l<r do
        begin
                m:=(l+r) div 2;
                if f[m]<x then l:=m+1 else r:=m;
        end;
        exit(l);
end;

procedure solve;
var     i,j,p:longint;
begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(n);
        f[0]:=-maxlongint;
        for i:=1 to n do
        begin
                read(p);
                if p>f[dem] then
                begin
                        inc(dem);
                        f[dem]:=p;
                end
                else begin
                        j:=cnp(1,dem,p);
                        f[j]:=p;
                end;
        end;
        write(dem);
end;

begin
        solve;
end.
    
