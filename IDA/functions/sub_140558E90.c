//----- (0000000140558E90) ----------------------------------------------------
void __fastcall sub_140558E90(__int64 a1)
{
	int* v2; // rax
	int v3; // ebp
	__int64* v4; // rbx
	int* v5; // rsi
	int v6; // edi
	int* v7; // rax
	__int64** v8; // rax
	int v9; // r15d
	__int64* v10; // rcx
	int* v11; // rax
	__int64 v12; // rdx
	__int64 v13; // r9
	int v14; // r14d
	__int64 v15; // rbp
	__int64* v16; // rdi
	int* v17; // rbx
	__int64 v18; // rbp
	__int64 v19; // rax
	char* v20; // rbx
	__int64 v21; // rdi
	__int64* v22; // rdi
	__int64 v23; // rcx
	__int64 v24; // rax
	_QWORD** v25; // rax
	_QWORD* v26; // rbx
	__int64 v27; // rcx
	int* v28; // rbx
	__int64 v29; // rcx
	char v30[8]; // [rsp+20h] [rbp-448h] BYREF
	int* v31; // [rsp+28h] [rbp-440h]
	char v32[8]; // [rsp+30h] [rbp-438h] BYREF
	__int64 v33; // [rsp+38h] [rbp-430h] BYREF
	char v34; // [rsp+40h] [rbp-428h] BYREF
	char v35; // [rsp+438h] [rbp-30h] BYREF

	if (***(_QWORD***)(a1 + 8) != *(_QWORD*)(a1 + 8))
	{
		v2 = sub_14018B280(24i64, 0);
		v3 = 63;
		v4 = &v33;
		*(_QWORD*)v2 = v2;
		*((_QWORD*)v2 + 1) = v2;
		v5 = v2;
		v31 = v2;
		v6 = 63;
		do
		{
			v7 = sub_14018B280(24i64, 0);
			--v6;
			v4 += 2;
			*(_QWORD*)v7 = v7;
			*(v4 - 2) = (__int64)v7;
			*((_QWORD*)v7 + 1) = v7;
		} while (v6 >= 0);
		v8 = *(__int64***)(a1 + 8);
		v9 = 0;
		if (*v8 != (__int64*)v8)
		{
			do
			{
				v10 = *v8;
				v11 = *(int**)v5;
				v12 = *v10;
				if (*(__int64**)v5 != v10 && v11 != (int*)v12)
				{
					**(_QWORD**)(v12 + 8) = v11;
					*(_QWORD*)v10[1] = v12;
					**((_QWORD**)v11 + 1) = v10;
					v13 = *((_QWORD*)v11 + 1);
					*((_QWORD*)v11 + 1) = *(_QWORD*)(v12 + 8);
					*(_QWORD*)(v12 + 8) = v10[1];
					v10[1] = v13;
				}
				v14 = 0;
				v15 = 0i64;
				if (v9 > 0)
				{
					v16 = &v33;
					do
					{
						v17 = (int*)*v16;
						if (*(int**)v17 == v17)
							break;
						sub_1401589F0(
							(__int64)&v32[16 * v14],
							(__int64)v30,
							(unsigned __int8(__fastcall*)(__int64*, __int64))sub_140555320);
						++v15;
						*v16 = (__int64)v5;
						v16 += 2;
						++v14;
						v5 = v17;
						v31 = v17;
					} while (v15 < v9);
				}
				v18 = 2 * v15;
				v19 = (__int64)v5;
				v5 = (int*)*(&v33 + v18);
				*(&v33 + v18) = v19;
				v31 = v5;
				if (v14 == v9)
					++v9;
				v8 = *(__int64***)(a1 + 8);
			} while (*v8 != (__int64*)v8);
			v3 = 63;
		}
		if (v9 > 1)
		{
			v20 = &v34;
			v21 = (unsigned int)(v9 - 1);
			do
			{
				sub_1401589F0(
					(__int64)v20,
					(__int64)(v20 - 16),
					(unsigned __int8(__fastcall*)(__int64*, __int64))sub_140555320);
				v20 += 16;
				--v21;
			} while (v21);
		}
		v22 = (__int64*)&v35;
		v23 = 16i64 * (v9 - 1);
		v24 = *(__int64*)((char*)&v33 + v23);
		*(__int64*)((char*)&v33 + v23) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 8) = v24;
		do
		{
			v25 = (_QWORD**)*(v22 - 2);
			v22 -= 2;
			v26 = *v25;
			if (*v25 != v25)
			{
				do
				{
					v27 = (__int64)v26;
					v26 = (_QWORD*)*v26;
					sub_14018B900(v27, 0);
				} while (v26 != (_QWORD*)*v22);
			}
			*(_QWORD*)*v22 = *v22;
			*(_QWORD*)(*v22 + 8) = *v22;
			sub_14018B900(*v22, 0);
			--v3;
		} while (v3 >= 0);
		v28 = *(int**)v5;
		while (v28 != v5)
		{
			v29 = (__int64)v28;
			v28 = *(int**)v28;
			sub_14018B900(v29, 0);
		}
		*(_QWORD*)v5 = v5;
		*((_QWORD*)v5 + 1) = v5;
		sub_14018B900((__int64)v5, 0);
	}
}
// 140558E90: using guessed type char var_438[8];
// 140558E90: using guessed type char var_448[8];

