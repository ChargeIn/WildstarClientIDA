#include "../winhttp.h"

//----- (000000014051B690) ----------------------------------------------------
char __fastcall sub_14051B690(__int64 a1)
{
	char result; // al
	__int64 v3; // rcx

	result = qword_140C635F0;
	if (!*(_DWORD*)(qword_140C635F0 + 5896) && *(_DWORD*)(a1 + 16))
	{
		v3 = *(_QWORD*)(qword_140C635F0 + 5584);
		if (*(_QWORD*)(v3 + 216))
		{
			sub_140006F80(v3);
			return sub_1400D4040(*(_QWORD*)(a1 + 8), "AccountCREDDRedeemed", *(char**)(a1 + 8), &byte_140B7B700);
		}
	}
	return result;
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C635F0: using guessed type __int64 qword_140C635F0;

