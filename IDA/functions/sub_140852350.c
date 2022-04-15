#include "../winhttp.h"

//----- (0000000140852350) ----------------------------------------------------
__int64 __fastcall sub_140852350(__int64 a1)
{
	unsigned __int8* v1; // rdx
	__int64 result; // rax
	unsigned __int8* v4; // rcx
	unsigned __int8* v5; // rbx
	unsigned __int8* v6; // rdi
	__int64* v7; // rbx
	signed __int64 v8; // rdi

	v1 = *(unsigned __int8**)(a1 + 32);
	if (v1)
	{
		result = 4294967292i64;
		v4 = v1 + 1;
		v5 = &v1[(*v1 + 4) & 0xFFFFFFFC];
	}
	else
	{
		v4 = 0i64;
		v5 = 0i64;
	}
	if (v1)
	{
		result = *v1;
		v6 = &v1[result + 1];
	}
	else
	{
		v6 = 0i64;
	}
	if (v4 != v6)
	{
		v7 = (__int64*)(v5 + 8);
		v8 = v6 - v4;
		do
		{
			if (*v7)
			{
				sub_14083B060(qword_140C61B70, *v7, a1);
				*v7 = 0i64;
				result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 312i64))(
					*(_QWORD*)(a1 + 24),
					3i64);
			}
			v7 += 2;
			--v8;
		} while (v8);
	}
	return result;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

