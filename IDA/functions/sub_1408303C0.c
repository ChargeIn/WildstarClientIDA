//----- (00000001408303C0) ----------------------------------------------------
__int64 __fastcall sub_1408303C0(__int64 a1)
{
	_QWORD* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	_QWORD* v5; // rcx
	unsigned int v6; // edi
	unsigned int v7; // edx
	_QWORD* v8; // rax
	__int64 v9; // rax
	int v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+24h] [rbp-24h]
	__int64 v13; // [rsp+2Ch] [rbp-1Ch]
	int v14; // [rsp+34h] [rbp-14h]

	*(_DWORD*)(a1 + 48) = dword_140C10F20;
	v2 = (_QWORD*)(a1 + 56);
	*(_DWORD*)(a1 + 1600) = 0;
	v3 = 24i64;
	do
	{
		*v2 = 0i64;
		v2[1] = 0i64;
		v2[2] = 0i64;
		v2 += 8;
		*(v2 - 5) = 0i64;
		*(v2 - 4) = 0i64;
		*(v2 - 3) = 0i64;
		*(v2 - 2) = 0i64;
		*(v2 - 1) = 0i64;
		--v3;
	} while (v3);
	*v2 = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	*(_DWORD*)(a1 + 28) = -1;
	*(_QWORD*)(a1 + 16) = 0i64;
	v4 = sub_1408819F0(dword_140C10F20, 128i64);
	v5 = (_QWORD*)v4;
	*(_QWORD*)(a1 + 40) = v4;
	if (v4)
	{
		*(_DWORD*)(a1 + 24) = 8;
		*(_QWORD*)(a1 + 16) = v4;
		v7 = 0;
		do
		{
			v8 = v5 + 2;
			++v7;
			*v5 = v5 + 2;
			v5 += 2;
		} while (v7 < *(_DWORD*)(a1 + 24));
		*(v8 - 2) = 0i64;
		v6 = 1;
	}
	else
	{
		v6 = 52;
	}
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	if (v6 == 1)
	{
		v9 = sub_140830570(a1, 0i64);
		if (v9)
		{
			v12 = 0i64;
			v13 = 0i64;
			v14 = 0;
			v11 = 0;
			sub_14084C5C0(v9, &v11, 1u, 0);
		}
	}
	return v6;
}
// 140C10F20: using guessed type int dword_140C10F20;

