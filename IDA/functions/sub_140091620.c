//----- (0000000140091620) ----------------------------------------------------
__int64 __fastcall sub_140091620(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // r9
	__int64 v5; // r11
	unsigned __int64 v6; // r10
	__int64 v7; // r10
	__int64 v8; // rax
	unsigned __int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	unsigned __int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 result; // rax
	__int64 v16; // rcx

	*a2 += 32i64;
	v16 = a1 + 8;
	*a2 += 4i64;
	v3 = *(_QWORD*)(v16 + 8);
	v4 = -1i64;
	v5 = v16;
	if (v3)
	{
		v6 = -1i64;
		do
			++v6;
		while (*(_WORD*)(v3 + 2 * v6));
	}
	else
	{
		v6 = 0i64;
	}
	*a3 += 2 * v6;
	if (v6 <= 0x7F)
		v7 = 16 * v6 + 8;
	else
		v7 = 16 * (v6 + 1);
	*a2 += v7;
	v8 = *(_QWORD*)(v16 + 16);
	if (v8)
	{
		v9 = -1i64;
		do
			++v9;
		while (*(_WORD*)(v8 + 2 * v9));
	}
	else
	{
		v9 = 0i64;
	}
	*a3 += 2 * v9;
	if (v9 <= 0x7F)
		v10 = 16 * v9 + 8;
	else
		v10 = 16 * (v9 + 1);
	*a2 += v10;
	v11 = *(_QWORD*)(v5 + 24);
	if (v11)
	{
		v12 = -1i64;
		do
			++v12;
		while (*(_WORD*)(v11 + 2 * v12));
	}
	else
	{
		v12 = 0i64;
	}
	*a3 += 2 * v12;
	if (v12 <= 0x7F)
		v13 = 16 * v12 + 8;
	else
		v13 = 16 * (v12 + 1);
	*a2 += v13;
	v14 = *(_QWORD*)(v5 + 32);
	if (v14)
	{
		do
			++v4;
		while (*(_WORD*)(v14 + 2 * v4));
	}
	else
	{
		v4 = 0i64;
	}
	*a3 += 2 * v4;
	if (v4 <= 0x7F)
		result = 16 * v4 + 177;
	else
		result = 16 * (v4 + 1) + 169;
	*a2 += result;
	return result;
}

