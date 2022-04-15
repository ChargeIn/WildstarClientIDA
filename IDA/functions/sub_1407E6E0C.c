//----- (00000001407E6E0C) ----------------------------------------------------
int __fastcall sub_1407E6E0C(__int64 a1)
{
	__int64 v2; // rax
	_WORD* v3; // rcx
	__int64 v4; // rax
	bool v5; // zf
	int v6; // edx
	__int16* v7; // rcx
	int v8; // r9d
	__int16 v9; // r8
	int result; // eax

	v2 = sub_1407E6CA0(*(_WORD**)a1);
	v3 = *(_WORD**)(a1 + 8);
	*(_DWORD*)(a1 + 24) = v2 == 3;
	v4 = sub_1407E6CA0(v3);
	v5 = *(_DWORD*)(a1 + 24) == 0;
	*(_DWORD*)(a1 + 28) = v4 == 3;
	if (v5)
	{
		v7 = *(__int16**)a1;
		v8 = 0;
		if (*(_QWORD*)a1)
		{
			while (1)
			{
				v9 = *v7++;
				if ((unsigned __int16)(v9 - 65) > 0x19u && (unsigned __int16)(v9 - 97) > 0x19u)
					break;
				++v8;
			}
			v6 = v8;
		}
		else
		{
			v6 = 0;
		}
	}
	else
	{
		v6 = 2;
	}
	*(_DWORD*)(a1 + 20) = v6;
	result = sub_1407E85C8((__int64(__fastcall*)(_QWORD, _QWORD, _QWORD))sub_1407E6F44, 3i64, 0i64);
	if ((*(_DWORD*)(a1 + 16) & 0x100) == 0 || (*(_DWORD*)(a1 + 16) & 0x200) == 0 || (*(_BYTE*)(a1 + 16) & 7) == 0)
		*(_DWORD*)(a1 + 16) = 0;
	return result;
}

