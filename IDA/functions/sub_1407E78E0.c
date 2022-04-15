//----- (00000001407E78E0) ----------------------------------------------------
BOOL __fastcall sub_1407E78E0(_DWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rax
	_WORD* v4; // rcx
	__int64 v5; // rax
	int v6; // edx
	__int16* v7; // rcx
	int i; // r9d
	__int16 v9; // r8
	BOOL result; // eax

	v2 = sub_1407E3D94() + 40;
	v3 = sub_1407E6CA0((_WORD*)*v2);
	v4 = (_WORD*)v2[1];
	*((_DWORD*)v2 + 6) = v3 == 3;
	v5 = sub_1407E6CA0(v4);
	v6 = 2;
	*((_DWORD*)v2 + 7) = v5 == 3;
	a1[1] = 0;
	if (!*((_DWORD*)v2 + 6))
	{
		v7 = (__int16*)*v2;
		for (i = 0; ; ++i)
		{
			v9 = *v7++;
			if ((unsigned __int16)(v9 - 65) > 0x19u && (unsigned __int16)(v9 - 97) > 0x19u)
				break;
		}
		v6 = i;
	}
	*((_DWORD*)v2 + 5) = v6;
	result = EnumSystemLocalesW((LOCALE_ENUMPROCW)LocaleEnumProc, 1u);
	if ((*a1 & 0x100) == 0 || (*a1 & 0x200) == 0 || (*(_BYTE*)a1 & 7) == 0)
		*a1 = 0;
	return result;
}

