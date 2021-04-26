const
        fi='INPUT.TXT';
        fo='OUTPUT.TXT';
var
        a,b,tmp:int64;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(a,b);
        if a<0 then a:=-a;
        if b<0 then b:=-b;
        if a<b then begin tmp:=a;a:=b;b:=tmp;end;
        if (b=0) then write(a)
        else begin
                while b<>0 do
                begin
                        tmp:=a mod b;
                        a:=b;
                        b:=tmp;
                end;
                write(a);
        end;
end.
    
