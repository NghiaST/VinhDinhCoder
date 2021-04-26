const
        fi='NPUT.TXT';
        fo='OUTPUT.TXT';
var
        x,y,t:int64;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(x,y);
        while x<=y do begin x:=x*2;inc(t);end;
        write(t-1);
        //if y-x div 2<=x-y then write(t-1) else write(t);
end.
    
