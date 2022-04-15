#include "../winhttp.h"

//----- (000000014085B7D0) ----------------------------------------------------
void __fastcall sub_14085B7D0(_QWORD* a1, __int64 a2)
{
	_QWORD* v2; // rdi
	_QWORD* v4; // rsi
	__int64 v5; // rbx
	_QWORD* v6; // rcx
	__int64 v7; // rax

	v2 = a1 + 17;
	v4 = a1 + 14;
	v5 = a1[17];
	if (v5 != a1[18])
		goto LABEL_12;
	if (v2 != v4)
	{
		v5 = *v4;
		v2 = a1 + 14;
	}
	if (v5 != v2[1])
	{
	LABEL_12:
		while (1)
		{
			v6 = *(_QWORD**)v5;
			if ((*(_BYTE*)(*(_QWORD*)v5 + 90i64) & 0x40) == 0)
			{
				v7 = v6[7];
				if (v7)
				{
					if (*(_WORD*)(v7 + 72))
						(*(void(__fastcall**)(_QWORD*, __int64))(*v6 + 168i64))(v6, a2);
				}
			}
			v5 += 8i64;
			if (v5 == v2[1])
			{
				if (v2 != v4)
				{
					v5 = *v4;
					v2 = v4;
				}
				if (v5 == v2[1])
					break;
			}
		}
	}
}

