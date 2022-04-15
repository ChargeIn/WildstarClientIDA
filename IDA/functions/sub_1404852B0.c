//----- (00000001404852B0) ----------------------------------------------------
__int64 __fastcall sub_1404852B0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v4; // rdi
	int v5; // eax
	int v6; // ecx
	int v7; // edx
	__int64 v8; // rax
	__int16 v9; // dx
	__int16 v10; // cx
	__int64 result; // rax

	v4 = sub_1401F6D60(a3);
	*(_DWORD*)a2 = *(_DWORD*)v4;
	*(_DWORD*)(a2 + 8) = *(_DWORD*)(v4 + 16);
	*(_DWORD*)(a2 + 12) = *(_DWORD*)(v4 + 20);
	*(_DWORD*)(a2 + 16) = *(_DWORD*)(v4 + 32);
	*(_DWORD*)(a2 + 24) = *(_DWORD*)(v4 + 36);
	*(_DWORD*)(a2 + 28) = *(_DWORD*)(v4 + 24);
	*(_DWORD*)(a2 + 32) = *(_DWORD*)(v4 + 368);
	*(_DWORD*)(a2 + 36) = *(_DWORD*)(v4 + 372);
	*(_DWORD*)(a2 + 40) = *(_DWORD*)(v4 + 684);
	*(_DWORD*)(a2 + 56) = *(_DWORD*)(v4 + 52);
	*(_DWORD*)(a2 + 144) = *(_DWORD*)(v4 + 336);
	*(_DWORD*)(a2 + 148) = *(_DWORD*)(v4 + 340);
	*(_DWORD*)(a2 + 152) = *(_DWORD*)(v4 + 344);
	*(_DWORD*)(a2 + 60) = *(_DWORD*)(v4 + 112);
	*(_DWORD*)(a2 + 64) = *(_DWORD*)(v4 + 116);
	*(_DWORD*)(a2 + 68) = *(_DWORD*)(v4 + 120);
	*(_DWORD*)(a2 + 72) = *(_DWORD*)(v4 + 92);
	*(_DWORD*)(a2 + 76) = *(_DWORD*)(v4 + 96);
	*(_DWORD*)(a2 + 80) = *(_DWORD*)(v4 + 100);
	*(_DWORD*)(a2 + 108) = *(_DWORD*)(v4 + 376);
	*(_DWORD*)(a2 + 112) = *(_DWORD*)(v4 + 380);
	*(_DWORD*)(a2 + 116) = *(_DWORD*)(v4 + 384);
	*(_DWORD*)(a2 + 120) = *(_DWORD*)(v4 + 388);
	*(_DWORD*)(a2 + 124) = *(_DWORD*)(v4 + 392);
	*(_DWORD*)(a2 + 128) = *(_DWORD*)(v4 + 396);
	*(_DWORD*)(a2 + 132) = *(_DWORD*)(v4 + 400);
	*(_QWORD*)(a2 + 136) = *(_QWORD*)(v4 + 360);
	*(_DWORD*)(a2 + 156) = *(_DWORD*)(v4 + 328);
	*(_DWORD*)(a2 + 160) = *(_DWORD*)(v4 + 324);
	*(_DWORD*)(a2 + 164) = *(_DWORD*)(v4 + 332);
	*(_DWORD*)(a2 + 4) = *(_DWORD*)(v4 + 4);
	v5 = *(_DWORD*)(v4 + 56);
	*(_DWORD*)(a2 + 52) = 1065353216;
	*(_DWORD*)(a2 + 104) = v5;
	v6 = *(_DWORD*)(v4 + 28);
	if (v6)
	{
		*(_DWORD*)(a2 + 20) = v6;
		if (v6 >= 1)
			v7 = v6 < 25 ? (v6 - 1) / 6 : 3;
		else
			v7 = 0;
		*(_DWORD*)(a2 + 44) = v7;
		v8 = sub_1401F64E0(*(_DWORD*)(v4 + 28));
		if (v8)
		{
			*(_DWORD*)(a2 + 52) = *(_DWORD*)(v8 + 8);
			*(_DWORD*)(a2 + 48) = *(_DWORD*)(v8 + 12);
		}
	}
	v9 = -1;
	*(_DWORD*)(a2 + 168) = *(_DWORD*)(v4 + 676);
	v10 = -1;
	*(_DWORD*)(a2 + 172) = *(_DWORD*)(v4 + 680);
	if (*(_DWORD*)(v4 + 404) < 0xFFFFu)
		v10 = *(_DWORD*)(v4 + 404);
	*(_WORD*)(a2 + 176) = v10;
	if (*(_DWORD*)(v4 + 408) < 0xFFFFu)
		v9 = *(_DWORD*)(v4 + 408);
	*(_WORD*)(a2 + 178) = v9;
	*(_DWORD*)(a2 + 180) = *(_DWORD*)(v4 + 412);
	result = *(unsigned int*)(v4 + 416);
	*(_DWORD*)(a2 + 184) = result;
	return result;
}

