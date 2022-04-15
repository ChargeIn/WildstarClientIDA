#include "../winhttp.h"

//----- (0000000140696F30) ----------------------------------------------------
__int64 __fastcall sub_140696F30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // r12
	int v6; // r14d
	__int64 v7; // rdx
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	_DWORD* v11; // rdx
	_DWORD* v12; // rbx
	__int64 v13; // rdx
	unsigned __int64 v14; // rcx
	__int64 v15; // r15
	unsigned __int64 v16; // rbp
	unsigned int v17; // esi
	unsigned __int64 v18; // rdi
	__int64 v19; // rbx
	__int64 v20; // rax
	int v21; // ecx
	BOOL v22; // ecx
	__int64 v23; // rdx
	__int64(__fastcall * *v25)(); // [rsp+20h] [rbp-48h] BYREF
	int v26; // [rsp+28h] [rbp-40h]
	_QWORD* v27; // [rsp+30h] [rbp-38h]
	int v28; // [rsp+38h] [rbp-30h]
	unsigned int v29; // [rsp+78h] [rbp+10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = sub_140056D60(a1, 2u);
				if (v6 > 0)
					--v6;
				v7 = a1[4];
				v27 = a1;
				v28 = 1;
				v26 = -2;
				v25 = off_140B569F0;
				if (*(_QWORD*)(v7 + 120) >= *(_QWORD*)(v7 + 112))
					sub_14005E2C0((__int64)a1);
				v8 = a1[2];
				v9 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v8 + 8) = 5;
				*(_QWORD*)v8 = v9;
				a1[2] += 16i64;
				v10 = sub_1400578C0((__int64)a1);
				v26 = v10;
				v11 = (_DWORD*)(v27[3] + 32i64);
				if ((unsigned __int64)v11 < v27[2])
				{
					v12 = dword_140A12138;
					if (v11 != dword_140A12138 && *(_DWORD*)(v27[3] + 40i64) == 5)
					{
						sub_1400579E0((__int64)v27, (__int64)v11, v10);
						v13 = (__int64)v27;
						v14 = v27[2];
						if (v27[3] + 32i64 < v14)
							v12 = (_DWORD*)(v27[3] + 32i64);
						*(_QWORD*)v14 = *(_QWORD*)v12;
						*(_DWORD*)(v14 + 8) = v12[2];
						*(_QWORD*)(v13 + 16) += 16i64;
						v26 = sub_1400578C0((__int64)v27);
					}
				}
				v15 = qword_140C7E9C0;
				v16 = qword_140C7E9C8;
				if (qword_140C7E9C0)
				{
					v17 = 0;
					v18 = 0i64;
					v19 = 1i64;
					if (qword_140C7E9C8)
					{
						do
						{
							if ((int)sub_1400FB720((__int64)&v25, *(unsigned __int16**)(v15 + 8 * v18), 1) >= 0)
							{
								v20 = v27[2];
								v21 = *(_DWORD*)(v20 - 8);
								v22 = v21 && (v21 != 1 || *(_DWORD*)(v20 - 16));
								v27[2] = v20 - 32;
								if (v22)
									v17 |= v19;
							}
							v19 = __ROL8__(v19, 1);
							++v18;
						} while (v18 < v16);
					}
				}
				else
				{
					v17 = v29;
				}
				sub_14057EB50(v5, v6, v17);
				v25 = off_140B56A08;
				if (v27)
					sub_1400579E0((__int64)v27, v23, v26);
			}
		}
	}
	return 0i64;
}
// 140696F66: variable 'v3' is possibly undefined
// 140697132: variable 'v23' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C7E9C0: using guessed type __int64 qword_140C7E9C0;
// 140C7E9C8: using guessed type __int64 qword_140C7E9C8;

