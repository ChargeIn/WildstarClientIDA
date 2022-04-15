//----- (000000014057AE60) ----------------------------------------------------
__int64 __fastcall sub_14057AE60(__int64 a1)
{
	int* v2; // rax
	__int64* v3; // rbx
	int* v4; // rax
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rsi
	__int64 v8; // rdi
	int* v9; // rax
	_WORD* v10; // rax

	*(_QWORD*)a1 = 0i64;
	v2 = sub_14018B280(18i64, 0);
	if (v2)
	{
		*(_QWORD*)v2 = off_140B55060;
		*((_QWORD*)v2 + 1) = 0i64;
	}
	else
	{
		v2 = 0i64;
	}
	*((_WORD*)v2 + 8) = 0;
	v3 = (__int64*)(a1 + 24);
	*(_QWORD*)(a1 + 8) = v2 + 4;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 304) = 0i64;
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 384) = 0i64;
	*(_QWORD*)(a1 + 400) = 0i64;
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 480) = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_QWORD*)(a1 + 496) = 0i64;
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_QWORD*)(a1 + 512) = 0i64;
	*(_DWORD*)(a1 + 520) = 0;
	*(_QWORD*)(a1 + 544) = 0i64;
	*(_QWORD*)(a1 + 552) = 0i64;
	v4 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 592) = 0i64;
	*(_QWORD*)(a1 + 584) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 584) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 584) + 16i64) = *(_QWORD*)(a1 + 584);
	*(_QWORD*)(*(_QWORD*)(a1 + 584) + 24i64) = *(_QWORD*)(a1 + 584);
	*(_QWORD*)(a1 + 608) = 0i64;
	*(_QWORD*)(a1 + 616) = 0i64;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_QWORD*)(a1 + 624) = 0i64;
	*(_DWORD*)(a1 + 640) = 300;
	*(_QWORD*)(a1 + 656) = 0i64;
	*(_QWORD*)(a1 + 648) = 0i64;
	sub_140019600((_QWORD*)(a1 + 664));
	*(_QWORD*)(a1 + 704) = 0i64;
	*(_DWORD*)(a1 + 712) = 300;
	*(_DWORD*)(a1 + 716) = -1;
	*(_DWORD*)(a1 + 720) = 0;
	v5 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 744) = 0i64;
	*(_QWORD*)(a1 + 736) = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 736) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 736) + 16i64) = *(_QWORD*)(a1 + 736);
	*(_QWORD*)(*(_QWORD*)(a1 + 736) + 24i64) = *(_QWORD*)(a1 + 736);
	*(_QWORD*)(a1 + 760) = 0i64;
	*(_QWORD*)(a1 + 768) = 0i64;
	*(_DWORD*)(a1 + 792) = 0;
	*(_QWORD*)(a1 + 800) = 0i64;
	*(_QWORD*)(a1 + 816) = 0i64;
	*(_QWORD*)(a1 + 808) = 0i64;
	v6 = sub_14018B280(104i64, 0);
	*(_QWORD*)(a1 + 832) = v6;
	*(_QWORD*)(a1 + 840) = 0i64;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 832) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 832) + 16i64) = *(_QWORD*)(a1 + 832);
	*(_QWORD*)(*(_QWORD*)(a1 + 832) + 24i64) = *(_QWORD*)(a1 + 832);
	*(_QWORD*)(a1 + 856) = 0i64;
	*(_QWORD*)(a1 + 864) = 0i64;
	sub_1407E4830((int*)(a1 + 424), 0i64, 0x30ui64);
	v7 = 10i64;
	do
	{
		v8 = *v3;
		v9 = sub_14018B280(18i64, 0);
		if (v9)
		{
			*(_QWORD*)v9 = off_140B55060;
			*((_QWORD*)v9 + 1) = 0i64;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = v9 + 4;
		*v10 = 0;
		*v3 = (__int64)v10;
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		*((_DWORD*)v3 + 2) = 0;
		v3[3] = 0i64;
		v3[4] = 0i64;
		v3 += 5;
		--v7;
	} while (v7);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

