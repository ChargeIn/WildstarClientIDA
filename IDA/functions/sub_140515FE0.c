//----- (0000000140515FE0) ----------------------------------------------------
char __fastcall sub_140515FE0(__int64 a1)
{
	int v2; // r8d
	int* i; // rdx
	int v4; // eax
	__int64 v5; // rcx
	int v6; // eax
	unsigned __int64 v7; // rdx
	unsigned __int64 v8; // r8
	int v9; // eax
	unsigned __int64 v10; // r9
	int v11; // eax
	unsigned __int64 v12; // r10
	int v13; // eax

	v2 = 0;
	for (i = (int*)(a1 + 16); ; i += 2)
	{
		v4 = *i;
		if (*i >= 300)
			break;
		v5 = (unsigned int)i[1];
		if ((_DWORD)v5 == -1)
			break;
		if (!v4)
		{
			LOBYTE(v4) = (unsigned int)v5 < 0x1F;
			if ((unsigned int)v5 >= 0x1F)
				break;
		}
		if ((unsigned int)++v2 >= 4)
		{
			v4 = sub_1403C1580(v5, (int*)(a1 + 16));
			if (v4 >= 0)
			{
				v6 = *(_DWORD*)(a1 + 40);
				v7 = -1i64;
				if (v6 < 300)
					v8 = *(unsigned __int8*)(a1 + 44) | ((unsigned __int64)(unsigned __int8)v6 << 8);
				else
					v8 = -1i64;
				v9 = *(_DWORD*)(a1 + 32);
				if (v9 < 300)
					v10 = *(unsigned __int8*)(a1 + 36) | ((unsigned __int64)(unsigned __int8)v9 << 8);
				else
					v10 = -1i64;
				v11 = *(_DWORD*)(a1 + 24);
				if (v11 < 300)
					v12 = *(unsigned __int8*)(a1 + 28) | ((unsigned __int64)(unsigned __int8)v11 << 8);
				else
					v12 = -1i64;
				v13 = *(_DWORD*)(a1 + 16);
				if (v13 < 300)
					v7 = *(unsigned __int8*)(a1 + 20) | ((unsigned __int64)(unsigned __int8)v13 << 8);
				LOBYTE(v4) = sub_1400D4040(
					*(_QWORD*)(a1 + 8),
					"EldanForgeRequested",
					*(char**)(a1 + 8),
					"iiii",
					v7,
					v12,
					v10,
					v8);
			}
			return v4;
		}
	}
	return v4;
}

