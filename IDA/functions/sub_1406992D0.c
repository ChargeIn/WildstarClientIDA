#include "../winhttp.h"

//----- (00000001406992D0) ----------------------------------------------------
__int64 __fastcall sub_1406992D0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rdi
	_DWORD* v6; // rcx
	__int64*** v7; // rax
	__int64** v8; // rax
	__int64* v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v13; // [rsp+48h] [rbp+10h] BYREF
	char v14; // [rsp+50h] [rbp+18h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = (_DWORD*)(a1[3] + 16i64);
				if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
				{
					v7 = (__int64***)sub_140056AB0(a1, 2u);
					if (v7)
					{
						v8 = *v7;
						if (v8)
						{
							v9 = *v8;
							if (*v8)
							{
								v10 = *v9;
								v13 = 1i64;
								v11 = (*(__int64(__fastcall**)(__int64*, char*))(v10 + 32))(v9, &v14);
								sub_14057F0B0(v5, v11, 0, &v13, 1);
							}
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140699308: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

