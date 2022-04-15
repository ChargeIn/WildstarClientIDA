#include "../winhttp.h"

//----- (000000014034B2F0) ----------------------------------------------------
__int64 __fastcall sub_14034B2F0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	_WORD* v3; // rcx
	__int64 v4; // r9
	_WORD* v5; // r8
	__int16 v6; // ax
	int v7; // eax

	result = *(unsigned int*)(a1 + 8);
	if ((_DWORD)result != -1)
	{
		v3 = (_WORD*)(a2 + 6);
		*(_DWORD*)a2 = result;
		*(_WORD*)(a2 + 4) = 257;
		v4 = 16i64;
		v5 = (_WORD*)(a2 + 6);
		while (v4 != -2147483630)
		{
			v6 = *(_WORD*)((char*)v5 + (_QWORD)&aSndwwiseio[-3] - a2);
			if (!v6)
				break;
			*v5++ = v6;
			if (!--v4)
			{
				--v5;
				break;
			}
		}
		v7 = 0;
		for (*v5 = 0; *v3; ++v7)
			++v3;
		result = (unsigned int)(v7 + 1);
		*(_DWORD*)(a2 + 40) = result;
	}
	return result;
}
// 14034B348: conditional instruction was optimized away because r9.8!=0
// 140AF46E8: using guessed type wchar_t aSndwwiseio[11];

