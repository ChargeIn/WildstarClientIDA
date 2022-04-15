#include "../winhttp.h"

//----- (000000014015D6E0) ----------------------------------------------------
bool __fastcall sub_14015D6E0(__int64 a1, __int64 a2)
{
	const WCHAR* v3; // rbp
	const WCHAR* lpString2; // rsi
	_QWORD* v5; // rdx
	_QWORD* v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9; // ebx
	int v10; // eax

	v3 = &String1;
	lpString2 = &String2;
	if (dword_140C63680 < 0 || dword_140C63680 >= *(_DWORD*)(a1 + 24))
		v5 = 0i64;
	else
		v5 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8i64 * dword_140C63680);
	if (dword_140C63680 < 0 || dword_140C63680 >= *(_DWORD*)(a2 + 24))
		v6 = 0i64;
	else
		v6 = *(_QWORD**)(*(_QWORD*)(a2 + 16) + 8i64 * dword_140C63680);
	if (v5)
	{
		if (v5[3] == v5[4])
		{
			v7 = v5[24];
			if (v7)
				v3 = (const WCHAR*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 64i64))(v7);
			else
				v3 = (const WCHAR*)&unk_1409DC2EC;
		}
		else
		{
			v3 = (const WCHAR*)v5[3];
		}
	}
	if (v6)
	{
		if (v6[3] == v6[4])
		{
			v8 = v6[24];
			if (v8)
				lpString2 = (const WCHAR*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 64i64))(v8);
			else
				lpString2 = (const WCHAR*)&unk_1409DC2EC;
		}
		else
		{
			lpString2 = (const WCHAR*)v6[3];
		}
	}
	v9 = -1;
	v10 = CompareStringW(*(_DWORD*)(qword_140C7AAC0 + 12), 0, v3, -1, lpString2, -1);
	if (v10 != 1)
		v9 = v10 == 3;
	return v9 < 0;
}
// 140C63680: using guessed type int dword_140C63680;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

