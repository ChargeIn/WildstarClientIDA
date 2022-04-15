#include "../winhttp.h"

//----- (000000014001C830) ----------------------------------------------------
_WORD* __fastcall sub_14001C830(__int64 a1)
{
	__int64 v1; // rsi
	int* v3; // rax
	_WORD* result; // rax

	v1 = *(_QWORD*)(a1 + 568);
	v3 = sub_14018B280(18i64, 0);
	if (v3)
	{
		*((_QWORD*)v3 + 1) = 0i64;
		*(_QWORD*)v3 = off_140B55060;
	}
	else
	{
		v3 = 0i64;
	}
	result = v3 + 4;
	*result = 0;
	*(_QWORD*)(a1 + 568) = result;
	if (v1)
		result = (_WORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v1 - 16) + 8i64))(v1 - 16);
	*(_DWORD*)(a1 + 592) = 6;
	*(_QWORD*)(a1 + 608) = 0i64;
	*(_DWORD*)(a1 + 600) = -1;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

