//----- (00000001403264C0) ----------------------------------------------------
__int64 __fastcall sub_1403264C0(unsigned int a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // r9
	__int16 v6; // dx
	__int16 v7; // ax
	unsigned __int16 v9; // ax
	unsigned __int16 v10; // dx
	unsigned __int16 v11; // ax
	unsigned __int16 v12; // dx
	unsigned __int16 v13; // ax
	unsigned __int16 v14; // dx
	unsigned __int16 v15; // ax
	unsigned __int16 v16; // dx
	unsigned __int16 v17; // ax
	unsigned __int16 v18; // dx
	unsigned __int16 v19; // ax
	unsigned __int16 v20; // dx
	unsigned __int8 v21; // al
	unsigned __int8 v22; // dl
	unsigned int v23; // edi
	unsigned __int16* v24; // rax
	unsigned int v25; // edx
	__int64 v26; // rbx
	unsigned __int16 v27; // r10
	unsigned int v28; // r8d
	unsigned __int16* v29; // rdx
	int v30; // r10d
	int v31; // r11d
	unsigned __int16 v32; // ax
	unsigned __int16 v33; // dx
	unsigned __int16 v34; // ax
	unsigned __int16 v35; // dx
	unsigned __int8 v36; // al
	unsigned __int8 v37; // dl

	v3 = a1;
	v4 = a3 + 112i64 * a2;
	v5 = a3 + 112 * v3;
	v6 = *(_WORD*)(v4 + 32);
	v7 = *(_WORD*)(v5 + 32);
	if (v7 < v6)
		return 0xFFFFFFFFi64;
	if (v7 > v6)
		return 1i64;
	v9 = *(_WORD*)(v5 + 16);
	v10 = *(_WORD*)(v4 + 16);
	if (v9 < v10)
		return 0xFFFFFFFFi64;
	if (v9 > v10)
		return 1i64;
	v11 = *(_WORD*)(v5 + 18);
	v12 = *(_WORD*)(v4 + 18);
	if (v11 < v12)
		return 0xFFFFFFFFi64;
	if (v11 > v12)
		return 1i64;
	v13 = *(_WORD*)(v5 + 22);
	v14 = *(_WORD*)(v4 + 22);
	if (v13 < v14)
		return 0xFFFFFFFFi64;
	if (v13 > v14)
		return 1i64;
	v15 = *(_WORD*)(v5 + 24);
	v16 = *(_WORD*)(v4 + 24);
	if (v15 < v16)
		return 0xFFFFFFFFi64;
	if (v15 > v16)
		return 1i64;
	v17 = *(_WORD*)(v5 + 28);
	v18 = *(_WORD*)(v4 + 28);
	if (v17 < v18)
		return 0xFFFFFFFFi64;
	if (v17 > v18)
		return 1i64;
	v19 = *(_WORD*)(v5 + 26);
	v20 = *(_WORD*)(v4 + 26);
	if (v19 < v20)
		return 0xFFFFFFFFi64;
	if (v19 > v20)
		return 1i64;
	v21 = *(_BYTE*)(v5 + 56);
	v22 = *(_BYTE*)(v4 + 56);
	if (v21 < v22)
		return 0xFFFFFFFFi64;
	if (v21 > v22)
		return 1i64;
	v23 = 0;
	v24 = (unsigned __int16*)(v5 + 48);
	v25 = 0;
	v26 = v4 - v5;
	do
	{
		v27 = *(unsigned __int16*)((char*)v24 + v26);
		if (*v24 < v27)
			return 0xFFFFFFFFi64;
		if (*v24 > v27)
			return 1i64;
		++v25;
		++v24;
	} while (v25 < 4);
	v28 = 0;
	v29 = (unsigned __int16*)(v5 + 40);
	do
	{
		v30 = dword_140B64448[*v29];
		v31 = dword_140B64448[*(unsigned __int16*)((char*)v29 + v26)];
		if (v30 < v31)
			return 0xFFFFFFFFi64;
		if (v30 > v31)
			return 1i64;
		++v28;
		++v29;
	} while (v28 < 4);
	v32 = *(_WORD*)(v5 + 34);
	v33 = *(_WORD*)(v4 + 34);
	if (v32 >= v33)
	{
		if (v32 > v33)
			return 1i64;
		v34 = *(_WORD*)(v5 + 38);
		v35 = *(_WORD*)(v4 + 38);
		if (v34 < v35)
			return 0xFFFFFFFFi64;
		if (v34 > v35)
			return 1i64;
		if (*(_DWORD*)v5 < *(_DWORD*)v4)
			return 0xFFFFFFFFi64;
		if (*(_DWORD*)v5 > *(_DWORD*)v4)
			return 1i64;
		v36 = *(_BYTE*)(v5 + 57);
		v37 = *(_BYTE*)(v4 + 57);
		if (v36 >= v37)
		{
			LOBYTE(v23) = v36 > v37;
			return v23;
		}
	}
	return 0xFFFFFFFFi64;
}
// 140B64448: using guessed type _DWORD dword_140B64448[4];

