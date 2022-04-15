#include "../winhttp.h"

//----- (000000014052FA80) ----------------------------------------------------
__int64 __fastcall sub_14052FA80(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64 result; // rax
	__int64 v3; // r14
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	_QWORD* v9; // rcx
	int v10; // r10d
	_QWORD* v11; // rbx
	__int64 v12; // rbp
	__int64 v13; // rcx
	__int64* v14; // rdi
	__int64 v15; // rsi
	unsigned int v16; // eax
	__int64 v17; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v20; // rax
	__int64 v21; // r8
	__int64 v22; // rdx
	int v23; // r10d
	__int64(__fastcall * *v24)(); // [rsp+20h] [rbp-28h] BYREF
	int v25; // [rsp+28h] [rbp-20h]
	__int64 v26; // [rsp+30h] [rbp-18h]
	int v27; // [rsp+38h] [rbp-10h]

	v1 = (__int64)a1;
	result = sub_14052E9B0(a1);
	v3 = result;
	if (result)
	{
		v4 = *(_QWORD*)(v1 + 32);
		v24 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v26 = v1;
		v27 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0(v1);
		v6 = *(_QWORD*)(v1 + 16);
		v7 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		*(_QWORD*)(v1 + 16) += 16i64;
		v8 = sub_1400578C0(v1);
		v9 = *(_QWORD**)(v3 + 1168);
		v10 = v8;
		v25 = v8;
		v11 = (_QWORD*)v9[2];
		if (v11 != v9)
		{
			do
			{
				v12 = v11[5];
				v13 = *(_QWORD*)(v12 + 8);
				if (v13)
				{
					if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 48i64))(v13) & 4) != 0)
					{
						if (((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v12 + 8) + 48i64))(*(_QWORD*)(v12 + 8)) & 1) == 0
							|| (v14 = *(__int64**)(v12 + 8),
								v15 = *v14,
								v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72),
								(*(unsigned int(__fastcall**)(__int64*, _QWORD))(v15 + 64))(v14, v16)))
						{
							(***(void(__fastcall****)(_QWORD))(v12 + 8))(*(_QWORD*)(v12 + 8));
							sub_1400FA9E0((__int64)&v24);
						}
					}
				}
				v17 = v11[3];
				if (v17)
				{
					v11 = (_QWORD*)v11[3];
					for (i = *(_QWORD**)(v17 + 16); i; i = (_QWORD*)i[2])
						v11 = i;
				}
				else
				{
					for (j = v11[1]; v11 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v11 = (_QWORD*)j;
					if (v11[3] != j)
						v11 = (_QWORD*)j;
				}
			} while (v11 != *(_QWORD**)(v3 + 1168));
			v1 = v26;
			v10 = v25;
		}
		v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v10);
		v21 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v21 = *v20;
		v22 = *((unsigned int*)v20 + 2);
		*(_DWORD*)(v21 + 8) = v22;
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v22, v23);
		return 1i64;
	}
	return result;
}
// 14052FC25: variable 'v23' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

