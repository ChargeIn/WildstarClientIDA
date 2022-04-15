#include "../winhttp.h"

//----- (000000014043B280) ----------------------------------------------------
void __fastcall sub_14043B280(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	_QWORD* v10; // rbx
	_QWORD* v11; // rax
	int* v12; // rax
	int* v13; // rbp
	int* v14; // rax
	__int64 v15; // rbx
	int* v16; // rax
	_QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
	char v18[40]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v19; // [rsp+60h] [rbp+8h]

	if (a2 && a3)
	{
		v7 = *(_QWORD*)(a4 + 8);
		v8 = v7;
		v9 = *(_QWORD*)(v7 + 8);
		while (v9)
		{
			if (*(_DWORD*)(v9 + 32) < a3)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v8 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		}
		if (v8 == v7 || (v19 = v8, a3 < *(_DWORD*)(v8 + 32)))
			v19 = *(_QWORD*)(a4 + 8);
		if (v19 == v7)
		{
			v13 = sub_14018B280(16i64, 0);
			if (v13)
			{
				v14 = sub_14018B280(24i64, 0);
				*((_QWORD*)v13 + 1) = v14;
				*(_QWORD*)v14 = v14;
				*(_QWORD*)(*((_QWORD*)v13 + 1) + 8i64) = *((_QWORD*)v13 + 1);
			}
			else
			{
				v13 = 0i64;
			}
			v15 = *((_QWORD*)v13 + 1);
			v16 = sub_14018B280(24i64, 0);
			if (v16 != (int*)-16i64)
				v16[4] = a2;
			*(_QWORD*)v16 = v15;
			*((_QWORD*)v16 + 1) = *(_QWORD*)(v15 + 8);
			**(_QWORD**)(v15 + 8) = v16;
			LODWORD(v17[0]) = a3;
			*(_QWORD*)(v15 + 8) = v16;
			v17[1] = v13;
			sub_140055F80(a4, (__int64)v18, v17);
		}
		else
		{
			v10 = *(_QWORD**)(*(_QWORD*)(v19 + 40) + 8i64);
			v11 = (_QWORD*)*v10;
			if ((_QWORD*)*v10 == v10)
				goto LABEL_16;
			do
			{
				if (*((_DWORD*)v11 + 4) == a2)
					break;
				v11 = (_QWORD*)*v11;
			} while (v11 != v10);
			if (v11 == v10)
			{
			LABEL_16:
				v12 = sub_14018B280(24i64, 0);
				if (v12 != (int*)-16i64)
					v12[4] = a2;
				*(_QWORD*)v12 = v10;
				*((_QWORD*)v12 + 1) = v10[1];
				*(_QWORD*)v10[1] = v12;
				v10[1] = v12;
			}
		}
	}
}
// 14043B280: using guessed type char var_28[40];

