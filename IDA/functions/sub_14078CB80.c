//----- (000000014078CB80) ----------------------------------------------------
__int64 __fastcall sub_14078CB80(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	int v4; // esi
	_DWORD* v5; // rbp
	_QWORD* v6; // rbp
	unsigned __int64(__fastcall * v7)(__int64, int*); // rax
	char v8; // r14
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rbx
	_QWORD* v14; // rax
	unsigned __int64 v15; // rax
	_QWORD* v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	unsigned __int64 v20; // r8
	__int64 v21; // rcx
	__int64 result; // rax
	__m128i v23; // xmm0
	unsigned __int64 v24; // [rsp+20h] [rbp-28h] BYREF

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	v4 = 0;
	if ((unsigned __int64)v1 >= v3 || (v5 = dword_140A12138, v1 == dword_140A12138) || v1[2] != 8)
	{
		v6 = a1;
	}
	else
	{
		if ((unsigned __int64)v1 < v3)
			v5 = v1;
		if (v5[2] == 8)
			v6 = *(_QWORD**)v5;
		else
			v6 = 0i64;
	}
	v7 = (unsigned __int64(__fastcall*)(__int64, int*))v6[14];
	v8 = *((_BYTE*)v6 + 100);
	if (!v7 || v7 == sub_14078C700)
	{
		sub_14078C820((__int64)a1);
		v11 = a1[2];
		*(_QWORD*)v11 = v6;
		*(_DWORD*)(v11 + 8) = 2;
		a1[2] += 16i64;
		v12 = a1[2];
		v13 = v12 - 16;
		v14 = sub_14005C450(*(_QWORD*)(v12 - 32), (int*)(v12 - 16));
		*(_QWORD*)v13 = *v14;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v14 + 2);
		v15 = a1[2];
		v16 = (_QWORD*)(v15 - 16);
		if (v15 - 16 < v15)
		{
			do
			{
				v17 = *v16;
				v16 += 2;
				*(v16 - 4) = v17;
				*((_DWORD*)v16 - 6) = *((_DWORD*)v16 - 2);
			} while ((unsigned __int64)v16 < a1[2]);
		}
		a1[2] -= 16i64;
	}
	else
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v9 = a1[2];
		v10 = sub_140062650((__int64)a1, (unsigned __int64*)aExternalHook, 0xDui64);
		*(_DWORD*)(v9 + 8) = 4;
		*(_QWORD*)v9 = v10;
		a1[2] += 16i64;
	}
	if ((v8 & 1) != 0)
	{
		LOBYTE(v24) = 99;
		v4 = 1;
	}
	if ((v8 & 2) != 0)
	{
		v18 = v4++;
		*((_BYTE*)&v24 + v18) = 114;
	}
	if ((v8 & 4) != 0)
	{
		v19 = v4++;
		*((_BYTE*)&v24 + v19) = 108;
	}
	v20 = -1i64;
	*((_BYTE*)&v24 + v4) = 0;
	do
		++v20;
	while (*((_BYTE*)&v24 + v20));
	sub_140058710((__int64)a1, &v24, v20);
	v21 = a1[2];
	result = 3i64;
	v23 = _mm_cvtsi32_si128(*((_DWORD*)v6 + 26));
	*(_DWORD*)(v21 + 8) = 3;
	*(_QWORD*)v21 = *(_OWORD*)&_mm_cvtepi32_pd(v23);
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

