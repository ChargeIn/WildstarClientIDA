#include "../winhttp.h"

//----- (0000000140853680) ----------------------------------------------------
__int64 __fastcall sub_140853680(_QWORD* a1, unsigned int a2, unsigned int a3)
{
	__int64 v6; // rdx
	__int64 v7; // rax

	if ((*(unsigned int(__fastcall**)(_QWORD*))(*a1 + 112i64))(a1))
		(*(void(__fastcall**)(_QWORD*))(*a1 + 112i64))(a1);
	v6 = a1[6];
	if (v6)
	{
	LABEL_9:
		*(_BYTE*)(v6 + 32) = a3 & a2 | *(_BYTE*)(v6 + 32) & ~(_BYTE)a3;
		(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD))(*a1 + 440i64))(a1, a2, a3);
		(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD, _QWORD))(*a1 + 216i64))(a1, a2, a3, 0i64, 0i64);
		return 1i64;
	}
	if (a2)
	{
		v7 = sub_1408819F0(dword_140C10F20, 36i64);
		a1[6] = v7;
		if (v7)
		{
			*(_WORD*)v7 = 0;
			*(_DWORD*)(v7 + 4) = 0;
			*(_WORD*)(v7 + 8) = 0;
			*(_DWORD*)(v7 + 12) = 0;
			*(_WORD*)(v7 + 16) = 0;
			*(_DWORD*)(v7 + 20) = 0;
			*(_WORD*)(v7 + 24) = 0;
			*(_DWORD*)(v7 + 28) = 0;
			*(_BYTE*)(v7 + 32) = 0;
		}
		v6 = a1[6];
		if (!v6)
			return 52i64;
		goto LABEL_9;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

