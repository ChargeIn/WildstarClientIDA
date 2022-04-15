#include "../winhttp.h"

//----- (000000014050F770) ----------------------------------------------------
__int64 sub_14050F770()
{
	__int64 v0; // rcx

	if ((_QWORD)xmmword_140C7DCB0 != *((_QWORD*)&xmmword_140C7DCB0 + 1))
	{
		*(_BYTE*)xmmword_140C7DCB0 = 0;
		*((_QWORD*)&xmmword_140C7DCB0 + 1) = xmmword_140C7DCB0;
	}
	HIDWORD(qword_140C7DC74) = 0;
	LODWORD(qword_140C7DC60) = 0;
	sub_140557C30((__int64)&qword_140C7DC60);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Dialog_Close", byte_1409D0BFF);
	sub_140554EA0((__int64)&qword_140C7DC60, 1);
	sub_14034BDD0(v0, 0);
	qword_140C7DC98 = 0i64;
	dword_140C7DCA0 = 0;
	return 0i64;
}
// 14050F7E3: variable 'v0' is possibly undefined
// 1409D0BFF: using guessed type _BYTE byte_1409D0BFF[19];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;
// 140C7DC98: using guessed type __int64 qword_140C7DC98;
// 140C7DCA0: using guessed type int dword_140C7DCA0;
// 140C7DCB0: using guessed type __int128 xmmword_140C7DCB0;

