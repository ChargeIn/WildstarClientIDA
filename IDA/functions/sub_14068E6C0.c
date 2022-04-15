#include "../winhttp.h"

//----- (000000014068E6C0) ----------------------------------------------------
__int64 __fastcall sub_14068E6C0(__int64 a1)
{
	_QWORD* v1; // rsi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // edi
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	_QWORD* v10; // r14
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rax
	int v18; // eax
	int v19; // r8d
	unsigned int v20; // edx
	__int64 v21; // rcx
	__int64 v22; // rdx
	__int64 v23; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v26; // rax
	__int64 v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // r8
	__int64(__fastcall * *v31)(); // [rsp+20h] [rbp-48h] BYREF
	int v32; // [rsp+28h] [rbp-40h]
	_QWORD* v33; // [rsp+30h] [rbp-38h]
	int v34; // [rsp+38h] [rbp-30h]
	__int64(__fastcall * *v35)(); // [rsp+40h] [rbp-28h] BYREF
	int v36; // [rsp+48h] [rbp-20h]
	_QWORD* v37; // [rsp+50h] [rbp-18h]
	int v38; // [rsp+58h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v33 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v34 = 1;
	v31 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v1[2] += 16i64;
	v6 = sub_1400578C0((__int64)v1);
	v32 = v6;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v7 = sub_140056AB0(v1, 1u)) != 0
		&& (v8 = *(_QWORD*)(v7 + 8)) != 0
		&& (v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v8 + 8) + 8i64),
			0i64),
			(v10 = (_QWORD*)v9) != 0i64)
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 40i64))(v9)
		&& (*(unsigned int(__fastcall**)(_QWORD*))(*v10 + 104i64))(v10)
		&& (v11 = (*(__int64(__fastcall**)(_QWORD*))(*v10 + 40i64))(v10),
			(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 104i64))(v11))
		&& (*(unsigned int(__fastcall**)(_QWORD*))(*v10 + 336i64))(v10) == 28)
	{
		v12 = v10[29];
		v13 = *(_QWORD*)(v12 + 16);
		if (v13 != v12)
		{
			do
			{
				v14 = v1[4];
				v35 = off_140B569F0;
				v37 = v1;
				v15 = *(_QWORD*)(v14 + 112);
				v38 = 1;
				if (*(_QWORD*)(v14 + 120) >= v15)
					sub_14005E2C0((__int64)v1);
				v16 = v1[2];
				v17 = sub_14005C1B0((__int64)v1, 0, 0);
				*(_DWORD*)(v16 + 8) = 5;
				*(_QWORD*)v16 = v17;
				v1[2] += 16i64;
				v18 = sub_1400578C0((__int64)v1);
				v19 = *(_DWORD*)(v13 + 36);
				v20 = *(_DWORD*)(v13 + 32);
				LODWORD(v16) = v18;
				v36 = v18;
				sub_140416130(v21, v20, v19, (__int64)&v35);
				sub_1400FB1D0((__int64)&v31);
				sub_1400579E0((__int64)v1, v22, v16);
				v23 = *(_QWORD*)(v13 + 24);
				if (v23)
				{
					v13 = *(_QWORD*)(v13 + 24);
					for (i = *(_QWORD*)(v23 + 16); i; i = *(_QWORD*)(i + 16))
						v13 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v13 + 8); v13 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v13 = j;
					if (*(_QWORD*)(v13 + 24) != j)
						v13 = j;
				}
			} while (v13 != v10[29]);
			v1 = v33;
			v6 = v32;
		}
		v26 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v6);
		v27 = v1[2];
		*(_QWORD*)v27 = *v26;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	}
	else
	{
		v28 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v6);
		v29 = v1[2];
		*(_QWORD*)v29 = *v28;
		v27 = *((unsigned int*)v28 + 2);
		*(_DWORD*)(v29 + 8) = v27;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v27, v6);
	return 1i64;
}
// 14068E872: variable 'v21' is possibly undefined
// 14068E889: variable 'v22' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

