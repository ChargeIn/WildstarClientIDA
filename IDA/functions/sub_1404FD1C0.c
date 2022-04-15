#include "../winhttp.h"

//----- (00000001404FD1C0) ----------------------------------------------------
__int64 __fastcall sub_1404FD1C0(__int64 a1, int a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // r15
	__int64 v7; // r10
	__int64 v8; // r8
	__int64 v9; // r9
	__int64 v10; // rax
	__int64 v11; // r13
	__int64 v12; // rdx
	int* v13; // rax
	int* v14; // rdi
	int* v15; // rax
	int* v16; // rsi
	__int64 v17; // rax
	__int64 v18; // rbx
	int* v19; // rax
	int* v20; // rbp
	int* v21; // rax
	int* v22; // rbp
	__int64 v23; // rax
	__int64 i; // rax
	__int64 j; // rax
	char v26[8]; // [rsp+20h] [rbp-88h] BYREF
	__int64 v27; // [rsp+28h] [rbp-80h]
	__int64 v28; // [rsp+30h] [rbp-78h]
	__int64 v29; // [rsp+38h] [rbp-70h]
	__int64 v30; // [rsp+40h] [rbp-68h] BYREF
	__int64 v31; // [rsp+48h] [rbp-60h]
	int* v32; // [rsp+50h] [rbp-58h]
	int* v33; // [rsp+58h] [rbp-50h]
	__int64 v34; // [rsp+60h] [rbp-48h]
	__int64 v35; // [rsp+68h] [rbp-40h]
	__int64 v36; // [rsp+70h] [rbp-38h]

	v3 = *(_QWORD*)(a1 + 2328);
	if (v3 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	if (!*(_QWORD*)(a1 + 2168))
		return 0i64;
	v5 = *(_QWORD*)(a1 + 2328);
	v30 = 0i64;
	v31 = 0i64;
	v32 = 0i64;
	v33 = 0i64;
	v34 = 0i64;
	v35 = 0i64;
	v36 = 0i64;
	v30 = *(_QWORD*)(a1 + 7188);
	v6 = 0i64;
	v27 = 0i64;
	v28 = 0i64;
	v29 = 0i64;
	if (v5 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v7 = *(_QWORD*)(a1 + 2168);
	if (v7)
	{
		v8 = *(int*)(a1 + 7192);
		if (*(_DWORD*)(a1 + 7188) > 0x10u || (unsigned int)v8 > 2)
			v9 = qword_140C658E8;
		else
			v9 = *(_QWORD*)(32i64 * *(int*)(a1 + 7188) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v8;
		(*(void(__fastcall**)(_QWORD, char*, __int64, __int64))(*(_QWORD*)v7 + 320i64))(
			*(_QWORD*)(a1 + 2168),
			v26,
			a1 + 7120,
			v9);
	}
	v10 = 0i64;
	v11 = 0i64;
	LODWORD(v34) = (v28 - v27) >> 2;
	v12 = *(_QWORD*)(a1 + 7072);
	if ((_DWORD)v34)
		v10 = v27;
	v35 = v10;
	v13 = sub_14018DBC0(0i64, v12, 4i64);
	v14 = 0i64;
	if (v13)
		v14 = v13;
	v15 = sub_14018DBC0(0i64, *(_QWORD*)(a1 + 7072), 4i64);
	v16 = 0i64;
	if (v15)
		v16 = v15;
	v17 = *(_QWORD*)(a1 + 7064);
	v18 = *(_QWORD*)(v17 + 16);
	if (v18 != v17)
	{
		do
		{
			v19 = sub_14018DB00((__int64)v14, v6 + 1, 4i64);
			v20 = v19;
			v19[v6] = *(_DWORD*)(v18 + 32);
			if (v14 != v19)
			{
				sub_1407DB590(v19, v14, 4 * v6);
				if (v14)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
				v14 = v20;
			}
			++v6;
			v21 = sub_14018DB00((__int64)v16, v11 + 1, 4i64);
			v22 = v21;
			v21[v11] = *(_DWORD*)(v18 + 36);
			if (v16 != v21)
			{
				sub_1407DB590(v21, v16, 4 * v11);
				if (v16)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
				v16 = v22;
			}
			v23 = *(_QWORD*)(v18 + 24);
			++v11;
			if (v23)
			{
				v18 = *(_QWORD*)(v18 + 24);
				for (i = *(_QWORD*)(v23 + 16); i; i = *(_QWORD*)(i + 16))
					v18 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v18 + 8); v18 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v18 = j;
				if (*(_QWORD*)(v18 + 24) != j)
					v18 = j;
			}
		} while (v18 != *(_QWORD*)(a1 + 7064));
	}
	LODWORD(v36) = a2;
	LODWORD(v31) = v6;
	v32 = v14;
	v33 = v16;
	sub_1403F4900(qword_140C65898, 0x144u, (__int64)&v30);
	if (v16)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
	if (v14)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
	if (v27)
		sub_14018B900(v27, 0);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 1404FD1C0: using guessed type char var_88[8];

