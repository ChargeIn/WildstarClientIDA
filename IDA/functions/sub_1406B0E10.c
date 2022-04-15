#include "../winhttp.h"

//----- (00000001406B0E10) ----------------------------------------------------
__int64 __fastcall sub_1406B0E10(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // r10d
	__int64 v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // r8
	__int64 v14; // rdx
	int v15; // r10d
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+28h] [rbp-20h]
	_QWORD* v19; // [rsp+30h] [rbp-18h]
	int v20; // [rsp+38h] [rbp-10h]
	__int64 v21; // [rsp+58h] [rbp+10h] BYREF

	v1 = a1;
	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			v5 && (*(int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v5 + 208i64))(v5, &v21) >= 0))
	{
		v6 = v1[4];
		v17 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v19 = v1;
		v20 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0((__int64)v1);
		v8 = v1[2];
		v9 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		v1[2] += 16i64;
		v10 = sub_1400578C0((__int64)v1);
		v18 = v10;
		v11 = v21;
		if (v21)
		{
			do
			{
				if ((unsigned int)sub_1406AE160(v1, *(_DWORD*)(v11 + 496)))
				{
					sub_1400FB470((__int64)&v17);
					v1 = v19;
					v19[2] -= 16i64;
				}
				v11 = *(_QWORD*)(v21 + 40);
				v21 = v11;
			} while (v11);
			v10 = v18;
		}
		v12 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v10);
		v13 = v1[2];
		*(_QWORD*)v13 = *v12;
		v14 = *((unsigned int*)v12 + 2);
		*(_DWORD*)(v13 + 8) = v14;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v14, v15);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
		return 1i64;
	}
}
// 1406B0E4A: variable 'v3' is possibly undefined
// 1406B0F5D: variable 'v15' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C659F0: using guessed type __int64 qword_140C659F0;

