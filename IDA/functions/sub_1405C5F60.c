//----- (00000001405C5F60) ----------------------------------------------------
__int64 __fastcall sub_1405C5F60(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rbx

	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x6666666666666667i64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 4);
	if (v6 > 0)
	{
		v7 = a2 + 8;
		do
		{
			v7 -= 40i64;
			a3 -= 40i64;
			if (v7 - 8 != a3)
				sub_14001C480(a3, *(int**)v7, *(int**)(v7 + 8));
			--v6;
			*(_DWORD*)(a3 + 32) = *(_DWORD*)(v7 + 24);
			*(_DWORD*)(a3 + 36) = *(_DWORD*)(v7 + 28);
		} while (v6 > 0);
	}
	return a3;
}

