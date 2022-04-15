//----- (00000001407D0DC0) ----------------------------------------------------
char* __fastcall sub_1407D0DC0(char* a1, _DWORD* a2)
{
	signed __int64 v2; // r8
	__int128* v3; // rax
	__int64 v4; // rdx
	__int128 v5; // xmm0

	*(_DWORD*)a1 = *a2;
	v2 = a1 - (char*)a2;
	*((_DWORD*)a1 + 1) = a2[1];
	v3 = (__int128*)(a2 + 4);
	v4 = 16i64;
	do
	{
		v5 = *v3++;
		*(__int128*)((char*)v3 + v2 - 16) = v5;
		--v4;
	} while (v4);
	return a1;
}

