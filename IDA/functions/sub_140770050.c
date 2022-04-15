#include "../winhttp.h"

//----- (0000000140770050) ----------------------------------------------------
void __fastcall sub_140770050(_QWORD* a1, __int64 a2)
{
	__int64 v2; // r15
	_QWORD* v3; // rbx
	__int64 v5; // rdx
	char v7; // r13
	int* v8; // r8
	int* v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	void(__fastcall * **v12)(_QWORD, __int64); // rcx
	void(__fastcall * **v13)(_QWORD, __int64); // rcx
	int* v14; // rax
	__int64 v15; // r14
	__m128i* v16; // rdi
	__int64 v17; // rcx
	__int64 v18; // rbx
	void(__fastcall * **v19)(_QWORD); // r12
	__int64 i; // rcx
	int* v21; // rax
	__int64 v22; // rdx
	_WORD* v23; // r9
	__int64 v24; // rax
	__m128i* v25; // rdi
	__int64 v26; // r12
	void(__fastcall * **v27)(_QWORD); // r12
	__int64 j; // rcx
	int* v29; // rax
	__int64 v30; // rdx
	_WORD* v31; // r9
	__int64 v32; // [rsp+20h] [rbp-E0h]
	__int64 v33; // [rsp+20h] [rbp-E0h]
	__int64(__fastcall * *v34)(); // [rsp+50h] [rbp-B0h] BYREF
	int v35; // [rsp+58h] [rbp-A8h]
	__int64 v36; // [rsp+60h] [rbp-A0h]
	void(__fastcall * **v37)(_QWORD); // [rsp+68h] [rbp-98h]
	int v38; // [rsp+70h] [rbp-90h]
	int v39; // [rsp+74h] [rbp-8Ch]
	char v40[8]; // [rsp+78h] [rbp-88h] BYREF
	int* v41; // [rsp+80h] [rbp-80h]
	int* v42; // [rsp+88h] [rbp-78h]
	int* v43; // [rsp+90h] [rbp-70h]
	__int128 v44; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v45; // [rsp+B0h] [rbp-50h] BYREF
	int v46; // [rsp+B8h] [rbp-48h]
	__int128 v47; // [rsp+110h] [rbp+10h]
	__int128 v48; // [rsp+120h] [rbp+20h]
	int v49; // [rsp+130h] [rbp+30h]

	v2 = 0i64;
	v3 = a1 + 14;
	v5 = a2 + 32;
	v7 = 0;
	if ((_QWORD*)v5 != a1 + 14)
		sub_14001C480((__int64)(a1 + 14), *(int**)(v5 + 8), *(int**)(v5 + 16));
	v8 = *(int**)(a2 + 80);
	v9 = *(int**)(a2 + 72);
	v10 = (__int64)(a1 + 18);
	if (v9 == v8)
	{
		if (v3 != (_QWORD*)v10)
		{
			v8 = (int*)v3[2];
			v9 = (int*)v3[1];
		LABEL_7:
			sub_14001C480(v10, v9, v8);
		}
	}
	else if (a2 + 64 != v10)
	{
		goto LABEL_7;
	}
	v11 = a1[12];
	if (!v11)
		return;
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v11 + 16i64))(v11, &v44);
	v12 = (void(__fastcall***)(_QWORD, __int64))a1[12];
	if (v12)
		(**v12)(v12, 1i64);
	v13 = (void(__fastcall***)(_QWORD, __int64))a1[13];
	if (v13)
		(**v13)(v13, 1i64);
	v14 = sub_14018B280(16i64, 0);
	v15 = (__int64)v14;
	v41 = v14;
	v42 = v14;
	v43 = v14 + 4;
	if (v14)
		*(_WORD*)v14 = 0;
	v16 = (__m128i*)a1[15];
	v17 = *(_QWORD*)(qword_140C65898 + 29504);
	v18 = 0i64;
	v39 = 1065353216;
	v38 = dword_140C63664;
	v37 = 0i64;
	if (v17)
	{
		if (v16)
		{
			if (v16->m128i_i16[0])
			{
				v19 = (void(__fastcall***)(_QWORD))sub_140108E80(v17 + 240, v16);
				if (v19)
				{
					for (i = 0i64; v16->m128i_i16[i]; ++i)
						;
					sub_14001C480((__int64)v40, v16->m128i_i32, (int*)((char*)v16->m128i_i32 + 2 * i));
					(**v19)(v19);
					v18 = (__int64)v19;
					v37 = v19;
					v15 = (__int64)v41;
				}
			}
		}
	}
	sub_140770490((__int64)&v45);
	v49 = 1065353216;
	v47 = xmmword_140B7B240;
	v48 = xmmword_140B7B240;
	if (v18)
		(**(void(__fastcall***)(__int64))v18)(v18);
	if (v45)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 8i64))(v45);
	v46 = v38;
	v45 = v18;
	v21 = sub_14018B280(384i64, 0);
	if (v21)
	{
		v23 = (_WORD*)a1[23];
		v34 = off_140B56A08;
		v7 = 1;
		v32 = a1[26];
		v36 = 0i64;
		v35 = -2;
		v24 = sub_140770B60((__int64)v21, 1, &v44, v23, v32, 0i64, (__int64)&v45, 18, (__int64)&v34);
	}
	else
	{
		v24 = 0i64;
	}
	a1[12] = v24;
	if ((v7 & 1) != 0)
	{
		v34 = off_140B56A08;
		v7 &= ~1u;
		if (v36)
			sub_1400579E0(v36, v22, v35);
	}
	v25 = (__m128i*)a1[19];
	v26 = *(_QWORD*)(qword_140C65898 + 29504);
	if (v26)
	{
		if (!v18)
			goto LABEL_63;
		if (!v25)
			goto LABEL_50;
		if (!sub_14002C740((__int64)v40, (_WORD*)a1[19]))
		{
		LABEL_63:
			if (v25 && v25->m128i_i16[0])
			{
				v27 = (void(__fastcall***)(_QWORD))sub_140108E80(v26 + 240, v25);
				if (v27)
				{
					for (j = 0i64; v25->m128i_i16[j]; ++j)
						;
					sub_14001C480((__int64)v40, v25->m128i_i32, (int*)((char*)v25->m128i_i32 + 2 * j));
					v15 = (__int64)v41;
					v18 = (__int64)v37;
				}
				if (v27 != (void(__fastcall***)(_QWORD))v18)
				{
					if (v27)
						(**v27)(v27);
					if (v18)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
					v18 = (__int64)v27;
				}
				goto LABEL_52;
			}
		LABEL_50:
			if (v18)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
				v18 = 0i64;
			}
		}
	}
LABEL_52:
	v29 = sub_14018B280(384i64, 0);
	if (v29)
	{
		v31 = (_WORD*)a1[23];
		v33 = a1[26];
		v7 |= 2u;
		v34 = off_140B56A08;
		v36 = 0i64;
		v35 = -2;
		v2 = sub_140770B60((__int64)v29, 1, &v44, v31, v33, 0i64, (__int64)&v45, 18, (__int64)&v34);
	}
	a1[13] = v2;
	if ((v7 & 2) != 0)
	{
		v34 = off_140B56A08;
		if (v36)
			sub_1400579E0(v36, v30, v35);
	}
	sub_140532D90(&v45);
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
	if (v15)
		sub_14018B900(v15, 0);
}
// 1407701D0: conditional instruction was optimized away because rbx.8==0
// 1407701C2: conditional instruction was optimized away because r12.8!=0
// 1407702D1: variable 'v22' is possibly undefined
// 140770438: variable 'v30' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140770050: using guessed type char var_148[8];

