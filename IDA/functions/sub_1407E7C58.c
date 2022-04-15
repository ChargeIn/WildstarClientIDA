//----- (00000001407E7C58) ----------------------------------------------------
__int64 __fastcall sub_1407E7C58(LPWSTR a1)
{
	_QWORD* v2; // rsi
	_DWORD* v3; // rdi
	LCID v4; // ebx
	int v6; // edx
	WCHAR LCData[120]; // [rsp+20h] [rbp-108h] BYREF

	v2 = sub_1407E3D94() + 40;
	v3 = (_DWORD*)sub_1407E3D94()[142];
	v4 = sub_1407E7D54(a1);
	if (!GetLocaleInfoW(v4, *((_DWORD*)v2 + 6) != 0 ? 3 : 4097, LCData, 240))
	{
		*v3 = 0;
		return 1i64;
	}
	if ((unsigned int)sub_1407F0C28((WCHAR*)*v2, LCData))
	{
		if (*((_DWORD*)v2 + 6) || !*((_DWORD*)v2 + 5) || (unsigned int)sub_1407F0C28((WCHAR*)*v2, LCData))
			return (*v3 & 4) == 0;
		v6 = 0;
	}
	else
	{
		if (*((_DWORD*)v2 + 6))
		{
		LABEL_11:
			*v3 |= 4u;
			v3[1] = v4;
			v3[2] = v4;
			return (*v3 & 4) == 0;
		}
		v6 = 1;
	}
	if (sub_1407E7E54(v4, v6))
		goto LABEL_11;
	return (*v3 & 4) == 0;
}

