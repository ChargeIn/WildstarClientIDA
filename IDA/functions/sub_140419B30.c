//----- (0000000140419B30) ----------------------------------------------------
__int64 __fastcall sub_140419B30(_QWORD* a1)
{
	int* v2; // rsi
	__int64** v3; // rax
	int v4; // edi
	__int64 v5; // rbp
	_DWORD* v6; // rcx
	BOOL v7; // ecx
	_DWORD* v8; // rax

	v2 = sub_140417BF0(a1, 1u);
	v3 = (__int64**)sub_140417660((__int64)a1, 1);
	v4 = 0;
	if (v3 && *v3)
		v5 = **v3;
	else
		v5 = 0i64;
	if (v2)
	{
		if (!v5
			|| (~(*(_DWORD*)(v5 + 128) >> 3) & 1) != 0
			&& (int)(*(_DWORD*)(v5 + 236) - sub_14018CDF0()) > 0
			&& *(_DWORD*)(v5 + 236) != (unsigned int)sub_14018CDF0())
		{
			v7 = v2[90] && (v2[14] == 5 && *((__int64*)v2 + 6) > 0 || v2[20] == 5 && *((__int64*)v2 + 9) > 0);
			LOBYTE(v4) = v7;
		}
		v8 = (_DWORD*)a1[2];
		v8[2] = 1;
		*v8 = v4;
	}
	else
	{
		v6 = (_DWORD*)a1[2];
		*v6 = 0;
		v6[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

