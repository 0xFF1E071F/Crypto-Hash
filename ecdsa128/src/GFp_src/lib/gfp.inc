BIGINT		STRUCT
	dd	4 dup (?)
BIGINT		ENDS

VBIGINT	STRUCT
	dd	8 dup (?)
VBIGINT	ENDS

addmod		PROTO	:DWORD, :DWORD, :DWORD
adduintmod	PROTO	:DWORD, :DWORD, :DWORD
compare		PROTO	:DWORD, :DWORD
comparezero	PROTO	:DWORD
compareone	PROTO	:DWORD
converth2bmod	PROTO	:DWORD, :DWORD
copy		PROTO	:DWORD, :DWORD
div2		PROTO	:DWORD
div2mod		PROTO	:DWORD
fixmod		PROTO	:DWORD
invmod		PROTO	:DWORD
modulo		PROTO	:DWORD, :DWORD
mulmod		PROTO	:DWORD, :DWORD, :DWORD
multiply	PROTO	:DWORD, :DWORD, :DWORD
setmod		PROTO	:DWORD
submod		PROTO	:DWORD, :DWORD, :DWORD
zero		PROTO	:DWORD