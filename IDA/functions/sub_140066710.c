#include "../winhttp.h"

//----- (0000000140066710) ----------------------------------------------------
__int64 __fastcall sub_140066710(__int64 a1, int* a2)
{
	bool v2; // zf
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	char* v8; // rdx
	__int64 result; // rax
	const char* v10; // rax
	const char* v11; // rax

	v2 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v2)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v5 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v5;
	}
	sub_140067E60(a1, a2, 0i64);
	v6 = *(_QWORD*)(a1 + 48);
	if (a2[4] == a2[5])
		sub_14006A700(v6, a2);
	else
		sub_14006AB60(v6, a2);
	if (*(_DWORD*)(a1 + 16) != 93)
	{
		v7 = sub_1407DE7F8(93);
		v8 = aCharD;
		if (!v7)
			v8 = aC_16;
		v10 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)v8, 93i64);
		v11 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", v10);
		sub_140062CF0(a1, v11, *(_DWORD*)(a1 + 16));
	}
	v2 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v2)
	{
		result = sub_140063BB0(a1, (__int64*)(a1 + 24));
		*(_DWORD*)(a1 + 16) = result;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		result = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = result;
	}
	return result;
}
// 140067E60: using guessed type __int64 __fastcall sub_140067E60(_QWORD, _QWORD, _QWORD);

