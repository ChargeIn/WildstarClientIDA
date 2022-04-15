#include "../winhttp.h"

//----- (0000000140954720) ----------------------------------------------------
void sub_140954720()
{
	__int64 v0; // rcx

	qword_140C7DFB0 = (__int64)off_140B6CFF8;
	sub_1405B0EC0(&qword_140C7DFB0);
	sub_140019490(&qword_140C7DFE8);
	sub_14018B900(qword_140C7DFF8, 0);
	qword_140C7DFF8 = 0i64;
	nullsub_1(v0);
	if ((_QWORD)xmmword_140C7DFC0)
		sub_14018B900(xmmword_140C7DFC0, 0);
}
// 140954763: variable 'v0' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140B6CFF8: using guessed type __int64 (__fastcall *off_140B6CFF8[2])();
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 140C7DFE8: using guessed type _QWORD qword_140C7DFE8;
// 140C7DFF8: using guessed type __int64 qword_140C7DFF8;

