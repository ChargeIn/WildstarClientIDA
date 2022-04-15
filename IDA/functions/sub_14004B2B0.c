#include "../winhttp.h"

//----- (000000014004B2B0) ----------------------------------------------------
__int64 __fastcall sub_14004B2B0(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rdi
	int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rdx

	v1 = (_DWORD*)a1[3];
	v3 = dword_140A12138;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v4 = 1;
		v5 = sub_140056AB0(a1, 1u);
		if (v5)
		{
			v6 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
			if (v6)
			{
				v7 = *(_QWORD*)(v6 + 16);
				if (v7)
				{
					if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
						v3 = (_DWORD*)(a1[3] + 16i64);
					v8 = v3[2];
					if (!v8 || v8 == 1 && !*v3)
						v4 = 0;
					v9 = 3i64;
					if (v4)
						v9 = 0i64;
					(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 168i64))(v7, v9, 3i64);
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

