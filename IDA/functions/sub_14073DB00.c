//----- (000000014073DB00) ----------------------------------------------------
__int64 __fastcall sub_14073DB00(_QWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD* v2; // rdi
	unsigned int v3; // edx
	__int64 v4; // rsi
	__int64 v6; // r8
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	_QWORD* v12; // rbx
	int v13; // r10d
	_QWORD* v14; // rax
	__int64 v15; // r8
	__int64 v16; // rdx
	int v17; // r10d
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-28h] BYREF
	int v19; // [rsp+28h] [rbp-20h]
	_QWORD* v20; // [rsp+30h] [rbp-18h]
	int v21; // [rsp+38h] [rbp-10h]

	v1 = (_DWORD*)a1[3];
	v2 = a1;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = 0;
	else
		v3 = sub_140056D60(a1, 1u);
	v4 = qword_140C659E0;
	if (!qword_140C659E0)
		return 0i64;
	if (v3)
	{
		v6 = *(_QWORD*)(qword_140C659E0 + 8);
		if (v3 > (unsigned __int64)((*(_QWORD*)(qword_140C659E0 + 16) - v6) >> 3))
			return 0i64;
		sub_14073C950(v2, (_QWORD*)(v6 + 8i64 * (v3 - 1)));
		return 1i64;
	}
	else
	{
		v7 = v2[4];
		v18 = off_140B569F0;
		v8 = *(_QWORD*)(v7 + 112);
		v20 = v2;
		v21 = 1;
		if (*(_QWORD*)(v7 + 120) >= v8)
			sub_14005E2C0((__int64)v2);
		v9 = v2[2];
		v10 = sub_14005C1B0((__int64)v2, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		v2[2] += 16i64;
		v11 = sub_1400578C0((__int64)v2);
		v12 = *(_QWORD**)(v4 + 8);
		v13 = v11;
		v19 = v11;
		if (v12 != *(_QWORD**)(v4 + 16))
		{
			do
			{
				if ((unsigned int)sub_14073C950(v2, v12))
				{
					sub_1400FB470((__int64)&v18);
					v2 = v20;
					v20[2] -= 16i64;
				}
				++v12;
			} while (v12 != *(_QWORD**)(v4 + 16));
			v13 = v19;
		}
		v14 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v13);
		v15 = v2[2];
		*(_QWORD*)v15 = *v14;
		v16 = *((unsigned int*)v14 + 2);
		*(_DWORD*)(v15 + 8) = v16;
		v2[2] += 16i64;
		sub_1400579E0((__int64)v2, v16, v17);
		return 1i64;
	}
}
// 14073DC61: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C659E0: using guessed type __int64 qword_140C659E0;

