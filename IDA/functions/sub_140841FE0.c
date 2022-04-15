//----- (0000000140841FE0) ----------------------------------------------------
void __fastcall sub_140841FE0(__int64 a1, char a2)
{
	int v4; // et0
	char v5; // of
	char v6; // al
	_QWORD* v7; // rdx
	int v8; // ecx
	bool v9; // zf
	int v10; // edi

	EnterCriticalSection(&stru_140C62878);
	v4 = _InterlockedAdd((volatile signed __int32*)(a1 + 112), 0xFFFFFFFF);
	if ((v4 < 0) ^ v5 | (v4 == 0))
	{
		if (*(_QWORD*)(a1 + 32))
		{
			v6 = sub_1408817F0(*(_DWORD*)(a1 + 44));
			v7 = *(_QWORD**)(a1 + 32);
			v8 = *(_DWORD*)(a1 + 44);
			if ((v6 & 8) != 0)
				sub_140881A80(v8, v7);
			else
				sub_140881720(v8, (__int64)v7);
			v9 = *(_BYTE*)(a1 + 48) == 0;
			*(_QWORD*)(a1 + 32) = 0i64;
			if (!v9)
			{
				sub_140881DD0(*(_DWORD*)(a1 + 44));
				*(_DWORD*)(a1 + 44) = -1;
			}
		}
		sub_140843180(qword_140C61B58, a1);
		if (*(int*)(a1 + 116) > 0)
		{
			LeaveCriticalSection(&stru_140C62878);
			if (!a2)
				sub_140843120(a1);
		}
		else
		{
			LeaveCriticalSection(&stru_140C62878);
			if (!a2)
				sub_140843120(a1);
			v10 = dword_140C10F20;
			if ((*(_BYTE*)(a1 + 120) & 2) != 0)
			{
				sub_140881720(dword_140C10F20, *(_QWORD*)(a1 + 64));
				*(_BYTE*)(a1 + 120) &= ~2u;
			}
			*(_QWORD*)(a1 + 64) = 0i64;
			sub_140881720(v10, a1);
		}
	}
	else
	{
		LeaveCriticalSection(&stru_140C62878);
	}
}
// 140842002: variable 'v5' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B58: using guessed type __int64 qword_140C61B58;

