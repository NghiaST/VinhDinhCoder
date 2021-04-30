const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        n,t:longint;
        a,b,f:array[1..1000000]of longint;
        kt:array[1..1000000]of boolean;

procedure solve;
var     i,j,k,res,dem:longint;
begin
    {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
    {$endif}
        readln(n);
        k:=trunc(sqrt(n));
        for i:=2 to k do
        if kt[i]=false then
                for j:=2 to k div i do kt[j*i]:=true;
        dem:=0;
        for i:=2 to k do if kt[i]=false then
        begin
                inc(dem);
                a[dem]:=i;
                f[i]:=dem;
        end
        else f[i]:=dem;
        t:=dem;
end;

procedure xuat;
var     i,k,res,dem:longint;
begin
        dem:=t;
        k:=trunc(sqrt(n));
        res:=0;
        for i:=1 to dem do if k div a[i]>a[i] then res:=res+f[k div a[i]]-f[a[i]];
        res:=res+f[trunc(sqrt(sqrt(k)))];
        write(res);
end;

begin
        solve;
        xuat;
end.
    
