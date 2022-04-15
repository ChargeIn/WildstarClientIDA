#include "../winhttp.h"

//----- (000000014051C7D0) ----------------------------------------------------
char __fastcall sub_14051C7D0(__int64 a1)
{
	char result; // al
	int v3; // [rsp+20h] [rbp-18h]

	result = qword_140C65B98;
	if (*(_QWORD*)(qword_140C65B98 + 208) || *(_DWORD*)(qword_140C65B98 + 172) || *(_DWORD*)(qword_140C65B98 + 180))
	{
		sub_1405C3500(a1, *(_DWORD*)(a1 + 16));
		v3 = *(_DWORD*)(a1 + 16);
		return sub_1400D4040(*(_QWORD*)(a1 + 8), "MatchingGameRespondedToPending", *(char**)(a1 + 8), L"b", v3);
	}
	return result;
}
// 140B6B934: using guessed type wchar_t aB_1[2];
// 140C65B98: using guessed type __int64 qword_140C65B98;

