const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        n,m,i:int64;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(n);
        i:=n;
        while i>0 do begin m:=m+i mod 10;i:=i div 10;end;
        if n mod m =0 then write(1) else write(0);
end.
    
