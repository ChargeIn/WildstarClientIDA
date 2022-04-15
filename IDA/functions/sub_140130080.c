#include "../winhttp.h"

//----- (0000000140130080) ----------------------------------------------------
_QWORD* __fastcall sub_140130080(__int64 a1, _QWORD* a2)
{
	int v2; // edx
	__int64 v3; // rax
	__int64 v4; // rbx
	int* v5; // rdx
	__int64 v6; // rax
	_QWORD* v7; // rdi
	_WORD* v8; // rax
	__int64 v10[8]; // [rsp+20h] [rbp-68h]
	_QWORD v11[2]; // [rsp+60h] [rbp-28h] BYREF
	int v12; // [rsp+70h] [rbp-18h]

	*(_QWORD*)(a1 + 1456) = *a2;
	v2 = *(_DWORD*)(a1 + 1456);
	v11[0] = 0i64;
	v11[1] = 0i64;
	v12 = 0;
	v10[0] = (__int64)&unk_1409D87A4;
	v10[1] = (__int64)L"Alt-";
	v10[2] = (__int64)L"Ctrl-";
	v10[3] = (__int64)L"Ctrl-Alt-";
	v10[4] = (__int64)L"Shift-";
	v10[5] = (__int64)L"Alt-Shift-";
	v10[6] = (__int64)L"Ctrl-Shift-";
	v10[7] = (__int64)L"Ctrl-Alt-Shift-";
	if ((unsigned int)(v2 - 48) <= 9 || (unsigned int)(v2 - 65) <= 0x19)
		LOWORD(v11[0]) = v2;
	if (v2 == 189)
		LOWORD(v11[0]) = 45;
	if (v2 == 146)
		LOWORD(v11[0]) = 61;
	v3 = *(unsigned int*)(a1 + 1460);
	v4 = 0i64;
	if ((unsigned int)v3 >= 8)
	{
		v7 = (_QWORD*)(a1 + 1504);
		v8 = *(_WORD**)(a1 + 1512);
		if (v8 != *(_WORD**)(a1 + 1520))
		{
			*v8 = 0;
			*(_QWORD*)(a1 + 1520) = *(_QWORD*)(a1 + 1512);
		}
	}
	else
	{
		v5 = (int*)v10[v3];
		v6 = 0i64;
		if (*(_WORD*)v5)
		{
			do
				++v6;
			while (*((_WORD*)v5 + v6));
		}
		v7 = (_QWORD*)(a1 + 1504);
		sub_14001C480(a1 + 1504, v5, (int*)((char*)v5 + 2 * v6));
	}
	if (LOWORD(v11[0]))
	{
		do
			++v4;
		while (*((_WORD*)v11 + v4));
	}
	return sub_14001C310(v7, (int*)v11, (int*)((char*)v11 + 2 * v4));
}
// 140A21848: using guessed type wchar_t aAlt[5];
// 140A218C8: using guessed type wchar_t aCtrlShift[12];
// 140A218E0: using guessed type wchar_t aCtrlAltShift[16];
// 140A21908: using guessed type wchar_t aCtrl[6];
// 140A21918: using guessed type wchar_t aCtrlAlt[10];
// 140A21930: using guessed type wchar_t aShift[7];
// 140A21940: using guessed type wchar_t aAltShift[11];
// 140130080: using guessed type __int64 var_68[8];

