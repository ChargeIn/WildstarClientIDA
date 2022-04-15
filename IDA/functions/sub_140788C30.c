#include "../winhttp.h"

//----- (0000000140788C30) ----------------------------------------------------
void __fastcall sub_140788C30(__int64 a1)
{
	_QWORD* v1; // rax
	int* v3; // rax
	int v4; // ebp
	__int64* v5; // rbx
	int* v6; // rsi
	int v7; // edi
	int* v8; // rax
	__int64** v9; // rax
	int v10; // r15d
	__int64* v11; // rcx
	int* v12; // rax
	__int64 v13; // rdx
	__int64 v14; // r9
	int v15; // r14d
	__int64 v16; // rbp
	__int64* v17; // rdi
	int* v18; // rbx
	__int64 v19; // rbp
	__int64 v20; // rax
	char* v21; // rbx
	__int64 v22; // rdi
	__int64* v23; // rdi
	__int64 v24; // rcx
	__int64 v25; // rax
	_QWORD** v26; // rax
	_QWORD* v27; // rbx
	__int64 v28; // rcx
	int* v29; // rbx
	__int64 v30; // rcx
	char v31[8]; // [rsp+20h] [rbp-448h] BYREF
	int* v32; // [rsp+28h] [rbp-440h]
	char v33[8]; // [rsp+30h] [rbp-438h] BYREF
	__int64 v34; // [rsp+38h] [rbp-430h] BYREF
	char v35; // [rsp+40h] [rbp-428h] BYREF
	char v36; // [rsp+438h] [rbp-30h] BYREF

	v1 = *(_QWORD**)(a1 + 8);
	if ((_QWORD*)*v1 != v1 && *(_QWORD**)*v1 != v1)
	{
		v3 = sub_14018B280(40i64, 0);
		v4 = 63;
		v5 = &v34;
		*(_QWORD*)v3 = v3;
		*((_QWORD*)v3 + 1) = v3;
		v6 = v3;
		v32 = v3;
		v7 = 63;
		do
		{
			v8 = sub_14018B280(40i64, 0);
			--v7;
			v5 += 2;
			*(_QWORD*)v8 = v8;
			*(v5 - 2) = (__int64)v8;
			*((_QWORD*)v8 + 1) = v8;
		} while (v7 >= 0);
		v9 = *(__int64***)(a1 + 8);
		v10 = 0;
		if (*v9 != (__int64*)v9)
		{
			do
			{
				v11 = *v9;
				v12 = *(int**)v6;
				v13 = *v11;
				if (*(__int64**)v6 != v11 && v12 != (int*)v13)
				{
					**(_QWORD**)(v13 + 8) = v12;
					*(_QWORD*)v11[1] = v13;
					**((_QWORD**)v12 + 1) = v11;
					v14 = *((_QWORD*)v12 + 1);
					*((_QWORD*)v12 + 1) = *(_QWORD*)(v13 + 8);
					*(_QWORD*)(v13 + 8) = v11[1];
					v11[1] = v14;
				}
				v15 = 0;
				v16 = 0i64;
				if (v10 > 0)
				{
					v17 = &v34;
					do
					{
						v18 = (int*)*v17;
						if (*(int**)v18 == v18)
							break;
						sub_140788ED0(
							(__int64)&v33[16 * v15],
							(__int64)v31,
							(unsigned __int8(__fastcall*)(__int128*, __int128*))sub_1407887B0);
						++v16;
						*v17 = (__int64)v6;
						v17 += 2;
						++v15;
						v6 = v18;
						v32 = v18;
					} while (v16 < v10);
				}
				v19 = 2 * v16;
				v20 = (__int64)v6;
				v6 = (int*)*(&v34 + v19);
				*(&v34 + v19) = v20;
				v32 = v6;
				if (v15 == v10)
					++v10;
				v9 = *(__int64***)(a1 + 8);
			} while (*v9 != (__int64*)v9);
			v4 = 63;
		}
		if (v10 > 1)
		{
			v21 = &v35;
			v22 = (unsigned int)(v10 - 1);
			do
			{
				sub_140788ED0(
					(__int64)v21,
					(__int64)(v21 - 16),
					(unsigned __int8(__fastcall*)(__int128*, __int128*))sub_1407887B0);
				v21 += 16;
				--v22;
			} while (v22);
		}
		v23 = (__int64*)&v36;
		v24 = 16i64 * (v10 - 1);
		v25 = *(__int64*)((char*)&v34 + v24);
		*(__int64*)((char*)&v34 + v24) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 8) = v25;
		do
		{
			v26 = (_QWORD**)*(v23 - 2);
			v23 -= 2;
			v27 = *v26;
			if (*v26 != v26)
			{
				do
				{
					v28 = (__int64)v27;
					v27 = (_QWORD*)*v27;
					sub_14018B900(v28, 0);
				} while (v27 != (_QWORD*)*v23);
			}
			*(_QWORD*)*v23 = *v23;
			*(_QWORD*)(*v23 + 8) = *v23;
			sub_14018B900(*v23, 0);
			--v4;
		} while (v4 >= 0);
		v29 = *(int**)v6;
		while (v29 != v6)
		{
			v30 = (__int64)v29;
			v29 = *(int**)v29;
			sub_14018B900(v30, 0);
		}
		*(_QWORD*)v6 = v6;
		*((_QWORD*)v6 + 1) = v6;
		sub_14018B900((__int64)v6, 0);
	}
}
// 140788C30: using guessed type char var_438[8];
// 140788C30: using guessed type char var_448[8];

