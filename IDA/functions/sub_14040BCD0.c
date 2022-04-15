//----- (000000014040BCD0) ----------------------------------------------------
char __fastcall sub_14040BCD0(__int64 a1, unsigned int a2)
{
	char v2; // al
	unsigned int v3; // edx
	char v4; // al
	char v5; // al
	char v6; // al
	char v7; // al
	char v8; // al
	char v9; // al
	char v10; // al
	char v11; // al
	char result; // al

	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	v2 = a2 & 7;
	v3 = a2 >> 3;
	*(_BYTE*)(a1 + 9) = v2;
	v4 = v3;
	v3 >>= 3;
	*(_BYTE*)(a1 + 8) = v4 & 7;
	v5 = v3;
	v3 >>= 1;
	*(_DWORD*)(a1 + 12) = v5 & 1;
	v6 = v3;
	v3 >>= 3;
	*(_BYTE*)a1 = v6 & 7;
	v7 = v3;
	v3 >>= 3;
	*(_BYTE*)(a1 + 1) = v7 & 7;
	v8 = v3;
	v3 >>= 3;
	*(_BYTE*)(a1 + 2) = v8 & 7;
	v9 = v3;
	v3 >>= 3;
	*(_BYTE*)(a1 + 3) = v9 & 7;
	v10 = v3;
	v3 >>= 3;
	*(_BYTE*)(a1 + 4) = v10 & 7;
	v11 = v3;
	v3 >>= 3;
	*(_BYTE*)(a1 + 5) = v11 & 7;
	result = v3 & 7;
	*(_BYTE*)(a1 + 7) = (v3 >> 3) & 7;
	*(_BYTE*)(a1 + 6) = v3 & 7;
	return result;
}

