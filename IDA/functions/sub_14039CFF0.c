#include "../winhttp.h"

//----- (000000014039CFF0) ----------------------------------------------------
void __fastcall sub_14039CFF0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rsi
	__m128* v5; // rsi
	__int32 v6; // eax
	__int64 v7; // rdi
	unsigned int v8; // ecx
	__int64 v9; // rax
	_DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = qword_140C65898;
	if ((unsigned int)sub_1403AD600(*(_QWORD*)(qword_140C65898 + 120)))
	{
		v4 = qword_140C65898;
		if (sub_140396750(*(_QWORD*)(qword_140C65898 + 32144), a2))
		{
			sub_1400EA3E0(*(_QWORD*)(v2 + 29504), "PendingLootInteract", L"i", a2);
			return;
		}
		v5 = (__m128*)sub_1403D90D0(v4, a2);
		if (sub_1403A6440(v2, v5))
		{
			v6 = v5[8].m128_i32[0];
			v7 = qword_140C65898;
			v8 = a2;
			if (v6 == 18)
			{
				v9 = sub_1403967F0(*(_QWORD*)(qword_140C65898 + 32144), a2);
				if (!v9)
					return;
				v8 = *(_DWORD*)(v9 + 4);
			}
			else if (v6 != 1)
			{
				return;
			}
			v10[0] = v8;
			v10[2] = 0;
			v10[1] = a2;
			sub_1403F4900(v7, 0x14Fu, (__int64)v10);
		}
	}
}
// 1409EF4CC: using guessed type wchar_t aI_38[2];
// 140C65898: using guessed type __int64 qword_140C65898;

