#include "../winhttp.h"

//----- (000000014001B950) ----------------------------------------------------
void __fastcall sub_14001B950(__int64 a1, int a2, int a3)
{
	char v3; // r10
	int v5; // eax
	_DWORD* v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // r8
	void(__fastcall * v9)(__int64*); // r8
	__int64 v10; // [rsp+48h] [rbp+20h] BYREF

	v3 = a3;
	if (a3 < a2)
	{
		v10 = *(_QWORD*)(a1 + 8i64 * a2 + 32);
		v5 = a3 + 1;
		v6 = (_DWORD*)(a1 + 32 + 8i64 * a3);
		if ((unsigned __int64)(a3 + 1) < 5)
		{
			v7 = a1 + 32 + 8i64 * v5;
			v8 = 5i64 - v5;
			do
			{
				v7 += 8i64;
				*(_DWORD*)(v7 - 8) = *v6;
				*(_DWORD*)(v7 - 4) = v6[1];
				--v8;
			} while (v8);
		}
		v9 = *(void(__fastcall**)(__int64*))(a1 + 112);
		*(_DWORD*)(a1 + 24) &= (2 << v3) - 1;
		if (v9)
		{
			if (v10 != *(_QWORD*)v6)
				v9(&v10);
		}
	}
}

