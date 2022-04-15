#include "../winhttp.h"

//----- (0000000140554510) ----------------------------------------------------
void __fastcall sub_140554510(__int64 a1, int a2)
{
	if ((_DWORD)qword_140C7DC60)
		sub_1405548F0((__int64)&qword_140C7DC60);
	HIDWORD(qword_140C7DC60) = a2;
	qword_140C7DC6C = -4294966996i64;
	dword_140C7DC68 = 0;
	LODWORD(qword_140C7DC74) = 0;
	if (sub_140554470())
		sub_1405546B0((__int64)&qword_140C7DC60, 0, 0);
	else
		HIDWORD(qword_140C7DC60) = 0;
}
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC68: using guessed type int dword_140C7DC68;
// 140C7DC6C: using guessed type __int64 qword_140C7DC6C;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;

