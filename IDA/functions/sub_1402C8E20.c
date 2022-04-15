//----- (00000001402C8E20) ----------------------------------------------------
__int64 __fastcall sub_1402C8E20(__int64 a1, _OWORD* a2, _OWORD* a3, __int64 a4, _DWORD* a5, int* a6)
{
	unsigned __int64 v7; // rax
	__int128 v8; // xmm0
	int* v9; // rdx
	int* v10; // rcx
	__int64 v11; // rax
	__int128 v12; // xmm0
	__int64 result; // rax

	v7 = 0i64;
	*(_OWORD*)a1 = *a2;
	*(_OWORD*)(a1 + 16) = a2[1];
	*(_OWORD*)(a1 + 32) = a2[2];
	*(_OWORD*)(a1 + 48) = a2[3];
	*(_OWORD*)(a1 + 64) = *a3;
	*(_OWORD*)(a1 + 80) = a3[1];
	*(_OWORD*)(a1 + 96) = a3[2];
	*(_OWORD*)(a1 + 112) = a3[3];
	do
	{
		v8 = *(_OWORD*)(v7 + a4);
		v7 += 16i64;
		*(_OWORD*)(v7 + a1 + 112) = v8;
	} while (v7 < 0x60);
	v9 = a6;
	*(_DWORD*)(a1 + 224) = *a5;
	v10 = (int*)(a1 + 240);
	*(_DWORD*)(a1 + 228) = a5[1];
	if ((((unsigned __int8)(a1 - 16) | (unsigned __int8)a6) & 0xF) != 0)
	{
		sub_1407DB590(v10, a6, 0x310ui64);
		return a1;
	}
	else
	{
		v11 = 6i64;
		do
		{
			v12 = *(_OWORD*)v9;
			v10 += 32;
			v9 += 32;
			*((_OWORD*)v10 - 8) = v12;
			*((_OWORD*)v10 - 7) = *((_OWORD*)v9 - 7);
			*((_OWORD*)v10 - 6) = *((_OWORD*)v9 - 6);
			*((_OWORD*)v10 - 5) = *((_OWORD*)v9 - 5);
			*((_OWORD*)v10 - 4) = *((_OWORD*)v9 - 4);
			*((_OWORD*)v10 - 3) = *((_OWORD*)v9 - 3);
			*((_OWORD*)v10 - 2) = *((_OWORD*)v9 - 2);
			*((_OWORD*)v10 - 1) = *((_OWORD*)v9 - 1);
			--v11;
		} while (v11);
		result = a1;
		*(_OWORD*)v10 = *(_OWORD*)v9;
	}
	return result;
}

