#include "../winhttp.h"

//----- (000000014033DD20) ----------------------------------------------------
__int64* __fastcall sub_14033DD20(_QWORD* a1, __int64* a2, __int64* a3)
{
	__int64 v3; // r12
	__int64 v4; // rdi
	__int64 v5; // rsi
	__int64 v6; // r14
	__int64 v7; // r9
	__int64 v10; // r10
	__int64 v11; // r11
	__int64 v12; // r8
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64* v24; // rax
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v29[4]; // [rsp+30h] [rbp-49h] BYREF
	__int64 v30; // [rsp+50h] [rbp-29h] BYREF
	__int64 v31; // [rsp+58h] [rbp-21h]
	__int64 v32; // [rsp+60h] [rbp-19h]
	__int64 v33; // [rsp+68h] [rbp-11h]
	__int64 v34; // [rsp+70h] [rbp-9h] BYREF
	__int64 v35; // [rsp+78h] [rbp-1h]
	__int64 v36; // [rsp+80h] [rbp+7h]
	__int64 v37; // [rsp+88h] [rbp+Fh]
	__int64 v38[4]; // [rsp+90h] [rbp+17h] BYREF
	unsigned __int64 v39; // [rsp+E0h] [rbp+67h]

	v3 = a3[2];
	v4 = *a3;
	v5 = a3[1];
	v6 = a3[3];
	v7 = *a3 + 16;
	v10 = v5;
	v11 = v3;
	v12 = v6;
	if (v7 == v3)
	{
		v10 = *(_QWORD*)(v6 + 8);
		v12 = v6 + 8;
		v11 = v10 + 496;
		v7 = v10;
	}
	v13 = a1[5];
	v29[3] = v12;
	v14 = v6 - a1[6];
	v15 = (v13 - a1[3]) >> 4;
	v29[0] = v7;
	v29[1] = v10;
	v29[2] = v11;
	v39 = ((v4 - v5) >> 4) - 31 + v15 + 31 * (v14 >> 3);
	if (v39 >= (unsigned __int64)(v15 + 31 * (((__int64)(a1[10] - a1[6]) >> 3) - 1) + ((__int64)(a1[7] - a1[8]) >> 4)) >> 1)
	{
		v19 = a1[9];
		v30 = a1[7];
		v20 = a1[8];
		v32 = v19;
		v21 = a1[10];
		v31 = v20;
		v34 = v4;
		v35 = v5;
		v36 = v3;
		v37 = v6;
		v33 = v21;
		sub_14033E780(v38, v29, &v30, &v34);
		v22 = a1[7];
		v23 = a1[8];
		if (v22 == v23)
		{
			sub_14018B900(v23, 0);
			v24 = (__int64*)(a1[10] - 8i64);
			a1[10] = v24;
			v25 = *v24;
			a1[8] = v25;
			v22 = v25 + 496;
			a1[9] = v22;
		}
		v26 = v22 - 16;
		a1[7] = v26;
		v27 = *(_QWORD*)(v26 + 8);
		if (v27)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	}
	else
	{
		v16 = a1[3];
		v35 = a1[4];
		v17 = a1[5];
		v34 = v16;
		v36 = v17;
		v18 = a1[6];
		v30 = v4;
		v31 = v5;
		v37 = v18;
		v32 = v3;
		v33 = v6;
		sub_14033E600(v38, &v34, &v30, v29);
		sub_14033DF00(a1);
	}
	sub_14033DF80(a1 + 3, a2, v39);
	return a2;
}
// 14033DD20: using guessed type __int64 var_40[4];

