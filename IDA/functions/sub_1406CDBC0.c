//----- (00000001406CDBC0) ----------------------------------------------------
__int64 __fastcall sub_1406CDBC0(__int64 a1, __int64 a2, __int64 a3, _OWORD* a4, __int64 a5)
{
	int v6; // ebp
	int v7; // esi
	int** v8; // rbx
	int* v9; // rax
	int v10; // xmm0_4
	int** v11; // rbx
	int* v12; // rax
	int v13; // xmm0_4
	int v14; // eax
	__int64 result; // rax

	sub_14012FA20(a1, a2, a3, (__m128i*) & unk_1409F7954, 0, 0i64, 0, 0i64, a4, a5, 0i64);
	v6 = 5;
	v7 = 5;
	v8 = (int**)(a1 + 1600);
	*(_QWORD*)a1 = off_140B70E40;
	do
	{
		*(v8 - 1) = 0i64;
		*v8 = 0i64;
		v8[1] = 0i64;
		v9 = sub_14018B280(16i64, 0);
		*(v8 - 1) = v9;
		*v8 = v9;
		v8[1] = v9 + 4;
		if (v9)
			*(_WORD*)v9 = 0;
		v10 = dword_140C63664;
		*(v8 - 4) = 0i64;
		*((_DWORD*)v8 - 5) = 1065353216;
		*((_DWORD*)v8 - 6) = v10;
		v8 += 6;
		--v7;
	} while (v7 >= 0);
	v11 = (int**)(a1 + 1888);
	do
	{
		*(v11 - 1) = 0i64;
		*v11 = 0i64;
		v11[1] = 0i64;
		v12 = sub_14018B280(16i64, 0);
		*(v11 - 1) = v12;
		*v11 = v12;
		v11[1] = v12 + 4;
		if (v12)
			*(_WORD*)v12 = 0;
		v13 = dword_140C63664;
		*(v11 - 4) = 0i64;
		*((_DWORD*)v11 - 5) = 1065353216;
		*((_DWORD*)v11 - 6) = v13;
		v11 += 6;
		--v6;
	} while (v6 >= 0);
	sub_1401095E0(a1 + 2144);
	*(_QWORD*)(a1 + 2208) = 0i64;
	*(_QWORD*)(a1 + 2216) = 15i64;
	*(_QWORD*)(a1 + 2224) = 0i64;
	*(_QWORD*)(a1 + 2232) = 0i64;
	*(_QWORD*)(a1 + 2240) = 0i64;
	*(_DWORD*)(a1 + 2248) = 0;
	*(_DWORD*)(a1 + 2252) = 1;
	v14 = sub_14018CDF0();
	*(_QWORD*)(a1 + 432) |= 0x80000ui64;
	*(_DWORD*)(a1 + 2256) = v14;
	result = a1;
	*(_DWORD*)(a1 + 2260) = 0;
	*(_DWORD*)(a1 + 676) = 3;
	return result;
}
// 140B70E40: using guessed type __int64 (__fastcall *off_140B70E40[25])();
// 140C63664: using guessed type int dword_140C63664;

