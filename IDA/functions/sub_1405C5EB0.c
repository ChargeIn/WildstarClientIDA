//----- (00000001405C5EB0) ----------------------------------------------------
__int64 __fastcall sub_1405C5EB0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v4; // rdx
	__int64 v5; // rsi
	__int64 v6; // rbx
	__int64 v7; // r14
	__int64 v8; // r15
	int v9; // ecx

	v3 = a3;
	v4 = (unsigned __int128)((a2 - a1) * (__int128)0x6666666666666667i64) >> 64;
	v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 4);
	if (v5 > 0)
	{
		v6 = a1 + 8;
		v7 = a3 - a1 + 24;
		v8 = a3 - a1 + 28;
		do
		{
			if (v6 - 8 != v3)
				sub_14001C480(v3, *(int**)v6, *(int**)(v6 + 8));
			v9 = *(_DWORD*)(v6 + 24);
			--v5;
			v6 += 40i64;
			*(_DWORD*)(v7 + v6 - 40) = v9;
			v3 += 40i64;
			*(_DWORD*)(v8 + v6 - 40) = *(_DWORD*)(v6 - 12);
		} while (v5 > 0);
	}
	return v3;
}

