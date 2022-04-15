//----- (00000001402645D0) ----------------------------------------------------
__int64 __fastcall sub_1402645D0(int* a1, int* a2, unsigned int* a3, int* a4, _DWORD* a5, unsigned int* a6)
{
	int* v7; // rbx
	int v8; // ecx
	int* v9; // r15
	__int64 v10; // r9
	_DWORD* v11; // rax
	__int64 v12; // rdx
	unsigned int v13; // r13d
	unsigned int v14; // ecx
	int* v15; // rsi
	int* v16; // rbp
	unsigned __int64 v17; // r14
	unsigned __int64 v18; // r13
	void(__fastcall * v20)(int*, int*, _QWORD); // r12
	int* v21; // rsi
	int* v22; // rbp
	int* v23; // r14
	__int64 v24; // rax
	__m128* v25; // r12
	unsigned __int64 v26; // rsi
	int* v27; // r14
	unsigned __int64 v28; // rbp
	int* v29; // [rsp+20h] [rbp-48h]
	__int64(__fastcall * v30)(); // [rsp+28h] [rbp-40h]
	int* j; // [rsp+30h] [rbp-38h]
	int* v32; // [rsp+78h] [rbp+10h]
	int* v33; // [rsp+78h] [rbp+10h]
	unsigned int i; // [rsp+90h] [rbp+28h]
	int* v35; // [rsp+90h] [rbp+28h]
	void(__fastcall * v36)(__int64, __m128*, int); // [rsp+90h] [rbp+28h]

	v7 = a1;
	v29 = a1;
	v8 = *a2;
	v9 = a4;
	v32 = a4;
	if (*a2 != *a5 || a2[1] != a5[1] || a2[2] != a5[2])
		return 2147500037i64;
	v10 = a2[3];
	v11 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v10);
	v12 = (int)a5[3];
	v13 = (unsigned int)(v8 + v11[1]) >> v11[2];
	if ((_DWORD)v10 == (_DWORD)v12)
	{
		v33 = (int*)((char*)v7 + a3[2]);
		v14 = v13 * v11[9];
		for (i = v14; v7 < v33; v9 = (int*)((char*)v9 + a6[1]))
		{
			v15 = v7;
			v16 = v9;
			v17 = (unsigned __int64)v7 + a3[1];
			if ((unsigned __int64)v7 < v17)
			{
				v18 = v14;
				do
				{
					sub_1407DB590(v15, v16, v18);
					v15 = (int*)((char*)v15 + *a3);
					v16 = (int*)((char*)v16 + *a6);
				} while ((unsigned __int64)v15 < v17);
				v14 = i;
			}
			v7 = (int*)((char*)v7 + a3[1]);
		}
		return 0i64;
	}
	v20 = 0i64;
	if (!(_DWORD)v10)
	{
		switch ((int)v12)
		{
		case 1:
			v20 = (void(__fastcall*)(int*, int*, _QWORD))sub_1402640F0;
			goto LABEL_28;
		case 2:
			v20 = (void(__fastcall*)(int*, int*, _QWORD))sub_140264190;
			goto LABEL_28;
		case 3:
			v20 = (void(__fastcall*)(int*, int*, _QWORD))sub_140264210;
			goto LABEL_28;
		case 4:
			v20 = (void(__fastcall*)(int*, int*, _QWORD))sub_1402642A0;
			goto LABEL_28;
		case 5:
			v20 = (void(__fastcall*)(int*, int*, _QWORD))sub_140264310;
			goto LABEL_28;
		case 25:
			v20 = (void(__fastcall*)(int*, int*, _QWORD))sub_140264370;
			goto LABEL_28;
		default:
			goto LABEL_35;
		}
	}
	if ((_DWORD)v10 != 23)
	{
		if ((_DWORD)v10 != 25)
			goto LABEL_35;
		if ((_DWORD)v12)
		{
			if ((_DWORD)v12 == 1)
				v20 = (void(__fastcall*)(int*, int*, _QWORD))sub_1402644A0;
		}
		else
		{
			v20 = (void(__fastcall*)(int*, int*, _QWORD))sub_140264370;
		}
	}
	if ((_DWORD)v12 == 22)
		v20 = (void(__fastcall*)(int*, int*, _QWORD))sub_140264470;
LABEL_28:
	if (!v20)
	{
	LABEL_35:
		v30 = off_140AE5B60[v12];
		v36 = (void(__fastcall*)(__int64, __m128*, int))funcs_1402648C8[v10];
		if (v30 && funcs_1402648C8[v10])
		{
			v24 = 16i64 * v13;
			if (!is_mul_ok(v13, 0x10ui64))
				v24 = -1i64;
			v25 = (__m128*)sub_14018B280(v24, 0);
			for (j = (int*)((char*)v7 + a3[2]); v7 < j; v32 = v9)
			{
				v26 = (unsigned __int64)v7;
				v27 = v9;
				v28 = (unsigned __int64)v7 + a3[1];
				if ((unsigned __int64)v7 < v28)
				{
					do
					{
						((void(__fastcall*)(__m128*, int*, _QWORD))v30)(v25, v27, v13);
						v36(v26, v25, v13);
						v26 += *a3;
						v27 = (int*)((char*)v27 + *a6);
					} while (v26 < v28);
					v7 = v29;
					v9 = v32;
				}
				v7 = (int*)((char*)v7 + a3[1]);
				v29 = v7;
				v9 = (int*)((char*)v9 + a6[1]);
			}
			sub_14018B900((__int64)v25, 0);
			return 0i64;
		}
		return 2147500037i64;
	}
	v35 = (int*)((char*)v7 + a3[2]);
	if (v7 >= v35)
		return 0i64;
	do
	{
		v21 = v7;
		v22 = v9;
		v23 = (int*)((char*)v7 + a3[1]);
		if (v7 < v23)
		{
			do
			{
				v20(v21, v22, v13);
				v21 = (int*)((char*)v21 + *a3);
				v22 = (int*)((char*)v22 + *a6);
			} while (v21 < v23);
			v9 = v32;
		}
		v7 = (int*)((char*)v7 + a3[1]);
		v9 = (int*)((char*)v9 + a6[1]);
		v32 = v9;
	} while (v7 < v35);
	return 0i64;
}
// 140AE5B60: using guessed type __int64 (__fastcall *off_140AE5B60[13])();
// 140AE5C60: using guessed type __int64 (__fastcall *funcs_1402648C8[13])();

