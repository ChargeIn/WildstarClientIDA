//----- (00000001402B8530) ----------------------------------------------------
void __fastcall sub_1402B8530(__int64 a1)
{
	HDC v2; // rcx
	void* v3; // rdx
	void* v4; // rcx
	HDC v5; // rcx
	void* v6; // rdx
	void* v7; // rcx
	HDC v8; // rcx
	unsigned int i; // edi
	unsigned __int64 j; // rdi
	__int64 v11; // rax
	__int64 v12; // rcx
	_QWORD* v13; // rsi
	__int64 v14; // rsi
	unsigned __int64 v15; // rbp
	__int64 v16; // rdi
	__int64 v17; // rcx
	_QWORD* v18; // rcx
	__int64 v19; // rcx
	_QWORD* v20; // rcx
	__int64 v21; // rcx
	_QWORD* v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26[4]; // [rsp+20h] [rbp-28h] BYREF

	*(_QWORD*)a1 = off_140B623A0;
	v2 = *(HDC*)(a1 + 104);
	if (v2)
	{
		v3 = *(void**)(a1 + 120);
		if (v3)
			SelectObject(v2, v3);
	}
	v4 = *(void**)(a1 + 112);
	if (v4)
		DeleteObject(v4);
	sub_14018B900(*(_QWORD*)(a1 + 168), 0);
	v5 = *(HDC*)(a1 + 104);
	if (v5)
	{
		v6 = *(void**)(a1 + 136);
		if (v6)
			SelectObject(v5, v6);
	}
	v7 = *(void**)(a1 + 128);
	if (v7)
		DeleteObject(v7);
	v8 = *(HDC*)(a1 + 104);
	if (v8)
		DeleteDC(v8);
	for (i = 0; i < *(_DWORD*)(a1 + 264); ++i)
		sub_14018B900(*(_QWORD*)(a1 + 8i64 * i + 272), 0);
	for (j = 0i64; j < *(_QWORD*)(a1 + 2328); ++j)
	{
		v11 = *(_QWORD*)(a1 + 2320);
		v12 = *(_QWORD*)(v11 + 8 * j);
		v13 = (_QWORD*)(v11 + 8 * j);
		if (v12)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
			*v13 = 0i64;
		}
	}
	if (*(_QWORD*)(a1 + 240))
		ScriptFreeCache((SCRIPT_CACHE*)(a1 + 240));
	sub_14018B900(*(_QWORD*)(a1 + 2376), 0);
	sub_14018B900(*(_QWORD*)(a1 + 2384), 0);
	if (*(_QWORD*)(a1 + 24))
	{
		v14 = *(_QWORD*)(a1 + 16);
		v26[0] = *(_QWORD*)(a1 + 24);
		v26[1] = *(_QWORD*)(a1 + 32);
		v26[2] = *(_QWORD*)(a1 + 40);
		v15 = (*(__int64(__fastcall**)(__int64*))(v14 + 88))(v26);
		v16 = *(_QWORD*)(v14 + 80) + 8 * (v15 % *(_QWORD*)(v14 + 72));
		if (*(_QWORD*)v16)
		{
			while (v15 != **(_QWORD**)v16
				|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(v14 + 96))(v26, *(_QWORD*)v16 + 16i64))
			{
				v16 = *(_QWORD*)v16 + 8i64;
				if (!*(_QWORD*)v16)
					goto LABEL_28;
			}
			v17 = *(_QWORD*)v16;
			*(_QWORD*)v16 = *(_QWORD*)(*(_QWORD*)v16 + 8i64);
			sub_14018B900(v17, 0);
			--* (_QWORD*)(v14 + 64);
		}
	LABEL_28:
		sub_14018B900(*(_QWORD*)(a1 + 24), 0);
	}
	v18 = *(_QWORD**)(a1 + 2472);
	if (v18)
		*v18 = *(_QWORD*)(a1 + 2480);
	v19 = *(_QWORD*)(a1 + 2480);
	if (v19)
		*(_QWORD*)(v19 + 2472) = *(_QWORD*)(a1 + 2472);
	*(_QWORD*)(a1 + 2472) = 0i64;
	*(_QWORD*)(a1 + 2480) = 0i64;
	*(_QWORD*)(a1 + 2472) = 0i64;
	*(_QWORD*)(a1 + 2480) = 0i64;
	v20 = *(_QWORD**)(a1 + 2456);
	if (v20)
		*v20 = *(_QWORD*)(a1 + 2464);
	v21 = *(_QWORD*)(a1 + 2464);
	if (v21)
		*(_QWORD*)(v21 + 32) = *(_QWORD*)(a1 + 2456);
	*(_QWORD*)(a1 + 2456) = 0i64;
	*(_QWORD*)(a1 + 2464) = 0i64;
	v22 = *(_QWORD**)(a1 + 2440);
	if (v22)
		*v22 = *(_QWORD*)(a1 + 2448);
	v23 = *(_QWORD*)(a1 + 2448);
	if (v23)
		*(_QWORD*)(v23 + 16) = *(_QWORD*)(a1 + 2440);
	*(_QWORD*)(a1 + 2440) = 0i64;
	*(_QWORD*)(a1 + 2448) = 0i64;
	v24 = *(_QWORD*)(a1 + 2408);
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	v25 = *(_QWORD*)(a1 + 2320);
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
	if (*(_QWORD*)(a1 + 96))
		sub_1401A4A00((const void***)(a1 + 96));
}
// 140B623A0: using guessed type __int64 (__fastcall *off_140B623A0[7])();

