//----- (00000001408F8770) ----------------------------------------------------
__int64 __fastcall sub_1408F8770(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int128 v4; // xmm0
	__int128 v5; // xmm1
	__int64 result; // rax
	__int128 v7; // xmm1

	*(_QWORD*)(a1 + 160) = a2;
	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	v4 = xmmword_140C1AAB0;
	v5 = xmmword_140C1AAC0;
	*(_DWORD*)(a1 + 168) = 15;
	result = 1i64;
	*(_OWORD*)(a1 + 72) = v4;
	*(_OWORD*)(a1 + 88) = v5;
	v7 = xmmword_140C1AAE0;
	*(_OWORD*)(a1 + 104) = xmmword_140C1AAD0;
	*(_OWORD*)(a1 + 120) = v7;
	*(_QWORD*)&v7 = qword_140C1AB00;
	*(_OWORD*)(a1 + 136) = xmmword_140C1AAF0;
	*(_QWORD*)(a1 + 152) = v7;
	return result;
}
// 140C1AAB0: using guessed type __int128 xmmword_140C1AAB0;
// 140C1AAC0: using guessed type __int128 xmmword_140C1AAC0;
// 140C1AAD0: using guessed type __int128 xmmword_140C1AAD0;
// 140C1AAE0: using guessed type __int128 xmmword_140C1AAE0;
// 140C1AAF0: using guessed type __int128 xmmword_140C1AAF0;
// 140C1AB00: using guessed type __int64 qword_140C1AB00;

