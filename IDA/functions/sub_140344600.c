#include "../winhttp.h"

//----- (0000000140344600) ----------------------------------------------------
__int64 __fastcall sub_140344600(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	__int64 v6; // rax
	__int64 v7; // rax
	bool v8; // cf
	__int64 v9; // rax
	int* v10; // rax
	unsigned __int64 v11; // rdi
	int v12; // ecx
	int* v13; // rdx
	_QWORD* v14; // rax
	int* v15; // rcx
	__int64 v16; // rsi
	__int64 v17; // rax
	__int64 v18; // rcx

	if (!a2 || !a3 || *(_QWORD*)(a1 + 24))
		return 2147942487i64;
	*(_QWORD*)(a1 + 24) = a3;
	v6 = 8 * a3;
	if (!is_mul_ok(a3, 8ui64))
		v6 = -1i64;
	*(_QWORD*)(a1 + 8) = sub_14018B280(v6, 0);
	v7 = 32 * a3;
	if (!is_mul_ok(a3, 0x20ui64))
		v7 = -1i64;
	v8 = __CFADD__(v7, 8i64);
	v9 = v7 + 8;
	if (v8)
		v9 = -1i64;
	v10 = sub_14018B280(v9, 0);
	v11 = 0i64;
	if (v10)
	{
		v12 = a3 - 1;
		*v10 = a3;
		v13 = v10 + 2;
		if ((int)a3 - 1 >= 0)
		{
			v14 = v10 + 6;
			do
			{
				--v12;
				*v14 = 0i64;
				v14[1] = 0i64;
				*(v14 - 2) = 0i64;
				*(v14 - 1) = 0i64;
				v14 += 4;
			} while (v12 >= 0);
		}
	}
	else
	{
		v13 = 0i64;
	}
	v15 = *(int**)(a1 + 8);
	*(_QWORD*)(a1 + 64) = v13;
	sub_1407E4830(v15, 0i64, 8 * a3);
	sub_14034A2B0(a1 + 32);
	_InterlockedIncrement((volatile signed __int32*)(a1 + 16));
	if (*(_QWORD*)(a1 + 24))
	{
		v16 = 0i64;
		do
		{
			v17 = *(_QWORD*)(a1 + 64);
			v18 = qword_140C65858;
			*(_QWORD*)(v16 + v17) = sub_140344790;
			*(_QWORD*)(v16 + v17 + 8) = a1;
			if ((*(int(__fastcall**)(__int64, unsigned __int64, _QWORD))(*(_QWORD*)v18 + 24i64))(
				v18,
				*(_QWORD*)(a1 + 8) + 8 * v11,
				*(unsigned int*)(a2 + 4 * v11)) >= 0)
			{
				_InterlockedIncrement((volatile signed __int32*)(a1 + 16));
				sub_14034A140(a1 + 32, (_QWORD*)(v16 + *(_QWORD*)(a1 + 64)));
			}
			++v11;
			v16 += 32i64;
		} while (v11 < *(_QWORD*)(a1 + 24));
	}
	if (_InterlockedDecrement((volatile signed __int32*)(a1 + 16)) == 1)
		sub_14034A1A0(a1 + 32, 0);
	return 0i64;
}
// 140C65858: using guessed type __int64 qword_140C65858;

