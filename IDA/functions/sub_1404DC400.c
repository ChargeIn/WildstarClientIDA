#include "../winhttp.h"

//----- (00000001404DC400) ----------------------------------------------------
__int64 __fastcall sub_1404DC400(__int64 a1, int a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int16* v10; // rax
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // edx
	__int16* v14; // rax

	sub_1400B6390((_QWORD*)a1);
	v4 = qword_140C65918;
	*(_QWORD*)a1 = off_140B69300;
	v5 = sub_1404835C0(v4, a2);
	v6 = v5;
	if (v5)
	{
		sub_1400B6A10(a1, (*(_BYTE*)(v5 + 347) & 3) != 0);
		v7 = *(_DWORD*)(v6 + 132);
		*(_DWORD*)(a1 + 20) = v7;
		v8 = sub_1401FF120(v7);
		if (v8)
			(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)a1 + 136i64))(
				a1,
				L"faction",
				*(unsigned int*)(v8 + 12));
		v10 = sub_14034BDD0(v9, *(_DWORD*)(v6 + 8));
		(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"name", v10);
		v11 = sub_14022D500(*(unsigned __int8*)(v6 + 346));
		if (v11)
		{
			if (*(_DWORD*)(a1 + 16) == 1)
				v13 = *(_DWORD*)(v11 + 20);
			else
				v13 = *(_DWORD*)(v11 + 16);
			v14 = sub_14034BDD0(v12, v13);
			(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"race", v14);
		}
	}
	return a1;
}
// 1404DC47D: variable 'v9' is possibly undefined
// 1404DC4B8: variable 'v12' is possibly undefined
// 140A13D18: using guessed type wchar_t aFaction[8];
// 140B0AAD8: using guessed type wchar_t aName_16[5];
// 140B0AAE8: using guessed type wchar_t aRace_2[5];
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C65918: using guessed type __int64 qword_140C65918;

