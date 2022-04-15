//----- (00000001401A7460) ----------------------------------------------------
__int64 __fastcall sub_1401A7460(__int64 a1, __int64 a2)
{
	_QWORD* i; // rsi
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rax

	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 24) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)a1 = off_140B5EB10;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_BYTE*)(a1 + 88) = *(_BYTE*)(a2 + 88);
	*(_BYTE*)(a1 + 89) = *(_BYTE*)(a2 + 89);
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(a2 + 92);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a2 + 96);
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = off_140B5EAA8;
	*(_QWORD*)(a1 + 224) = 10i64;
	*(_QWORD*)(a1 + 136) = a1 + 144;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = off_140B5EA78;
	*(_QWORD*)(a1 + 352) = 10i64;
	*(_QWORD*)(a1 + 264) = a1 + 272;
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 368) = 0i64;
	*(_QWORD*)(a1 + 376) = 0i64;
	*(_QWORD*)(a1 + 384) = off_140B5EA48;
	*(_QWORD*)(a1 + 480) = 10i64;
	*(_QWORD*)(a1 + 392) = a1 + 400;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_QWORD*)(a1 + 496) = 0i64;
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_QWORD*)(a1 + 512) = off_140B5EA18;
	*(_QWORD*)(a1 + 608) = 10i64;
	*(_QWORD*)(a1 + 520) = a1 + 528;
	*(_QWORD*)(a1 + 616) = 0i64;
	*(_QWORD*)(a1 + 624) = 0i64;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_QWORD*)(a1 + 8) = a1;
	for (i = *(_QWORD**)(a2 + 48); i; i = (_QWORD*)i[9])
	{
		v4 = sub_1401A5CA0(i, a1);
		if (*(_QWORD*)(v4 + 8) == *(_QWORD*)(a1 + 8))
		{
			v5 = *(_QWORD*)(v4 + 16);
			if (v5)
			{
				v6 = *(_QWORD*)(v5 + 48);
				if (v4 == v6)
					*(_QWORD*)(v5 + 48) = *(_QWORD*)(v6 + 72);
				v7 = *(_QWORD*)(v5 + 56);
				if (v4 == v7)
					*(_QWORD*)(v5 + 56) = *(_QWORD*)(v7 + 64);
				v8 = *(_QWORD*)(v4 + 64);
				if (v8)
					*(_QWORD*)(v8 + 72) = *(_QWORD*)(v4 + 72);
				v9 = *(_QWORD*)(v4 + 72);
				if (v9)
					*(_QWORD*)(v9 + 64) = *(_QWORD*)(v4 + 64);
				*(_QWORD*)(v4 + 16) = 0i64;
			}
			else
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 80) + 32i64))(*(_QWORD*)(v4 + 80));
			}
			v10 = *(_QWORD*)(a1 + 56);
			if (v10)
			{
				*(_QWORD*)(v10 + 72) = v4;
				*(_QWORD*)(v4 + 64) = *(_QWORD*)(a1 + 56);
				*(_QWORD*)(a1 + 56) = v4;
			}
			else
			{
				*(_QWORD*)(a1 + 56) = v4;
				*(_QWORD*)(a1 + 48) = v4;
				*(_QWORD*)(v4 + 64) = 0i64;
			}
			*(_QWORD*)(v4 + 72) = 0i64;
			*(_QWORD*)(v4 + 16) = a1;
		}
	}
	return a1;
}
// 140B5EA18: using guessed type __int64 (__fastcall *off_140B5EA18[25])();
// 140B5EA48: using guessed type __int64 (__fastcall *off_140B5EA48[19])();
// 140B5EA78: using guessed type __int64 (__fastcall *off_140B5EA78[13])();
// 140B5EAA8: using guessed type __int64 (__fastcall *off_140B5EAA8[7])();
// 140B5EB10: using guessed type __int64 (__fastcall *off_140B5EB10[35])();

