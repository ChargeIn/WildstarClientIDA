//----- (00000001407E6EBC) ----------------------------------------------------
int __fastcall sub_1407E6EBC(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int16* v4; // rcx
	int v5; // r9d
	__int16 v6; // r8
	int result; // eax

	v2 = sub_1407E6CA0(*(_WORD**)a1);
	*(_DWORD*)(a1 + 24) = v2 == 3;
	if (v2 == 3)
	{
		v3 = 2;
	}
	else
	{
		v4 = *(__int16**)a1;
		v5 = 0;
		if (*(_QWORD*)a1)
		{
			while (1)
			{
				v6 = *v4++;
				if ((unsigned __int16)(v6 - 65) > 0x19u && (unsigned __int16)(v6 - 97) > 0x19u)
					break;
				++v5;
			}
			v3 = v5;
		}
		else
		{
			v3 = 0;
		}
	}
	*(_DWORD*)(a1 + 20) = v3;
	result = sub_1407E85C8((__int64(__fastcall*)(_QWORD, _QWORD, _QWORD))sub_1407E72D0, 3i64, 0i64);
	if ((*(_BYTE*)(a1 + 16) & 4) == 0)
		*(_DWORD*)(a1 + 16) = 0;
	return result;
}

