#include "../winhttp.h"

//----- (0000000140551AC0) ----------------------------------------------------
__int64 __fastcall sub_140551AC0(__int64* a1, __int64 a2, __int64 a3)
{
	_QWORD** v3; // rax
	_QWORD* v6; // rbx
	__int64* v7; // r15
	__int64 v8; // rcx
	_QWORD** v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rsi
	int v13; // r12d
	__int64 result; // rax
	_QWORD* v15; // rbx
	__int64 v16; // rdx
	__int64 v17; // rdi
	__int64* v18; // rdi
	_QWORD* v19; // rcx
	_QWORD* v20; // rbx

	v3 = *(_QWORD***)(a2 + 8);
	v6 = *v3;
	v7 = a1;
	if (*v3 != v3)
	{
		do
		{
			v8 = (__int64)v6;
			v6 = (_QWORD*)*v6;
			sub_14018B900(v8, 0);
		} while (v6 != *(_QWORD**)(a2 + 8));
	}
	**(_QWORD**)(a2 + 8) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(*(_QWORD*)(a2 + 8) + 8i64) = *(_QWORD*)(a2 + 8);
	v9 = *(_QWORD***)(a3 + 8);
	v10 = *v9;
	if (*v9 != v9)
	{
		do
		{
			v11 = (__int64)v10;
			v10 = (_QWORD*)*v10;
			sub_14018B900(v11, 0);
		} while (v10 != *(_QWORD**)(a3 + 8));
	}
	v12 = 0i64;
	**(_QWORD**)(a3 + 8) = *(_QWORD*)(a3 + 8);
	v13 = 0;
	*(_QWORD*)(*(_QWORD*)(a3 + 8) + 8i64) = *(_QWORD*)(a3 + 8);
	result = v7[10];
	v15 = *(_QWORD**)result;
	if (*(_QWORD*)result == result)
		return result;
	do
	{
		v16 = v15[2];
		if ((*(_BYTE*)(v16 + 20) & 1) != 0)
		{
			v13 = 1;
			result = sub_140551C60((__int64)a1, (_DWORD*)v16);
			if (!(_DWORD)result)
				goto LABEL_13;
			v17 = *(_QWORD*)(a2 + 8);
		}
		else
		{
			v17 = *(_QWORD*)(a3 + 8);
		}
		result = (__int64)sub_14018B280(24i64, 0);
		if (result != -16)
			*(_QWORD*)(result + 16) = v15[2];
		*(_QWORD*)result = v17;
		*(_QWORD*)(result + 8) = *(_QWORD*)(v17 + 8);
		a1 = *(__int64**)(v17 + 8);
		*a1 = result;
		*(_QWORD*)(v17 + 8) = result;
	LABEL_13:
		v15 = (_QWORD*)*v15;
	} while (v15 != (_QWORD*)v7[10]);
	if (v13)
	{
		v18 = *(__int64**)(a2 + 8);
		result = *v18;
		if ((__int64*)*v18 == v18)
			goto LABEL_18;
		do
		{
			result = *(_QWORD*)result;
			++v12;
		} while ((__int64*)result != v18);
		if (!v12)
		{
		LABEL_18:
			v19 = (_QWORD*)v7[10];
			v20 = (_QWORD*)*v19;
			if ((_QWORD*)*v19 != v19)
			{
				while (1)
				{
					result = v20[2];
					if ((*(_BYTE*)(result + 20) & 1) != 0)
						break;
					v20 = (_QWORD*)*v20;
					if (v20 == v19)
						return result;
				}
				result = (__int64)sub_14018B280(24i64, 0);
				if (result != -16)
					*(_QWORD*)(result + 16) = v20[2];
				*(_QWORD*)result = v18;
				*(_QWORD*)(result + 8) = v18[1];
				*(_QWORD*)v18[1] = result;
				v18[1] = result;
			}
		}
	}
	return result;
}
// 140551B70: variable 'a1' is possibly undefined

