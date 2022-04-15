#include "../winhttp.h"

//----- (0000000140854420) ----------------------------------------------------
__int64 __fastcall sub_140854420(_QWORD* a1, unsigned int a2, int a3, char a4)
{
	__int64 v6; // rdi
	__int64 v9; // rcx
	__int64 v10; // rax

	v6 = a2;
	if (a2 >= 4)
		return 31i64;
	v9 = a1[6];
	if (!v9)
	{
		v10 = sub_1408819F0(dword_140C10F20, 36i64);
		a1[6] = v10;
		if (v10)
		{
			*(_WORD*)v10 = 0;
			*(_DWORD*)(v10 + 4) = 0;
			*(_WORD*)(v10 + 8) = 0;
			*(_DWORD*)(v10 + 12) = 0;
			*(_WORD*)(v10 + 16) = 0;
			*(_DWORD*)(v10 + 20) = 0;
			*(_WORD*)(v10 + 24) = 0;
			*(_DWORD*)(v10 + 28) = 0;
			*(_BYTE*)(v10 + 32) = 0;
		}
		v9 = a1[6];
		if (!v9)
			return 52i64;
	}
	if (*(_BYTE*)(v9 + 8 * v6 + 1) != a4 || *(_DWORD*)(v9 + 8 * v6 + 4) != a3)
	{
		*(_BYTE*)(v9 + 8 * v6 + 1) = a4;
		*(_DWORD*)(v9 + 8 * v6 + 4) = a3;
		(*(void(__fastcall**)(_QWORD*))(*a1 + 408i64))(a1);
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1 + 264i64))(a1, (unsigned int)v6);
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

