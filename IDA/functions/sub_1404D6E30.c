#include "../winhttp.h"

//----- (00000001404D6E30) ----------------------------------------------------
__int64 __fastcall sub_1404D6E30(__int64 a1)
{
	HWND v3; // rbx
	int* v4; // rax
	void(__fastcall * **v5)(_QWORD); // rcx
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // r8
	__m128i* v10; // rax
	bool v11; // zf
	__m128i* v12; // rcx
	__int16 v13; // ax
	__int64 v14; // r8
	__int64 v15; // rax
	int v16; // eax
	__m128i v17[33]; // [rsp+40h] [rbp-228h] BYREF

	if (!*(_QWORD*)(a1 + 29504))
		return 2147500037i64;
	v3 = *(HWND*)(qword_140C635F0 + 8);
	v4 = sub_14018B280(437264i64, 0);
	if (v4)
		v5 = (void(__fastcall***)(_QWORD))sub_1407A7780((__int64)v4, v3);
	else
		v5 = 0i64;
	v6 = *(_QWORD*)(a1 + 29504);
	*(_QWORD*)(a1 + 30088) = v5;
	if (!*(_QWORD*)(v6 + 2488))
	{
		*(_QWORD*)(v6 + 2488) = v5;
		if (v5)
			(**v5)(v5);
	}
	(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(_DWORD*, __int64, unsigned int, __m128*), __int64))(**(_QWORD**)(a1 + 30088) + 88i64))(
		*(_QWORD*)(a1 + 30088),
		sub_1404D79F0,
		a1);
	(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(__int64, _DWORD*, _DWORD*)))(**(_QWORD**)(a1 + 30088)
		+ 104i64))(
			*(_QWORD*)(a1 + 30088),
			sub_1404D6D00);
	(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(__int64, int, int)))(**(_QWORD**)(a1 + 30088) + 112i64))(
		*(_QWORD*)(a1 + 30088),
		sub_1404D6D90);
	if (qword_140C658C8 && *(_DWORD*)qword_140C658C8 == 2)
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 64i64))(*(_QWORD*)(a1 + 30088), 208i64);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 56i64))(*(_QWORD*)(a1 + 30088));
	v7 = 260i64;
	if ((int)sub_14001B370(
		v17,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 3724i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"UI\\InputMap_Base.xml") >= 0
		&& v17[0].m128i_i16[0])
	{
		v10 = v17;
		do
		{
			v11 = v10->m128i_i16[1] == 0;
			v10 = (__m128i*)((char*)v10 + 2);
		} while (!v11);
	}
	if (!(unsigned int)sub_1401B58D0(v8, v17, v9))
	{
		v12 = v17;
		while (v7 != -2147483386)
		{
			v13 = *(__int16*)((char*)v12->m128i_i16 + (char*)L"UI\\InputMap_Base.xml" - (char*)v17);
			if (!v13)
				break;
			v12->m128i_i16[0] = v13;
			v12 = (__m128i*)((char*)v12 + 2);
			if (!--v7)
			{
				v12 = (__m128i*)((char*)v12 - 2);
				break;
			}
		}
		v12->m128i_i16[0] = 0;
	}
	(*(void(__fastcall**)(_QWORD, const wchar_t*, _QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 432i64))(
		*(_QWORD*)(a1 + 30088),
		L"UI\\InputMap_Base.xml",
		0i64,
		1i64);
	sub_1404DB630(a1, *(_DWORD*)(a1 + 30096), v14, 0);
	*(_DWORD*)(a1 + 30164) = 0;
	sub_1407E4830(dword_140C89A00, 0i64, 0x37Cui64);
	v15 = sub_140200220(0x1EDu);
	if (v15)
		v16 = *(_DWORD*)(v15 + 4);
	else
		v16 = 250;
	dword_140C65904 = v16;
	return 0i64;
}
// 1404D6FE6: conditional instruction was optimized away because rbx.8!=0
// 1404D6FA3: variable 'v8' is possibly undefined
// 1404D6FA3: variable 'v9' is possibly undefined
// 1404D701B: variable 'v14' is possibly undefined
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A473F8: using guessed type wchar_t aSSSS_1[12];
// 140B0A4D8: using guessed type wchar_t aUiInputmapBase[21];
// 140B0A508: using guessed type wchar_t aUiInputmapBase_0[21];
// 140B0A618: using guessed type wchar_t aUiInputmapBase_2[21];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C658C8: using guessed type __int64 qword_140C658C8;
// 140C65904: using guessed type int dword_140C65904;
// 140C89A00: using guessed type int dword_140C89A00[36];
// 1404D6E30: using guessed type __m128i var_228[33];

