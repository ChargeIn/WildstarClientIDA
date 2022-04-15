#include "../winhttp.h"

//----- (000000014079C320) ----------------------------------------------------
_QWORD* __fastcall sub_14079C320(_QWORD* a1, unsigned __int64 a2)
{
	_QWORD* v3; // rcx

	v3 = a1 + 1;
	*(v3 - 1) = &off_140B78288;
	sub_14079BB60(v3, a2);
	sub_14079BB60(a1 + 8, a2);
	sub_14079BB60(a1 + 15, a2);
	off_140C1B1E0 = (__int64(__fastcall*)())sub_140344C60;
	off_140C1B1E8 = (__int64(__fastcall*)(_QWORD))sub_140001E60;
	off_140C1B1F0 = (__int64(__fastcall*)())sub_140344C60;
	off_140C1B1F8 = sub_140001E60;
	return a1;
}
// 140B78288: using guessed type __int64 (__fastcall *off_140B78288)();
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)();
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);
// 140C1B1F0: using guessed type __int64 (__fastcall *off_140C1B1F0)();
// 140C1B1F8: using guessed type void (__fastcall *off_140C1B1F8)(__int64);

