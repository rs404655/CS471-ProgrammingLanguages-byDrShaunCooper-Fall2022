-- Name: Pratyay Kumar
-- Date: 09/29/2022
-- Lab: 2
-- Purpose: To test if the language implementation has short circuit evaluation in AND boolean construct.
-- Program Description: This problem calls function f, whith && operator and checks if short circuit happens or not.
with Text_IO;
use Text_IO;

procedure p2ada is
        --Declared the variable 
        i : Integer;

        -- Function: f
        -- Description: function f is used to check short-circuit.
        -- Param: NIL
        function f return Boolean is
        begin
                Put_line ("I have been evaluated");
                return true;
        end f;
begin
        i := 1;

        --Here, short circuit happens if i = 0.
        --if i = 0 and then f then
        if i = 0 and f then
                Put_line ("True");
        else
                Put_line ("False");
        end if;
end p2ada;