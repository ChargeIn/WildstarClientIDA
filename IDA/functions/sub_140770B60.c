//----- (0000000140770B60) ----------------------------------------------------
__int64 __fastcall sub_140770B60(
	__int64 a1,
	int a2,
	_OWORD* a3,
	_WORD* a4,
	__int64 a5,
	int* a6,
	__int64 a7,
	int a8,
	__int64 a9)
{
	_QWORD* v9; // r15
	int v11; // eax
	__int64 v12; // rcx
	int* v14; // rax
	int* v15; // rdx
	__int64 v16; // rax
	void(__fastcall * **v17)(_QWORD); // rdi
	__int64 v18; // rcx
	void(__fastcall * **v19)(_QWORD); // rdi
	__int64 v20; // rcx
	void(__fastcall * **v21)(_QWORD); // rdi
	__int64 v22; // rcx
	void(__fastcall * **v23)(_QWORD); // rdi
	__int64 v24; // rcx

	v9 = (_QWORD*)(a1 + 32);
	*(_QWORD*)a1 = off_140B76620;
	v11 = dword_140C8A07C + 1;
	v12 = a1 + 48;
	*(_DWORD*)(v12 - 40) = dword_140C8A07C + 1;
	*(_DWORD*)(v12 - 36) = a2;
	dword_140C8A07C = v11;
	*(_OWORD*)(v12 - 32) = *a3;
	*v9 = 0i64;
	sub_140770490(v12);
	*(_QWORD*)(a1 + 296) = 0i64;
	*(_QWORD*)(a1 + 304) = 0i64;
	*(_QWORD*)(a1 + 312) = 0i64;
	v14 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 296) = v14;
	*(_QWORD*)(a1 + 304) = v14;
	*(_QWORD*)(a1 + 312) = v14 + 4;
	if (v14)
		*(_WORD*)v14 = 0;
	*(_OWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_DWORD*)(a1 + 344) = a8;
	sub_1400F9DD0(a1 + 352, a9);
	v15 = (int*)&unk_1409F996C;
	*(_DWORD*)(a1 + 376) = 0;
	if (a6)
		v15 = a6;
	v16 = 0i64;
	if (*(_WORD*)v15)
	{
		do
			++v16;
		while (*((_WORD*)v15 + v16));
	}
	sub_14001C480(a1 + 288, v15, (int*)((char*)v15 + 2 * v16));
	v17 = *(void(__fastcall****)(_QWORD))a7;
	if (*(_QWORD*)a7 != *(_QWORD*)(a1 + 48))
	{
		if (v17)
			(**v17)(*(_QWORD*)a7);
		v18 = *(_QWORD*)(a1 + 48);
		if (v18)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
			*(_QWORD*)(a1 + 48) = 0i64;
		}
		*(_QWORD*)(a1 + 48) = v17;
	}
	v19 = *(void(__fastcall****)(_QWORD))(a7 + 48);
	if (v19 != *(void(__fastcall****)(_QWORD))(a1 + 96))
	{
		if (v19)
			(**v19)(*(_QWORD*)(a7 + 48));
		v20 = *(_QWORD*)(a1 + 96);
		if (v20)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
			*(_QWORD*)(a1 + 96) = 0i64;
		}
		*(_QWORD*)(a1 + 96) = v19;
	}
	*(_OWORD*)(a1 + 144) = *(_OWORD*)(a7 + 96);
	*(_OWORD*)(a1 + 160) = *(_OWORD*)(a7 + 112);
	v21 = *(void(__fastcall****)(_QWORD))(a7 + 136);
	if (v21 != *(void(__fastcall****)(_QWORD))(a1 + 184))
	{
		if (v21)
			(**v21)(*(_QWORD*)(a7 + 136));
		v22 = *(_QWORD*)(a1 + 184);
		if (v22)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
			*(_QWORD*)(a1 + 184) = 0i64;
		}
		*(_QWORD*)(a1 + 184) = v21;
	}
	v23 = *(void(__fastcall****)(_QWORD))(a7 + 184);
	if (v23 != *(void(__fastcall****)(_QWORD))(a1 + 232))
	{
		if (v23)
			(**v23)(*(_QWORD*)(a7 + 184));
		v24 = *(_QWORD*)(a1 + 232);
		if (v24)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
			*(_QWORD*)(a1 + 232) = 0i64;
		}
		*(_QWORD*)(a1 + 232) = v23;
	}
	if (a4 && *a4)
		(*(void(__fastcall**)(__int64, __int64, _WORD*, __int64, _QWORD*))(*(_QWORD*)qword_140C65680 + 40i64))(
			qword_140C65680,
			a5,
			a4,
			-1i64,
			v9);
	return a1;
}
// 140B76620: using guessed type __int64 (__fastcall *off_140B76620[4])();
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C8A07C: using guessed type int dword_140C8A07C;

