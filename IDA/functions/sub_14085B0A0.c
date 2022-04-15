#include "../winhttp.h"

//----- (000000014085B0A0) ----------------------------------------------------
void __fastcall sub_14085B0A0(_QWORD** a1, __int64 a2, __int64 a3, __int64 a4)
{
	_QWORD** v4; // rdi
	_QWORD* v6; // rbx
	_QWORD** v7; // rsi
	__int64 v8; // rax

	v4 = a1 + 17;
	v6 = a1[17];
	v7 = a1 + 14;
	if (v6 != a1[18])
		goto LABEL_11;
	if (v4 != v7)
	{
		v6 = *v7;
		v4 = a1 + 14;
	}
	if (v6 != v4[1])
	{
	LABEL_11:
		while (1)
		{
			v8 = *(_QWORD*)(*v6 + 56i64);
			if (v8 && *(_WORD*)(v8 + 72))
			{
				LOBYTE(a4) = 1;
				(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64))(*(_QWORD*)*v6 + 192i64))(*v6, a2, a3, a4);
			}
			if (++v6 == v4[1])
			{
				if (v4 != v7)
				{
					v6 = *v7;
					v4 = v7;
				}
				if (v6 == v4[1])
					break;
			}
		}
	}
}
// 14085B103: variable 'a2' is possibly undefined
// 14085B103: variable 'a4' is possibly undefined

