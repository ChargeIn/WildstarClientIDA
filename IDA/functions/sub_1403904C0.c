//----- (00000001403904C0) ----------------------------------------------------
void __fastcall sub_1403904C0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // r14
	_QWORD* v4; // rbx
	int i; // edi
	__int64 v6; // r11
	__int64 v7; // r11
	__int64 v8; // r11
	__int64 v9; // r11
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx

	*(_QWORD*)a1 = off_140B65F80;
	v2 = *(_QWORD*)(a1 + 112);
	if (v2)
	{
		v3 = v2 - 8;
		v4 = (_QWORD*)(v2 + 32i64 * *(int*)(v2 - 8));
		for (i = *(_DWORD*)(v2 - 8) - 1; i >= 0; --i)
		{
			v4 -= 4;
			sub_14038F4B0(v4);
		}
		sub_14018B900(v3, 0);
	}
	while (*(_QWORD*)(a1 + 120))
	{
		if (*(_QWORD*)(a1 + 120))
		{
			sub_14038FBF0(*(_QWORD**)(a1 + 120));
			sub_14018B900(v6, 0);
		}
	}
	while (*(_QWORD*)(a1 + 128))
	{
		if (*(_QWORD*)(a1 + 128))
		{
			sub_14038FDB0(*(_QWORD**)(a1 + 128));
			sub_14018B900(v7, 0);
		}
	}
	while (*(_QWORD*)(a1 + 136))
	{
		if (*(_QWORD*)(a1 + 136))
		{
			sub_14038FF70(*(_QWORD**)(a1 + 136));
			sub_14018B900(v8, 0);
		}
	}
	while (*(_QWORD*)(a1 + 144))
	{
		if (*(_QWORD*)(a1 + 144))
		{
			sub_140390120(*(_QWORD**)(a1 + 144));
			sub_14018B900(v9, 0);
		}
	}
	while (*(_QWORD*)(a1 + 152))
	{
		v10 = *(_QWORD**)(a1 + 152);
		if (v10)
		{
			sub_1403902B0(v10);
			sub_14018B900(v11, 0);
		}
	}
	sub_14018B900(*(_QWORD*)(a1 + 160), 0);
	v12 = *(_QWORD**)(a1 + 320);
	if (v12)
		*v12 = *(_QWORD*)(a1 + 328);
	v13 = *(_QWORD*)(a1 + 328);
	if (v13)
		*(_QWORD*)(v13 + 320) = *(_QWORD*)(a1 + 320);
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 328) = 0i64;
	v14 = *(_QWORD**)(a1 + 304);
	if (v14)
		*v14 = *(_QWORD*)(a1 + 312);
	v15 = *(_QWORD*)(a1 + 312);
	if (v15)
		*(_QWORD*)(v15 + 304) = *(_QWORD*)(a1 + 304);
	*(_QWORD*)(a1 + 304) = 0i64;
	*(_QWORD*)(a1 + 312) = 0i64;
	if (*(_QWORD*)(a1 + 152))
		sub_1401A4A00((const void***)(a1 + 152));
	if (*(_QWORD*)(a1 + 144))
		sub_1401A4A00((const void***)(a1 + 144));
	if (*(_QWORD*)(a1 + 136))
		sub_1401A4A00((const void***)(a1 + 136));
	if (*(_QWORD*)(a1 + 128))
		sub_1401A4A00((const void***)(a1 + 128));
	if (*(_QWORD*)(a1 + 120))
		sub_1401A4A00((const void***)(a1 + 120));
	v16 = *(_QWORD*)(a1 + 24);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
}
// 14039053B: variable 'v6' is possibly undefined
// 14039056A: variable 'v7' is possibly undefined
// 14039059C: variable 'v8' is possibly undefined
// 1403905D9: variable 'v9' is possibly undefined
// 140390605: variable 'v11' is possibly undefined
// 140B65F80: using guessed type __int64 (__fastcall *off_140B65F80[19])();

