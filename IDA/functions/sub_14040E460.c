//----- (000000014040E460) ----------------------------------------------------
__int64 __fastcall sub_14040E460(_QWORD* a1, _DWORD* a2)
{
	__int64 v2; // r8
	float v3; // xmm6_4
	int v4; // eax
	__int64 v7; // rbp
	__int64 v8; // r9
	_DWORD* v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // r8
	float v13; // ecx
	int v14; // edx
	__int64 v15; // rax
	int v16; // ecx
	unsigned int v17; // ebx
	__int64 v18; // rax
	int v19; // ecx
	int v20; // edx
	__int64 result; // rax

	v2 = a1[34];
	v3 = 0.0;
	v4 = 0;
	if (!v2)
		goto LABEL_20;
	v7 = 5i64;
	v8 = 0i64;
	v9 = (_DWORD*)(v2 + 4);
	v10 = 5i64;
	do
	{
		if (*v9 == 1)
		{
			v3 = fmaxf(v3, *(float*)(a1[33] + v8 + 4));
			v4 = 1;
		}
		v8 += 4i64;
		++v9;
		--v10;
	} while (v10);
	if (v4 && a1[33])
	{
		a2[67] = 0;
		v11 = 0i64;
		do
		{
			v12 = a1[34];
			if (*(_DWORD*)(v11 + v12 + 4) == 1)
			{
				v13 = v3;
				v14 = *(_DWORD*)(v11 + a1[33] + 4);
				if ((LODWORD(v3) ^ v14) < 0)
					LODWORD(v13) = 0x80000000 - LODWORD(v3);
				if ((int)abs32(LODWORD(v13) - v14) <= 84)
				{
					v15 = sub_1402479C0(*(_DWORD*)(v11 + v12 + 24));
					if (v15 && (*(_BYTE*)(v15 + 36) & 4) != 0)
						v16 = *(_DWORD*)(v15 + 48);
					else
						v16 = 0;
					a2[67] |= v16;
				}
			}
			v11 += 4i64;
			--v7;
		} while (v7);
	}
	else
	{
	LABEL_20:
		a2[67] = 127;
	}
	v17 = *(_DWORD*)(a1[2] + 368i64);
	if (qword_140C63840)
	{
		v18 = qword_140C63840(off_140A6AF68, v17, qword_140C63858);
	}
	else
	{
		if (dword_140C655A0 || (int)sub_14020DCC0() < 0)
			return 0i64;
		v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E18 + 24i64))(qword_140C63E18, v17);
	}
	if (!v18)
		return 0i64;
	v19 = *(_DWORD*)(v18 + 40);
	if (!v19)
		return 0i64;
	v20 = *(_DWORD*)(v18 + 44);
	if (!v20)
		return 0i64;
	result = 0i64;
	if (!a2[71])
	{
		a2[71] = v19;
		a2[72] = v20;
	}
	return result;
}
// 140A6AF68: using guessed type wchar_t *off_140A6AF68[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E18: using guessed type __int64 qword_140C63E18;
// 140C655A0: using guessed type int dword_140C655A0;

