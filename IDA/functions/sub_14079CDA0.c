//----- (000000014079CDA0) ----------------------------------------------------
__int64 __fastcall sub_14079CDA0(__int64 a1, _WORD* a2)
{
	unsigned int v2; // r12d
	_WORD* v3; // rdi
	__int64 v4; // r14
	unsigned __int64 v5; // rsi
	int* v6; // rax
	unsigned __int64 v7; // r15
	int* v8; // rbx
	__int16 v9; // r10
	unsigned __int16 v10; // r9
	unsigned __int16 v11; // r11
	__int16 v12; // bp
	int* v13; // r14
	__int64 v14; // r13
	__int64 v15; // r8
	unsigned __int64 v16; // rdx
	unsigned __int64 v17; // rcx
	int** v18; // rax
	__int64 v19; // rax
	int* v20; // rax
	int* v21; // rdx
	int* v22; // r15
	__int16 v23; // cx
	__int64 v24; // rdi
	int* v25; // rax
	int* v26; // rsi
	int* v27; // rdx
	__int64 v28; // rcx

	v2 = 0;
	v3 = a2;
	v4 = a1;
	v5 = 0i64;
	if (*a2)
	{
		do
			++v5;
		while (a2[v5]);
	}
	v6 = sub_14018D250(0i64, v5);
	v7 = 0i64;
	*((_WORD*)v6 + v5) = 0;
	v8 = v6;
	if (v5)
	{
		v9 = 12448;
		v10 = 239;
		v11 = 143;
		do
		{
			v12 = v3[v7];
			if ((unsigned __int16)(v12 - 19968) <= 0x51FFu
				|| (unsigned __int16)(v12 + 256) <= v10
				|| (unsigned __int16)(v12 - v9) <= v11
				|| (unsigned __int16)(v12 - 12800) <= 0xFFu
				|| sub_1403E09D0(v12)
				|| (unsigned __int16)(v12 - 48) <= 9u)
			{
				v13 = v8;
				if (v8)
					v14 = *((_QWORD*)v8 - 1);
				else
					v14 = 0i64;
				v8 = (int*)sub_14018D140(v8, v14 + 1);
				*((_WORD*)v8 + v14) = v12;
				*((_WORD*)v8 + v14 + 1) = 0;
				if (v13 != v8 && v13)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
				v3 = a2;
				v10 = 239;
				v9 = 12448;
				v11 = 143;
			}
			++v7;
		} while (v7 < v5);
		v4 = a1;
	}
	v15 = *((_QWORD*)v8 - 1);
	if (!v15)
	{
	LABEL_34:
		v2 = -2147467259;
		goto LABEL_35;
	}
	v16 = *(_QWORD*)(v4 + 16);
	v17 = 0i64;
	if (v16)
	{
		v18 = *(int***)(v4 + 8);
		while (*v18 != v8)
		{
			++v17;
			++v18;
			if (v17 >= v16)
				goto LABEL_25;
		}
		goto LABEL_34;
	}
LABEL_25:
	v19 = 2 * (v15 + 1);
	if (!is_mul_ok(v15 + 1, 2ui64))
		v19 = -1i64;
	v20 = sub_14018B280(v19, 0);
	v21 = v8;
	v22 = v20;
	do
	{
		v23 = *(_WORD*)v21;
		v21 = (int*)((char*)v21 + 2);
		*(_WORD*)((char*)v21 + (char*)v20 - (char*)v8 - 2) = v23;
	} while (v23);
	v24 = *(_QWORD*)(v4 + 16);
	v25 = sub_14018DB00(*(_QWORD*)(v4 + 8), v24 + 1, 8i64);
	v26 = v25;
	*(_QWORD*)&v25[2 * v24] = v22;
	v27 = *(int**)(v4 + 8);
	if (v27 != v25)
	{
		sub_1407DB590(v25, v27, 8i64 * *(_QWORD*)(v4 + 16));
		v28 = *(_QWORD*)(v4 + 8);
		if (v28)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v28 - 16) + 8i64))(v28 - 16);
		*(_QWORD*)(v4 + 8) = v26;
	}
	*(_QWORD*)(v4 + 16) = v24 + 1;
LABEL_35:
	(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
	return v2;
}
// 14079CE48: variable 'v10' is possibly undefined
// 14079CE4D: variable 'v9' is possibly undefined
// 14079CE55: variable 'v11' is possibly undefined

