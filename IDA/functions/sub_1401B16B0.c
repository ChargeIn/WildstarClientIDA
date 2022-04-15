#include "../winhttp.h"

//----- (00000001401B16B0) ----------------------------------------------------
void __fastcall sub_1401B16B0(_QWORD* a1, char* a2, __int64 a3)
{
	_QWORD* v3; // r9
	__int64 v7; // rdx
	__int64 v8; // r9
	__int64 v9; // r8
	__int64 v10; // rcx
	_QWORD* v11; // rdx
	__int64 v12; // r8
	__int64 v13; // rax
	__int64 v14; // r9
	__int64 v15; // rcx
	__int64 v16; // r15
	int* v17; // rax
	char* v18; // r8
	int* v19; // r14
	int* i; // rdx
	char* v21; // rcx
	_QWORD* v22; // rbx
	signed __int64 v23; // rdi
	__int64 v24; // rdx
	__int64 v25; // rdi
	void(__fastcall * **v26)(_QWORD, _QWORD); // rbp
	void(__fastcall * **j)(_QWORD, _QWORD); // rdi
	__int64 v28; // rcx

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v14 = ((__int64)v3 - a1[1]) >> 4;
		v15 = 2 * v14;
		if (!v14)
			v15 = 1i64;
		v16 = sub_14018A3E0(16 * v15) & 0xFFFFFFFFFFFFFFF0ui64;
		v17 = sub_14018B280(v16, 0);
		v18 = (char*)a1[1];
		v19 = v17;
		for (i = v17; v18 != a2; i += 4)
		{
			if (i)
			{
				*(_QWORD*)i = off_140B68F20;
				*((_QWORD*)i + 1) = *((_QWORD*)v18 + 1);
			}
			v18 += 16;
		}
		if (i)
		{
			*(_QWORD*)i = off_140B68F20;
			*((_QWORD*)i + 1) = *(_QWORD*)(a3 + 8);
		}
		v21 = (char*)a1[2];
		v22 = i + 4;
		if (a2 != v21)
		{
			v23 = a2 - (char*)i;
			v24 = v23 - 16;
			v25 = v23 - 24;
			do
			{
				if (v22)
				{
					*v22 = off_140B68F20;
					v22[1] = *(_QWORD*)((char*)v22 + v24 + 8);
				}
				v22 += 2;
			} while ((char*)v22 + v25 + 8 != v21);
		}
		v26 = (void(__fastcall***)(_QWORD, _QWORD))a1[2];
		for (j = (void(__fastcall***)(_QWORD, _QWORD))a1[1]; j != v26; j += 2)
			(**j)(j, 0i64);
		v28 = a1[1];
		if (v28)
			sub_14018B900(v28, 0);
		a1[1] = v19;
		a1[3] = (char*)v19 + v16;
		a1[2] = v22;
	}
	else
	{
		if (v3)
		{
			*v3 = off_140B68F20;
			v3[1] = *(v3 - 1);
		}
		a1[2] += 16i64;
		v7 = a1[2];
		v8 = *(_QWORD*)(a3 + 8);
		v9 = v7 - 32;
		v10 = (v7 - 32 - (__int64)a2) >> 4;
		if (v10 > 0)
		{
			v11 = (_QWORD*)(v7 - 8);
			v12 = v9 + 8;
			do
			{
				v13 = *(_QWORD*)(v12 - 16);
				v12 -= 16i64;
				v11 -= 2;
				--v10;
				*v11 = v13;
			} while (v10 > 0);
		}
		*((_QWORD*)a2 + 1) = v8;
	}
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();

