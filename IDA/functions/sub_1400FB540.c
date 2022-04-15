//----- (00000001400FB540) ----------------------------------------------------
__int64 __fastcall sub_1400FB540(__int64 a1)
{
	_QWORD* v1; // r10
	__int64 v3; // rsi
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	__int64 v7; // rbx
	unsigned __int16* v8; // r11
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	_DWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	__int64 v14; // rbx
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	__int64 v17; // [rsp+28h] [rbp-20h]

	v1 = *(_QWORD**)(a1 + 16);
	v3 = (__int64)(v1[2] - v1[3]) >> 4;
	v4 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), *(_DWORD*)(a1 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	v7 = *(_QWORD*)(a1 + 16);
	v9 = (unsigned __int64*)sub_14018F0E0(&v16, v8)[1];
	if (v9)
	{
		v10 = -1i64;
		do
			++v10;
		while (*((_BYTE*)v9 + v10));
		sub_140058710(v7, v9, v10);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v7 + 16) + 8i64) = 0;
		*(_QWORD*)(v7 + 16) += 16i64;
	}
	if (v17)
		sub_14018B900(v17, 0);
	v11 = sub_1400580E0(*(_QWORD*)(a1 + 16), v3);
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *(_QWORD*)v11;
	*(_DWORD*)(v13 + 8) = v11[2];
	*(_QWORD*)(v12 + 16) += 16i64;
	v14 = *(_QWORD*)(a1 + 16);
	sub_14005EA50(
		v14,
		(__int64*)(*(_QWORD*)(v14 + 16) - 48i64),
		(int*)(*(_QWORD*)(v14 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(v14 + 16) - 16i64));
	*(_QWORD*)(v14 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 0i64;
}
// 1400FB578: variable 'v5' is possibly undefined
// 1400FB599: variable 'v8' is possibly undefined
// 1400FB5F1: variable 'v12' is possibly undefined

