//----- (0000000140631710) ----------------------------------------------------
char __fastcall sub_140631710(__int64 a1, __int64 a2, __int64 a3)
{
	_WORD* v3; // r10
	unsigned __int16* v4; // r8
	__int64 v5; // r9
	int v6; // edx
	int v7; // eax
	int v8; // ecx

	if (*(_DWORD*)a2 >= *(_DWORD*)a3)
	{
		if (*(_DWORD*)a3 < *(_DWORD*)a2)
			return 0;
		v3 = *(_WORD**)(a2 + 8);
		v4 = *(unsigned __int16**)(a3 + 8);
		v5 = 0i64;
		v6 = (unsigned __int16)*v3 - *v4;
		if (!v6)
		{
			LOWORD(v7) = *v3;
			while ((_WORD)v7)
			{
				v7 = (unsigned __int16)v3[v5 + 1];
				v8 = v4[++v5];
				v6 = v7 - v8;
				if (v7 != v8)
					goto LABEL_7;
			}
			return 0;
		}
	LABEL_7:
		if (v6 >= 0)
			return 0;
	}
	return 1;
}

