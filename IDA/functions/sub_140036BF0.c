#include "../winhttp.h"

//----- (0000000140036BF0) ----------------------------------------------------
__int64 __fastcall sub_140036BF0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rcx
	unsigned int v5; // edi
	__int64 v6; // rcx
	__int64 v7; // rbx
	int v8; // eax
	__int64 v10[2]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF

	v2 = (_QWORD*)qword_140C635F0;
	*(_QWORD*)(qword_140C635F0 + 5688) = 0i64;
	v2[712] = 0i64;
	sub_140016E90(v2);
	v3 = qword_140C635F0;
	sub_14018B900(*(_QWORD*)(qword_140C635F0 + 5776), 0);
	v4 = qword_140C635F0;
	v5 = 0;
	*(_QWORD*)(v3 + 5776) = 0i64;
	*(_QWORD*)(v4 + 5792) = 0i64;
	sub_140011800(v4, 0i64);
	v6 = qword_140C635F0;
	*(_DWORD*)(qword_140C635F0 + 5760) = 0;
	sub_1400114E0(v6, 0i64);
	v7 = qword_140C635F0;
	sub_140019510(qword_140C635F0 + 5816);
	sub_140019490((_QWORD*)(v7 + 5816));
	v11[0] = (__int64)L"Top";
	v11[1] = (__int64)L"Login";
	v10[0] = (__int64)L"Login";
	*(_DWORD*)(a1 + 168) = 0;
	v10[1] = (__int64)L"Credits";
	v8 = sub_14003DB40(a1, (__int64)v11, 2ui64, (__int64)v10, 2ui64);
	if (v8 < 0)
		return (unsigned int)v8;
	return v5;
}
// 1409F5668: using guessed type wchar_t aTop_0[4];
// 1409F5670: using guessed type wchar_t aLogin_0[6];
// 1409F5680: using guessed type wchar_t aLogin[6];
// 1409F56A8: using guessed type wchar_t aCredits_1[8];
// 140C635F0: using guessed type __int64 qword_140C635F0;

