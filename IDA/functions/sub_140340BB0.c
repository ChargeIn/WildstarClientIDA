#include "../winhttp.h"

//----- (0000000140340BB0) ----------------------------------------------------
__int64 __fastcall sub_140340BB0(__int64 a1, __int64(__fastcall* a2)(__int64, __int64), __int64 a3)
{
	__int64 result; // rax
	__int64* v6; // rdi
	__int64 v7; // r14
	__int64 i; // rbx
	unsigned int v9; // [rsp+58h] [rbp+20h]

	result = v9;
	v6 = (__int64*)&unk_140C7A100;
	v7 = 32i64;
	do
	{
		for (i = *v6; i; i = *(_QWORD*)(i + 624))
		{
			result = a2(i, a3);
			if ((int)result < 0)
				break;
		}
		++v6;
		--v7;
	} while (v7);
	return result;
}

