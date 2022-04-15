//----- (000000014001CBC0) ----------------------------------------------------
LRESULT __fastcall sub_14001CBC0(__int64 a1, HWND a2, UINT a3, WPARAM a4, LPARAM a5)
{
	__int64 v8; // rcx
	__int64 v9; // rdx

	if (a3 == 7)
	{
		v8 = *(_QWORD*)(a1 + 168);
		if (v8)
		{
			v9 = 0i64;
			goto LABEL_14;
		}
	}
	else if (a3 == 8)
	{
		if ((*(_BYTE*)(a1 + 560) & 0x10) != 0)
		{
			v8 = *(_QWORD*)(a1 + 168);
			if (v8)
			{
				v9 = 1i64;
			LABEL_14:
				BinkPause(v8, v9);
			}
		}
	}
	else if (a3 == 256 && (a4 == 27 || a4 == 32 && (*(_BYTE*)(a1 + 560) & 8) != 0) && (*(_BYTE*)(a1 + 560) & 2) == 0)
	{
		sub_140001FD0(a1 + 72);
	}
	return DefWindowProcW(a2, a3, a4, a5);
}
// 140959BA8: using guessed type __int64 __fastcall BinkPause(_QWORD, _QWORD);

