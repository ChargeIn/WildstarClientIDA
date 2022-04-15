//----- (00000001400EFFF0) ----------------------------------------------------
__int64 __fastcall sub_1400EFFF0(__int64 a1, __int64 a2, unsigned __int64* a3, float a4)
{
	unsigned __int64 v6; // r8
	__int64 v7; // rax
	__int64* v8; // rax
	__int64 result; // rax

	if (a3)
	{
		v6 = -1i64;
		do
			++v6;
		while (*((_BYTE*)a3 + v6));
		sub_140058710(a1, a3, v6);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v7 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = a4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(a1, v8, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}

