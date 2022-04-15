#include "../winhttp.h"

//----- (00000001406F08C0) ----------------------------------------------------
__int64 __fastcall sub_1406F08C0(__int64 a1)
{
	int v2; // eax
	int* v3; // rax
	unsigned __int16* v4; // rdx
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]

	if (qword_140C65970 && qword_140C65898 && *(_DWORD*)(qword_140C65970 + 8) == 2)
	{
		v2 = dword_140C4D460;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D460)
			v2 = *(_DWORD*)qword_140C63750;
		v3 = sub_1403A8810(qword_140C65898, 0, *((_DWORD*)&xmmword_140C4D470 + v2));
		if (!v3 || (v4 = (unsigned __int16*)(v3 + 2), v3 == (int*)-8i64))
			v4 = (unsigned __int16*)&unk_1409F7E8C;
		v5 = (unsigned __int64*)sub_14018F0E0(&v8, v4)[1];
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			sub_140058710(a1, v5, v6);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v9)
		{
			sub_14018B900(v9, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return 1i64;
}
// 140C4D460: using guessed type int dword_140C4D460;
// 140C4D470: using guessed type __int128 xmmword_140C4D470;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

