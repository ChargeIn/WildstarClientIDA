//----- (0000000140514F00) ----------------------------------------------------
void __fastcall sub_140514F00(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // r13d
	__int64 v7; // r12
	__int64 v8; // rbx
	_DWORD* v9; // rax
	int v10; // edi
	__int128 v11; // xmm0
	__int128 v12; // xmm1
	__int128 v13; // xmm2
	__int128 v14; // xmm0
	__int64 v15; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v16; // [rsp+40h] [rbp-C8h]
	__int64 v17; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v18; // [rsp+60h] [rbp-A8h]
	_OWORD v19[5]; // [rsp+78h] [rbp-90h] BYREF
	int v20; // [rsp+C8h] [rbp-40h]
	__int128 v21; // [rsp+E8h] [rbp-20h]
	__int128 v22; // [rsp+F8h] [rbp-10h]
	__int128 v23; // [rsp+108h] [rbp+0h]
	__int128 v24; // [rsp+118h] [rbp+10h]

	v3 = 0;
	if (a1)
	{
		sub_140142E30(qword_140C63678, &v17, (unsigned int*)(a1 + 708));
		sub_140142E30(qword_140C63678, &v15, (unsigned int*)(a1 + 708));
		v7 = v16;
		sub_14018D540(
			&v15,
			(__int64)L"<P Font=\"%s\" TextColor=\"%s\" BGColor=\"%s\">%s</P>",
			*(_QWORD*)(*(_QWORD*)(a1 + 696) + 56i64),
			v18,
			v16,
			a3);
		v8 = v15;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 88i64))(a1, v15);
		v9 = sub_1400CB3D0(a1, &v15);
		v10 = v9[3] - v9[1];
		sub_140116830(a1, &v15, 0);
		if (HIDWORD(v15) - v10 > 0)
			v3 = HIDWORD(v15) - v10;
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		if (v7)
			sub_14018B900(v7, 0);
		if (v18)
			sub_14018B900(v18, 0);
	}
	if (a2)
	{
		v11 = *(_OWORD*)(a2 + 80);
		v12 = *(_OWORD*)(a2 + 96);
		v13 = *(_OWORD*)(a2 + 64);
		v20 = *(_DWORD*)(a2 + 144) | 0x300;
		v19[0] = v13;
		v21 = v11;
		v22 = v12;
		v19[2] = v12;
		v23 = *(_OWORD*)(a2 + 112);
		v24 = *(_OWORD*)(a2 + 128);
		v14 = *(_OWORD*)(a2 + 80);
		DWORD1(v24) += v3;
		v19[1] = v14;
		v19[4] = v24;
		v19[3] = *(_OWORD*)(a2 + 112);
		sub_1400CC680(a2, (__int64)v19);
	}
}
// 140B12630: using guessed type wchar_t aPFontSTextcolo[48];
// 140C63678: using guessed type __int64 qword_140C63678;

