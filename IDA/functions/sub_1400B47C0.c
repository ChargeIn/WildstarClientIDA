#include "../winhttp.h"

//----- (00000001400B47C0) ----------------------------------------------------
__int64 __fastcall sub_1400B47C0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx

	if (!(_QWORD)xmmword_140C67080 || qword_140C67248)
		return 2147500037i64;
	qword_140C67248 = a2;
	v2 = (*(__int64(__fastcall**)(_QWORD, __int64*))(*(_QWORD*)xmmword_140C67080 + 128i64))(
		xmmword_140C67080,
		&qword_140C67158);
	(*(void(__fastcall**)(__int64, const char*))(*(_QWORD*)v2 + 56i64))(v2, "2B8B8FCF-FD82-FDDC-0094-39FB650090F0");
	(*(void(__fastcall**)(__int64, RPC_CSTR))(*(_QWORD*)v2 + 48i64))(v2, StringUuid);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	return 0i64;
}
// 140C67080: using guessed type __int128 xmmword_140C67080;
// 140C67158: using guessed type __int64 qword_140C67158;
// 140C67248: using guessed type __int64 qword_140C67248;

