//----- (0000000140797150) ----------------------------------------------------
__int64 __fastcall sub_140797150(__int64 a1, __m128i* a2)
{
	__int64 v2; // r8
	__int64 v5; // rbp
	unsigned __int64 v6; // rbx
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	unsigned int* v9; // r9
	unsigned __int64 v10; // r8
	__int64 v11; // rbp
	unsigned __int64 v12; // r8
	__int64 v13; // rax
	unsigned int* v14; // r9
	__m128i* v15; // rax
	__m128i* v16; // rax
	__int64 v17; // rsi
	__int64 v18; // rax
	unsigned int* v19; // r9
	__int64 result; // rax
	__int64 v21; // [rsp+20h] [rbp-18h] BYREF
	int v22; // [rsp+28h] [rbp-10h]

	v2 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	*(_QWORD*)(a1 + 16) += 16i64;
	v5 = *(_QWORD*)(a1 + 16);
	v6 = -1i64;
	v7 = -1i64;
	do
		++v7;
	while (aM[v7]);
	v8 = sub_140062650(a1, (unsigned __int64*)aM, v7);
	v9 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v21 = v8;
	v22 = 4;
	sub_14005EA50(a1, (__int64*)(v5 - 32), (int*)&v21, v9);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (a2)
	{
		v10 = -1i64;
		do
			++v10;
		while (a2->m128i_i8[v10]);
		sub_140058710(a1, (unsigned __int64*)a2, v10);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v11 = *(_QWORD*)(a1 + 16);
	v12 = -1i64;
	do
		++v12;
	while (aName_37[v12]);
	v13 = sub_140062650(a1, (unsigned __int64*)aName_37, v12);
	v14 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v21 = v13;
	v22 = 4;
	sub_14005EA50(a1, (__int64*)(v11 - 32), (int*)&v21, v14);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v15 = sub_1407E05F0(a2, 46);
	if (v15)
		v16 = (__m128i*) & v15->m128i_i8[1];
	else
		v16 = a2;
	sub_140058710(a1, (unsigned __int64*)a2, (char*)v16 - (char*)a2);
	v17 = *(_QWORD*)(a1 + 16);
	do
		++v6;
	while (aPackage_0[v6]);
	v18 = sub_140062650(a1, (unsigned __int64*)aPackage_0, v6);
	v19 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v21 = v18;
	v22 = 4;
	result = sub_14005EA50(a1, (__int64*)(v17 - 32), (int*)&v21, v19);
	*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}

