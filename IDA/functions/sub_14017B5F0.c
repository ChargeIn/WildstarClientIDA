//----- (000000014017B5F0) ----------------------------------------------------
void __fastcall sub_14017B5F0(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	_QWORD* v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD** v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rcx
	_QWORD* v10; // rax
	_QWORD* v11; // rbx
	_QWORD* v12; // rsi
	__int64 v13; // rcx
	__int64 v14; // rcx
	_QWORD** v15; // rax
	_QWORD* v16; // rbx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rbp
	__int64 v21; // rbx
	_QWORD** v22; // rax
	_QWORD* v23; // rbx
	__int64 v24; // rcx
	_QWORD** v25; // rax
	_QWORD* v26; // rbx
	__int64 v27; // rcx
	__int64 v28; // rdx

	*a1 = off_140B5DAD0;
	v1 = (_QWORD*)a1[129];
	v2 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v4 = (_QWORD*)v2[2];
			if (v4)
			{
				sub_1400C6B20(*v4);
				if (*v4)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
					*v4 = 0i64;
				}
				sub_1401429A0(qword_140C63678, *((_DWORD*)v4 + 24));
				v5 = v4[6];
				if (v5)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
					v4[6] = 0i64;
				}
				v6 = v4[9];
				if (v6)
					sub_14018B900(v6, 0);
				sub_14018B900((__int64)v4, 0);
			}
			v2 = (_QWORD*)*v2;
		} while (v2 != (_QWORD*)a1[129]);
	}
	v7 = (_QWORD**)a1[129];
	v8 = *v7;
	if (*v7 != v7)
	{
		do
		{
			v9 = (__int64)v8;
			v8 = (_QWORD*)*v8;
			sub_14018B900(v9, 0);
		} while (v8 != (_QWORD*)a1[129]);
	}
	*(_QWORD*)a1[129] = a1[129];
	*(_QWORD*)(a1[129] + 8i64) = a1[129];
	v10 = (_QWORD*)a1[131];
	v11 = (_QWORD*)*v10;
	if ((_QWORD*)*v10 != v10)
	{
		do
		{
			v12 = (_QWORD*)v11[2];
			if (v12)
			{
				sub_1400C6B20(*v12);
				if (*v12)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
					*v12 = 0i64;
				}
				sub_1401429A0(qword_140C63678, *((_DWORD*)v12 + 24));
				v13 = v12[6];
				if (v13)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
					v12[6] = 0i64;
				}
				v14 = v12[9];
				if (v14)
					sub_14018B900(v14, 0);
				sub_14018B900((__int64)v12, 0);
			}
			v11 = (_QWORD*)*v11;
		} while (v11 != (_QWORD*)a1[131]);
	}
	v15 = (_QWORD**)a1[131];
	v16 = *v15;
	if (*v15 != v15)
	{
		do
		{
			v17 = (__int64)v16;
			v16 = (_QWORD*)*v16;
			sub_14018B900(v17, 0);
		} while (v16 != (_QWORD*)a1[131]);
	}
	*(_QWORD*)a1[131] = a1[131];
	*(_QWORD*)(a1[131] + 8i64) = a1[131];
	v18 = a1[137];
	if (v18)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
		a1[137] = 0i64;
	}
	v19 = a1[140];
	if (v19)
		sub_14018B900(v19, 0);
	if (a1[134])
	{
		v20 = *(_QWORD*)(a1[133] + 8i64);
		if (v20)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 132), *(_QWORD*)(v20 + 24));
				v21 = *(_QWORD*)(v20 + 16);
				sub_14018B900(v20, 0);
				v20 = v21;
			} while (v21);
		}
		*(_QWORD*)(a1[133] + 16i64) = a1[133];
		*(_QWORD*)(a1[133] + 8i64) = 0i64;
		*(_QWORD*)(a1[133] + 24i64) = a1[133];
		a1[134] = 0i64;
	}
	sub_14018B900(a1[133], 0);
	v22 = (_QWORD**)a1[131];
	v23 = *v22;
	if (*v22 != v22)
	{
		do
		{
			v24 = (__int64)v23;
			v23 = (_QWORD*)*v23;
			sub_14018B900(v24, 0);
		} while (v23 != (_QWORD*)a1[131]);
	}
	*(_QWORD*)a1[131] = a1[131];
	*(_QWORD*)(a1[131] + 8i64) = a1[131];
	sub_14018B900(a1[131], 0);
	v25 = (_QWORD**)a1[129];
	v26 = *v25;
	if (*v25 != v25)
	{
		do
		{
			v27 = (__int64)v26;
			v26 = (_QWORD*)*v26;
			sub_14018B900(v27, 0);
		} while (v26 != (_QWORD*)a1[129]);
	}
	*(_QWORD*)a1[129] = a1[129];
	*(_QWORD*)(a1[129] + 8i64) = a1[129];
	sub_14018B900(a1[129], 0);
	sub_1400C6030((__int64)a1, v28);
}
// 14017B8E6: variable 'v28' is possibly undefined
// 140B5DAD0: using guessed type __int64 (__fastcall *off_140B5DAD0[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

