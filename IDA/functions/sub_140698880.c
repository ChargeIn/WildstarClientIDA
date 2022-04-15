#include "../winhttp.h"

//----- (0000000140698880) ----------------------------------------------------
__int64 __fastcall sub_140698880(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rsi
	__int64 v6; // rdx
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	_DWORD* v11; // rdx
	_DWORD* v12; // rbx
	__int64 v13; // rdx
	unsigned __int64 v14; // rcx
	__int64 v15; // rax
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-59h] BYREF
	int v18; // [rsp+28h] [rbp-51h]
	_QWORD* v19; // [rsp+30h] [rbp-49h]
	int v20; // [rsp+38h] [rbp-41h]
	__int128 v21; // [rsp+40h] [rbp-39h]
	__int128 v22[3]; // [rsp+50h] [rbp-29h] BYREF
	__int128 v23; // [rsp+80h] [rbp+7h] BYREF
	__int128 v24; // [rsp+90h] [rbp+17h]
	__int128 v25; // [rsp+A0h] [rbp+27h]
	__int128 v26; // [rsp+B0h] [rbp+37h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = a1[4];
				v19 = a1;
				v20 = 1;
				v18 = -2;
				v17 = off_140B569F0;
				if (*(_QWORD*)(v6 + 120) >= *(_QWORD*)(v6 + 112))
					sub_14005E2C0((__int64)a1);
				v7 = a1[2];
				v8 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v7 + 8) = 5;
				*(_QWORD*)v7 = v8;
				a1[2] += 16i64;
				v9 = sub_1400578C0((__int64)a1);
				v10 = (__int64)v19;
				v18 = v9;
				v11 = (_DWORD*)(v19[3] + 16i64);
				if ((unsigned __int64)v11 < v19[2])
				{
					v12 = dword_140A12138;
					if (v11 != dword_140A12138 && *(_DWORD*)(v19[3] + 24i64) == 5)
					{
						sub_1400579E0((__int64)v19, (__int64)v11, v9);
						v13 = (__int64)v19;
						v14 = v19[2];
						if (v19[3] + 16i64 < v14)
							v12 = (_DWORD*)(v19[3] + 16i64);
						*(_QWORD*)v14 = *(_QWORD*)v12;
						*(_DWORD*)(v14 + 8) = v12[2];
						*(_QWORD*)(v13 + 16) += 16i64;
						v18 = sub_1400578C0((__int64)v19);
						sub_14069D750((__int64)v22, (__int64*)&v17);
						v23 = 0ui64;
						v24 = 0ui64;
						v25 = v22[1];
						v26 = 0ui64;
						v15 = *v5;
						LODWORD(v21) = *(_DWORD*)(qword_140C635F0 + 5760);
						*((_QWORD*)&v21 + 1) = v15;
						v23 = v21;
						v24 = v22[0];
						v26 = v22[2];
						sub_1403F4900(qword_140C65898, 0x4CFu, (__int64)&v23);
						v10 = (__int64)v19;
						v9 = v18;
					}
				}
				v17 = off_140B56A08;
				if (v10)
					sub_1400579E0(v10, (__int64)off_140B56A08, v9);
			}
		}
	}
	return 0i64;
}
// 1406988D3: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

