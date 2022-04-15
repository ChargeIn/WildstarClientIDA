//----- (00000001400F0580) ----------------------------------------------------
__int64 __fastcall sub_1400F0580(__int64 a1, __int64 a2, unsigned __int16* a3, double a4)
{
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v7; // rax
	__int64* v8; // rax
	__int64 result; // rax
	__int64 v10; // [rsp+20h] [rbp-38h] BYREF
	__int64 v11; // [rsp+28h] [rbp-30h]

	v5 = (unsigned __int64*)sub_14018F0E0(&v10, a3)[1];
	if (v5)
	{
		v6 = -1i64;
		do
			++v6;
		while (*((_BYTE*)v5 + v6));
		sub_140058710(a1, v5, v6);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v11)
		sub_14018B900(v11, 0);
	v7 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = a4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(a1, v8, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}

