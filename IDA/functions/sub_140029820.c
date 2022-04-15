//----- (0000000140029820) ----------------------------------------------------
__int64 __fastcall sub_140029820(__int64 a1, __int64 a2, int a3)
{
	unsigned int v4; // esi
	__int64 v5; // rax
	unsigned int v6; // edi
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rax
	unsigned int* v10; // rax

	v4 = 0;
	v5 = sub_140200220(0x91u);
	if (v5)
		v6 = *(_DWORD*)(v5 + 4);
	else
		v6 = 1;
	v7 = sub_14024E020(0);
	v8 = sub_14024E020(v6);
	if (!v7 || !v8)
		return 0xFFFFFFFFi64;
	if (a3 < *(_DWORD*)(v7 + 4) || a3 > *(_DWORD*)(v8 + 4))
		return 4294967293i64;
	if (v6 <= 1)
	{
	LABEL_14:
		v10 = (unsigned int*)sub_14024E020(v4);
		if (v10)
			return *v10;
		return 0xFFFFFFFFi64;
	}
	while (1)
	{
		v9 = sub_14024E020((v6 + v4) >> 1);
		if (!v9)
			return 4294967294i64;
		if (a3 < *(_DWORD*)(v9 + 4))
			v6 = (v6 + v4) >> 1;
		else
			v4 = (v6 + v4) >> 1;
		if (v6 - v4 <= 1)
			goto LABEL_14;
	}
}

