#include "../winhttp.h"

//----- (000000014053B6F0) ----------------------------------------------------
__int64 __fastcall sub_14053B6F0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rax
	_QWORD* v5; // rdi
	__int64 v6; // rax

	v3 = qword_140C65898;
	v5 = (_QWORD*)(qword_140C65898 + 29832);
	*(_DWORD*)(qword_140C65898 + 29848) = a3;
	if (*v5)
		return (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*v5 + 56i64))(*v5, a2, -1i64);
	v6 = sub_1400E58C0(*(_QWORD*)(v3 + 29504), (int*)L"Subtitle");
	return (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64, _QWORD*))(*(_QWORD*)qword_140C65680 + 40i64))(
		qword_140C65680,
		*(_QWORD*)(v6 + 96),
		a2,
		-1i64,
		v5);
}
// 140B146D8: using guessed type wchar_t aSubtitle_0[9];
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;

