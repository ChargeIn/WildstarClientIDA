#include "../winhttp.h"

//----- (00000001404A1070) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A1070(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	int v6; // eax
	__int64 v7; // rax
	__int64 v8; // rcx
	_BOOL8 result; // rax

	result = a2
		&& ((v6 = *(_DWORD*)(a2 + 128), v6 == 20) || v6 == 23)
		&& a4
		&& (v7 = sub_1405B15C0((__int64)&qword_140C7DFB0, *(_DWORD*)(a4 + 5932))) != 0
		&& sub_1404A2090(v8, a3, *(_DWORD*)(v7 + 32), *(_DWORD*)(a2 + 424));
	return result;
}
// 1404A10C9: variable 'v8' is possibly undefined
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

