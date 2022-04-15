#include "../winhttp.h"

//----- (00000001400149A0) ----------------------------------------------------
__int64 __fastcall sub_1400149A0(__int64 a1, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
	int v9; // r15d
	_QWORD* v10; // rdi
	int v11; // ebx
	int v12; // ecx
	int v14; // edx
	int v15; // eax
	__int64 v16; // rcx
	__int64 v17; // rax

	if (a3 == 28)
	{
		if (a4)
		{
			RegisterHotKey(a2, -2, 0, 0x2Cu);
			RegisterHotKey(a2, -1, 1u, 0x2Cu);
			RegisterHotKey(a2, 0, 2u, 0x2Cu);
			RegisterHotKey(a2, 1, 4u, 0x2Cu);
		}
		else
		{
			UnregisterHotKey(a2, -2);
			UnregisterHotKey(a2, -1);
			UnregisterHotKey(a2, 0);
			UnregisterHotKey(a2, 1);
		}
	LABEL_26:
		v16 = *(_QWORD*)(a1 + 5552);
		if (!v16)
			return DefWindowProcW(a2, a3, a4, lParam);
		v17 = *(_QWORD*)(a1 + 5552);
		do
		{
			if (*(_DWORD*)(v17 + 40) != 4)
				v16 = v17;
			v17 = *(_QWORD*)(v17 + 32);
		} while (v17);
		return (*(__int64(__fastcall**)(__int64, HWND, _QWORD, WPARAM, LPARAM))(*(_QWORD*)v16 + 72i64))(
			v16,
			a2,
			a3,
			a4,
			lParam);
	}
	if (a3 != 260)
	{
		if (a3 == 786 && (a4 <= 1 || a4 + 2 <= 1))
			*(_DWORD*)(a1 + 5808) = 1;
		goto LABEL_26;
	}
	switch (a4)
	{
	case 0xDui64:
		v14 = dword_140C3B190;
		v15 = dword_140C3B190;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B190)
			v15 = *(_DWORD*)qword_140C63750;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B190)
			v14 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C3B180, v14, *((_BYTE*)&off_140C3B180 + v15 + 32) == 0);
		return DefWindowProcW(a2, 0x104u, 0xDui64, lParam);
	case 0x70ui64:
		*(_DWORD*)(a1 + 344) = *(_DWORD*)(a1 + 344) == 0;
		return DefWindowProcW(a2, 0x104u, 0x70ui64, lParam);
	case 0xC0ui64:
		v9 = *(_DWORD*)(a1 + 296);
		v10 = *(_QWORD**)(a1 + 288);
		v11 = 0;
		if (v9 <= 0)
			goto LABEL_26;
		while (1)
		{
			v12 = *(unsigned __int16*)*v10;
			if ((((v12 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v12 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v10 + 2i64, L"Console"))
			{
				break;
			}
			++v11;
			++v10;
			if (v11 >= v9)
				goto LABEL_26;
		}
		sub_1400163D0(a1);
		return DefWindowProcW(a2, 0x104u, 0xC0ui64, lParam);
	default:
		goto LABEL_26;
	}
}
// 1409E0558: using guessed type wchar_t aConsole[8];
// 140C3B180: using guessed type __int64 (__fastcall *off_140C3B180)();
// 140C3B190: using guessed type int dword_140C3B190;
// 140C63750: using guessed type __int64 qword_140C63750;

