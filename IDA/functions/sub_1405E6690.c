//----- (00000001405E6690) ----------------------------------------------------
__int64 __fastcall sub_1405E6690(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // rdx
	_DWORD* v8; // rcx
	__int64 v9; // rbx
	__int64 result; // rax

	if (a2)
	{
		if (*(_DWORD*)a2)
		{
			v4 = sub_140245C00(*(_DWORD*)(a1 + 1080));
			if (v4)
			{
				v5 = sub_1405E6000((__int64*)a1, *(_DWORD*)(v4 + 8), 1);
				if (v5)
				{
					v6 = *((_QWORD*)v5 + 9);
					v7 = 0i64;
					if (v6)
					{
						v8 = (_DWORD*)*((_QWORD*)v5 + 8);
						while (*v8 != *(_DWORD*)(a1 + 1080))
						{
							++v7;
							++v8;
							if (v7 >= v6)
								goto LABEL_11;
						}
						sub_1407B0810((__int64*)v5 + 15, v7, 1);
					}
				LABEL_11:
					if (*(_DWORD*)(a2 + 16) != 3)
						sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "CraftingDiscoveryHotCold", "ii");
				}
			}
			sub_140437A10((_QWORD*)qword_140C658D8, 0x1Cu, 0, 0i64, 0, 0, 1);
		}
		v9 = a1 + 1080;
		sub_140430BF0(
			*(_QWORD*)(qword_140C65898 + 29504),
			*(_DWORD*)(a1 + 1080),
			*(_DWORD*)a2,
			*(_DWORD*)(a2 + 24),
			*(_DWORD**)(a2 + 32),
			*(_DWORD*)(a2 + 28),
			*(_DWORD*)(a2 + 4),
			*(_DWORD*)(a2 + 8));
	}
	else
	{
		v9 = a1 + 1080;
		sub_140430BF0(*(_QWORD*)(qword_140C65898 + 29504), *(_DWORD*)(a1 + 1080), 0, 0, 0i64, 0, 0, 0);
	}
	*(_DWORD*)(a1 + 544) = 0;
	sub_1407E4830((int*)v9, 0i64, 0x64ui64);
	*(_DWORD*)(v9 + 96) = 1065353216;
	*(_DWORD*)(v9 + 92) = 1065353216;
	*(_DWORD*)(v9 + 88) = 1065353216;
	result = 0i64;
	*(_QWORD*)(v9 + 12) = 0i64;
	*(_QWORD*)(v9 + 20) = 1i64;
	*(_QWORD*)(v9 + 28) = 0i64;
	*(_QWORD*)(v9 + 36) = 0i64;
	*(_DWORD*)(v9 + 44) = 0;
	*(_DWORD*)(v9 + 24) = 1;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;

