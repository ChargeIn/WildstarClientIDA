#include "../winhttp.h"

//----- (00000001407E85C8) ----------------------------------------------------
int __fastcall sub_1407E85C8(__int64(__fastcall* a1)(_QWORD, _QWORD, _QWORD), __int64 a2, __int64 a3)
{
	int result; // eax

	if (_security_cookie != qword_140DC52E8)
		return ((__int64(__fastcall*)(__int64(__fastcall*)(_QWORD, _QWORD, _QWORD), __int64, __int64, _QWORD))(_security_cookie ^ qword_140DC52E8))(
			a1,
			a2,
			a3,
			0i64);
	qword_140C60820 = a1;
	result = EnumSystemLocalesW((LOCALE_ENUMPROCW)sub_1407E85BC, 1u);
	qword_140C60820 = 0i64;
	return result;
}
// 140C60820: using guessed type __int64 (__fastcall *qword_140C60820)(_QWORD, _QWORD, _QWORD);
// 140DC52E8: using guessed type __int64 qword_140DC52E8;

