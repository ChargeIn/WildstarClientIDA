#include "../winhttp.h"

//----- (0000000140441F20) ----------------------------------------------------
__int64 __fastcall sub_140441F20(__int64 a1, int a2)
{
	int* v3; // rdi
	int* v4; // rax
	int* v5; // rdx
	__int64 v6; // rcx

	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)a1 = a2;
	*(_DWORD*)(a1 + 4) = 0;
	if (*(_QWORD*)(a1 + 16) > 0x20ui64)
		*(_QWORD*)(a1 + 16) = 32i64;
	v3 = *(int**)(a1 + 8);
	if (v3 && (**((unsigned int(__fastcall***)(__int64, __int64))v3 - 2))((__int64)(v3 - 4), 272i64))
	{
		*((_QWORD*)v3 - 1) = 32i64;
	}
	else
	{
		v4 = sub_14018B280(272i64, 0);
		if (v4)
		{
			*((_QWORD*)v4 + 1) = 32i64;
			*(_QWORD*)v4 = off_140B55060;
		}
		v3 = v4 + 4;
	}
	v5 = *(int**)(a1 + 8);
	if (v5 != v3)
	{
		sub_1407DB590(v3, v5, 8i64 * *(_QWORD*)(a1 + 16));
		v6 = *(_QWORD*)(a1 + 8);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
		*(_QWORD*)(a1 + 8) = v3;
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

