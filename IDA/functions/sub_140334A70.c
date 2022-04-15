#include "../winhttp.h"

//----- (0000000140334A70) ----------------------------------------------------
__int64 __fastcall sub_140334A70(__int64 a1, unsigned __int64 a2, int a3)
{
	__int64 v5; // rax
	int* v6; // rax
	__int64 v7; // rdi
	unsigned __int64 v8; // r8
	unsigned __int64 v9; // rax
	__int64 result; // rax
	__int64 v11; // rcx

	*(_DWORD*)(a1 + 48) |= a3;
	if (!*(_QWORD*)(a1 + 56))
	{
		v5 = *(_QWORD*)(a1 + 8);
		if (*(_QWORD*)(a1 + 16) == v5 && v5 != a2)
		{
			v6 = sub_14018B280(1048i64, 0);
			v7 = (__int64)v6;
			if (v6)
			{
				*(_BYTE*)v6 = 7;
				v6[1] = 128;
				*((_BYTE*)v6 + 8) = 0;
				v6[3] = 1;
				*((_BYTE*)v6 + 16) = 7;
				v6[5] = 128;
				sub_1407E4830(v6 + 6, 0i64, 0x400ui64);
			}
			else
			{
				v7 = 0i64;
			}
			v8 = *(_QWORD*)(a1 + 24);
			v9 = *(_QWORD*)(a1 + 32) / v8;
			*(_QWORD*)(a1 + 56) = v7;
			sub_140334900(v7, v9, v8);
		}
	}
	*(_QWORD*)(a1 + 32) += a2;
	++* (_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 40) += a2 * a2;
	result = sub_14018CDF0();
	*(_DWORD*)(a1 + 4) = result;
	if (a2 > *(_QWORD*)(a1 + 8))
		*(_QWORD*)(a1 + 8) = a2;
	if (*(_QWORD*)(a1 + 16) > a2)
		*(_QWORD*)(a1 + 16) = a2;
	v11 = *(_QWORD*)(a1 + 56);
	if (v11)
		return sub_140334900(v11, a2, 1i64);
	return result;
}

