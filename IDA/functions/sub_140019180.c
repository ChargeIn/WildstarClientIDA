#include "../winhttp.h"

//----- (0000000140019180) ----------------------------------------------------
void sub_140019180()
{
	__int64 v0; // rbx

	if ((_QWORD)xmmword_140C67080)
	{
		if (!qword_140C67248)
		{
			qword_140C67248 = (__int64)sub_140018EE0;
			v0 = (*(__int64(__fastcall**)(_QWORD, __int64*))(*(_QWORD*)xmmword_140C67080 + 128i64))(
				xmmword_140C67080,
				&qword_140C67158);
			(*(void(__fastcall**)(__int64, const char*))(*(_QWORD*)v0 + 56i64))(
				v0,
				"2B8B8FCF-FD82-FDDC-0094-39FB650090F0");
			(*(void(__fastcall**)(__int64, RPC_CSTR))(*(_QWORD*)v0 + 48i64))(v0, StringUuid);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v0 + 8i64))(v0);
		}
	}
}
// 140C67080: using guessed type __int128 xmmword_140C67080;
// 140C67158: using guessed type __int64 qword_140C67158;
// 140C67248: using guessed type __int64 qword_140C67248;

