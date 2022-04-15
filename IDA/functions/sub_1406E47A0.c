//----- (00000001406E47A0) ----------------------------------------------------
float* __fastcall sub_1406E47A0(__int64 a1, float a2)
{
	int v2; // eax
	__int64 v3; // rdx
	int v4; // eax
	__int128 v6; // [rsp+20h] [rbp-98h]
	__int128 v7; // [rsp+30h] [rbp-88h]
	__int128 v8[6]; // [rsp+40h] [rbp-78h] BYREF

	v2 = dword_140C53B80;
	LODWORD(v7) = 0;
	*((_QWORD*)&v6 + 1) = 0i64;
	if (*(_DWORD*)qword_140C63750 < dword_140C53B80)
		v2 = *(_DWORD*)qword_140C63750;
	v3 = v2;
	v4 = dword_140C53BE0;
	if (*(_DWORD*)qword_140C63750 < dword_140C53BE0)
		v4 = *(_DWORD*)qword_140C63750;
	*((_QWORD*)&v7 + 1) = a1 + 1104;
	LODWORD(v6) = fminf(dword_140C53BF0[v4], fmaxf(dword_140C53B90[v3], a2));
	v8[0] = v6;
	v8[1] = v7;
	*(_DWORD*)(a1 + 1136) = v6;
	*(_DWORD*)(a1 + 1140) = v6;
	return sub_1401B0840((int*)v8, a1 + 1040);
}
// 1406E483E: variable 'v6' is possibly undefined
// 1406E4843: variable 'v7' is possibly undefined
// 140C53B80: using guessed type int dword_140C53B80;
// 140C53B90: using guessed type float dword_140C53B90[16];
// 140C53BE0: using guessed type int dword_140C53BE0;
// 140C53BF0: using guessed type float dword_140C53BF0[16];
// 140C63750: using guessed type __int64 qword_140C63750;

