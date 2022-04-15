#include "../winhttp.h"

//----- (00000001404D7130) ----------------------------------------------------
int** __fastcall sub_1404D7130(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	unsigned __int64 v5; // rsi
	unsigned int v6; // ebp
	_QWORD* v7; // rbx
	int* v8; // rsi
	int* v9; // rax
	__int64 v10; // rbx
	unsigned __int64 v11; // r12
	int** v12; // rdi
	int* v13; // rax
	int* v14; // rcx
	__int64 v15; // rcx
	_QWORD** v16; // rax
	_QWORD* v17; // rbx
	__int64 v18; // rcx
	int** result; // rax
	__int64 v20; // rbx
	int* v21; // rdi
	int* v22; // rax
	int* v23; // rdx

	v2 = *(_QWORD*)(a1 + 31008);
	v5 = (*(__int64(__fastcall**)(__int64))(v2 + 24))(a2 + 16);
	v6 = 0;
	v7 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v5 % *(_QWORD*)(v2 + 8)));
	if (!v7)
		goto LABEL_5;
	while (v5 != *v7 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v2 + 32))(a2 + 16, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			goto LABEL_5;
	}
	if (v7 == (_QWORD*)-24i64)
	{
	LABEL_5:
		v8 = sub_14018B280(16i64, 0);
		if (v8)
		{
			v9 = sub_14018B280(72i64, 0);
			*((_QWORD*)v8 + 1) = v9;
			*(_QWORD*)v9 = v9;
			*(_QWORD*)(*((_QWORD*)v8 + 1) + 8i64) = *((_QWORD*)v8 + 1);
		}
		else
		{
			v8 = 0i64;
		}
		v10 = *(_QWORD*)(a1 + 31008);
		if (*(_QWORD*)v10 == *(_QWORD*)(v10 + 8))
			sub_1400290D0(*(_QWORD*)(a1 + 31008));
		v11 = (*(__int64(__fastcall**)(__int64))(v10 + 24))(a2 + 16);
		v12 = (int**)(*(_QWORD*)(v10 + 16) + 8 * (v11 % *(_QWORD*)(v10 + 8)));
		v13 = sub_14018B280(32i64, 0);
		if (v13)
		{
			v14 = *v12;
			*(_QWORD*)v13 = v11;
			*((_QWORD*)v13 + 1) = v14;
			v15 = *(_QWORD*)(a2 + 16);
			*((_QWORD*)v13 + 3) = v8;
			*((_QWORD*)v13 + 2) = v15;
		}
		else
		{
			v13 = 0i64;
		}
		*v12 = v13;
		++* (_QWORD*)v10;
	}
	else
	{
		v8 = (int*)v7[3];
	}
	v16 = (_QWORD**)*((_QWORD*)v8 + 1);
	v17 = *v16;
	if (*v16 != v16)
	{
		do
		{
			v18 = (__int64)v17;
			v17 = (_QWORD*)*v17;
			sub_14018B900(v18, 0);
		} while (v17 != *((_QWORD**)v8 + 1));
	}
	**((_QWORD**)v8 + 1) = *((_QWORD*)v8 + 1);
	result = (int**)*((_QWORD*)v8 + 1);
	result[1] = (int*)result;
	if (*(_DWORD*)a2)
	{
		do
		{
			v20 = *((_QWORD*)v8 + 1);
			v21 = (int*)(*(_QWORD*)(a2 + 8) + 52i64 * v6);
			v22 = sub_14018B280(72i64, 0);
			v23 = v22;
			if (v22 != (int*)-16i64)
			{
				v22[4] = *v21;
				v22[5] = v21[1];
				v22[6] = v21[2];
				v22[7] = v21[3];
				v22[8] = v21[4];
				v22[9] = v21[5];
				v22[10] = v21[6];
				v22[11] = v21[7];
				v22[12] = v21[8];
				v22[13] = v21[9];
				v22[14] = v21[10];
				v22[15] = v21[11];
				v22[16] = v21[12];
			}
			*(_QWORD*)v22 = v20;
			++v6;
			*((_QWORD*)v22 + 1) = *(_QWORD*)(v20 + 8);
			result = *(int***)(v20 + 8);
			*result = v23;
			*(_QWORD*)(v20 + 8) = v23;
		} while (v6 < *(_DWORD*)a2);
	}
	return result;
}

