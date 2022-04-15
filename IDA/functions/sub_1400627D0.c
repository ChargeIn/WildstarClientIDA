//----- (00000001400627D0) ----------------------------------------------------
__int64 __fastcall sub_1400627D0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	__int64 v6; // rbp
	unsigned __int64 v7; // rsi
	__int64 result; // rax
	char v9; // cl

	if (a2 > 0xFFFFFFFFFFFFFFCDui64)
		sub_14005ABE0(a1, aMemoryAllocati);
	v6 = *(_QWORD*)(a1 + 32);
	v7 = a2 + 48;
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, unsigned __int64))(v6 + 16))(
		*(_QWORD*)(v6 + 24),
		0i64,
		0i64,
		a2 + 48);
	if (!result && a2 != -48i64)
		sub_140061040(a1, 4);
	*(_QWORD*)(v6 + 120) += v7;
	v9 = *(_BYTE*)(*(_QWORD*)(a1 + 32) + 32i64);
	*(_QWORD*)(result + 32) = a2;
	*(_BYTE*)(result + 8) = 7;
	*(_QWORD*)(result + 16) = 0i64;
	*(_QWORD*)(result + 24) = a3;
	*(_BYTE*)(result + 9) = v9 & 3;
	*(_QWORD*)result = **(_QWORD**)(*(_QWORD*)(a1 + 32) + 176i64);
	**(_QWORD**)(*(_QWORD*)(a1 + 32) + 176i64) = result;
	return result;
}

