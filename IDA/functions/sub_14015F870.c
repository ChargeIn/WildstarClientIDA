#include "../winhttp.h"

//----- (000000014015F870) ----------------------------------------------------
__int64 __fastcall sub_14015F870(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rdx
	int* v5; // rcx
	__int64 v6; // r9
	__int64 v7; // rbp
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // r14
	int* v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rdx
	int v14; // ebp
	__int64 v15; // r14
	__int64 v16; // rbx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rbx
	__int64 v20; // rdx
	int v21; // ecx
	__int64 v22; // rdx
	int v23; // eax
	int v24; // ecx
	__int64 v25; // rdx
	int v26; // eax
	__int64 v27; // rbx
	int* v28; // rax
	int* v29; // rsi
	int* v30; // rdx
	__int64 v31; // rcx
	int v33; // [rsp+20h] [rbp-38h]

	v5 = sub_14018B280(80i64, 0);
	if (v5)
	{
		v6 = a1[150];
		if (!v6)
			v6 = a1[87];
		v7 = sub_14015D090((__int64)v5, v4, *(_DWORD*)(a2 + 64), v6, v33, *(_DWORD*)(a2 + 76), (unsigned int*)(a2 + 84));
	}
	else
	{
		v7 = 0i64;
	}
	v8 = a1[143];
	v9 = sub_14018DB00(a1[142], v8 + 1, 8i64);
	v10 = v9;
	*(_QWORD*)&v9[2 * v8] = v7;
	v11 = (int*)a1[142];
	if (v11 != v9)
	{
		sub_1407DB590(v9, v11, 8i64 * a1[143]);
		v12 = a1[142];
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		a1[142] = v10;
	}
	a1[143] = v8 + 1;
	v13 = *(_QWORD*)(a2 + 8);
	v14 = v8;
	v15 = 8i64 * (int)v8;
	v16 = *(_QWORD*)(v15 + a1[142]);
	if (v13)
	{
		v18 = *(_QWORD*)(v16 + 16);
		v19 = v16 + 16;
		if (v18)
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v18 + 56i64))(v18, v13, -1i64);
		else
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
				qword_140C65680,
				MEMORY[0x60],
				*(_QWORD*)(a2 + 8),
				-1i64,
				v19);
	}
	else
	{
		v17 = *(_QWORD*)(v16 + 16);
		if (v17)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
			*(_QWORD*)(v16 + 16) = 0i64;
		}
	}
	v20 = a1[4];
	if (v20)
		sub_140109710((__int64*)(*(_QWORD*)(a1[142] + 8i64 * v14) + 24i64), v20 + 240, *(__m128i**)(a2 + 40), 0);
	*(_BYTE*)(*(_QWORD*)(a1[142] + 8i64 * v14) + 1i64) = *(_BYTE*)(a2 + 80);
	v21 = *(_DWORD*)(a2 + 68);
	v22 = *(_QWORD*)(v15 + a1[142]);
	v23 = *(_DWORD*)(v22 + 4);
	*(_DWORD*)(v22 + 8) = v21;
	if (v23 < v21)
		v23 = v21;
	*(_DWORD*)(v22 + 4) = v23;
	v24 = *(_DWORD*)(a2 + 72);
	v25 = *(_QWORD*)(v15 + a1[142]);
	v26 = *(_DWORD*)(v25 + 4);
	*(_DWORD*)(v25 + 12) = v24;
	if (v24 < v26)
		v26 = v24;
	*(_DWORD*)(v25 + 4) = v26;
	*(_BYTE*)(*(_QWORD*)(a1[142] + 8i64 * v14) + 2i64) = *(_BYTE*)(a2 + 81);
	v27 = a1[141];
	v28 = sub_14018DB00(a1[140], v27 + 1, 4i64);
	v29 = v28;
	v28[v27] = v14;
	v30 = (int*)a1[140];
	if (v30 != v28)
	{
		sub_1407DB590(v28, v30, 4i64 * a1[141]);
		v31 = a1[140];
		if (v31)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
		a1[140] = v29;
	}
	a1[141] = v27 + 1;
	sub_14015F180((__int64)a1);
	return (unsigned int)v14;
}
// 14015F8C7: variable 'v4' is possibly undefined
// 14015F8C7: variable 'v33' is possibly undefined
// 140C65680: using guessed type __int64 qword_140C65680;

