#include "../winhttp.h"

//----- (00000001405AE900) ----------------------------------------------------
void __fastcall sub_1405AE900(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
	__int64 v5; // rax
	__int64 v6; // rbp
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	__int64* v9; // rbx
	__int64 v10; // rbx
	int* v11; // rax
	__int64 v12; // rcx
	int v13; // esi
	__int64 v14; // rax
	unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

	v15 = a2;
	v5 = sub_1404C9E20(a1, *(_DWORD*)(a1 + 188), a2);
	v6 = v5;
	if (v5)
	{
		sub_1404C0700(v5, a3);
		v7 = (*(__int64(__fastcall**)(unsigned __int64*))(a1 + 392))(&v15);
		v8 = *(_QWORD**)(*(_QWORD*)(a1 + 384) + 8 * (v7 % *(_QWORD*)(a1 + 376)));
		if (v8)
		{
			while (v7 != *v8 || !(*(unsigned int(__fastcall**)(unsigned __int64*, _QWORD*))(a1 + 400))(&v15, v8 + 2))
			{
				v8 = (_QWORD*)v8[1];
				if (!v8)
					return;
			}
			v9 = v8 + 3;
			if (v9)
			{
				v10 = *v9;
				v11 = (int*)qword_140C659F0;
				v12 = qword_140C65898;
				*(_DWORD*)(v10 + 12) = 1;
				v13 = *v11;
				v14 = sub_1403D90D0(v12, a3);
				if (v14
					&& (*(_DWORD*)(v14 + 44) & 0x200000) != 0
					&& (*(_DWORD*)(v6 + 652) = 1, sub_1404C3B50((__int64*)v6), !*(_DWORD*)(v6 + 656))
					|| v13)
				{
					sub_1405AEA60(a1, v10);
				}
				*(_DWORD*)(v10 + 12) = 0;
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

