//----- (000000014005B160) ----------------------------------------------------
__int64 __fastcall sub_14005B160(_BYTE* a1, char* a2, unsigned __int64 a3)
{
	__int64 result; // rax
	_BYTE* v7; // rdi
	unsigned __int64 v8; // rsi
	unsigned __int64 v9; // rcx
	_BYTE* v10; // rcx
	bool v11; // zf
	__int64 v12; // rdx
	char v13; // al
	_BYTE* v14; // rbx
	__int64 v15; // rcx
	unsigned __int64 v16; // rsi
	unsigned __int64 v17; // r8
	_BYTE* v18; // rcx
	__int64 v19; // rdx
	char v20; // al
	_BYTE* v21; // rcx
	__int64 v22; // rdx
	char v23; // al
	_BYTE* v24; // rbx
	__int64 v25; // rcx

	if (*a2 == 61)
	{
		result = sub_1407DEB70((__int64)a1, a2 + 1, a3);
		a1[a3 - 1] = 0;
	}
	else if (*a2 == 64)
	{
		v7 = a2 + 1;
		v8 = a3 - 8;
		v9 = -1i64;
		do
			++v9;
		while (v7[v9]);
		*a1 = byte_140C63642;
		if (v9 > v8)
		{
			v7 += v9 - v8;
			v10 = a1 - 1;
			do
				v11 = *++v10 == 0;
			while (!v11);
			v12 = 0i64;
			do
			{
				v13 = byte_140C1DE04[v12++];
				v10[v12 - 1] = v13;
			} while (v13);
		}
		v14 = a1 - 1;
		do
			v11 = *++v14 == 0;
		while (!v11);
		v15 = 0i64;
		do
		{
			result = (unsigned __int8)v7[v15++];
			v14[v15 - 1] = result;
		} while ((_BYTE)result);
	}
	else
	{
		v16 = a3 - 17;
		v17 = sub_1407DEEA4(a2, (unsigned __int8*)asc_140C1DDD4);
		*(_DWORD*)a1 = dword_140C1DDF8;
		if (v17 > v16)
			v17 = v16;
		strcpy(a1 + 4, "ing \"");
		if (a2[v17])
		{
			sub_1407DE560(a1, a2, v17);
			v18 = a1 - 1;
			do
				v11 = *++v18 == 0;
			while (!v11);
			v19 = 0i64;
			do
			{
				v20 = asc_140C1DDC4[v19++];
				v18[v19 - 1] = v20;
			} while (v20);
		}
		else
		{
			v21 = a1 - 1;
			do
				v11 = *++v21 == 0;
			while (!v11);
			v22 = 0i64;
			do
			{
				v23 = a2[v22++];
				v21[v22 - 1] = v23;
			} while (v23);
		}
		v24 = a1 - 1;
		do
			v11 = *++v24 == 0;
		while (!v11);
		v25 = 0i64;
		do
		{
			result = byte_140C1DE08[v25++];
			v24[v25 - 1] = result;
		} while ((_BYTE)result);
	}
	return result;
}
// 140C1DDF8: using guessed type int dword_140C1DDF8;
// 140C1DE04: using guessed type _BYTE byte_140C1DE04[4];
// 140C1DE08: using guessed type unsigned __int8 byte_140C1DE08[4];
// 140C63642: using guessed type char byte_140C63642;

