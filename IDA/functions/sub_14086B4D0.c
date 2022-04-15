#include "../winhttp.h"

//----- (000000014086B4D0) ----------------------------------------------------
__int64 __fastcall sub_14086B4D0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // r8
	unsigned int v7; // edx
	_DWORD* v8; // rax

	if (a2)
	{
		v4 = sub_1408819F0(dword_140C10F20, 40i64 * a2);
		v5 = v4;
		*(_QWORD*)(a1 + 40) = v4;
		if (!v4)
			return 52i64;
		*(_DWORD*)(a1 + 24) = a2;
		*(_QWORD*)(a1 + 16) = v4;
		v7 = 0;
		if (a2)
		{
			v8 = (_DWORD*)(v4 + 32);
			do
			{
				if (v8 != (_DWORD*)24)
				{
					*((_QWORD*)v8 - 2) = 0i64;
					*((_QWORD*)v8 - 1) = 0i64;
					*v8 = 0;
				}
				++v7;
				v5 += 40i64;
				*(_QWORD*)(v5 - 40) = v8 + 2;
				v8 += 10;
			} while (v7 < *(_DWORD*)(a1 + 24));
		}
		*(_QWORD*)(v5 - 40) = 0i64;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

