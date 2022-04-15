//----- (000000014005E150) ----------------------------------------------------
__int64 __fastcall sub_14005E150(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rax
	__int64 v5; // rsi
	__int64* v6; // rax
	__int64 v7; // r8
	__int64 v8; // rsi
	__int64* v9; // rdx

	v1 = *(_QWORD*)(a1 + 32);
	if (!*(_BYTE*)(v1 + 33))
	{
		sub_14005DEB0(a1);
		return 0i64;
	}
	if (*(_BYTE*)(v1 + 33) == 1)
	{
		if (*(_QWORD*)(v1 + 56))
			return sub_14005D180(*(_QWORD*)(a1 + 32));
		sub_14005DF40(a1);
		return 0i64;
	}
	if (*(_BYTE*)(v1 + 33) == 2)
	{
		v7 = *(int*)(v1 + 36);
		v8 = *(_QWORD*)(v1 + 120);
		v9 = (__int64*)(*(_QWORD*)v1 + 8 * v7);
		*(_DWORD*)(v1 + 36) = v7 + 1;
		sub_14005D6E0(a1, v9, -3i64);
		if (*(_DWORD*)(v1 + 36) >= *(_DWORD*)(v1 + 12))
			*(_BYTE*)(v1 + 33) = 3;
		*(_QWORD*)(v1 + 128) += *(_QWORD*)(v1 + 120) - v8;
		return 10i64;
	}
	else
	{
		if (*(_BYTE*)(v1 + 33) != 3)
		{
			if (*(_BYTE*)(v1 + 33) == 4)
			{
				if (*(_QWORD*)(v1 + 80))
				{
					sub_14005D9C0(a1);
					v3 = *(_QWORD*)(v1 + 128);
					if (v3 > 0x64)
						*(_QWORD*)(v1 + 128) = v3 - 100;
					return 100i64;
				}
				*(_BYTE*)(v1 + 33) = 0;
				*(_QWORD*)(v1 + 136) = 0i64;
			}
			return 0i64;
		}
		v5 = *(_QWORD*)(v1 + 120);
		v6 = sub_14005D6E0(a1, *(__int64**)(v1 + 48), 40i64);
		*(_QWORD*)(v1 + 48) = v6;
		if (!*v6)
		{
			sub_14005D920(a1);
			*(_BYTE*)(v1 + 33) = 4;
		}
		*(_QWORD*)(v1 + 128) += *(_QWORD*)(v1 + 120) - v5;
		return 400i64;
	}
}

