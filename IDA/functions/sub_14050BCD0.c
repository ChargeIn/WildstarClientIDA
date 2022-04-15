#include "../winhttp.h"

//----- (000000014050BCD0) ----------------------------------------------------
int* __fastcall sub_14050BCD0(__int64 a1)
{
	int* result; // rax
	unsigned __int64* v3; // rdx
	unsigned __int64 v4; // r8
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]

	result = sub_14053B190(qword_140C65898);
	if (result)
	{
		v3 = (unsigned __int64*)sub_14018F0E0(&v5, (unsigned __int16*)result)[1];
		if (v3)
		{
			v4 = -1i64;
			do
				++v4;
			while (*((_BYTE*)v3 + v4));
			sub_140058710(a1, v3, v4);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v6)
			sub_14018B900(v6, 0);
		return (int*)1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

