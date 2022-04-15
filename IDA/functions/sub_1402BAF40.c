//----- (00000001402BAF40) ----------------------------------------------------
void __fastcall sub_1402BAF40(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rsi
	unsigned __int64 v6; // rbp
	__int64 v7; // rdi
	__int64 v8; // rcx
	int v9; // edi
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	_QWORD* v16; // rcx
	__int64 v17; // rcx
	_QWORD* v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	_QWORD v21[3]; // [rsp+20h] [rbp-28h] BYREF
	int v22; // [rsp+38h] [rbp-10h]

	*(_QWORD*)a1 = off_140B623C8;
	v2 = *(_QWORD*)(a1 + 32);
	if (v2)
	{
		v3 = *(_QWORD*)(a1 + 24);
		v21[1] = v2;
		v21[0] = v3;
		v4 = *(_QWORD*)(a1 + 16);
		v21[2] = *(_QWORD*)(a1 + 40);
		v5 = v4 + 136;
		v22 = *(_DWORD*)(a1 + 48);
		v6 = (*(__int64(__fastcall**)(_QWORD*))(v5 + 24))(v21);
		v7 = *(_QWORD*)(v5 + 16) + 8 * (v6 % *(_QWORD*)(v5 + 8));
		if (*(_QWORD*)v7)
		{
			while (v6 != **(_QWORD**)v7
				|| !(*(unsigned int(__fastcall**)(_QWORD*, __int64))(v5 + 32))(v21, *(_QWORD*)v7 + 16i64))
			{
				v7 = *(_QWORD*)v7 + 8i64;
				if (!*(_QWORD*)v7)
					goto LABEL_8;
			}
			v8 = *(_QWORD*)v7;
			*(_QWORD*)v7 = *(_QWORD*)(*(_QWORD*)v7 + 8i64);
			sub_14018B900(v8, 0);
			--* (_QWORD*)v5;
		}
	}
LABEL_8:
	v9 = 4 * (*(_DWORD*)(a1 + 48) & 1);
	sub_14018B900(*(_QWORD*)(a1 + 32), 4 * (*(_BYTE*)(a1 + 48) & 1));
	sub_14018B900(*(_QWORD*)(a1 + 64), v9);
	sub_14018B900(*(_QWORD*)(a1 + 104), v9);
	sub_14018B900(*(_QWORD*)(a1 + 56), v9);
	sub_14018B900(*(_QWORD*)(a1 + 72), v9);
	sub_14018B900(*(_QWORD*)(a1 + 80), v9);
	sub_14018B900(*(_QWORD*)(a1 + 128), v9);
	sub_14018B900(*(_QWORD*)(a1 + 168), v9);
	sub_14018B900(*(_QWORD*)(a1 + 144), v9);
	sub_14018B900(*(_QWORD*)(a1 + 152), v9);
	sub_14018B900(*(_QWORD*)(a1 + 160), v9);
	sub_14018B900(*(_QWORD*)(a1 + 136), v9);
	v10 = *(_QWORD**)(a1 + 280);
	if (v10)
		*v10 = *(_QWORD*)(a1 + 288);
	v11 = *(_QWORD*)(a1 + 288);
	if (v11)
		*(_QWORD*)(v11 + 280) = *(_QWORD*)(a1 + 280);
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	v12 = *(_QWORD**)(a1 + 264);
	if (v12)
		*v12 = *(_QWORD*)(a1 + 272);
	v13 = *(_QWORD*)(a1 + 272);
	if (v13)
		*(_QWORD*)(v13 + 264) = *(_QWORD*)(a1 + 264);
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	v14 = *(_QWORD**)(a1 + 248);
	if (v14)
		*v14 = *(_QWORD*)(a1 + 256);
	v15 = *(_QWORD*)(a1 + 256);
	if (v15)
		*(_QWORD*)(v15 + 248) = *(_QWORD*)(a1 + 248);
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	v16 = *(_QWORD**)(a1 + 232);
	if (v16)
		*v16 = *(_QWORD*)(a1 + 240);
	v17 = *(_QWORD*)(a1 + 240);
	if (v17)
		*(_QWORD*)(v17 + 32) = *(_QWORD*)(a1 + 232);
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	v18 = *(_QWORD**)(a1 + 216);
	if (v18)
		*v18 = *(_QWORD*)(a1 + 224);
	v19 = *(_QWORD*)(a1 + 224);
	if (v19)
		*(_QWORD*)(v19 + 16) = *(_QWORD*)(a1 + 216);
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	v20 = *(_QWORD*)(a1 + 24);
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
}
// 140B623C8: using guessed type __int64 (__fastcall *off_140B623C8[2])();
// 1402BAF40: using guessed type _QWORD var_28[3];

