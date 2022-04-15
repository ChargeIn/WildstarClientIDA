//----- (00000001407E77F4) ----------------------------------------------------
__int64 __fastcall sub_1407E77F4(LPWSTR a1)
{
	_QWORD* v2; // rbp
	_DWORD* v3; // rdi
	LCID v4; // esi
	int v5; // ebx
	_WORD* i; // rcx
	WCHAR LCData[120]; // [rsp+20h] [rbp-108h] BYREF

	v2 = sub_1407E3D94();
	v3 = (_DWORD*)sub_1407E3D94()[142];
	v4 = sub_1407E7D54(a1);
	v5 = 0;
	if (GetLocaleInfoW(v4, *((_DWORD*)v2 + 87) != 0 ? 7 : 4098, LCData, 240))
	{
		if (!(unsigned int)sub_1407F0C28((WCHAR*)v2[41], LCData))
		{
			for (i = &unk_140960100; (_WORD)v4 != *i; ++i)
			{
				if ((unsigned __int64)++v5 >= 0xA)
				{
					*v3 |= 4u;
					v3[2] = v4;
					v3[1] = v4;
					return (*v3 & 4) == 0;
				}
			}
		}
		return (*v3 & 4) == 0;
	}
	else
	{
		*v3 = 0;
		return 1i64;
	}
}

