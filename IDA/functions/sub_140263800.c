#include "../winhttp.h"

//----- (0000000140263800) ----------------------------------------------------
int __fastcall sub_140263800(__int64 a1)
{
	int result; // eax
	_QWORD* i; // rbx

	result = sub_1401981B0((__int64**)(a1 + 16));
	for (i = *(_QWORD**)(a1 + 6152); i; i = (_QWORD*)i[19])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*i + 40i64))(i);
		result = sub_1400035B0();
	}
	return result;
}

