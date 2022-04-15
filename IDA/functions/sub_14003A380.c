#include "../winhttp.h"

//----- (000000014003A380) ----------------------------------------------------
__int64 sub_14003A380()
{
	_QWORD* v0; // rbx
	__int64 v1; // rax
	int v2; // edi
	__int64 v3; // rax
	__int64 v4; // rbx
	unsigned __int16* v5; // rax
	int* v6; // rcx

	v0 = *(_QWORD**)(qword_140C66E30 + 72);
	v1 = sub_1400E9080(v0, L"SaveIP");
	v2 = 0;
	if (v1)
		LOBYTE(v2) = sub_1401301F0(v1);
	v3 = sub_1400E9080(v0, L"VerificationCode");
	v4 = qword_140C66E30;
	v5 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
	*(_DWORD*)(v4 + 168) = 3;
	sub_1400B3480(v6, v5, v2);
	return 0i64;
}
// 14003A3E8: variable 'v6' is possibly undefined
// 1409F62C8: using guessed type wchar_t aVerificationco_0[17];
// 1409F62F0: using guessed type wchar_t aSaveip_1[7];
// 140C66E30: using guessed type __int64 qword_140C66E30;

