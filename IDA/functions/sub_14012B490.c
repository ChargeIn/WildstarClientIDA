//----- (000000014012B490) ----------------------------------------------------
_QWORD* __fastcall sub_14012B490(_QWORD* a1, _QWORD* a2)
{
	__int64 v4; // rax
	_QWORD* v5; // rbx

	sub_14012A290((__int64)a1);
	if (!a1[82])
	{
		v4 = (*(__int64(__fastcall**)(_QWORD*))(a1[18] + 16i64))(a1 + 18);
		v5 = (_QWORD*)v4;
		if (v4)
		{
			*(_QWORD*)(v4 + 8) = a1 + 2;
			*(_QWORD*)(v4 + 16) = 0i64;
			*(_DWORD*)(v4 + 24) = 0;
			*(_QWORD*)(v4 + 32) = 0i64;
			*(_QWORD*)(v4 + 40) = 0i64;
			*(_QWORD*)(v4 + 48) = 0i64;
			*(_QWORD*)(v4 + 56) = 0i64;
			*(_QWORD*)(v4 + 64) = 0i64;
			*(_QWORD*)(v4 + 72) = 0i64;
			*(_QWORD*)(v4 + 80) = 0i64;
			*(_QWORD*)v4 = off_140B5EBA0;
			*(_DWORD*)(v4 + 88) = 0;
			*(_QWORD*)(v4 + 96) = 0i64;
		}
		else
		{
			v5 = 0i64;
		}
		v5[10] = a1 + 18;
		sub_1401A4C50((__int64)(v5 + 3), (int*)L"Root");
		a1[82] = v5;
		sub_1401A5A70(a1 + 2, v5);
	}
	return sub_1401A5A70((_QWORD*)a1[82], a2);
}
// 140A20808: using guessed type wchar_t aRoot_0[5];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();

