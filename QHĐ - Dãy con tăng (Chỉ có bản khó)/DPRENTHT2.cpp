uses math;
const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        n:longint;
        s,t,f,gt:array[0..100000]of longint;

procedure nhap;
var     i,j,k:longint;
begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(n);
        for i:=1 to n do readln(s[i],t[i]);
end;

procedure qs(l,r:longint);
var     i,j,x,y,z,tmp:longint;
begin
        i:=l;j:=r;
        z:=random(r-l+1)+l;
        x:=s[z];
        y:=t[z];
        repeat
                while (t[i]<y)or((t[i]=y)and(s[i]>x)) do inc(i);
                while (t[j]>y)or((t[j]=y)and(s[j]<x)) do dec(j);
                if i<=j then
                begin
                        tmp:=s[i];s[i]:=s[j];s[j]:=tmp;
                        tmp:=t[i];t[i]:=t[j];t[j]:=tmp;
                        inc(i);dec(j);
                end;
        until i>j;
        if l<j then qs(l,j);
        if i<r then qs(i,r);
end;

function cnp(l,r,t:longint):longint;
var     i,j,m:longint;
begin
        while l<r do
        begin
                m:=(l+r)div 2;
                if f[m]=t then exit(m-1);
                if f[m] < t then l:=m+1 else r:=m;
        end;
        exit(l-1);
end;

procedure xuli;
var     i,j,k,dem:longint;
begin
        dem:=0;
        qs(1,n);
        for i:=1 to n do
        begin
                if t[i]=f[dem] then continue;
                if s[i]>t[i] then continue;
                inc(dem);
                f[dem]:=t[i];
                j:=cnp(1,dem,s[i]);
                gt[dem]:=max(gt[dem-1],gt[j]+1);
        end;
        write(gt[dem]);
end;

begin
        nhap;
        xuli;
end.
    
