#include "../winhttp.h"

//----- (0000000140664C70) ----------------------------------------------------
__int64 __fastcall sub_140664C70(_QWORD* a1)
{
	unsigned int v1; // edi
	__int64 v3; // rsi
	_DWORD* v4; // rcx
	int v5; // eax
	__int64 v6; // rbx
	__int64 v7; // rbp

	v1 = 1;
	v3 = sub_140056AB0(a1, 1u);
	if (v3)
	{
		v4 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v4 = (_DWORD*)(a1[3] + 16i64);
		v5 = v4[2];
		if (!v5 || v5 == 1 && !*v4)
		{
			v1 = 0;
			if (dword_140C65C38 == **(_DWORD**)(*(_QWORD*)v3 + 8i64))
			{
				if (sub_14002C740((__int64)&unk_140C7E820, *(_WORD**)(qword_140C65898 + 136)))
				{
					v6 = qword_140C7E830;
					v7 = qword_140C7E828;
					dword_140C65C38 = 0;
					if (qword_140C7E828 != qword_140C7E830)
					{
						sub_1407DB590((int*)qword_140C7E828, (int*)qword_140C7E830, 2ui64);
						qword_140C7E830 -= 2 * ((v6 - v7) >> 1);
					}
				}
			}
		}
		sub_1405FCB80(*(_QWORD*)qword_140C65B80, **(_DWORD**)(*(_QWORD*)v3 + 8i64), v1);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65C38: using guessed type int dword_140C65C38;
// 140C7E828: using guessed type __int64 qword_140C7E828;
// 140C7E830: using guessed type __int64 qword_140C7E830;

