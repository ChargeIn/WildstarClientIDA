#include "../winhttp.h"

//----- (000000014018DB00) ----------------------------------------------------
int* __fastcall sub_14018DB00(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	unsigned __int64 v3; // rbx
	__int64 v6; // rax
	unsigned __int64 v7; // r8
	__int64 v8; // rdi
	int* v9; // rax

	v3 = a2;
	if (!a2)
		return (int*)a1;
	if (a1)
	{
		if (a2 <= *(_QWORD*)(a1 - 8))
			return (int*)a1;
		v6 = sub_14018A3E0(a3 * a2 + 16);
		v3 = (v6 - 16) / v7;
		v8 = v7 * v3 + 16;
		if ((**(unsigned int(__fastcall***)(__int64, __int64))(a1 - 16))(a1 - 16, v8))
		{
			*(_QWORD*)(a1 - 8) = v3;
			return (int*)a1;
		}
	}
	else
	{
		v8 = a3 * a2 + 16;
	}
	v9 = sub_14018B280(v8, 0);
	if (v9)
	{
		*((_QWORD*)v9 + 1) = v3;
		*(_QWORD*)v9 = off_140B55060;
	}
	return v9 + 4;
}
// 14018DB5A: variable 'v7' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

