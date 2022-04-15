//----- (0000000140508BE0) ----------------------------------------------------
_QWORD* __fastcall sub_140508BE0(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v3; // rsi
	__int64 v4; // rdx
	__int64 v5; // rbp
	__int64 v6; // rdi
	__int64 v7; // rbx

	v3 = a3;
	v4 = (unsigned __int128)((a2 - a1) * (__int128)0x2E8BA2E8BA2E8BA3i64) >> 64;
	v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 4);
	if (v5 > 0)
	{
		v6 = (__int64)(a3 + 2);
		v7 = a1 + 24;
		do
		{
			*v3 = *(_QWORD*)(v7 - 24);
			*(_QWORD*)(v6 - 8) = *(_QWORD*)(v7 - 16);
			if (v7 - 8 != v6)
				sub_14001C480(v6, *(int**)v7, *(int**)(v7 + 8));
			*(_DWORD*)(v6 + 32) = *(_DWORD*)(v7 + 24);
			*(_DWORD*)(v6 + 36) = *(_DWORD*)(v7 + 28);
			if (v7 + 32 != v6 + 40)
				sub_14001C480(v6 + 40, *(int**)(v7 + 40), *(int**)(v7 + 48));
			--v5;
			v3 += 11;
			v6 += 88i64;
			v7 += 88i64;
		} while (v5 > 0);
	}
	return v3;
}

