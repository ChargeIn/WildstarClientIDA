//----- (00000001400F0630) ----------------------------------------------------
__int64 __fastcall sub_1400F0630(__int64 a1, __int64 a2, unsigned __int16* a3, int a4)
{
	int v6; // edi
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	_DWORD* v9; // rax
	__int64* v10; // rax
	__int64 result; // rax
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]

	v6 = 0;
	v7 = (unsigned __int64*)sub_14018F0E0(&v12, a3)[1];
	if (v7)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_BYTE*)v7 + v8));
		sub_140058710(a1, v7, v8);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v13)
		sub_14018B900(v13, 0);
	v9 = *(_DWORD**)(a1 + 16);
	LOBYTE(v6) = a4 != 0;
	v9[2] = 1;
	*v9 = v6;
	*(_QWORD*)(a1 + 16) += 16i64;
	v10 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(a1, v10, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}

