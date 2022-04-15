#include "../winhttp.h"

//----- (0000000140843BE0) ----------------------------------------------------
__int64 __fastcall sub_140843BE0(__int64 a1)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 24) = 0i64;
	result = qword_140C61F98;
	if (qword_140C61F98)
	{
		*(_QWORD*)(qword_140C61F98 + 24) = a1;
		++dword_140C61F88;
	}
	else
	{
		++dword_140C61F88;
		qword_140C61F90 = a1;
	}
	qword_140C61F98 = a1;
	return result;
}
// 140C61F88: using guessed type int dword_140C61F88;
// 140C61F90: using guessed type __int64 qword_140C61F90;
// 140C61F98: using guessed type __int64 qword_140C61F98;

