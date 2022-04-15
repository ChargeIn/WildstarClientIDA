#include "../winhttp.h"

//----- (00000001405B0DB0) ----------------------------------------------------
__int64* sub_1405B0DB0()
{
	__int64 v0; // rdi
	__int64 v1; // rbx
	__int64* result; // rax

	qword_140C7DFE0 = 0i64;
	qword_140C7DFB0 = (__int64)off_140B6CFF8;
	xmmword_140C7DFC0 = 0i64;
	unk_140C7DFD0 = 0i64;
	sub_140019600(&qword_140C7DFE8);
	v0 = *((_QWORD*)&xmmword_140C7DFC0 + 1);
	v1 = xmmword_140C7DFC0;
	sub_1407DB590((int*)xmmword_140C7DFC0, *((int**)&xmmword_140C7DFC0 + 1), 0i64);
	result = &qword_140C7DFB0;
	*((_QWORD*)&xmmword_140C7DFC0 + 1) -= 8 * ((v0 - v1) >> 3);
	return result;
}
// 140B6CFF8: using guessed type __int64 (__fastcall *off_140B6CFF8[2])();
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;
// 140C7DFE8: using guessed type _QWORD qword_140C7DFE8;

