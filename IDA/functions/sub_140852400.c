#include "../winhttp.h"

//----- (0000000140852400) ----------------------------------------------------
__int64 __fastcall sub_140852400(__int64 a1)
{
	__int64 i; // rbx
	unsigned __int8* v2; // rcx
	unsigned __int8* v3; // rdx
	unsigned __int8* v4; // rdi
	__int64 result; // rax
	unsigned __int8* v6; // rsi
	__int64* v7; // rdi
	signed __int64 v8; // rsi

	for (i = *(_QWORD*)(a1 + 32); i; i = *(_QWORD*)(i + 16))
	{
		v2 = *(unsigned __int8**)(i + 32);
		if (v2)
		{
			v3 = v2 + 1;
			v4 = &v2[(*v2 + 4) & 0xFFFFFFFC];
		}
		else
		{
			v3 = 0i64;
			v4 = 0i64;
		}
		if (v2)
		{
			result = *v2;
			v6 = &v2[result + 1];
		}
		else
		{
			v6 = 0i64;
		}
		if (v3 != v6)
		{
			v7 = (__int64*)(v4 + 8);
			v8 = v6 - v3;
			do
			{
				if (*v7)
				{
					sub_14083B060(qword_140C61B70, *v7, i);
					*v7 = 0i64;
					result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(i + 24) + 312i64))(
						*(_QWORD*)(i + 24),
						3i64);
				}
				v7 += 2;
				--v8;
			} while (v8);
		}
	}
	return result;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

