uses math;
const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        t,n:longint;
        a,f:array[0..1000000]of longint;

procedure xuli;
var     i,j,k,s:longint;
begin
        s:=0;
        for i:=1 to n do s:=s+a[i];
        if s mod 2=1 then begin writeln('NO');exit;end else s:=s div 2;
        for i:=1 to n do
        for j:=s downto a[i] do f[j]:=max(f[j],f[j-a[i]]+a[i]);
        if f[s]=s then writeln('YES') else writeln('NO');
end;

procedure nhap;
var     i,j:longint;
begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(t);
        for i:=1 to t do
        begin
                fillchar(f,sizeof(f),0);
                readln(n);
                for j:=1 to n do read(a[j]);
                readln;
                xuli;
        end;
end;

begin
        nhap;
end.
    
