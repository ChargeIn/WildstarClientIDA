#include "../winhttp.h"

//----- (0000000140033780) ----------------------------------------------------
__int64 __fastcall sub_140033780(__int64 a1, __int64 a2, void(__fastcall*** a3)(_QWORD))
{
	__int64 result; // rax
	int* v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // eax
	_QWORD* v11; // rax
	__int64 v12; // rax

	result = sub_14000B690(a1, 3i64);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
			qword_140C65670,
			L"UI\\Cursors\\Point.tex",
			a1 + 80);
		if ((int)result >= 0)
		{
			if (a3)
			{
				*(_QWORD*)(a1 + 104) = a3;
				(**a3)(a3);
			}
			*(_DWORD*)(a1 + 96) = 0;
			*(_DWORD*)(a1 + 72) = 0;
			v7 = sub_14018B280(3632i64, 0);
			if (v7)
				v8 = sub_1400E2EF0(
					(__int64)v7,
					(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloFonts.xml",
					(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloCursors.xml",
					0i64,
					0i64);
			else
				v8 = 0i64;
			*(_QWORD*)(a1 + 88) = v8;
			sub_1400E4E80(v8, 1);
			v9 = *(_QWORD*)(a1 + 88);
			v10 = *(_DWORD*)(v9 + 60);
			if (v10 > 1366)
				v10 = 1366;
			*(_DWORD*)(v9 + 56) = v10;
			sub_1400E7190(*(_QWORD*)(a1 + 88), (int*)L"ErrorScreen", 0);
			sub_1400E7190(*(_QWORD*)(a1 + 88), (int*)L"DefaultStratum", 0);
			v11 = sub_1400F52E0(
				*(_QWORD*)(a1 + 88) + 2688i64,
				(__m128i*)L"UI\\PreGame\\ErrorScreen\\ErrorScreen.xml",
				(int*)L"ErrorMessage",
				(__int64)L"ErrorScreen",
				0i64,
				-2);
			if (v11)
			{
				sub_1400D42F0((__int64)v11, 1, 1, 4.0);
				v12 = sub_1400E9080(*(_QWORD**)(a1 + 88), L"ErrorMessageText");
				if (v12)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 80i64))(v12, a2);
			}
			return 0i64;
		}
	}
	return result;
}
// 1409EED60: using guessed type wchar_t aUiCursorsPoint_1[21];
// 1409EED90: using guessed type wchar_t aUiAssetsDocsGe_3[39];
// 1409EEDE0: using guessed type wchar_t aUiAssetsDocsGe_2[41];
// 1409EEE38: using guessed type wchar_t aErrorscreen_0[12];
// 1409EEE50: using guessed type wchar_t aErrorscreen[12];
// 1409EEE68: using guessed type wchar_t aErrormessagete[17];
// 1409EEE90: using guessed type wchar_t aUiPregameError[39];
// 1409EEEE0: using guessed type wchar_t aErrormessage[13];
// 1409EEF08: using guessed type wchar_t aDefaultstratum_0[15];
// 140C65670: using guessed type __int64 qword_140C65670;

