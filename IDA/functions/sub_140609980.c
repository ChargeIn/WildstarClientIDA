//----- (0000000140609980) ----------------------------------------------------
__int64 __fastcall sub_140609980(__int64 a1, int a2)
{
	int v2; // eax
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int128 v11; // [rsp+20h] [rbp-38h] BYREF
	__int128 v12; // [rsp+30h] [rbp-28h] BYREF

	v2 = dword_140DC3930;
	*(_DWORD*)(a1 + 236) = a2;
	*(_DWORD*)(a1 + 112) = a2;
	*(_DWORD*)(a1 + 224) = a2;
	if ((v2 & 1) == 0)
	{
		v2 |= 1u;
		dword_140DC3930 = v2;
		xmmword_140DC3940[0] = xmmword_140B7AC90;
		xmmword_140DC3950 = xmmword_140B7AC80;
		xmmword_140DC3960 = xmmword_140B7ACB0;
		xmmword_140DC3970 = xmmword_140B7AC90;
		xmmword_140DC3980 = xmmword_140B7AC90;
		xmmword_140DC3990 = xmmword_140B7AC90;
		xmmword_140DC39A0 = xmmword_140B7AC90;
		xmmword_140DC39B0 = xmmword_140B7AC90;
		xmmword_140DC39C0 = xmmword_140B7AC90;
		xmmword_140DC39D0 = xmmword_140B7AC90;
		xmmword_140DC39E0 = xmmword_140B7AC90;
		xmmword_140DC39F0 = xmmword_140B7AC90;
		xmmword_140DC3A00 = xmmword_140B7AC90;
	}
	if ((v2 & 2) == 0)
	{
		dword_140DC3930 = v2 | 2;
		xmmword_140DC3A10[0] = xmmword_140B7AEF0;
		xmmword_140DC3A20 = xmmword_140B7AD70;
		xmmword_140DC3A30 = xmmword_140B7B240;
		xmmword_140DC3A40 = xmmword_140B7AEF0;
		xmmword_140DC3A50 = xmmword_140B7AEF0;
		xmmword_140DC3A60 = xmmword_140B7AEF0;
		xmmword_140DC3A70 = xmmword_140B7AEF0;
		xmmword_140DC3A80 = xmmword_140B7AEF0;
		xmmword_140DC3A90 = xmmword_140B7AEF0;
		xmmword_140DC3AA0 = xmmword_140B7AEF0;
		xmmword_140DC3AB0 = xmmword_140B7AEF0;
		xmmword_140DC3AC0 = xmmword_140B7AEF0;
		xmmword_140DC3AD0 = xmmword_140B7AEF0;
	}
	result = sub_14060A6D0(
		(_QWORD*)(a1 + 240),
		(__int64)&xmmword_140DC3940[*(int*)(a1 + 236)],
		(__int64)&xmmword_140DC3A10[*(int*)(a1 + 236)]);
	v5 = *(_QWORD*)(a1 + 296);
	v11 = xmmword_140B7AEB0;
	v12 = xmmword_140B7ACB0;
	if (v5)
	{
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v5 + 176i64))(v5, &v12);
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 296) + 112i64))(*(_QWORD*)(a1 + 296));
	}
	v6 = *(_QWORD*)(a1 + 304);
	if (v6)
	{
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v6 + 176i64))(v6, &v11);
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 304) + 112i64))(*(_QWORD*)(a1 + 304));
	}
	v7 = *(_QWORD*)(a1 + 312);
	if (v7)
	{
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v7 + 176i64))(v7, &v11);
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 312) + 112i64))(*(_QWORD*)(a1 + 312));
	}
	v8 = *(_QWORD*)(a1 + 352);
	v12 = xmmword_140B7ACB0;
	v11 = xmmword_140B7AF90;
	if (v8)
	{
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v8 + 176i64))(v8, &v12);
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 352) + 112i64))(*(_QWORD*)(a1 + 352));
	}
	v9 = *(_QWORD*)(a1 + 360);
	if (v9)
	{
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v9 + 176i64))(v9, &v11);
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 360) + 112i64))(*(_QWORD*)(a1 + 360));
	}
	v10 = *(_QWORD*)(a1 + 368);
	if (v10)
	{
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v10 + 176i64))(v10, &v11);
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 368) + 112i64))(*(_QWORD*)(a1 + 368));
	}
	return result;
}
// 140B7AC80: using guessed type __int128 xmmword_140B7AC80;
// 140B7AC90: using guessed type __int128 xmmword_140B7AC90;
// 140B7ACB0: using guessed type __int128 xmmword_140B7ACB0;
// 140B7AD70: using guessed type __int128 xmmword_140B7AD70;
// 140B7AEB0: using guessed type __int128 xmmword_140B7AEB0;
// 140B7AEF0: using guessed type __int128 xmmword_140B7AEF0;
// 140B7AF90: using guessed type __int128 xmmword_140B7AF90;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140DC3930: using guessed type int dword_140DC3930;
// 140DC3940: using guessed type __int128 xmmword_140DC3940[];
// 140DC3950: using guessed type __int128 xmmword_140DC3950;
// 140DC3960: using guessed type __int128 xmmword_140DC3960;
// 140DC3970: using guessed type __int128 xmmword_140DC3970;
// 140DC3980: using guessed type __int128 xmmword_140DC3980;
// 140DC3990: using guessed type __int128 xmmword_140DC3990;
// 140DC39A0: using guessed type __int128 xmmword_140DC39A0;
// 140DC39B0: using guessed type __int128 xmmword_140DC39B0;
// 140DC39C0: using guessed type __int128 xmmword_140DC39C0;
// 140DC39D0: using guessed type __int128 xmmword_140DC39D0;
// 140DC39E0: using guessed type __int128 xmmword_140DC39E0;
// 140DC39F0: using guessed type __int128 xmmword_140DC39F0;
// 140DC3A00: using guessed type __int128 xmmword_140DC3A00;
// 140DC3A10: using guessed type __int128 xmmword_140DC3A10[];
// 140DC3A20: using guessed type __int128 xmmword_140DC3A20;
// 140DC3A30: using guessed type __int128 xmmword_140DC3A30;
// 140DC3A40: using guessed type __int128 xmmword_140DC3A40;
// 140DC3A50: using guessed type __int128 xmmword_140DC3A50;
// 140DC3A60: using guessed type __int128 xmmword_140DC3A60;
// 140DC3A70: using guessed type __int128 xmmword_140DC3A70;
// 140DC3A80: using guessed type __int128 xmmword_140DC3A80;
// 140DC3A90: using guessed type __int128 xmmword_140DC3A90;
// 140DC3AA0: using guessed type __int128 xmmword_140DC3AA0;
// 140DC3AB0: using guessed type __int128 xmmword_140DC3AB0;
// 140DC3AC0: using guessed type __int128 xmmword_140DC3AC0;
// 140DC3AD0: using guessed type __int128 xmmword_140DC3AD0;

