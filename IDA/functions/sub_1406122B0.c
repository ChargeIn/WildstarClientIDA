#include "../winhttp.h"

//----- (00000001406122B0) ----------------------------------------------------
__int64 __fastcall sub_1406122B0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // r13
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // esi
	int* v9; // rax
	__int64 v10; // rdi
	_QWORD* v11; // r15
	__int64 v12; // rax
	int* v13; // r14
	__int64 v14; // r12
	int* v15; // rax
	int* v16; // rax
	_QWORD* v17; // r15
	__int64 v18; // rax
	int* v19; // r14
	__int64 v20; // r12
	int* v21; // rax
	__int64 v22; // rcx
	int* v23; // rax
	__int64 v24; // rax
	char v26[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v27; // [rsp+28h] [rbp-D8h]
	int* v28; // [rsp+30h] [rbp-D0h]
	__int64 v29; // [rsp+38h] [rbp-C8h]
	__int64 v30; // [rsp+40h] [rbp-C0h] BYREF
	char v31[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v32; // [rsp+50h] [rbp-B0h]
	_WORD* v33; // [rsp+58h] [rbp-A8h]
	__int64 v34; // [rsp+100h] [rbp+0h]

	if (qword_140C65970)
	{
		v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 4));
		v4 = v3;
		if (v3)
		{
			v5 = *(_QWORD*)(v3 + 24);
			if (v5)
			{
				if (*(_DWORD*)(v5 + 328) == *(_DWORD*)a2)
				{
					v6 = sub_14021F3C0(*(_DWORD*)a2);
					if (!v6 || (v8 = *(_DWORD*)(v6 + 72)) == 0)
					{
						v8 = sub_140617470(v7, v6);
						if (!v8)
							v8 = 195005;
					}
					sub_1404DDE90(&v30);
					v9 = sub_14018B280(96i64, 0);
					v10 = 0i64;
					if (v9)
						v11 = (_QWORD*)sub_1404DB7E0((__int64)v9, v4);
					else
						v11 = 0i64;
					v12 = 0i64;
					v13 = 0i64;
					v27 = 0i64;
					v28 = 0i64;
					v29 = 0i64;
					do
						++v12;
					while (word_140B0A7C8[v12]);
					v14 = (2 * v12) >> 1;
					if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v13 = sub_14018B280(2 * (v14 + 1), 0);
						v27 = v13;
						v28 = v13;
						v29 = (__int64)v13 + 2 * v14 + 2;
					}
					sub_1407DB590(v13, (int*)word_140B0A7C8, 2 * v14);
					v15 = (int*)((char*)v13 + 2 * v14);
					v28 = v15;
					if (v15)
						*(_WORD*)v15 = 0;
					sub_1400B7480((__int64)&v30, v11);
					(*(void(__fastcall**)(_QWORD*, char*))(*v11 + 72i64))(v11, v26);
					if (v27)
						sub_14018B900((__int64)v27, 0);
					v16 = sub_14018B280(96i64, 0);
					if (v16)
						v17 = (_QWORD*)sub_1404DB7E0((__int64)v16, *(_QWORD*)(qword_140C65898 + 120));
					else
						v17 = 0i64;
					v18 = 0i64;
					v19 = 0i64;
					v27 = 0i64;
					v28 = 0i64;
					v29 = 0i64;
					do
						++v18;
					while (word_140B0A7D8[v18]);
					v20 = (2 * v18) >> 1;
					if ((unsigned __int64)(v20 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v19 = sub_14018B280(2 * (v20 + 1), 0);
						v27 = v19;
						v28 = v19;
						v29 = (__int64)v19 + 2 * v20 + 2;
					}
					sub_1407DB590(v19, (int*)word_140B0A7D8, 2 * v20);
					v21 = (int*)((char*)v19 + 2 * v20);
					v28 = v21;
					if (v21)
						*(_WORD*)v21 = 0;
					sub_1400B7480((__int64)&v30, v17);
					(*(void(__fastcall**)(_QWORD*, char*))(*v17 + 72i64))(v17, v26);
					v22 = (__int64)v27;
					if (v27)
						sub_14018B900((__int64)v27, 0);
					v23 = (int*)sub_14034BDD0(v22, v8);
					if (v23)
					{
						if (*(_WORD*)v23)
						{
							do
								++v10;
							while (*((_WORD*)v23 + v10));
						}
						sub_14001C480((__int64)v31, v23, (int*)((char*)v23 + 2 * v10));
					}
					else if (v32 != v33)
					{
						*v32 = 0;
						v33 = v32;
					}
					v24 = sub_1400B7660(&v30);
					sub_1403E0020(v4, *(int**)(v24 + 8), 0, 0.0);
					sub_140472ED0(v4, v8);
					if (v34)
						sub_14018B900(v34, 0);
					sub_1400B7390(&v30);
				}
			}
		}
	}
	return 0i64;
}
// 14061234A: variable 'v7' is possibly undefined
// 14061255A: variable 'v22' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 1406122B0: using guessed type char var_120[8];
// 1406122B0: using guessed type char var_F8[8];

