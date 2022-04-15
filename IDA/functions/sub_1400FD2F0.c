#include "../winhttp.h"

//----- (00000001400FD2F0) ----------------------------------------------------
__int64 __fastcall sub_1400FD2F0(__int64 a1, unsigned int a2, unsigned int a3, int** a4)
{
	int v4; // r10d
	__int64 v5; // rdi
	int v7; // eax
	int* v10; // rbx
	__int64 v11; // rax

	v4 = dword_140C3CB80;
	v5 = qword_140C63658;
	v7 = dword_140C3CB80;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v7 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v7 + 32) || !*(_QWORD*)(qword_140C63658 + 32) || !*(_DWORD*)(qword_140C63658 + 44))
		return 2147500037i64;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v4 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v4 + 32) || !*(_QWORD*)(qword_140C63658 + 120))
		return 2147500037i64;
	v10 = *a4;
	v11 = sub_14018DC50(*a4);
	*(_BYTE*)(v11 + 255) = 0;
	*a4 = (int*)v11;
	if (v10 != (int*)v11)
	{
		if (v10)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
	}
	return (*(unsigned int(__fastcall**)(_QWORD, _QWORD, int*, _QWORD))(v5 + 120))(
		a2,
		a3,
		*a4,
		(unsigned int)*(*a4 - 2)) != 0
		? 0x80004005
		: 0;
}
// 140C3CB70: using guessed type __int64 (__fastcall *off_140C3CB70)();
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;

