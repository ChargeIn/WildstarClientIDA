#include "../winhttp.h"

//----- (0000000140787690) ----------------------------------------------------
double __fastcall sub_140787690(__int64 a1, int a2)
{
	unsigned int** v4; // rax
	unsigned int** v5; // rbx
	double result; // xmm0_8
	__int64 v7; // rcx
	__int64 v8; // rax
	unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

	v4 = (unsigned int**)sub_140717160(a1, a2);
	v5 = v4;
	if (!v4)
		return 0.0;
	v7 = *(_QWORD*)(a1 + 24);
	if ((v7 || *(_QWORD*)(a1 + 32))
		&& (*(int(__fastcall**)(__int64, _QWORD, unsigned int*))(a1 + 32))(v7, **v4, &v9) >= 0)
	{
		*(_QWORD*)&result = v9;
	}
	else
	{
		do
		{
			v8 = sub_140717560(*(_QWORD**)(a1 + 16), **v5);
			if (v8)
				return sub_1407A2950(*(_DWORD*)(v8 + 12));
			v5 = (unsigned int**)v5[1];
		} while (v5);
		if (a2 != (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1))
			return 0.0;
		*(_QWORD*)&result = 1190789120i64;
	}
	return result;
}

