//----- (000000014085C110) ----------------------------------------------------
__int64 __fastcall sub_14085C110(__int64 a1, int** a2)
{
	__int64 result; // rax
	char v5; // cl
	char v6; // cl
	char v7; // cl
	int* v8; // rax
	char v9; // bl
	__int16 v10; // cx
	int v11; // ecx

	result = sub_1408502F0((__int64*)(a1 + 80), a2);
	if ((_DWORD)result == 1)
	{
		v5 = *(_BYTE*)*a2;
		*a2 = (int*)((char*)*a2 + 1);
		*(_BYTE*)(a1 + 91) &= ~4u;
		*(_BYTE*)(a1 + 91) |= 4 * (v5 != 0);
		v6 = *(_BYTE*)*a2;
		*a2 = (int*)((char*)*a2 + 1);
		*(_BYTE*)(a1 + 91) &= ~0x20u;
		*(_BYTE*)(a1 + 91) |= 32 * (v6 != 0);
		v7 = *(_BYTE*)*a2;
		v8 = (int*)((char*)*a2 + 1);
		*a2 = v8;
		v9 = *(_BYTE*)v8;
		*a2 = (int*)((char*)v8 + 1);
		sub_140854640(a1, v7 != 0);
		sub_140854910(a1, v9 != 0);
		v10 = *(_WORD*)*a2;
		*a2 = (int*)((char*)*a2 + 2);
		*(_WORD*)(a1 + 88) = v10;
		LOBYTE(v10) = *(_BYTE*)*a2;
		*a2 = (int*)((char*)*a2 + 1);
		*(_BYTE*)(a1 + 90) &= ~8u;
		*(_BYTE*)(a1 + 90) |= 8 * (v10 & 1);
		v11 = *(unsigned __int16*)*a2;
		*a2 = (int*)((char*)*a2 + 2);
		*(_BYTE*)(a1 + 90) |= 0x80u;
		*(_DWORD*)(a1 + 164) = v11;
		*a2 = (int*)((char*)*a2 + 2);
		LOBYTE(v11) = *(_BYTE*)*a2;
		*a2 = (int*)((char*)*a2 + 1);
		*(_BYTE*)(a1 + 91) &= ~8u;
		*(_BYTE*)(a1 + 91) |= 8 * (v11 & 1);
		LOBYTE(v11) = *(_BYTE*)*a2;
		*a2 = (int*)((char*)*a2 + 1);
		*(_BYTE*)(a1 + 328) &= ~0x10u;
		result = 1i64;
		*(_BYTE*)(a1 + 328) |= 16 * (v11 & 1);
	}
	return result;
}

