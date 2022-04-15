#include "../winhttp.h"

//----- (00000001401D06D0) ----------------------------------------------------
__int64 __fastcall sub_1401D06D0(_QWORD* a1, __int64** a2)
{
	__int64** v2; // r13
	int* v4; // rax
	unsigned __int64 v5; // rsi
	__int64* v6; // rbx
	unsigned __int64 v7; // rdx
	int* v8; // rax
	int* v9; // rdx
	int* v10; // rdi
	__int64 v11; // rcx
	unsigned __int64 v12; // rbp
	int* v13; // rax
	int* v14; // rdx
	int* v15; // rdi
	__int64 v16; // rcx
	unsigned __int64 v17; // rcx
	__int64 v18; // rax
	unsigned __int64 v19; // r13
	int* v20; // rdi
	int* v21; // rax
	int* v22; // rdx
	int* v23; // rbp
	__int64 v24; // rcx
	__int64 v25; // rax
	unsigned __int64 v26; // r15
	__int64 v27; // r13
	unsigned __int64 v28; // rbp
	int* v29; // rax
	int* v30; // rdx
	int* v31; // r12
	__int64 v32; // rcx
	unsigned __int64 v33; // rbp
	int* v34; // rdi
	__int64 v35; // r15
	int* v36; // rax
	int* v37; // rdx
	__int64 v38; // rcx
	unsigned __int64 v39; // r15
	__int64* v40; // rdi
	int* v41; // rax
	__int64 result; // rax
	unsigned __int64 v43[2]; // [rsp+30h] [rbp-98h] BYREF
	unsigned __int64 v44[2]; // [rsp+40h] [rbp-88h] BYREF
	unsigned __int64 v45[2]; // [rsp+50h] [rbp-78h] BYREF
	__int64 v46; // [rsp+60h] [rbp-68h]
	unsigned __int64 v47[4]; // [rsp+68h] [rbp-60h] BYREF
	unsigned __int64 v48; // [rsp+D0h] [rbp+8h]
	unsigned __int64* v50; // [rsp+E0h] [rbp+18h]
	unsigned __int64 v51; // [rsp+E8h] [rbp+20h]

	v2 = a2;
	v4 = sub_14018B280(64i64, 0);
	v5 = 0i64;
	v6 = (__int64*)v4;
	if (v4)
	{
		*(_QWORD*)v4 = off_140B5F120;
		*((_QWORD*)v4 + 2) = 0i64;
		*((_QWORD*)v4 + 1) = 0i64;
		*((_QWORD*)v4 + 4) = 0i64;
		*((_QWORD*)v4 + 3) = 0i64;
		*((_QWORD*)v4 + 6) = 0i64;
		*((_QWORD*)v4 + 5) = 0i64;
		v4[14] = 1;
	}
	else
	{
		v6 = 0i64;
	}
	v7 = a1[6];
	if (v6[6] > v7)
		v6[6] = v7;
	v8 = sub_14018DBC0(v6[5], v7, 2i64);
	v9 = (int*)v6[5];
	v10 = v8;
	if (v9 != v8)
	{
		sub_1407DB590(v8, v9, 2 * v6[6]);
		v11 = v6[5];
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		v6[5] = (__int64)v10;
	}
	v12 = a1[2];
	v51 = v12;
	if (v6[2] > v12)
		v6[2] = v12;
	v13 = sub_14018DBC0(v6[1], v12, 8i64);
	v14 = (int*)v6[1];
	v15 = v13;
	if (v14 != v13)
	{
		sub_1407DB590(v13, v14, 8 * v6[2]);
		v16 = v6[1];
		if (v16)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
		v6[1] = (__int64)v15;
	}
	v43[0] = 0i64;
	v43[1] = v12;
	sub_1401D3110(v45, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401D1940, v43, (__int64)a1, 2);
	v17 = 0i64;
	v48 = 0i64;
	if (v12)
	{
		do
		{
			v18 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 64i64))(a1, *(_QWORD*)(v46 + 8 * v17));
			v19 = v6[2];
			v20 = (int*)v18;
			if (v19 <= v19 + 1)
			{
				v21 = sub_14018DB00(v6[1], v19 + 1, 8i64);
				v22 = (int*)v6[1];
				v23 = v21;
				if (v22 != v21)
				{
					sub_1407DB590(v21, v22, 8 * v6[2]);
					v24 = v6[1];
					if (v24)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
					v6[1] = (__int64)v23;
				}
			}
			v6[2] = v19 + 1;
			v50 = (unsigned __int64*)(v6[1] + 8 * v19);
			v25 = 0i64;
			if (*(_WORD*)v20)
			{
				do
					++v25;
				while (*((_WORD*)v20 + v25));
			}
			v26 = v6[6];
			v27 = v25 + 1;
			v28 = v26 + v25 + 1;
			if (v26 <= v28)
			{
				v29 = sub_14018DB00(v6[5], v26 + v25 + 1, 2i64);
				v30 = (int*)v6[5];
				v31 = v29;
				if (v30 != v29)
				{
					sub_1407DB590(v29, v30, 2 * v6[6]);
					v32 = v6[5];
					if (v32)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v32 - 16) + 8i64))(v32 - 16);
					v6[5] = (__int64)v31;
				}
			}
			v6[6] = v28;
			sub_1407DB590((int*)(v6[5] + 2 * v26), v20, 2 * v27);
			v17 = v48 + 1;
			*v50 = v26;
			v48 = v17;
		} while (v17 < v51);
		v2 = a2;
	}
	if (v45[0] < v45[1])
		sub_14018B900(v46 + 8 * v45[0], 0);
	v33 = a1[4];
	if (v6[4] > v33)
		v6[4] = v33;
	v34 = (int*)v6[3];
	if (v33)
	{
		v35 = 56 * v33;
		if (v34 && (**((unsigned int(__fastcall***)(__int64, __int64))v34 - 2))((__int64)(v34 - 4), v35 + 16))
		{
			*((_QWORD*)v34 - 1) = v33;
		}
		else
		{
			v36 = sub_14018B280(v35 + 16, 0);
			if (v36)
			{
				*((_QWORD*)v36 + 1) = v33;
				*(_QWORD*)v36 = off_140B55060;
			}
			else
			{
				v36 = 0i64;
			}
			v34 = v36 + 4;
		}
	}
	else
	{
		v34 = 0i64;
	}
	v37 = (int*)v6[3];
	if (v37 != v34)
	{
		sub_1407DB590(v34, v37, 56 * v6[4]);
		v38 = v6[3];
		if (v38)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
		v6[3] = (__int64)v34;
	}
	v44[0] = 0i64;
	v44[1] = v33;
	sub_1401D3110(v47, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401D1990, v44, (__int64)a1, 2);
	v39 = v47[2];
	if (v33)
	{
		do
		{
			v40 = (__int64*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 32i64))(a1, *(_QWORD*)(v39 + 8 * v5));
			v41 = (int*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 24i64))(a1, *(_QWORD*)(v39 + 8 * v5));
			sub_1401D0AE0((__int64)v6, v41, v40);
			++v5;
		} while (v5 < v33);
	}
	if (v47[0] < v47[1])
		sub_14018B900(v39 + 8 * v47[0], 0);
	result = 0i64;
	*v2 = v6;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5F120: using guessed type __int64 (__fastcall *off_140B5F120[20])();

