#include "../winhttp.h"

//----- (000000014015D030) ----------------------------------------------------
__int64 __fastcall sub_14015D030(_QWORD* a1, void* a2)
{
	_QWORD* v2; // r8
	__int64 v4; // rcx

	v2 = a1 + 24;
	v4 = a1[24];
	if (!v4)
		return (*(__int64(__fastcall**)(__int64, _QWORD, void*, __int64, _QWORD*))(*(_QWORD*)qword_140C65680 + 40i64))(
			qword_140C65680,
			*(_QWORD*)(*(_QWORD*)(*a1 + 696i64) + 96i64),
			a2,
			-1i64,
			v2);
	if (!a2)
		a2 = &unk_1409DC304;
	return (*(__int64(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)v4 + 56i64))(v4, a2, -1i64);
}
// 140C65680: using guessed type __int64 qword_140C65680;

