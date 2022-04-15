#include "../winhttp.h"

//----- (00000001405409A0) ----------------------------------------------------
void __fastcall sub_1405409A0(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v5; // rax
	unsigned int v6; // r9d
	__int64 v7; // rax
	int v8; // [rsp+30h] [rbp-28h]

	v2 = *(_DWORD*)a2;
	if (!*(_DWORD*)a2)
	{
		sub_140543630(a1, 0, *(_QWORD*)(a2 + 8), *(_DWORD*)(a1 + 340), 2, 0, *(_DWORD*)(a1 + 340), 0i64, 0.0, 0);
		return;
	}
	switch (v2)
	{
	case 1:
		sub_140543630(a1, 1, *(_QWORD*)(a2 + 8), *(_DWORD*)(a1 + 344), 2, 0, *(_DWORD*)(a1 + 340), 0i64, 0.0, 0);
		return;
	case 3:
		sub_140543630(a1, 3, *(_QWORD*)(a2 + 8), *(_DWORD*)(a1 + 340), 2, 0, *(_DWORD*)(a1 + 340), 0i64, 0.0, 0);
		return;
	case 4:
		sub_1405428D0(a1, *(_QWORD*)(a2 + 8), 2);
		return;
	case 5:
		v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
		if (!v5)
			return;
		v6 = *(_DWORD*)(v5 + 192);
		v8 = *(_DWORD*)(a1 + 340);
		goto LABEL_15;
	case 6:
		v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
		if (v7)
		{
			v6 = sub_14045B6B0(v7);
			v8 = *(_DWORD*)(a1 + 340);
		LABEL_15:
			sub_140543630(a1, *(_DWORD*)a2, *(_QWORD*)(a2 + 8), v6, 2, 0, v8, 0i64, 0.0, 0);
		}
		break;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

