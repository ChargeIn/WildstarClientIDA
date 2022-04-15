#include "../winhttp.h"

//----- (00000001408520B0) ----------------------------------------------------
__int64 __fastcall sub_1408520B0(__int64 a1)
{
	__int64 v1; // rbx
	int v2; // ebp
	__int64 v4; // rdx
	__int64 v5; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 56);
	v2 = dword_140C10F20;
	if (v1)
	{
		v4 = *(_QWORD*)(v1 + 32);
		if (v4)
		{
			*(_QWORD*)(v1 + 40) = v4;
			sub_140881720(dword_140C10F20, v4);
			*(_QWORD*)(v1 + 32) = 0i64;
			*(_QWORD*)(v1 + 40) = 0i64;
			*(_DWORD*)(v1 + 48) = 0;
		}
		*(_QWORD*)(v1 + 24) = 0i64;
		v5 = *(_QWORD*)v1;
		if (*(_QWORD*)v1)
		{
			*(_QWORD*)(v1 + 8) = v5;
			sub_140881720(dword_140C10F20, v5);
			*(_QWORD*)v1 = 0i64;
			*(_QWORD*)(v1 + 8) = 0i64;
			*(_DWORD*)(v1 + 16) = 0;
		}
		result = sub_140881720(v2, v1);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

