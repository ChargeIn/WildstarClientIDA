//----- (00000001400FB2A0) ----------------------------------------------------
__int64 __fastcall sub_1400FB2A0(__int64 a1, __int64 a2, int a3)
{
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	__int64 v8; // rbx
	unsigned __int16* v9; // r11
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	__int64 v15; // rbx
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]

	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v7 = *(_QWORD*)(v6 + 16);
	*(_QWORD*)v7 = *v5;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	v8 = *(_QWORD*)(a1 + 16);
	v10 = (unsigned __int64*)sub_14018F0E0(&v17, v9)[1];
	if (v10)
	{
		v11 = -1i64;
		do
			++v11;
		while (*((_BYTE*)v10 + v11));
		sub_140058710(v8, v10, v11);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
		*(_QWORD*)(v8 + 16) += 16i64;
	}
	if (v18)
		sub_14018B900(v18, 0);
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), a3);
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	v15 = *(_QWORD*)(a1 + 16);
	sub_14005EA50(
		v15,
		(__int64*)(*(_QWORD*)(v15 + 16) - 48i64),
		(int*)(*(_QWORD*)(v15 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(v15 + 16) - 16i64));
	*(_QWORD*)(v15 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 0i64;
}
// 1400FB2CF: variable 'v6' is possibly undefined
// 1400FB2F0: variable 'v9' is possibly undefined
// 1400FB349: variable 'v13' is possibly undefined

