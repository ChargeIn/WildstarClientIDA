//----- (00000001403DDC60) ----------------------------------------------------
__int64 __fastcall sub_1403DDC60(__int64 a1, unsigned int* a2)
{
	__int64 v4; // rax
	__int64 v5; // rbp
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rbx
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 i; // rdi
	__int64 v12; // rcx
	__int64 j; // rdi
	__int64 v14; // rcx
	__int64 k; // rdi
	__int64 v16; // rcx
	__int64 m; // rdi
	__int64 v18; // rcx
	__int64 n; // rdi
	__int64 v20; // rcx
	__int64 ii; // rdi
	__int64 v22; // rcx
	__int64 v23; // rax

	v4 = sub_1403D90D0(a1, *a2);
	v5 = v4;
	if (v4)
	{
		if ((*(_BYTE*)(v4 + 5544) & 1) == 0 && (a2[1] & 1) != 0)
		{
			v6 = *(_QWORD*)(qword_140C65898 + 29272);
			if (!v6 || (v7 = *(_DWORD*)(v6 + 20), v7 != 3) && v7 != 8)
				sub_140051AF0(0, 174);
		}
		v8 = qword_140C65898;
		v9 = 0i64;
		for (*(_DWORD*)(v5 + 5544) = *((unsigned __int8*)a2 + 4);
			(unsigned int)v9 < *(_DWORD*)(v8 + 164);
			v9 = (unsigned int)(v9 + 1))
		{
			v10 = *(_QWORD*)(*(_QWORD*)(v8 + 176) + 8 * v9);
			if (v10)
				sub_14056A430(v10);
		}
		for (i = 0i64; (unsigned int)i < *(_DWORD*)(v8 + 188); i = (unsigned int)(i + 1))
		{
			v12 = *(_QWORD*)(*(_QWORD*)(v8 + 200) + 8 * i);
			if (v12)
				sub_14056A430(v12);
		}
		for (j = 0i64; (unsigned int)j < *(_DWORD*)(v8 + 212); j = (unsigned int)(j + 1))
		{
			v14 = *(_QWORD*)(*(_QWORD*)(v8 + 224) + 8 * j);
			if (v14)
				sub_14056A430(v14);
		}
		for (k = 0i64; (unsigned int)k < *(_DWORD*)(v8 + 236); k = (unsigned int)(k + 1))
		{
			v16 = *(_QWORD*)(*(_QWORD*)(v8 + 248) + 8 * k);
			if (v16)
				sub_14056A430(v16);
		}
		for (m = 0i64; (unsigned int)m < *(_DWORD*)(v8 + 260); m = (unsigned int)(m + 1))
		{
			v18 = *(_QWORD*)(*(_QWORD*)(v8 + 272) + 8 * m);
			if (v18)
				sub_14056A430(v18);
		}
		for (n = 0i64; (unsigned int)n < *(_DWORD*)(v8 + 284); n = (unsigned int)(n + 1))
		{
			v20 = *(_QWORD*)(*(_QWORD*)(v8 + 296) + 8 * n);
			if (v20)
				sub_14056A430(v20);
		}
		for (ii = 0i64; (unsigned int)ii < *(_DWORD*)(v8 + 308); ii = (unsigned int)(ii + 1))
		{
			v22 = *(_QWORD*)(*(_QWORD*)(v8 + 320) + 8 * ii);
			if (v22)
				sub_14056A430(v22);
		}
		v23 = *(_QWORD*)(a1 + 120);
		if (v5 == v23)
		{
			if ((a2[1] & 1) == 0)
				*(_DWORD*)(a1 + 28136) = 0;
			if (v5 == v23 && (a2[1] & 1) != 0)
				sub_140437A10((_QWORD*)qword_140C658D8, 0x18Eu, 0, 0i64, 0, 0, 1);
		}
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "UnitPvpFlagsChanged", L"U", *a2);
	}
	return 0i64;
}
// 1409EEC0C: using guessed type wchar_t aU_6[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;

