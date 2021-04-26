const
        fi='NPUT.TXT';
        fo='OUTPUT.TXT';
var
        n,x,i,j,t,k:longint;

begin
        {$ifndef ONLINE_JUDGE}
        assign(input,fi);reset(input);
        assign(output,fo);rewrite(output);
        {$endif}
        readln(n);
        for i:=1 to n do
        begin
                read(x);
                if x<2 then continue;
                k:=0;
                for j:=2 to trunc(sqrt(x)) do if x mod j=0 then begin k:=1;break;end;
                if k=0 then begin t:=1;writeln(i,' ',x);end;
        end;
        if t=0 then write('KHONG CO SO NGUYEN TO');
end.
    
