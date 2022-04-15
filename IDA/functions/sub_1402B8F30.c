//----- (00000001402B8F30) ----------------------------------------------------
__int64 __fastcall sub_1402B8F30(__int64 a1, unsigned __int16 a2, _QWORD* a3)
{
	UINT v6; // r12d
	__int64 v7; // rdi
	__int64 v8; // rsi
	int* v9; // rax
	__int64 result; // rax
	_QWORD* v11; // r15
	HDC v12; // rcx
	int abcA; // r8d
	int v14; // r8d
	int v15; // r9d
	__int64 v16; // r12
	unsigned __int64 v17; // rdi
	unsigned __int64 v18; // rsi
	unsigned __int64 v19; // rdi
	unsigned __int64 v20; // r12
	HDC v21; // rcx
	int piWidths[2]; // [rsp+40h] [rbp-40h] BYREF
	int v23[2]; // [rsp+48h] [rbp-38h] BYREF
	__int64 v24; // [rsp+50h] [rbp-30h]
	__int16 v25; // [rsp+58h] [rbp-28h]
	__int16 v26; // [rsp+5Ah] [rbp-26h]
	struct _ABC pabc; // [rsp+60h] [rbp-20h] BYREF

	v6 = a2;
	v7 = HIBYTE(a2);
	v8 = a1 + 8 * v7;
	if (!*(_QWORD*)(v8 + 272))
	{
		v9 = sub_14018B280(6144i64, 0);
		*(_QWORD*)(v8 + 272) = v9;
		if (!v9)
			return 2147942414i64;
		sub_1407E4830(v9, 0i64, 0x1800ui64);
		if (*(_DWORD*)(a1 + 264) <= (unsigned int)v7)
			*(_DWORD*)(a1 + 264) = v7 + 1;
	}
	v11 = (_QWORD*)(*(_QWORD*)(v8 + 272) + 24i64 * (unsigned __int8)a2);
	if (a3)
		*a3 = v11;
	if (*v11)
		return 1i64;
	v12 = *(HDC*)(a1 + 104);
	if ((*(_BYTE*)(a1 + 231) & 4) != 0)
	{
		GetCharABCWidthsI(v12, v6, 1u, 0i64, &pabc);
		abcA = pabc.abcA;
		if (pabc.abcA < 0)
			abcA = 0;
		v14 = pabc.abcB + abcA;
		v25 = LOWORD(pabc.abcC) + LOWORD(pabc.abcB) + LOWORD(pabc.abcA);
	}
	else
	{
		GetCharWidthI(v12, v6, 1u, 0i64, piWidths);
		v14 = piWidths[0];
		v25 = piWidths[0];
	}
	v15 = *(_DWORD*)(a1 + 176);
	*(_QWORD*)piWidths = __PAIR64__(*(_DWORD*)(a1 + 180), 0);
	v26 = 0;
	v23[1] = v15;
	v23[0] = v14;
	v24 = *(_QWORD*)piWidths;
	if (!v14 || !v15)
	{
		*v11 = -1i64;
		return 0i64;
	}
	v16 = (unsigned int)(v14 + 4);
	v17 = 0i64;
	v18 = (unsigned int)(v15 + 4);
	if (v15 != -4)
	{
		do
		{
			sub_1407E4830(
				(int*)(*(_QWORD*)(a1 + 160) + v17 * *(unsigned int*)(a1 + 156)),
				0i64,
				(v16 * (unsigned __int64)*(unsigned int*)(a1 + 144) + 7) >> 3);
			++v17;
		} while (v17 < v18);
	}
	v19 = 0i64;
	if (v18)
	{
		v20 = 2 * v16;
		do
		{
			sub_1407E4830((int*)(*(_QWORD*)(a1 + 168) + 2 * v19 * *(int*)(a1 + 148)), 0i64, v20);
			++v19;
		} while (v19 < v18);
	}
	v21 = *(HDC*)(a1 + 104);
	piWidths[0] = a2;
	ExtTextOutW(v21, 2, 2, 0x10u, 0i64, (LPCWSTR)piWidths, 1u, 0i64);
	result = sub_1402B9190(a1, (__int64)v23, (__int64)v11);
	if ((int)result >= 0)
		return 0i64;
	return result;
}

