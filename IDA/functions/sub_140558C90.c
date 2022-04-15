//----- (0000000140558C90) ----------------------------------------------------
void __fastcall sub_140558C90(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rbp
	__int64 v6; // r14
	__int64 v7; // rdi
	_QWORD** v8; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rcx
	int* v11; // rax
	unsigned __int64 v12; // rdx
	int* v13; // r13
	int* v14; // rbx
	unsigned __int64 v15; // rdi
	int* v16; // rax
	unsigned __int64 v17; // rbp
	__int64** v18; // r14
	__int64 v19; // r12
	char* v20; // rbx
	int* v21; // rax
	_QWORD* v22; // r9
	_QWORD* v23; // r8
	__int64 v24; // rcx
	char* v25; // rdi
	_QWORD** v26; // rax
	_QWORD* v27; // rbx
	__int64 v28; // rcx
	__int64 v29; // [rsp+60h] [rbp+8h] BYREF

	v2 = a1[1];
	if (v2 <= a2)
	{
		v11 = sub_14018DB00(*a1, a2, 16i64);
		v12 = a1[1];
		v13 = v11;
		if (v12 < a2)
		{
			v14 = &v11[4 * v12 + 2];
			v15 = a2 - v12;
			do
			{
				if (v14 != (int*)8)
				{
					v16 = sub_14018B280(24i64, 0);
					*(_QWORD*)v14 = v16;
					*(_QWORD*)v16 = v16;
					*(_QWORD*)(*(_QWORD*)v14 + 8i64) = *(_QWORD*)v14;
				}
				v14 += 4;
				--v15;
			} while (v15);
		}
		if ((int*)*a1 != v13)
		{
			v17 = 0i64;
			if (a1[1])
			{
				v18 = (__int64**)(v13 + 2);
				v19 = -8i64 - (_QWORD)v13;
				do
				{
					if (v18 != (__int64**)8)
					{
						v20 = (char*)v18 + v19 + *a1;
						v21 = sub_14018B280(24i64, 0);
						*v18 = (__int64*)v21;
						*(_QWORD*)v21 = v21;
						(*v18)[1] = (__int64)*v18;
						v22 = (_QWORD*)*((_QWORD*)v20 + 1);
						v23 = (_QWORD*)*v22;
						v29 = **v18;
						sub_14001FDD0(v24, &v29, v23, v22);
					}
					v25 = (char*)v18 + v19 + *a1;
					v26 = (_QWORD**)*((_QWORD*)v25 + 1);
					v27 = *v26;
					if (*v26 != v26)
					{
						do
						{
							v28 = (__int64)v27;
							v27 = (_QWORD*)*v27;
							sub_14018B900(v28, 0);
						} while (v27 != *((_QWORD**)v25 + 1));
					}
					**((_QWORD**)v25 + 1) = *((_QWORD*)v25 + 1);
					*(_QWORD*)(*((_QWORD*)v25 + 1) + 8i64) = *((_QWORD*)v25 + 1);
					sub_14018B900(*((_QWORD*)v25 + 1), 0);
					++v17;
					v18 += 2;
				} while (v17 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v13;
		}
	}
	else
	{
		v5 = a2;
		if (a2 >= v2)
		{
			a1[1] = a2;
			return;
		}
		v6 = 16 * a2;
		do
		{
			v7 = v6 + *a1;
			v8 = *(_QWORD***)(v7 + 8);
			v9 = *v8;
			if (*v8 != v8)
			{
				do
				{
					v10 = (__int64)v9;
					v9 = (_QWORD*)*v9;
					sub_14018B900(v10, 0);
				} while (v9 != *(_QWORD**)(v7 + 8));
			}
			**(_QWORD**)(v7 + 8) = *(_QWORD*)(v7 + 8);
			*(_QWORD*)(*(_QWORD*)(v7 + 8) + 8i64) = *(_QWORD*)(v7 + 8);
			sub_14018B900(*(_QWORD*)(v7 + 8), 0);
			++v5;
			v6 += 16i64;
		} while (v5 < a1[1]);
	}
	a1[1] = a2;
}
// 140558DF2: variable 'v24' is possibly undefined

