#include "../winhttp.h"

//----- (00000001403A0E80) ----------------------------------------------------
__int64 __fastcall sub_1403A0E80(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	unsigned int v3; // r9d
	unsigned __int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rdx
	unsigned int v7; // r8d
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64* v11; // rax
	__int64 v12; // rax
	_DWORD* v13; // rcx
	int v14; // eax
	int v15; // eax
	__int64 v17; // [rsp+10h] [rbp+8h] BYREF
	__int64 v18; // [rsp+18h] [rbp+10h] BYREF

	v17 = a1;
	v2 = *(_QWORD*)(a2 + 24);
	v3 = 0;
	v4 = *(_QWORD*)(qword_140C65898 + 5792);
	if (!v4)
		return 0i64;
	v5 = 0i64;
	while (1)
	{
		v6 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 5784) + 8 * v5);
		if (v6 && *(_DWORD*)(v6 + 12))
		{
			v7 = *(_DWORD*)(v6 + 8);
			v8 = *(_QWORD*)(qword_140C65B90 + 16);
			v9 = *(_QWORD*)(v8 + 8);
			v10 = v8;
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < v7)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v10 = v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			if (v10 == v8 || v7 < *(_DWORD*)(v10 + 32))
			{
				v18 = *(_QWORD*)(qword_140C65B90 + 16);
				v11 = &v18;
			}
			else
			{
				v17 = v10;
				v11 = &v17;
			}
			v12 = *v11;
			if (v12 != v8)
			{
				v13 = *(_DWORD**)(v12 + 40);
				if (v13)
				{
					v14 = v13[4];
					if ((v14 & 4) != 0 || (v14 & 8) != 0)
					{
						v15 = *(_DWORD*)(v2 + 68);
						if (v15 == -1 || v15 == *v13)
							break;
					}
				}
			}
		}
		v5 = ++v3;
		if (v3 >= v4)
			return 0i64;
	}
	return 1i64;
}
// 1403A0EBB: conditional instruction was optimized away because rbx.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B90: using guessed type __int64 qword_140C65B90;

