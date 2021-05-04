const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        n:longint;
        a:array[1..10000]of int64;
        i:longint;
        res:int64;

procedure qs(l,r:longint);
var     i,j,x,tmp:longint;
begin
        i:=l;j:=r;
        x:=a[random(r-l+1)+l];
        repeat
                while a[i]<x do inc(i);
                while a[j]>x do dec(j);
                if i<=j then
                begin
                        tmp:=a[i];a[i]:=a[j];a[j]:=tmp;
                        inc(i);dec(j);
                end;
        until i>j;
        if l<j then qs(l,j);
        if i<r then qs(i,r);
end;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(n);
        for i:=1 to n do read(a[i]);
        if n<6 then for i:=1 to n do begin res:=res+a[i];write(res);end
        else begin
                        qs(1,n);
                        res:=a[n]+a[n-1]+a[n-2]+a[n-3]+a[n-4];
                        write(res);
        end;
end.
    
