#include "../winhttp.h"

//----- (00000001402A6550) ----------------------------------------------------
__int64 __fastcall sub_1402A6550(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
	__int64 v9; // rdx
	__int64 result; // rax
	__int64 v11; // rax
	__int64* v12; // rcx
	__int64 v13; // rax

	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_DWORD*)(a1 + 28) = a2;
	*(_DWORD*)(a1 + 32) = a2;
	v9 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 52) = a5;
	*(_DWORD*)(a1 + 24) = 2;
	*(_DWORD*)(a1 + 56) = a6;
	*(_DWORD*)(a1 + 36) = 1;
	*(_DWORD*)(a1 + 60) = a7;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 64) = a8;
	*(_DWORD*)(a1 + 44) = a3;
	*(_DWORD*)(a1 + 48) = a4;
	result = sub_140263970((int*)(a1 + 24), v9 + 136);
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 496) = sub_140263E70((_DWORD*)(a1 + 24));
		if (((*(_DWORD*)(a1 + 52) - 3) & 0xFFFFFFFD) == 0)
		{
			v11 = 4i64 * (unsigned int)(6 * *(_DWORD*)(a1 + 44));
			if (!is_mul_ok((unsigned int)(6 * *(_DWORD*)(a1 + 44)), 4ui64))
				v11 = -1i64;
			*(_QWORD*)(a1 + 504) = sub_14018B280(v11, 0);
		}
		result = sub_1402A6900(a1, 2);
		if ((int)result >= 0)
		{
			v12 = (__int64*)(*(_QWORD*)(a1 + 16) + 6872i64);
			if (!*(_QWORD*)(a1 + 568))
			{
				*(_QWORD*)(a1 + 568) = v12;
				*(_QWORD*)(a1 + 576) = *v12;
				*v12 = a1;
				v13 = *(_QWORD*)(a1 + 576);
				if (v13)
					*(_QWORD*)(v13 + 568) = a1 + 576;
			}
			return 0i64;
		}
	}
	return result;
}

