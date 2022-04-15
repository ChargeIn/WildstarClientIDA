//----- (00000001403EC440) ----------------------------------------------------
LRESULT __fastcall sub_1403EC440(__int64 a1, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
	LPARAM v5; // rbp
	__int64 v7; // rcx
	__int64 v11; // rax
	_DWORD* v12; // rax
	int v13; // ecx
	__int64 v14; // rcx
	char v16; // [rsp+50h] [rbp+8h] BYREF

	v5 = lParam;
	v7 = *(_QWORD*)(a1 + 30088);
	if (!v7)
		return DefWindowProcW(a2, a3, a4, v5);
	if (*(_DWORD*)(a1 + 40) == 4)
		goto LABEL_18;
	v11 = *(_QWORD*)(a1 + 32);
	if (v11)
	{
		while (*(_DWORD*)(v11 + 40) == 4)
		{
			v11 = *(_QWORD*)(v11 + 32);
			if (!v11)
				goto LABEL_6;
		}
		goto LABEL_18;
	}
LABEL_6:
	if (a3 == 512)
	{
		v12 = (_DWORD*)(*(__int64(__fastcall**)(__int64, char*, LPARAM))(*(_QWORD*)v7 + 208i64))(v7, &v16, lParam);
		*(_DWORD*)(a1 + 30100) = *v12;
		*(_DWORD*)(a1 + 30104) = v12[1];
	}
	else if (a3 - 255 > 6 || (v13 = 103, !_bittest(&v13, a3 - 255)))
	{
		if (a3 - 513 > 0xC)
			goto LABEL_12;
	}
	sub_1405DF340(a1 + 26680);
LABEL_12:
	if ((!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 184i64))(*(_QWORD*)(a1 + 30088))
		|| a3 - 512 > 0xD)
		&& !(*(__int64(__fastcall**)(_QWORD, HWND, _QWORD, WPARAM, LPARAM))(**(_QWORD**)(a1 + 29504) + 56i64))(
			*(_QWORD*)(a1 + 29504),
			a2,
			a3,
			a4,
			v5)
		&& !*(_BYTE*)(*(_QWORD*)(a1 + 29504) + 3360i64)
		|| !(unsigned int)sub_1404B5D10(v14, a3, a4))
	{
		return 0i64;
	}
LABEL_18:
	if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD, WPARAM, LPARAM))(**(_QWORD**)(a1 + 30088) + 424i64))(
		*(_QWORD*)(a1 + 30088),
		a3,
		a4,
		v5))
	{
		return 0i64;
	}
	return DefWindowProcW(a2, a3, a4, v5);
}
// 1403EC54C: variable 'v14' is possibly undefined

