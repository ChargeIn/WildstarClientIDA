#include "../winhttp.h"

//----- (0000000140641AE0) ----------------------------------------------------
__int64 __fastcall sub_140641AE0(__int64 a1, __int64 a2)
{
	int* v3; // rax
	__int64 v4; // rax
	__int64 v6[24]; // [rsp+30h] [rbp-E8h] BYREF
	__int128 v7; // [rsp+F0h] [rbp-28h]
	int* v8; // [rsp+100h] [rbp-18h]

	sub_1400B6F30((__int64)v6);
	v8 = 0i64;
	v7 = 0i64;
	v6[0] = (__int64)off_140B69230;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v7 = v3;
	*((_QWORD*)&v7 + 1) = v3;
	v8 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	if ((int)sub_1406416D0((__int64)v6, a2, 0) >= 0)
	{
		v4 = sub_1400B7660(v6);
		Apollo_LUAEvent(
			*(_QWORD*)(qword_140C65898 + 29504),
			"GenericFloater",
			"US",
			*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
			*(_QWORD*)(v4 + 8));
	}
	if ((_QWORD)v7)
		sub_14018B900(v7, 0);
	sub_1400B7390(v6);
	return 0i64;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;

