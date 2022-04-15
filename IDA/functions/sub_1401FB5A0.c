#include "../winhttp.h"

//----- (00000001401FB5A0) ----------------------------------------------------
__int64 __fastcall sub_1401FB5A0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A018, a1, qword_140C63858);
	if (dword_140C65190 || (int)sub_1401FB340() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C651B8 + 24i64))(qword_140C651B8, a1);
}
// 140A6A018: using guessed type wchar_t *off_140A6A018[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65190: using guessed type int dword_140C65190;
// 140C651B8: using guessed type __int64 qword_140C651B8;

