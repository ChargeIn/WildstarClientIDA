#include "../winhttp.h"

//----- (00000001405EFB00) ----------------------------------------------------
void __fastcall sub_1405EFB00(_QWORD* a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 v4; // rsi
	__int64 v6; // rcx
	__int64 v7; // r13
	__int16* v8; // rax
	unsigned int v9; // edi
	__int64 v10; // rcx
	int* v11; // r15
	int* v12; // r14
	__int64 v13; // r12
	int* v14; // r15
	__int64 v15; // rax
	int* v17; // r12
	__int64 v18; // rbx
	unsigned __int64 v19; // rax
	unsigned __int64 v20; // rbx
	unsigned __int64 v21; // rbx
	int* v22; // rbx
	unsigned __int64 v23; // rbx
	__int64* v24; // r8
	int v25; // eax
	__int64 v26; // rsi
	__int64 v27; // rax
	int* v28; // rcx
	int* v29; // r15
	unsigned __int64 v30; // r8
	unsigned __int64 v31; // rbx
	unsigned __int64 v32; // rbx
	unsigned __int64 v33; // r8
	__int64 v34; // rdx
	__int64 v35; // rdx
	__int64 v36; // [rsp+40h] [rbp-B8h] BYREF
	int* v37; // [rsp+48h] [rbp-B0h]
	int* v38; // [rsp+50h] [rbp-A8h]
	__int64 v39; // [rsp+58h] [rbp-A0h]
	int v40[20]; // [rsp+60h] [rbp-98h] BYREF

	v4 = a4;
	if ((unsigned __int64)a4 < a1[4043])
	{
		v6 = a1[4042];
		v7 = 48i64 * a4;
		if (*(_DWORD*)(v6 + v7 + 8) == *(_DWORD*)a3 && *(_QWORD*)(v6 + v7 + 16) == *(_QWORD*)(a3 + 8))
		{
			v8 = sub_14034BDD0(v6, 108);
			v9 = 0;
			v10 = 0i64;
			v11 = (int*)v8;
			v12 = 0i64;
			v37 = 0i64;
			v39 = 0i64;
			if (*v8)
			{
				do
					++v10;
				while (v8[v10]);
			}
			v13 = (2 * v10) >> 1;
			if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v12 = sub_14018B280(2 * (v13 + 1), 0);
				v37 = v12;
				v39 = (__int64)v12 + 2 * v13 + 2;
			}
			sub_1407DB590(v12, v11, 2 * v13);
			v14 = (int*)((char*)v12 + 2 * v13);
			v38 = v14;
			if (v14)
				*(_WORD*)v14 = 0;
			if (v12 == v14)
			{
				v15 = 0i64;
				while (asc_1409F3AF4[++v15] != 0)
					;
				v17 = (int*)&asc_1409F3AF4[v15];
				v18 = 2 * v15;
				v19 = ((char*)v14 - (char*)v12) >> 1;
				v20 = v18 >> 1;
				if (v20 > v19)
				{
					v23 = v19;
					sub_1407DB590(v12, (int*)L".", 2 * v19);
					sub_14001C310(&v36, (int*)&asc_1409F3AF4[v23], v17);
					v14 = v38;
					v12 = v37;
				}
				else
				{
					v21 = 2 * v20;
					sub_1407DB590(v12, (int*)L".", v21);
					v22 = (int*)((char*)v12 + v21);
					if (v22 != v14)
					{
						sub_1407DB590(v22, v14, 2ui64);
						v14 = (int*)((char*)v14 - 2 * (((char*)v14 - (char*)v22) >> 1));
					}
				}
			}
			v24 = (__int64*)(v7 + a1[4042] + 8i64);
			v37 = 0i64;
			v36 = 0i64;
			v25 = sub_1403F82F0((__int64)a1, 10, v24, v40, 0x21u, &v36, 0i64);
			v26 = a1[4040] + 32 * v4;
			if (v25)
			{
				v27 = 0i64;
				if (LOWORD(v40[0]))
				{
					do
						++v27;
					while (*((_WORD*)v40 + v27));
				}
				v28 = *(int**)(v26 + 8);
				v29 = (int*)((char*)v40 + 2 * v27);
				v30 = (__int64)(*(_QWORD*)(v26 + 16) - (_QWORD)v28) >> 1;
				v31 = (2 * v27) >> 1;
				if (v31 > v30)
				{
					sub_1407DB590(v28, v40, 2 * v30);
					sub_14001C310(
						(_QWORD*)v26,
						(int*)((char*)v40 + 2 * ((__int64)(*(_QWORD*)(v26 + 16) - *(_QWORD*)(v26 + 8)) >> 1)),
						v29);
				}
				else
				{
					v32 = 2 * v31;
					sub_1407DB590(v28, v40, v32);
					sub_14001C2B0(v26, (int*)(v32 + *(_QWORD*)(v26 + 8)), *(int**)(v26 + 16));
				}
			}
			else if (&v36 != (__int64*)v26)
			{
				sub_14001C480(v26, v12, v14);
			}
			v33 = a1[4041];
			if (v33)
			{
				v34 = 0i64;
				while (1)
				{
					v35 = 32 * v34;
					if (*(_QWORD*)(v35 + a1[4040] + 8) == *(_QWORD*)(v35 + a1[4040] + 16)
						|| *(_QWORD*)(a1[4038] + v35 + 8) == *(_QWORD*)(a1[4038] + v35 + 16))
					{
						break;
					}
					v34 = ++v9;
					if (v9 >= v33)
						goto LABEL_30;
				}
			}
			else
			{
			LABEL_30:
				sub_1405EF710(a1);
			}
			if (v12)
				sub_14018B900((__int64)v12, 0);
		}
	}
}
// 1409F3AF4: using guessed type wchar_t asc_1409F3AF4[2];

