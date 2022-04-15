//----- (000000014079D010) ----------------------------------------------------
__int64 __fastcall sub_14079D010(__int64 a1, _WORD* a2)
{
	unsigned __int64 v2; // rbp
	_WORD* v3; // rdi
	unsigned __int64 v4; // rsi
	__int64 v5; // r14
	int* v6; // rax
	unsigned __int64 v7; // r12
	int* v8; // rbx
	__int16 v9; // r10
	unsigned __int16 v10; // r9
	unsigned __int16 v11; // r11
	__int16 v12; // r14
	int* v13; // r15
	__int64 v14; // r13
	__int64 v15; // rdx
	unsigned __int64 v16; // rcx
	int** v17; // rax
	__int64 v18; // rax
	int* v19; // rax
	int* v20; // rdx
	int* v21; // r15
	__int16 v22; // cx
	__int64 v23; // rdi
	int* v24; // rax
	int* v25; // rsi
	int* v26; // rdx
	__int64 v27; // rcx

	v2 = 0i64;
	v3 = a2;
	v4 = 0i64;
	v5 = a1;
	if (*a2)
	{
		do
			++v4;
		while (a2[v4]);
	}
	v6 = sub_14018D250(0i64, v4);
	v7 = 0i64;
	*((_WORD*)v6 + v4) = 0;
	v8 = v6;
	if (v4)
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
		} while (v7 < v4);
		v5 = a1;
	}
	v15 = *((_QWORD*)v8 - 1);
	if (v15)
	{
		v16 = *(_QWORD*)(v5 + 16);
		if (v16)
		{
			v17 = *(int***)(v5 + 8);
			while (*v17 != v8)
			{
				++v2;
				++v17;
				if (v2 >= v16)
					goto LABEL_25;
			}
		}
		else
		{
		LABEL_25:
			v18 = 2 * (v15 + 1);
			if (!is_mul_ok(v15 + 1, 2ui64))
				v18 = -1i64;
			v19 = sub_14018B280(v18, 0);
			v20 = v8;
			v21 = v19;
			do
			{
				v22 = *(_WORD*)v20;
				v20 = (int*)((char*)v20 + 2);
				*(_WORD*)((char*)v20 + (char*)v19 - (char*)v8 - 2) = v22;
			} while (v22);
			v23 = *(_QWORD*)(v5 + 16);
			v24 = sub_14018DB00(*(_QWORD*)(v5 + 8), v23 + 1, 8i64);
			v25 = v24;
			*(_QWORD*)&v24[2 * v23] = v21;
			v26 = *(int**)(v5 + 8);
			if (v26 != v24)
			{
				sub_1407DB590(v24, v26, 8i64 * *(_QWORD*)(v5 + 16));
				v27 = *(_QWORD*)(v5 + 8);
				if (v27)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v27 - 16) + 8i64))(v27 - 16);
				*(_QWORD*)(v5 + 8) = v25;
			}
			*(_QWORD*)(v5 + 16) = v23 + 1;
		}
	}
	return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
}
// 14079D0B9: variable 'v10' is possibly undefined
// 14079D0BF: variable 'v9' is possibly undefined
// 14079D0C7: variable 'v11' is possibly undefined

