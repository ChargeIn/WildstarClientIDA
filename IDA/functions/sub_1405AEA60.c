//----- (00000001405AEA60) ----------------------------------------------------
__int64 __fastcall sub_1405AEA60(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	__m128* v7; // r9
	int v8; // eax

	if (!*(_DWORD*)(a2 + 16) && !*(_DWORD*)(a2 + 12))
		return 1i64;
	v4 = sub_1404C9E20(a1, *(_DWORD*)(a1 + 188), *(_QWORD*)a2);
	v5 = v4;
	if (!v4)
		return 1i64;
	v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v4 + 104));
	v7 = (__m128*)v6;
	if (v6)
	{
		if ((*(_DWORD*)(v6 + 44) & 0x200000) != 0)
			*(_DWORD*)(v5 + 652) = 1;
		*(_DWORD*)(a2 + 8) = *(_DWORD*)(v6 + 40);
		v8 = *(_DWORD*)(v6 + 40);
		v7[2].m128_i32[2] = 16547;
		if ((v8 & 0x100) != 0)
			v7[308].m128_i32[2] = 0;
		sub_14046C300(v7, 1, 0);
		*(_DWORD*)(a2 + 16) = 0;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

