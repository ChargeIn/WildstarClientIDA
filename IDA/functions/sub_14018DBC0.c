#include "../winhttp.h"

//----- (000000014018DBC0) ----------------------------------------------------
int* __fastcall sub_14018DBC0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rbx
	int* v7; // rax

	if (!a2)
		return 0i64;
	v6 = a3 * a2;
	if (a1 && (**(unsigned int(__fastcall***)(__int64, __int64))(a1 - 16))(a1 - 16, v6 + 16))
	{
		*(_QWORD*)(a1 - 8) = a2;
		return (int*)a1;
	}
	else
	{
		v7 = sub_14018B280(v6 + 16, 0);
		if (v7)
		{
			*((_QWORD*)v7 + 1) = a2;
			*(_QWORD*)v7 = off_140B55060;
		}
		return v7 + 4;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

