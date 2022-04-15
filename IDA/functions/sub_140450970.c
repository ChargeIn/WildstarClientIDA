#include "../winhttp.h"

//----- (0000000140450970) ----------------------------------------------------
_WORD* sub_140450970()
{
	__int64 v0; // rbx
	_WORD* result; // rax
	DWORD v2; // eax
	__int64 v3; // rdi
	int* v4; // rax
	_DWORD v5[2]; // [rsp+20h] [rbp-E8h] BYREF
	__int64 v6; // [rsp+28h] [rbp-E0h]
	__int64 v7; // [rsp+30h] [rbp-D8h]
	__int64 v8; // [rsp+38h] [rbp-D0h]
	struct _TIME_ZONE_INFORMATION TimeZoneInformation; // [rsp+40h] [rbp-C8h] BYREF

	v0 = qword_140C65908;
	result = *(_WORD**)(qword_140C65908 + 456);
	if (*((_QWORD*)result - 1))
	{
		v5[0] = 0;
		v7 = 0i64;
		v8 = 0i64;
		v2 = GetTimeZoneInformation(&TimeZoneInformation);
		v5[1] = -(TimeZoneInformation.Bias + TimeZoneInformation.StandardBias);
		v6 = (unsigned int)-(TimeZoneInformation.Bias + TimeZoneInformation.DaylightBias);
		if (v2 <= 1)
		{
			v5[0] = -(TimeZoneInformation.Bias + TimeZoneInformation.StandardBias);
		}
		else if (v2 == 2)
		{
			v5[0] = -(TimeZoneInformation.Bias + TimeZoneInformation.DaylightBias);
		}
		v7 = *(_QWORD*)(v0 + 456);
		v8 = *(_QWORD*)(qword_140C7AAC0 + 24);
		sub_1400161D0(qword_140C635F0, 0x825u, (__int64)v5);
		v3 = *(_QWORD*)(v0 + 456);
		v4 = sub_14018B280(18i64, 0);
		if (v4)
		{
			*(_QWORD*)v4 = off_140B55060;
			*((_QWORD*)v4 + 1) = 0i64;
		}
		else
		{
			v4 = 0i64;
		}
		result = v4 + 4;
		*result = 0;
		*(_QWORD*)(v0 + 456) = result;
		if (v3)
			return (_WORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

