//----- (000000014038E8B0) ----------------------------------------------------
__int64 __fastcall sub_14038E8B0(int* a1, _OWORD* a2, __int64 a3, int a4, int a5)
{
	__int64 v9; // rax

	sub_1407E4830(a1 + 8, 0i64, 0x130ui64);
	*((_OWORD*)a1 + 2) = xmmword_140B7B590;
	*((_OWORD*)a1 + 3) = xmmword_140B7AC50;
	*((_OWORD*)a1 + 4) = *a2;
	*((_OWORD*)a1 + 5) = a2[1];
	*((_OWORD*)a1 + 6) = a2[2];
	*((_OWORD*)a1 + 7) = a2[3];
	*((_OWORD*)a1 + 16) = xmmword_140B7B240;
	a1[75] = a5;
	v9 = *(_QWORD*)a1;
	a1[68] = 1065353216;
	a1[69] = 1065353216;
	a1[72] = 1048576000;
	a1[73] = 1056964608;
	a1[76] = a4;
	*((_QWORD*)a1 + 40) = a3;
	(*(void(__fastcall**)(int*))(v9 + 48))(a1);
	return 0i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B590: using guessed type __int128 xmmword_140B7B590;

