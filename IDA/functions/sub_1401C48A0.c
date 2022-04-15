#include "../winhttp.h"

//----- (00000001401C48A0) ----------------------------------------------------
void sub_1401C48A0()
{
	sub_14018B900(xmmword_140C78590, 0);
	sub_14018B900(*((__int64*)&xmmword_140C78590 + 1), 0);
	sub_14018B900(xmmword_140C785A0, 0);
	if (*((_QWORD*)&xmmword_140C785A0 + 1))
		sub_1401C5500(*((__int64*)&xmmword_140C785A0 + 1));
	if (qword_140C796E8)
		CloseHandle(qword_140C796E8);
	TlsFree(dword_140C785BC);
	sub_140019490(&qword_140C78568);
	sub_14018B900(qword_140C78578, 0);
	qword_140C78578 = 0i64;
}
// 140C78568: using guessed type __int64 qword_140C78568;
// 140C78578: using guessed type __int64 qword_140C78578;
// 140C78590: using guessed type __int128 xmmword_140C78590;
// 140C785A0: using guessed type __int128 xmmword_140C785A0;

