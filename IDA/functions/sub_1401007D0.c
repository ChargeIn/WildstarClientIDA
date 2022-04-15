//----- (00000001401007D0) ----------------------------------------------------
__int64 __fastcall sub_1401007D0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v6[7]; // [rsp+20h] [rbp-148h] BYREF
	int v7; // [rsp+5Ch] [rbp-10Ch]
	unsigned int v8; // [rsp+78h] [rbp-F0h]
	unsigned int v9; // [rsp+7Ch] [rbp-ECh]

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)a1 = off_140B56C68;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_BYTE*)(a1 + 116) &= ~1u;
	*(_BYTE*)(a1 + 116) |= 2u;
	*(_DWORD*)(a1 + 24) = 0;
	sub_1400FE860((__int64)v6);
	v3 = *(_QWORD*)(a1 + 64);
	if (v3 == *(_QWORD*)(a1 + 72))
	{
		sub_140109F90((__int64*)(a1 + 48), *(__int64**)(a1 + 64), (__int64)v6);
	}
	else
	{
		if (v3)
			sub_1400FEB20(*(_QWORD*)(a1 + 64), (__int64)v6);
		*(_QWORD*)(a1 + 64) += 304i64;
	}
	v4 = v6[0];
	*(_DWORD*)(a1 + 112) = v7;
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	sub_1401429A0(qword_140C63678, v9);
	sub_1401429A0(qword_140C63678, v8);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B56C68: using guessed type __int64 (__fastcall *off_140B56C68[6])();
// 140C63678: using guessed type __int64 qword_140C63678;

