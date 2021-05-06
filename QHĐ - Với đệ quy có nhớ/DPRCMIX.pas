uses math;
const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        n:longint;
        a:array[1..1000]of longint;
        gt,f,res:array[0..101,0..101]of longint;


function solve(l,r:longint):longint;
var     i,k:longint;
begin
        if l=r then exit(0);
        if l+1=r then exit(a[l]*a[r]);
        k:=maxlongint;
        for i:=0 to r-l-1 do
        begin
                if res[l,l+i]=maxlongint then res[l,l+i]:=solve(l,l+i);
                if res[l+i+1,r]=maxlongint then res[l+i+1,r]:=solve(l+i+1,r);
                k:=min(res[l,l+i] + res[l+i+1,r]+gt[l,l+i]*gt[l+i+1,r],k);
        end;
        solve:=k;
end;

        {for i:=1 to n do gt[i,i]:=a[i];
        for i:=1 to n-1 do
        for j:=i+1 to n do gt[i,j]:=(gt[i,j-1]+a[j])mod 100;
        for i:=1 to n-1 do
        for j:=1 to n-i do f[j,j+i]:=min(f[j,j+i-1]+gt[j,j+i-1]*a[j+i],f[j+1,j+i]+gt[j+1,j+i]*a[j]);
        writeln(f[1,n]); }

procedure enter;
var     i,j:longint;
begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        while not eof(input) do
        begin
                fillchar(a,sizeof(a),0);
                fillchar(gt,sizeof(gt),0);
                for i:=1 to 100 do for j:=i to 100 do res[i,j]:=maxlongint;
                readln(n);
                for i:=1 to n do read(a[i]);
                readln;
                for i:=1 to n do gt[i,i]:=a[i];
                for i:=1 to n-1 do
                         for j:=i+1 to n do gt[i,j]:=(gt[i,j-1]+a[j])mod 100;
                if n<>0 then writeln(solve(1,n));
        end;
end;

begin
        enter;
end.
    
