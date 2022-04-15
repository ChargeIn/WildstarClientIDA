#include "../winhttp.h"

//----- (00000001405DF020) ----------------------------------------------------
void __fastcall sub_1405DF020(__int64 a1, int a2)
{
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF
	int v9; // [rsp+38h] [rbp+10h] BYREF

	v9 = a2;
	v3 = (*(__int64(__fastcall**)(int*))(a1 + 544))(&v9);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 536) + 8 * (v3 % *(_QWORD*)(a1 + 528)));
	if (v4)
	{
		while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 552))(&v9, v4 + 2))
		{
			v4 = (_QWORD*)v4[1];
			if (!v4)
				return;
		}
		v5 = v4 + 3;
		if (v5)
		{
			v6 = *v5;
			v7 = *(_DWORD*)(*v5 + 48i64);
			if ((v7 & 1) == 0)
			{
				*(_DWORD*)(v6 + 48) = v7 | 1;
				v8 = 0i64;
				v8 = *(_QWORD*)(v6 + 8);
				sub_1400161D0(qword_140C635F0, 0x3A2u, (__int64)&v8);
			}
		}
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

