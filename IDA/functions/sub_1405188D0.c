//----- (00000001405188D0) ----------------------------------------------------
__int64 __fastcall sub_1405188D0(_QWORD* a1, _QWORD* a2)
{
	__int64 v4; // rcx
	unsigned __int64 v5; // r8
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // r8
	unsigned __int64 v11; // r9
	__int64 v12; // rax
	__int64 v13; // rax
	unsigned __int64 v14; // r12
	unsigned __int64 v15; // rsi
	__int64 v16; // rax
	unsigned __int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // rbp
	__int64 v20; // rbx
	int* v21; // rax
	int* v22; // r14
	int* v23; // rdx
	__int64 v24; // rcx

	a1[2] = -1i64;
	a1[4] = 0i64;
	v4 = 0i64;
	v5 = *(_QWORD*)(qword_140C63650 + 768);
	if (v5)
	{
		v6 = *(_QWORD*)(qword_140C63650 + 760);
		v7 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a2)
		{
			v4 = (unsigned int)(v4 + 1);
			v7 = (unsigned int)v4;
			if ((unsigned int)v4 >= v5)
				goto LABEL_5;
		}
		v8 = *(_QWORD*)(v6 + 8 * v4);
	}
	else
	{
	LABEL_5:
		v8 = 0i64;
	}
	v9 = sub_1400F26A0(v8 + 384, 3);
	v10 = qword_140C635F0;
	v11 = v9 - 1;
	v12 = *(_QWORD*)(qword_140C635F0 + 5584);
	if (v11 >= *(_QWORD*)(v12 + 64) || !*(_QWORD*)(***(_QWORD***)(*(_QWORD*)(v12 + 56) + 8 * v11) + 56i64))
		sub_140056570(a2, 3u, "must be a valid pending account item group");
	a1[2] = v11;
	v13 = *(_QWORD*)(v10 + 5584);
	if (v11 >= *(_QWORD*)(v13 + 64))
		v14 = 0i64;
	else
		v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 56) + 8 * v11) + 8i64);
	v15 = 0i64;
	if (v14)
	{
		while (1)
		{
			v16 = *(_QWORD*)(v10 + 5584);
			v17 = a1[2];
			if (v17 >= *(_QWORD*)(v16 + 64)
				|| (v18 = *(_QWORD**)(*(_QWORD*)(v16 + 56) + 8 * v17), v15 >= v18[1])
				|| (v19 = *(_QWORD*)(*v18 + 8 * v15)) == 0
				|| !(*(unsigned int(__fastcall**)(_QWORD*, __int64))(*a1 + 80i64))(a1, v19))
			{
				a1[2] = -1i64;
				a1[4] = 0i64;
				sub_140056570(a2, 3u, "must be a valid pending account item group");
			}
			v20 = a1[4];
			v21 = sub_14018DB00(a1[3], v20 + 1, 8i64);
			v22 = v21;
			*(_QWORD*)&v21[2 * v20] = v19;
			v23 = (int*)a1[3];
			if (v23 != v21)
			{
				sub_1407DB590(v21, v23, 8i64 * a1[4]);
				v24 = a1[3];
				if (v24)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
				a1[3] = v22;
			}
			++v15;
			a1[4] = v20 + 1;
			if (v15 >= v14)
				break;
			v10 = qword_140C635F0;
		}
	}
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;

