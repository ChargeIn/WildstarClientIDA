#include "../winhttp.h"

//----- (00000001404693C0) ----------------------------------------------------
__int64 __fastcall sub_1404693C0(__int64 a1, int a2, int a3)
{
	__int64 v3; // rdi
	__int64 v6; // rbp
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	__int64 v9; // rax
	int v11; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 5616);
	if (!v3)
		return 0i64;
	while (1)
	{
		if (*(_DWORD*)(v3 + 80) == a2)
		{
			v6 = qword_140C65B70;
			v11 = **(_DWORD**)(v3 + 64);
			v7 = (*(__int64(__fastcall**)(int*))(qword_140C65B70 + 1976))(&v11);
			v8 = *(_QWORD**)(*(_QWORD*)(v6 + 1968) + 8 * (v7 % *(_QWORD*)(v6 + 1960)));
			if (v8)
			{
				while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v6 + 1984))(&v11, v8 + 2))
				{
					v8 = (_QWORD*)v8[1];
					if (!v8)
						goto LABEL_11;
				}
				if (v8 != (_QWORD*)-24i64)
				{
					v9 = v8[3];
					if (v9)
					{
						if (a3 == *(_DWORD*)(v9 + 340))
							return v3;
					}
				}
			}
		}
	LABEL_11:
		v3 = *(_QWORD*)(v3 + 48);
		if (!v3)
			return 0i64;
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

