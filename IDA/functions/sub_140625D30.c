#include "../winhttp.h"

//----- (0000000140625D30) ----------------------------------------------------
__int64 __fastcall sub_140625D30(__int64 a1)
{
	__int64 v1; // rbp
	__int64 v3; // rsi
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	__int64 result; // rax
	int v7; // [rsp+40h] [rbp+8h] BYREF

	v1 = 0i64;
	if (!*(_QWORD*)(a1 + 24))
		return 0i64;
	while (1)
	{
		v3 = qword_140C65898;
		v7 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * v1);
		v4 = (*(__int64(__fastcall**)(int*))(qword_140C65898 + 28448))(&v7);
		v5 = *(_QWORD**)(*(_QWORD*)(v3 + 28440) + 8 * (v4 % *(_QWORD*)(v3 + 28432)));
		if (v5)
		{
			while (v4 != *v5 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 28456))(&v7, v5 + 2))
			{
				v5 = (_QWORD*)v5[1];
				if (!v5)
					goto LABEL_10;
			}
			if (v5 != (_QWORD*)-24i64)
			{
				result = v5[3];
				if (result)
				{
					if (!*(_DWORD*)(result + 592))
						return result;
				}
			}
		}
	LABEL_10:
		if ((unsigned __int64)++v1 >= *(_QWORD*)(a1 + 24))
			return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

