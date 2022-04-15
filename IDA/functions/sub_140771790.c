//----- (0000000140771790) ----------------------------------------------------
__int64* __fastcall sub_140771790(__int64* a1, __int64 a2)
{
	int v2; // ebx
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rbp
	void(__fastcall * **v8)(_QWORD); // rbp
	__int64 v9; // r8
	bool v10; // zf
	__int64 v11; // rbp
	void(__fastcall * **v12)(_QWORD); // rbp
	__int64 v13; // r8
	__int64* v14; // rdi
	_QWORD* v15; // rax
	_QWORD* v16; // rax
	__int64 v18; // [rsp+30h] [rbp-58h] BYREF
	__int64 v19; // [rsp+38h] [rbp-50h]

	*a1 = a2;
	v2 = 0;
	a1[1] = 0i64;
	v5 = sub_14018B280(40i64, 0);
	a1[7] = (__int64)v5;
	*(_QWORD*)v5 = v5;
	*(_QWORD*)(a1[7] + 8) = a1[7];
	sub_140771A30((__int64)(a1 + 8));
	sub_140771A30((__int64)(a1 + 54));
	a1[101] = 0i64;
	a1[100] = 0i64;
	v6 = sub_14018B280(48i64, 0);
	a1[103] = (__int64)v6;
	a1[104] = 0i64;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(a1[103] + 8) = 0i64;
	*(_QWORD*)(a1[103] + 16) = a1[103];
	*(_QWORD*)(a1[103] + 24) = a1[103];
	if (!*a1 && qword_140C65898)
		*a1 = *(_QWORD*)(qword_140C65898 + 29504);
	v7 = *a1;
	if (*a1 && (!a1[58] || !sub_14002C740((__int64)(a1 + 60), L"HexBlock")))
	{
		v8 = (void(__fastcall***)(_QWORD))sub_140108E80(v7 + 240, (const __m128i*)L"HexBlock");
		if (v8)
		{
			v9 = 0i64;
			do
				v10 = aHexblock[++v9] == 0;
			while (!v10);
			sub_14001C480((__int64)(a1 + 60), (int*)L"HexBlock", (int*)&aHexblock[v9]);
		}
		sub_1401097F0(a1 + 58, v8);
	}
	*((_OWORD*)a1 + 27) = xmmword_140B7B240;
	*((_OWORD*)a1 + 28) = xmmword_140B7B240;
	v11 = *a1;
	if (*a1 && (!a1[12] || !sub_14002C740((__int64)(a1 + 14), L"HexBlock")))
	{
		v12 = (void(__fastcall***)(_QWORD))sub_140108E80(v11 + 240, (const __m128i*)L"HexBlock");
		if (v12)
		{
			v13 = 0i64;
			do
				v10 = aHexblock_0[++v13] == 0;
			while (!v10);
			sub_14001C480((__int64)(a1 + 14), (int*)L"HexBlock", (int*)&aHexblock_0[v13]);
		}
		sub_1401097F0(a1 + 12, v12);
	}
	*((_OWORD*)a1 + 4) = xmmword_140B7B240;
	*((_OWORD*)a1 + 5) = xmmword_140B7B240;
	v14 = a1 + 18;
	do
	{
		v15 = sub_14018EFA0(&v18, (__int64)L"HexEdge%d", (unsigned int)v2);
		if (a2)
			sub_140109710(v14 + 46, a2 + 240, (__m128i*)v15[1], 0);
		if (v19)
			sub_14018B900(v19, 0);
		v16 = sub_14018EFA0(&v18, (__int64)L"HexEdge%d", (unsigned int)v2);
		if (a2)
			sub_140109710(v14, a2 + 240, (__m128i*)v16[1], 0);
		if (v19)
			sub_14018B900(v19, 0);
		++v2;
		v14 += 6;
	} while (v2 < 6);
	return a1;
}
// 140B4F0D0: using guessed type wchar_t aHexedgeD_0[10];
// 140B4F0E8: using guessed type wchar_t aHexedgeD[10];
// 140B4F100: using guessed type wchar_t aHexblock_0[9];
// 140B4F118: using guessed type wchar_t aHexblock[9];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;

