//----- (00000001404E9720) ----------------------------------------------------
__int64 __fastcall sub_1404E9720(_QWORD* a1)
{
	__int64 v1; // rdx
	__int64* v3; // rax
	__int64* v4; // rcx
	int v5; // eax
	BOOL v6; // eax
	unsigned int v7; // edi
	int v8; // r8d
	int v9; // eax
	unsigned int(__fastcall * v10)(_QWORD, unsigned int*); // rax
	__int64 v11; // rax
	__m128i v12; // xmm0
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]
	unsigned int v16; // [rsp+48h] [rbp+10h] BYREF
	__int64 v17; // [rsp+50h] [rbp+18h] BYREF

	v1 = qword_140C63658;
	if (!qword_140C63658)
		sub_140056830(a1, (unsigned __int64*)"AlienFx not loaded.");
	v3 = (__int64*)a1[3];
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)v3 < a1[2])
		v4 = v3;
	v5 = *((_DWORD*)v4 + 2);
	if (v5 == 3)
		goto LABEL_9;
	if (v5 == 4)
	{
		v6 = sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v17);
		v1 = qword_140C63658;
		if (v6)
		{
			v15 = 3;
			v4 = &v14;
			v14 = v17;
		LABEL_9:
			v7 = (int)*(double*)v4;
			goto LABEL_10;
		}
	}
	v7 = 0;
LABEL_10:
	v8 = dword_140C3CB80;
	v9 = dword_140C3CB80;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v9 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v9 + 32) || !*(_QWORD*)(v1 + 32) || !*(_DWORD*)(v1 + 44))
		goto LABEL_22;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v8 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v8 + 32)
		|| (v10 = *(unsigned int(__fastcall**)(_QWORD, unsigned int*))(v1 + 112)) == 0i64
		|| v10(v7, &v16))
	{
	LABEL_22:
		sub_140056830(a1, (unsigned __int64*)"GetLightCount failed to get the light count on device %d", v7);
	}
	v11 = a1[2];
	v12 = _mm_cvtsi32_si128(v16);
	*(_DWORD*)(v11 + 8) = 3;
	*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v12);
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C3CB70: using guessed type __int64 (__fastcall *off_140C3CB70)();
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;

