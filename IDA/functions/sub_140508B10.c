#include "../winhttp.h"

//----- (0000000140508B10) ----------------------------------------------------
_QWORD* __fastcall sub_140508B10(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v4; // r14
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rdi
	__int64 v9; // rax

	v4 = a3;
	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x2E8BA2E8BA2E8BA3i64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 4);
	if (v6 > 0)
	{
		v7 = a2 + 24;
		v8 = (__int64)(a3 + 2);
		do
		{
			v9 = *(_QWORD*)(v7 - 112);
			v7 -= 88i64;
			v4 -= 11;
			*v4 = v9;
			v8 -= 88i64;
			*(_QWORD*)(v8 - 8) = *(_QWORD*)(v7 - 16);
			if (v7 - 8 != v8)
				sub_14001C480(v8, *(int**)v7, *(int**)(v7 + 8));
			*(_DWORD*)(v8 + 32) = *(_DWORD*)(v7 + 24);
			*(_DWORD*)(v8 + 36) = *(_DWORD*)(v7 + 28);
			if (v7 + 32 != v8 + 40)
				sub_14001C480(v8 + 40, *(int**)(v7 + 40), *(int**)(v7 + 48));
			--v6;
		} while (v6 > 0);
	}
	return v4;
}

