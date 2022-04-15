#include "../winhttp.h"

//----- (000000014069C540) ----------------------------------------------------
__int64 __fastcall sub_14069C540(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rdx
	__int64* v6; // rbp
	_DWORD* v7; // rcx
	_DWORD* v8; // rdi
	__int64 v9; // rdx
	unsigned __int64 v10; // rcx
	unsigned int v11; // esi
	unsigned __int64 v12; // rdi
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // ecx
	BOOL v16; // ecx
	__int64 v17; // rdx
	__int64(__fastcall * *v19)(); // [rsp+20h] [rbp-28h] BYREF
	int v20; // [rsp+28h] [rbp-20h]
	_QWORD* v21; // [rsp+30h] [rbp-18h]
	int v22; // [rsp+38h] [rbp-10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v6 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v6)
			{
				v21 = a1;
				v22 = 1;
				v20 = -2;
				v19 = off_140B569F0;
				v7 = (_DWORD*)(a1[3] + 16i64);
				if ((unsigned __int64)v7 < a1[2])
				{
					v8 = dword_140A12138;
					if (v7 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 5)
					{
						sub_1400579E0((__int64)a1, v5, -2);
						v9 = (__int64)v21;
						v10 = v21[2];
						if (v21[3] + 16i64 < v10)
							v8 = (_DWORD*)(v21[3] + 16i64);
						*(_QWORD*)v10 = *(_QWORD*)v8;
						*(_DWORD*)(v10 + 8) = v8[2];
						*(_QWORD*)(v9 + 16) += 16i64;
						v20 = sub_1400578C0((__int64)v21);
					}
				}
				v11 = 0;
				v12 = 0i64;
				v13 = 1i64;
				do
				{
					if ((int)sub_1400FB720((__int64)&v19, off_140C39558[v12], 1) >= 0)
					{
						v14 = v21[2];
						v15 = *(_DWORD*)(v14 - 8);
						v16 = v15 && (v15 != 1 || *(_DWORD*)(v14 - 16));
						v21[2] = v14 - 32;
						if (v16)
							v11 |= v13;
					}
					v13 = __ROL8__(v13, 1);
					++v12;
				} while (v12 < 4);
				sub_14057FD80(v6, v11);
				v19 = off_140B56A08;
				if (v21)
					sub_1400579E0((__int64)v21, v17, v20);
			}
		}
	}
	return 0i64;
}
// 14069C578: variable 'v3' is possibly undefined
// 14069C5E2: variable 'v5' is possibly undefined
// 14069C6BC: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C39558: using guessed type wchar_t *off_140C39558[4];

