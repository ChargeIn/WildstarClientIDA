#include "../winhttp.h"

//----- (000000014029E2E0) ----------------------------------------------------
LRESULT __fastcall sub_14029E2E0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	__int64 v8; // rdi
	_DWORD* v9; // rbx
	HWND v10; // rcx

	if (Msg == 7)
	{
		sub_14029E170(qword_140C657C8, 1);
		goto LABEL_6;
	}
	v8 = qword_140C657C8;
	if (Msg == 8 && *(_DWORD*)(qword_140C657C8 + 72))
	{
		v9 = (_DWORD*)qword_140C636A0;
		++* (_DWORD*)qword_140C636A0;
		v10 = *(HWND*)(v8 + 48);
		*(_DWORD*)(v8 + 72) = 0;
		ShowWindow(v10, 7);
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(v8 + 88) + 80i64))(*(_QWORD*)(v8 + 88), 0i64, 0i64);
		sub_14029D680((_QWORD*)v8);
		--* v9;
	LABEL_6:
		v8 = qword_140C657C8;
	}
	return CallWindowProcW(*(WNDPROC*)(v8 + 80), hWnd, Msg, wParam, lParam);
}
// 140C636A0: using guessed type __int64 qword_140C636A0;
// 140C657C8: using guessed type __int64 qword_140C657C8;

