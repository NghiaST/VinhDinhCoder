const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        t,m,n:longint;
        cot,dong:array[1..1001,1..1001]of byte;

procedure solve;
var     i,j,res:longint;
begin
        res:=0;
        for i:=m downto 1 do
                for j:=n downto 1 do
                begin
                        if cot[i+1,j]=1 then cot[i,j]:=1;
                        if dong[i,j+1]=1 then dong[i,j]:=1;
                        if (cot[i,j]=0)and(dong[i,j]=0) then inc(res);
                end;
        writeln(res);
end;

procedure enter;
var     i,j,k:longint;
        q:char;
begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(t);
        for i:=1 to t do
        begin
                fillchar(cot,sizeof(cot),0);
                fillchar(dong,sizeof(dong),0);
                readln(m,n);
                for j:=1 to m do
                begin
                        for k:=1 to n do begin read(q);if q='C' then begin cot[j,k]:=1;dong[j,k]:=1;end;end;
                        readln;
                end;
                solve;
        end;
end;

begin
        enter;
end.
    
