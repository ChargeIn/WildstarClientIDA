#include "../winhttp.h"

//----- (0000000140470B80) ----------------------------------------------------
void __fastcall sub_140470B80(__int64 a1, int a2, int a3)
{
	int v4; // eax
	int v5; // edi
	int v6; // eax
	bool v7; // zf
	int v8; // [rsp+20h] [rbp-20h] BYREF
	__int64 v9; // [rsp+28h] [rbp-18h]
	void* v10; // [rsp+30h] [rbp-10h]
	__int64 v11; // [rsp+38h] [rbp-8h]

	if (a2)
	{
		sub_140195D70(a1 + 5016);
		if (!*(_QWORD*)(a1 + 3264))
			return;
		v4 = sub_140467ED0(a1);
		*(_DWORD*)(a1 + 5164) &= ~4u;
	}
	else
	{
		if (!a3)
		{
			v9 = a1;
			v8 = 0;
			v10 = sub_140470D80;
			v11 = 0i64;
			sub_140195960(a1 + 5016, 2000, (__int64)&v8, 4);
			return;
		}
		sub_140195D70(a1 + 5016);
		if (!*(_QWORD*)(a1 + 3264))
			return;
		v4 = sub_140467ED0(a1);
		*(_DWORD*)(a1 + 5164) |= 5u;
	}
	v5 = *(_DWORD*)(a1 + 5164);
	if ((v4 & 0xFFFFFFF6) == 0 && v4 != 1)
		v5 = 63;
	v6 = *(_DWORD*)(a1 + 5160);
	if (v6 != v5)
	{
		if (v5 == 63)
		{
			sub_140195D70(a1 + 5168);
			sub_140195D70(a1 + 5240);
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
				*(_QWORD*)(a1 + 3264),
				3i64,
				3i64);
			v7 = *(_QWORD*)(a1 + 5864) == 0i64;
			*(_DWORD*)(a1 + 5312) = 1;
			if (!v7)
			{
				sub_140471EF0(a1, 1, 1);
				sub_140471EF0(a1, 1, 0);
			}
		}
		else if (v6 == 63)
		{
			v8 = 0;
			v9 = a1;
			v10 = sub_140471E50;
			v11 = 0i64;
			sub_140195960(a1 + 5168, 150, (__int64)&v8, 4);
			v10 = sub_140471EA0;
			v8 = 0;
			v9 = a1;
			v11 = 0i64;
			sub_140195960(a1 + 5240, 150, (__int64)&v8, 4);
			*(_DWORD*)(a1 + 5312) = 1;
		}
		if ((v5 & 4) != 0)
			sub_140195D70(a1 + 5016);
		if ((v5 & 0x10) != 0)
			sub_140195D70(a1 + 5088);
		*(_DWORD*)(a1 + 5160) = v5;
	}
}

