#include "../winhttp.h"

//----- (00000001400D8BF0) ----------------------------------------------------
__int64 __fastcall sub_1400D8BF0(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // r14
	__int64 v8; // rbx
	int v9; // edi
	__int64 v10; // rsi
	_DWORD* v11; // rax
	_QWORD* v12; // r10
	double v13; // xmm0_8
	int v14; // xmm0_4
	int v15; // eax
	__int128* v16; // rdx
	__int64 v17; // rcx
	int v18; // eax
	__int64 v19; // rcx
	int v20; // edi
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rdx
	int v24; // eax
	__int128 v26; // [rsp+20h] [rbp-E0h]
	__int128 v27; // [rsp+30h] [rbp-D0h] BYREF
	__int128 v28; // [rsp+40h] [rbp-C0h]
	_OWORD v29[2]; // [rsp+50h] [rbp-B0h]
	int v30; // [rsp+70h] [rbp-90h]
	__int128 v31[3]; // [rsp+80h] [rbp-80h]
	__int128 v32; // [rsp+B0h] [rbp-50h]
	__int128 v33; // [rsp+C0h] [rbp-40h]
	int v34; // [rsp+D0h] [rbp-30h]
	int v35[9]; // [rsp+DCh] [rbp-24h]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = v6 + 384;
	v8 = sub_1400D66A0(a1, 1u);
	if (v8)
	{
		v9 = 2;
		v10 = 0i64;
		do
		{
			v11 = sub_1400580E0(*(_QWORD*)(v7 + 16), v9);
			if (v11 == dword_140A12138 || (int)v11[2] <= 0)
				v13 = 0.0;
			else
				v13 = sub_140056C40(v12, v9);
			*(float*)&v14 = v13;
			v35[v10 + 5] = v14;
			v15 = sub_1400F26A0(v7, v9 + 1);
			v9 += 2;
			v35[++v10] = v15;
		} while (v9 < 10);
		v30 = 0;
		v16 = &v27;
		v17 = 0i64;
		do
		{
			v18 = v35[v17 + 5];
			++v17;
			v16 = (__int128*)((char*)v16 + 8);
			*(_DWORD*)((char*)&v28 + v17 * 4 + 12) = v18;
			*(_DWORD*)((char*)v29 + v17 * 4 + 12) = v35[v17];
			*((_QWORD*)v16 - 1) = 0i64;
		} while (v17 < 4);
		v19 = *(_QWORD*)(v8 + 440);
		v20 = v30 | 0x300;
		v34 = v30 | 0x300;
		v31[1] = v27;
		v31[2] = v28;
		v32 = v29[0];
		v33 = v29[1];
		v31[0] = v26;
		if (v19)
		{
			sub_14018B900(v19, 0);
			*(_QWORD*)(v8 + 440) = 0i64;
		}
		v21 = v27;
		*(_OWORD*)(v8 + 64) = v26;
		*(_QWORD*)(v8 + 80) = v21;
		v22 = 64i64;
		*(_QWORD*)(v8 + 88) = *((_QWORD*)&v27 + 1);
		v23 = 4i64;
		*(_OWORD*)(v8 + 96) = v28;
		*(_OWORD*)(v8 + 112) = v32;
		do
		{
			v24 = *(_DWORD*)((char*)v31 + v22);
			v22 += 4i64;
			*(_DWORD*)(v8 + v22 + 60) = v24;
			--v23;
		} while (v23);
		*(_DWORD*)(v8 + 144) = v20;
		sub_1400CB690(v8);
		sub_1400CB960((char*)v8);
	}
	return 0i64;
}
// 1400D8CCE: variable 'v12' is possibly undefined
// 1400D8D91: variable 'v26' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

