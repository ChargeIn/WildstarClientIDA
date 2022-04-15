#include "../winhttp.h"

//----- (000000014044CFF0) ----------------------------------------------------
__int64 __fastcall sub_14044CFF0(__int64 a1)
{
	int v1; // ebp
	__int64 result; // rax
	unsigned __int64 v4; // rdx
	unsigned __int64 i; // rsi
	unsigned __int64 v6; // rbx
	__int64 v7; // rax
	int* v8; // rdx
	__int64* v9; // rcx

	v1 = 26;
	result = 51i64;
	v4 = *(_QWORD*)(a1 + 80);
	if ((*(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) != 0)
		v1 = 51;
	for (i = 0i64; i < v4; ++i)
	{
		result = *(_QWORD*)(a1 + 72);
		if (*(_DWORD*)(*(_QWORD*)(result + 8 * i) + 4i64) == v1)
		{
			v6 = 0i64;
			if (v4)
			{
				do
				{
					v7 = *(_QWORD*)(a1 + 72);
					v8 = *(int**)(v7 + 8 * v6);
					v9 = *(__int64**)(v7 + 8 * i);
					result = *(unsigned int*)v9;
					if (v8[1] == (_DWORD)result)
						result = sub_140003460(v9 + 6, v8);
					++v6;
				} while (v6 < *(_QWORD*)(a1 + 80));
			}
		}
		v4 = *(_QWORD*)(a1 + 80);
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

