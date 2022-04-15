#include "../winhttp.h"

//----- (000000014072B820) ----------------------------------------------------
__int64 sub_14072B820()
{
	__int64 v0; // rbx
	__int64 v1; // rcx

	v0 = qword_140C665E0;
	if (qword_140C665E0)
	{
		if (dword_140C4B488)
			sub_14072AFA0(qword_140C665E0, &dword_140C4B488);
		v1 = *(_QWORD*)(v0 + 1168);
		*(_DWORD*)(v0 + 20) = 10;
		sub_14078B4A0(v1);
	}
	if (qword_140C65898)
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ShowInventory", byte_1409E9CE4, 1i64);
	return 0i64;
}
// 1409E9CE4: using guessed type _BYTE byte_1409E9CE4[24];
// 140C4B488: using guessed type int dword_140C4B488;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C665E0: using guessed type __int64 qword_140C665E0;

