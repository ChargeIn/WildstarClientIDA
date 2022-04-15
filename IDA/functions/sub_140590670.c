#include "../winhttp.h"

//----- (0000000140590670) ----------------------------------------------------
int** __fastcall sub_140590670(__int64 a1, int** a2, _QWORD** a3, unsigned __int64* a4)
{
	__int64 v4; // rax
	_QWORD* v5; // r8
	int** result; // rax
	unsigned __int64* v10; // r8
	int* v11; // rcx
	unsigned __int64 v12; // rcx
	_QWORD* v13; // rsi
	int* v14; // rax
	int* v15; // rbx
	__int64 v16; // rax
	_QWORD* v17; // rax
	int* v18; // rcx
	_QWORD* v19; // r9
	_QWORD* i; // rax
	_QWORD* v21; // rax
	unsigned __int64* v22; // [rsp+20h] [rbp-28h]
	char v23[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (v5 == *(_QWORD**)(v4 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && *a4 < v5[4])
		{
			v22 = a4;
		LABEL_5:
			sub_1405910D0(a1, a2, (__int64)v5, v5, v22);
			return a2;
		}
		v10 = a4;
		goto LABEL_7;
	}
	if (v5 == (_QWORD*)v4)
	{
		v12 = *a4;
		v13 = *(_QWORD**)(v4 + 24);
		if (v13[4] >= *a4)
		{
			v18 = *(int**)sub_140590880(a1, (__int64)v23, a4);
			result = a2;
			*a2 = v18;
		}
		else
		{
			if (v13 == (_QWORD*)v4 || v12 < v13[4])
			{
				v15 = sub_14018B280(128i64, 0);
				if (v15 != (int*)-32i64)
				{
					*((_QWORD*)v15 + 4) = *a4;
					sub_14058FA40((__int64)(v15 + 10), (__int64)(a4 + 1));
				}
				v13[2] = v15;
				v17 = *(_QWORD**)(a1 + 8);
				if (v13 == v17)
				{
					v17[1] = v15;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v15;
				}
				else if (v13 == (_QWORD*)v17[2])
				{
					v17[2] = v15;
				}
			}
			else
			{
				v14 = sub_140591230(v12, a4);
				v13[3] = v14;
				v15 = v14;
				v16 = *(_QWORD*)(a1 + 8);
				if (v13 == *(_QWORD**)(v16 + 24))
					*(_QWORD*)(v16 + 24) = v15;
			}
			*((_QWORD*)v15 + 1) = v13;
			*((_QWORD*)v15 + 2) = 0i64;
			*((_QWORD*)v15 + 3) = 0i64;
			sub_1400081C0((__int64)v15, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v15;
			return a2;
		}
	}
	else
	{
		if (*(_BYTE*)v5 || *(_QWORD**)(v5[1] + 8i64) != v5)
		{
			v19 = (_QWORD*)v5[2];
			if (v19)
			{
				for (i = (_QWORD*)v19[3]; i; i = (_QWORD*)i[3])
					v19 = i;
			}
			else
			{
				v19 = (_QWORD*)v5[1];
				if (v5 == (_QWORD*)v19[2])
				{
					do
					{
						v21 = v19;
						v19 = (_QWORD*)v19[1];
					} while (v21 == (_QWORD*)v19[2]);
				}
			}
		}
		else
		{
			v19 = (_QWORD*)v5[3];
		}
		if (v19[4] >= *a4 || *a4 >= v5[4])
		{
			v10 = a4;
		LABEL_7:
			v11 = *(int**)sub_140590880(a1, (__int64)v23, v10);
			result = a2;
			*a2 = v11;
			return result;
		}
		v22 = a4;
		if (v19[3])
			goto LABEL_5;
		sub_1405910D0(a1, a2, 0i64, v19, a4);
		return a2;
	}
	return result;
}

