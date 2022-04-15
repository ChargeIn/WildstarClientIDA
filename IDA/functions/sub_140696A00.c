#include "../winhttp.h"

//----- (0000000140696A00) ----------------------------------------------------
__int64 __fastcall sub_140696A00(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	_QWORD* v5; // rsi
	__int64 v6; // rdx
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	_DWORD* v11; // rdx
	_DWORD* v12; // rbx
	__int64 v13; // rdx
	unsigned __int64 v14; // rcx
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-58h] BYREF
	int v17; // [rsp+28h] [rbp-50h]
	_QWORD* v18; // [rsp+30h] [rbp-48h]
	int v19; // [rsp+38h] [rbp-40h]
	__int128 v20[3]; // [rsp+40h] [rbp-38h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (_QWORD*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = a1[4];
				v18 = a1;
				v19 = 1;
				v17 = -2;
				v16 = off_140B569F0;
				if (*(_QWORD*)(v6 + 120) >= *(_QWORD*)(v6 + 112))
					sub_14005E2C0((__int64)a1);
				v7 = a1[2];
				v8 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v7 + 8) = 5;
				*(_QWORD*)v7 = v8;
				a1[2] += 16i64;
				v9 = sub_1400578C0((__int64)a1);
				v10 = (__int64)v18;
				v17 = v9;
				v11 = (_DWORD*)(v18[3] + 16i64);
				if ((unsigned __int64)v11 < v18[2])
				{
					v12 = dword_140A12138;
					if (v11 != dword_140A12138 && *(_DWORD*)(v18[3] + 24i64) == 5)
					{
						sub_1400579E0((__int64)v18, (__int64)v11, v9);
						v13 = (__int64)v18;
						v14 = v18[2];
						if (v18[3] + 16i64 < v14)
							v12 = (_DWORD*)(v18[3] + 16i64);
						*(_QWORD*)v14 = *(_QWORD*)v12;
						*(_DWORD*)(v14 + 8) = v12[2];
						*(_QWORD*)(v13 + 16) += 16i64;
						v17 = sub_1400578C0((__int64)v18);
						sub_14069D750((__int64)v20, (__int64*)&v16);
						sub_14057E670(v5, v20);
						v10 = (__int64)v18;
						v9 = v17;
					}
				}
				v16 = off_140B56A08;
				if (v10)
					sub_1400579E0(v10, (__int64)off_140B56A08, v9);
			}
		}
	}
	return 0i64;
}
// 140696A38: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140696A00: using guessed type __int128 var_38[3];

