//----- (00000001407E7994) ----------------------------------------------------
BOOL __fastcall sub_1407E7994(_DWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rax
	int v4; // ecx
	__int16* v5; // rdx
	int i; // r9d
	__int16 v7; // r8
	BOOL result; // eax

	v2 = sub_1407E3D94();
	v3 = sub_1407E6CA0((_WORD*)v2[40]);
	v4 = 2;
	*((_DWORD*)v2 + 86) = v3 == 3;
	if (v3 != 3)
	{
		v5 = (__int16*)v2[40];
		for (i = 0; ; ++i)
		{
			v7 = *v5++;
			if ((unsigned __int16)(v7 - 65) > 0x19u && (unsigned __int16)(v7 - 97) > 0x19u)
				break;
		}
		v4 = i;
	}
	*((_DWORD*)v2 + 85) = v4;
	result = EnumSystemLocalesW((LOCALE_ENUMPROCW)sub_1407E7C58, 1u);
	if ((*(_BYTE*)a1 & 4) == 0)
		*a1 = 0;
	return result;
}

