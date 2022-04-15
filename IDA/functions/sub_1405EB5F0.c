#include "../winhttp.h"

//----- (00000001405EB5F0) ----------------------------------------------------
__int64 __fastcall sub_1405EB5F0(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // r9
	unsigned __int64 v7; // r8
	__int64 v8; // rdx
	_DWORD* v9; // rcx
	int v10; // r10d
	int v11; // eax
	int v12; // r9d
	unsigned __int64 v13; // r8
	__int64* i; // rcx
	__int64 v15; // rax

	v1 = (_DWORD*)a1[3];
	v3 = dword_140A12138;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v4 = sub_140056AB0(a1, 1u);
		if (v4)
		{
			v5 = *(_QWORD*)(v4 + 8);
			if (v5)
			{
				v6 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v5 + 8), *(_QWORD*)(qword_140C65898 + 120));
				if (v6)
				{
					v7 = a1[2];
					v8 = 0i64;
					v9 = (_DWORD*)(a1[3] + 16i64);
					v10 = 0;
					if ((unsigned __int64)v9 < v7 && v9 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 1)
					{
						if ((unsigned __int64)v9 < v7)
							v3 = (_DWORD*)(a1[3] + 16i64);
						v11 = v3[2];
						if (v11 && (v11 != 1 || *v3))
							v10 = 1;
					}
					v12 = *(_DWORD*)(*(_QWORD*)(v6 + 112) + 4i64);
					if (v12)
					{
						v13 = *(_QWORD*)(qword_140C65898 + 2712);
						if (v13)
						{
							for (i = *(__int64**)(qword_140C65898 + 2704); ; ++i)
							{
								v15 = *i;
								if (*i)
								{
									if (*(_DWORD*)(v15 + 64) == v12)
										break;
								}
								if (++v8 >= v13)
									return 0i64;
							}
							*(_DWORD*)(v15 + 72) = v10;
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

