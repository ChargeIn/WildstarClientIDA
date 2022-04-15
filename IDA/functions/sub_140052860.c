#include "../winhttp.h"

//----- (0000000140052860) ----------------------------------------------------
__int64 __fastcall sub_140052860(__int64 a1, int* a2, __int64 a3, int a4)
{
	__int64 v4; // r15
	int v6; // r13d
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdi
	unsigned __int64 v12; // rbx
	__int64 v13; // rcx
	__int64 result; // rax
	__int64 v15; // [rsp+28h] [rbp-50h]

	v4 = *(_QWORD*)(a1 + 80);
	v6 = a3;
	if (a2)
	{
		v9 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v9;
			while (*((_WORD*)a2 + v9));
		}
		v10 = sub_14018B280(2 * v9 + 18, 0);
		if (v10)
		{
			*((_QWORD*)v10 + 1) = v9;
			*(_QWORD*)v10 = off_140B55060;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = v10 + 4;
		v12 = 2 * v9;
		sub_1407DB590(v10 + 4, a2, v12);
		*(_WORD*)((char*)v11 + v12) = 0;
		*(_QWORD*)(a1 + 80) = v11;
	}
	else
	{
		*(_QWORD*)(a1 + 80) = 0i64;
	}
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	if (!(unsigned int)sub_1401B58D0(a1, *(const __m128i**)(a1 + 80), a3))
		goto LABEL_18;
	result = sub_14000B690(v13, 3i64);
	if ((int)result < 0)
		return result;
	v15 = a1 + 120;
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65680 + 32i64))(
		qword_140C65680,
		L"Trebuchet MS",
		10i64) >= 0
		&& (*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\SimplePS.sho",
			a1 + 128) >= 0
		&& (*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
			qword_140C65670,
			L"UI\\Cursors\\Point.tex",
			a1 + 112) >= 0
		&& (LODWORD(v15) = 256,
			(*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, __int64, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
				qword_140C65670,
				*(_QWORD*)(a1 + 80),
				0i64,
				1i64,
				1,
				v15,
				0,
				0,
				a1 + 136) >= 0))
	{
		*(_DWORD*)(a1 + 92) = a4;
		*(_QWORD*)(a1 + 96) = 0i64;
		*(_DWORD*)(a1 + 104) = -1;
		*(_DWORD*)(a1 + 72) = v6;
		*(_DWORD*)(a1 + 76) = 1;
		return 0i64;
	}
	else
	{
	LABEL_18:
		*(_DWORD*)(a1 + 76) = 3;
		return 2147500037i64;
	}
}
// 14005291F: variable 'a1' is possibly undefined
// 14005291F: variable 'a3' is possibly undefined
// 140052936: variable 'v13' is possibly undefined
// 1409DE788: using guessed type wchar_t aTrebuchetMs[13];
// 140A0B408: using guessed type wchar_t aUiCursorsPoint_4[21];
// 140A0B438: using guessed type wchar_t aShadersSimplep_1[21];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;

