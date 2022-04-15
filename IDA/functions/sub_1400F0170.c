//----- (00000001400F0170) ----------------------------------------------------
__int64 __fastcall sub_1400F0170(__int64 a1, __int64 a2, unsigned __int64* a3, float* a4)
{
	unsigned __int64 v7; // r8
	__int64 v8; // rbx
	__int64 v9; // rax
	float v10; // xmm6_4
	__int64 v11; // rax
	__int64* v12; // rax
	float v13; // xmm6_4
	__int64 v14; // rax
	__int64* v15; // rax
	float v16; // xmm6_4
	__int64 v17; // rax
	__int64* v18; // rax
	__int64* v19; // rax
	__int64 result; // rax

	if (a3)
	{
		v7 = -1i64;
		do
			++v7;
		while (*((_BYTE*)a3 + v7));
		sub_140058710(a1, a3, v7);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v8 = *(_QWORD*)(a1 + 16);
	v9 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(a1 + 16) += 16i64;
	v10 = *a4;
	sub_140058710(a1, qword_1409D3EDC, 1ui64);
	v11 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v11 + 8) = 3;
	*(double*)v11 = v10;
	*(_QWORD*)(a1 + 16) += 16i64;
	v12 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v12, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v13 = a4[1];
	sub_140058710(a1, qword_1409D3F24, 1ui64);
	v14 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	v15 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v15, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v16 = a4[2];
	sub_140058710(a1, qword_1409D3F44, 1ui64);
	v17 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v17 + 8) = 3;
	*(double*)v17 = v16;
	*(_QWORD*)(a1 + 16) += 16i64;
	v18 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v18, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	v19 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}
// 1409D3EDC: using guessed type unsigned __int64 qword_1409D3EDC[9];
// 1409D3F24: using guessed type unsigned __int64 qword_1409D3F24[4];
// 1409D3F44: using guessed type unsigned __int64 qword_1409D3F44[4];

