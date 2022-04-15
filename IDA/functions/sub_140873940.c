//----- (0000000140873940) ----------------------------------------------------
__int64 __fastcall sub_140873940(_QWORD* a1)
{
	__int64 result; // rax
	unsigned __int8* v3; // rcx
	unsigned __int8* v4; // rdx
	unsigned __int8* v5; // rbx
	unsigned __int8* v6; // rdi
	__int64* v7; // rbx
	signed __int64 v8; // rdi
	__int64 v9; // rdx

	result = (__int64)off_1409A3278;
	*a1 = off_1409A3278;
	v3 = (unsigned __int8*)a1[3];
	if (v3)
	{
		result = 4294967292i64;
		v4 = v3 + 1;
		v5 = &v3[(*v3 + 4) & 0xFFFFFFFC];
	}
	else
	{
		v4 = 0i64;
		v5 = 0i64;
	}
	if (v3)
	{
		result = *v3;
		v6 = &v3[result + 1];
	}
	else
	{
		v6 = 0i64;
	}
	if (v4 != v6)
	{
		v7 = (__int64*)(v5 + 8);
		v8 = v6 - v4;
		do
		{
			if (*v7)
				result = sub_14083B060(qword_140C61B70, *v7, (__int64)a1);
			v7 += 2;
			--v8;
		} while (v8);
	}
	v9 = a1[3];
	if (v9)
		result = sub_140881720(dword_140C10F20, v9);
	a1[3] = 0i64;
	return result;
}
// 1409A3278: using guessed type __int64 (__fastcall *off_1409A3278[2])();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B70: using guessed type __int64 qword_140C61B70;

