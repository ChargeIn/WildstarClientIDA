#include "../winhttp.h"

//----- (0000000140312840) ----------------------------------------------------
__int64 __fastcall sub_140312840(__int64 a1, int a2)
{
	int v4; // eax
	__int64 result; // rax
	__int64 v6; // r9

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
	v4 = *(_DWORD*)(a1 + 1392);
	if ((v4 & 4) != 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
			qword_140C65670,
			1i64,
			1i64,
			3i64);
	}
	else if ((v4 & 0x200) != 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
		if (a2 == 1)
			(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
				qword_140C65670,
				4i64,
				5i64,
				0i64);
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	}
	result = *(unsigned int*)(a1 + 1392);
	if ((result & 0x20) != 0)
	{
		if ((result & 8) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 416i64))(qword_140C65670, 1i64);
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
				qword_140C65670,
				0i64,
				1i64);
			v6 = 0i64;
		}
		else
		{
			if ((result & 0x40) == 0)
				goto LABEL_13;
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 416i64))(qword_140C65670, 1i64);
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
				qword_140C65670,
				0i64,
				1i64);
			v6 = 2i64;
		}
		result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			0i64,
			0i64,
			v6,
			2);
	}
LABEL_13:
	if ((*(_BYTE*)(a1 + 1392) & 0x10) != 0)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 344i64))(qword_140C65670, 0i64);
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

