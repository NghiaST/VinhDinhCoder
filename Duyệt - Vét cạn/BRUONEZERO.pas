const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        n:int64;
        a:array[0..65]of longint;
        dem,res,kt:longint;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(n);
        while n>0 do
        begin
                inc(dem);
                a[dem]:=n mod 2;
                kt:=kt+a[dem];
                n:=n div 2;
        end;
        res:=((dem-1)*(dem-2)) div 2;
        if kt=dem-1 then inc(res);
        dec(dem);
        while (dem>0)and(a[dem]=1) do
        begin
                inc(res);
                dec(dem);
        end;
        write(res);
end.
    
