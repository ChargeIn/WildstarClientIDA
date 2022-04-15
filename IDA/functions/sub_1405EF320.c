#include "../winhttp.h"

//----- (00000001405EF320) ----------------------------------------------------
void __fastcall sub_1405EF320(_QWORD* a1)
{
	__int16* v2; // rax
	int v3; // r15d
	__int64 v4; // rcx
	int* v5; // rdi
	int* v6; // r12
	__int64 v7; // r14
	int* v8; // r13
	__int64 v9; // rax
	int* v11; // rdi
	unsigned __int64 v12; // rax
	unsigned __int64 v13; // rbx
	unsigned __int64 v14; // rbx
	int* v15; // rbx
	__int64 v16; // rbx
	unsigned int v17; // r14d
	__int64 v18; // rdi
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // r14
	int* v22; // rcx
	int* v23; // r15
	unsigned __int64 v24; // r8
	unsigned __int64 v25; // rbx
	unsigned __int64 v26; // rbx
	int* v27; // r15
	int* v28; // rbx
	__int64 v29; // rdi
	int v30; // edx
	__int64 v31; // rdi
	__int64* v32; // rcx
	__int64* v33; // rcx
	unsigned int v34; // [rsp+40h] [rbp-89h]
	int v35; // [rsp+44h] [rbp-85h]
	__int64 v36; // [rsp+50h] [rbp-79h] BYREF
	int* v37; // [rsp+58h] [rbp-71h]
	int* v38; // [rsp+60h] [rbp-69h]
	__int64 v39; // [rsp+68h] [rbp-61h]
	__int64 v40; // [rsp+70h] [rbp-59h]
	__int64 v41[2]; // [rsp+78h] [rbp-51h] BYREF
	__int64 v42[3]; // [rsp+88h] [rbp-41h] BYREF
	int v43[20]; // [rsp+A0h] [rbp-29h] BYREF

	v2 = sub_14034BDD0((__int64)a1, 108);
	v3 = 0;
	v4 = 0i64;
	v5 = (int*)v2;
	v6 = 0i64;
	v37 = 0i64;
	v39 = 0i64;
	if (*v2)
	{
		do
			++v4;
		while (v2[v4]);
	}
	v7 = (2 * v4) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v7 + 1), 0);
		v37 = v6;
		v39 = (__int64)v6 + 2 * v7 + 2;
	}
	sub_1407DB590(v6, v5, 2 * v7);
	v8 = (int*)((char*)v6 + 2 * v7);
	v38 = v8;
	if (v8)
		*(_WORD*)v8 = 0;
	if (v6 == v8)
	{
		v9 = 0i64;
		while (*(_WORD*)&asc_1409F3AC4[2 * v9++ + 2] != 0)
			;
		v11 = (int*)&asc_1409F3AC4[2 * v9];
		v12 = (2 * v7) >> 1;
		v13 = ((char*)v11 - ".") >> 1;
		if (v13 > v12)
		{
			v16 = 2 * v12;
			sub_1407DB590(v6, (int*)".", 2 * v12);
			sub_14001C310(&v36, (int*)&asc_1409F3AC4[v16], v11);
			v8 = v38;
			v6 = v37;
		}
		else
		{
			v14 = 2 * v13;
			sub_1407DB590(v6, (int*)".", v14);
			v15 = (int*)((char*)v6 + v14);
			if (v15 != v8)
			{
				sub_1407DB590(v15, v8, 2ui64);
				v8 = (int*)((char*)v8 - 2 * (((char*)v8 - (char*)v15) >> 1));
			}
		}
	}
	v17 = 0;
	v35 = 0;
	v34 = 0;
	if (a1[4043])
	{
		v18 = 0i64;
		while (1)
		{
			v19 = 48 * v18 + a1[4042];
			v40 = 48 * v18;
			if (*(_DWORD*)(v19 + 8) && *(_QWORD*)(v19 + 16))
			{
				v41[1] = (__int64)sub_1405EFB00;
				v41[0] = sub_14001C280((__int64)a1);
				if ((unsigned int)sub_1403F82F0((__int64)a1, 10, (__int64*)(v19 + 8), v43, 0x21u, v41, v18))
				{
					v20 = 0i64;
					v21 = a1[4040] + 32 * v18;
					if (LOWORD(v43[0]))
					{
						do
							++v20;
						while (*((_WORD*)v43 + v20));
					}
					v22 = *(int**)(v21 + 8);
					v23 = (int*)((char*)v43 + 2 * v20);
					v24 = (__int64)(*(_QWORD*)(v21 + 16) - (_QWORD)v22) >> 1;
					v25 = (2 * v20) >> 1;
					if (v25 > v24)
					{
						sub_1407DB590(v22, v43, 2 * v24);
						sub_14001C310(
							(_QWORD*)v21,
							(int*)((char*)v43 + 2 * ((__int64)(*(_QWORD*)(v21 + 16) - *(_QWORD*)(v21 + 8)) >> 1)),
							v23);
					}
					else
					{
						v26 = 2 * v25;
						sub_1407DB590(v22, v43, v26);
						v27 = *(int**)(v21 + 16);
						v28 = (int*)(*(_QWORD*)(v21 + 8) + v26);
						if (v28 != v27)
						{
							sub_1407DB590(v28, *(int**)(v21 + 16), 2ui64);
							*(_QWORD*)(v21 + 16) += -2 * (((char*)v27 - (char*)v28) >> 1);
						}
					}
					v17 = v34;
					v3 = 0;
				}
				v42[1] = (__int64)sub_1405EFE60;
				v42[0] = sub_14001C280((__int64)a1);
				sub_1403F87B0((__int64)a1, *(unsigned int*)(v40 + a1[4042] + 8), v42, v18);
				v29 = 32 * v18;
				if (*(_QWORD*)(a1[4040] + v29 + 8) == *(_QWORD*)(a1[4040] + v29 + 16)
					|| *(_QWORD*)(a1[4038] + v29 + 8) == *(_QWORD*)(a1[4038] + v29 + 16))
				{
					v30 = 1;
					v35 = 1;
					goto LABEL_35;
				}
			}
			else
			{
				v31 = 32 * v18;
				v32 = (__int64*)(v31 + a1[4040]);
				v3 = 1;
				if (&v36 != v32)
					sub_14001C480((__int64)v32, v6, v8);
				v33 = (__int64*)(v31 + a1[4038]);
				if (&v36 != v33)
					sub_14001C480((__int64)v33, v6, v8);
			}
			v30 = v35;
		LABEL_35:
			v18 = ++v17;
			v34 = v17;
			if ((unsigned __int64)v17 >= a1[4043])
			{
				if (v3 && !v30)
					sub_1405EF710(a1);
				break;
			}
			v3 = 0;
		}
	}
	if (v6)
		sub_14018B900((__int64)v6, 0);
}

