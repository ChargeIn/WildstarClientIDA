#include "../winhttp.h"

//----- (00000001400EDD00) ----------------------------------------------------
int** __fastcall sub_1400EDD00(__int64 a1, int** a2, _QWORD** a3, unsigned __int64* a4)
{
	__int64 v4; // rax
	_QWORD* v5; // r8
	int** result; // rax
	unsigned __int64* v10; // r8
	int* v11; // rcx
	_QWORD* v12; // rdi
	int* v13; // rbx
	__int64 v14; // rax
	_QWORD* v15; // rax
	int* v16; // rcx
	_QWORD* v17; // r9
	_QWORD* i; // rax
	_QWORD* v19; // rax
	unsigned __int64* v20; // [rsp+20h] [rbp-28h]
	char v21[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (v5 == *(_QWORD**)(v4 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && *a4 < v5[4])
		{
			v20 = a4;
		LABEL_5:
			sub_1400EECD0(a1, a2, (__int64)v5, v5, v20);
			return a2;
		}
		v10 = a4;
		goto LABEL_7;
	}
	if (v5 == (_QWORD*)v4)
	{
		v12 = *(_QWORD**)(v4 + 24);
		if (v12[4] >= *a4)
		{
			v16 = *(int**)sub_1400EEDD0(a1, (__int64)v21, a4);
			result = a2;
			*a2 = v16;
		}
		else
		{
			if (v12 == (_QWORD*)v4 || *a4 < v12[4])
			{
				v13 = sub_14018B280(48i64, 0);
				if (v13 != (int*)-32i64)
				{
					*((_QWORD*)v13 + 4) = *a4;
					*((_QWORD*)v13 + 5) = a4[1];
				}
				v12[2] = v13;
				v15 = *(_QWORD**)(a1 + 8);
				if (v12 == v15)
				{
					v15[1] = v13;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v13;
				}
				else if (v12 == (_QWORD*)v15[2])
				{
					v15[2] = v13;
				}
			}
			else
			{
				v13 = sub_14018B280(48i64, 0);
				if (v13 != (int*)-32i64)
				{
					*((_QWORD*)v13 + 4) = *a4;
					*((_QWORD*)v13 + 5) = a4[1];
				}
				v12[3] = v13;
				v14 = *(_QWORD*)(a1 + 8);
				if (v12 == *(_QWORD**)(v14 + 24))
					*(_QWORD*)(v14 + 24) = v13;
			}
			*((_QWORD*)v13 + 1) = v12;
			*((_QWORD*)v13 + 2) = 0i64;
			*((_QWORD*)v13 + 3) = 0i64;
			sub_1400081C0((__int64)v13, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v13;
			return a2;
		}
	}
	else
	{
		if (*(_BYTE*)v5 || *(_QWORD**)(v5[1] + 8i64) != v5)
		{
			v17 = (_QWORD*)v5[2];
			if (v17)
			{
				for (i = (_QWORD*)v17[3]; i; i = (_QWORD*)i[3])
					v17 = i;
			}
			else
			{
				v17 = (_QWORD*)v5[1];
				if (v5 == (_QWORD*)v17[2])
				{
					do
					{
						v19 = v17;
						v17 = (_QWORD*)v17[1];
					} while (v19 == (_QWORD*)v17[2]);
				}
			}
		}
		else
		{
			v17 = (_QWORD*)v5[3];
		}
		if (v17[4] >= *a4 || *a4 >= v5[4])
		{
			v10 = a4;
		LABEL_7:
			v11 = *(int**)sub_1400EEDD0(a1, (__int64)v21, v10);
			result = a2;
			*a2 = v11;
			return result;
		}
		v20 = a4;
		if (v17[3])
			goto LABEL_5;
		sub_1400EECD0(a1, a2, 0i64, v17, a4);
		return a2;
	}
	return result;
}

