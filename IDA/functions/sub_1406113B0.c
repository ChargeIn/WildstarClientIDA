#include "../winhttp.h"

//----- (00000001406113B0) ----------------------------------------------------
__int64 __fastcall sub_1406113B0(__int64* a1, unsigned int a2)
{
	__int64 v3; // rcx
	__int64 v4; // rbx
	unsigned int v6; // eax
	bool v7; // zf
	__int64 v8; // rax
	unsigned int v9; // eax
	unsigned int v10; // r11d
	__int64 v11; // rcx
	__int64 v12; // rax
	unsigned __int64 v13; // rax
	__int64 v14; // rdx
	int v15; // eax
	int v16; // r11d

	v3 = *a1;
	v4 = a2;
	if (!v3)
		return 0i64;
	v6 = *(_DWORD*)(v3 + 16);
	if (a2 == v6 || a2 > v6)
		return 0i64;
	v7 = !sub_1405517A0(v3, a2);
	v8 = *(_QWORD*)a1[v4 + 2];
	if (v7)
		v9 = (*(__int64 (**)(void))(v8 + 64))();
	else
		v9 = (*(__int64 (**)(void))(v8 + 72))();
	v10 = v9;
	if (v9 > 1)
	{
		v11 = *a1;
		if ((unsigned int)v4 < *(_DWORD*)(*a1 + 16))
		{
			v12 = *(_QWORD*)(v11 + 8 * v4 + 24);
			if (v12)
			{
				v13 = *(unsigned int*)(v12 + 4);
				if ((unsigned int)v13 <= 0x2E)
				{
					v14 = 0x400000018104i64;
					if (_bittest64(&v14, v13))
					{
						if ((unsigned int)v4 >= *(_DWORD*)(v11 + 16)
							|| (*(_DWORD*)(*(_QWORD*)(v11 + 8 * v4 + 24) + 8i64) & 0x200) == 0)
						{
							v15 = sub_140551840(v11, v4);
							return (unsigned int)(int)(float)((float)v15 * (float)((float)v16 * 0.001));
						}
					}
				}
			}
		}
	}
	return v10;
}
// 140611462: variable 'v16' is possibly undefined

