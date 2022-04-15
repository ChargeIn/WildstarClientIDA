#include "../winhttp.h"

//----- (00000001402F7E20) ----------------------------------------------------
int* __fastcall sub_1402F7E20(_QWORD* a1, int a2, _OWORD* a3)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	int* result; // rax
	int* v8; // rcx
	int** v9; // rbx
	__int64 v10; // rax
	unsigned int v11; // ecx
	__int64 v12; // rax
	__int64 v13; // rdi
	int* v14; // rax
	int v15[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v4 = a2;
	v15[0] = 0;
	if (!(*(unsigned int(__fastcall**)(_QWORD*, int*, _QWORD))(v3 + 16))(a1, v15, 0i64))
	{
		result = sub_14018B280(64i64, 0);
		v8 = result;
		if (!result)
			return result;
		*(_QWORD*)result = &off_140B64078;
		*((_QWORD*)result + 2) = 0i64;
		*((_QWORD*)result + 3) = 0i64;
		*((_QWORD*)result + 1) = a1;
		v9 = (int**)(a1 + 9);
		if (!*((_QWORD*)result + 2))
		{
			*((_QWORD*)result + 2) = v9;
			*((_QWORD*)result + 3) = *v9;
			*v9 = result;
			v10 = *((_QWORD*)result + 3);
			if (v10)
				*(_QWORD*)(v10 + 16) = v8 + 6;
		}
		result = (int*)off_140B63F28;
		v8[8] = v4;
		*(_QWORD*)v8 = off_140B63F28;
		goto LABEL_19;
	}
	if ((_DWORD)v4)
	{
		v12 = a1[8];
		if ((unsigned int)v4 >= *(_DWORD*)(v12 + 400))
			v11 = -1;
		else
			v11 = *(unsigned __int16*)(*(_QWORD*)(v12 + 408) + 2 * v4);
	}
	else
	{
		v11 = 0;
	}
	result = (int*)a1[8];
	if (v11 < result[96])
	{
		result = (int*)a1[105];
		v13 = 88i64 * v11;
		v8 = *(int**)&result[v13 + 2];
		if (!v8)
		{
			v14 = sub_14018B280(64i64, 0);
			v8 = v14;
			if (v14)
			{
				*v14 = 0;
				*((_OWORD*)v14 + 1) = xmmword_140B7B240;
				*((_OWORD*)v14 + 2) = xmmword_140C78450;
				*((_OWORD*)v14 + 3) = 0i64;
			}
			else
			{
				v8 = 0i64;
			}
			result = (int*)a1[105];
			*(_QWORD*)&result[v13 + 2] = v8;
		}
		*v8 |= 4u;
	LABEL_19:
		*((_OWORD*)v8 + 3) = *a3;
	}
	return result;
}
// 140B63F28: using guessed type __int64 (__fastcall *off_140B63F28[43])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C78450: using guessed type __int128 xmmword_140C78450;
// 1402F7E20: using guessed type int var_18[6];

