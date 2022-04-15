#include "../winhttp.h"

//----- (0000000140502A20) ----------------------------------------------------
__int64 __fastcall sub_140502A20(_QWORD* a1)
{
	__int64 v1; // rsi
	unsigned int v2; // edi
	unsigned int* v3; // rbx
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // r14
	__int64 v10; // rbp
	int v11; // r10d
	unsigned __int64 v12; // rbx
	__int64* v13; // rax
	__int64 v14; // r8
	__int64 v15; // rdx
	int v16; // r10d
	int v17; // edi
	__int64* v18; // rbx
	__int64 v19; // rcx
	__int64* v20; // rbx
	__int64 v21; // rcx
	__int64(__fastcall * *v23)(); // [rsp+30h] [rbp-1F8h] BYREF
	int v24; // [rsp+38h] [rbp-1F0h]
	__int64 v25; // [rsp+40h] [rbp-1E8h]
	int v26; // [rsp+48h] [rbp-1E0h]
	char v27[8]; // [rsp+50h] [rbp-1D8h] BYREF
	__int64 v28; // [rsp+58h] [rbp-1D0h]
	__int64 v29; // [rsp+60h] [rbp-1C8h]
	__int64 v30; // [rsp+68h] [rbp-1C0h]
	__int64 v31[50]; // [rsp+70h] [rbp-1B8h] BYREF
	char v32; // [rsp+208h] [rbp-20h] BYREF

	v1 = (__int64)a1;
	v2 = 0;
	v3 = (unsigned int*)sub_140056AB0(a1, 1u);
	if (v3)
	{
		v28 = 0i64;
		v29 = 0i64;
		v30 = 0i64;
		sub_140503450((__int64)v31);
		sub_140503600((__int64)v31, v3[2], v3[3], v3[4], v3[5]);
		sub_140505590((__int64)v31, (__int64)v27, (int)*v3);
		v4 = *(_QWORD*)(v1 + 32);
		v23 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v25 = v1;
		v26 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0(v1);
		v6 = *(_QWORD*)(v1 + 16);
		v7 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		*(_QWORD*)(v1 + 16) += 16i64;
		v8 = sub_1400578C0(v1);
		v9 = v29;
		v10 = v28;
		v11 = v8;
		v24 = v8;
		v12 = (v29 - v28) / 88;
		if (v12)
		{
			do
			{
				sub_1400FA9E0((__int64)&v23);
				++v2;
			} while (v2 < v12);
			v1 = v25;
			v11 = v24;
		}
		v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v11);
		v14 = *(_QWORD*)(v1 + 16);
		v15 = *v13;
		*(_QWORD*)v14 = *v13;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v15, v16);
		v17 = 3;
		v31[0] = (__int64)off_140B6A420;
		v18 = (__int64*)&v32;
		do
		{
			v19 = *(v18 - 6);
			v18 -= 11;
			if (v19)
				sub_14018B900(v19, 0);
			if (*v18)
				sub_14018B900(*v18, 0);
			--v17;
		} while (v17 >= 0);
		if (v10 != v9)
		{
			v20 = (__int64*)(v10 + 24);
			do
			{
				v21 = v20[5];
				if (v21)
					sub_14018B900(v21, 0);
				if (*v20)
					sub_14018B900(*v20, 0);
				v20 += 11;
			} while (v20 - 3 != (__int64*)v9);
		}
		if (v10)
			sub_14018B900(v10, 0);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
	}
	return 1i64;
}
// 140502BA7: variable 'v16' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();
// 140502A20: using guessed type char var_1D8[8];

