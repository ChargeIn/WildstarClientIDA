#include "../winhttp.h"

//----- (00000001400C7140) ----------------------------------------------------
void __fastcall sub_1400C7140(_QWORD* a1, _QWORD* a2, unsigned __int8 a3)
{
	_QWORD* v3; // rax
	__int64 v4; // rsi
	_QWORD* v5; // rbx
	_QWORD* v6; // rbp
	__int64* v8; // rsi
	__int64 v9; // rbp
	__int64 v10; // rcx
	__int64 v11; // rcx
	_QWORD** v12; // rax
	_QWORD* v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rcx
	int* v16; // rax
	__int64 v17; // rax
	_QWORD* v18; // rbx
	void(__fastcall * **v19)(_QWORD); // rsi
	void(__fastcall * **v20)(_QWORD); // rbx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	unsigned __int64 v24; // rbx
	int* v25; // rax
	int* v26; // rsi
	int* v27; // rax
	int v28; // xmm0_4
	void(__fastcall * **v29)(_QWORD); // rbx
	__int64 v30; // rcx
	__int64 v31; // rbx
	int* v32; // rax
	int* v33; // rax
	_QWORD* v34; // rbx
	_QWORD* v35; // rbx
	__int64 v36; // rcx
	_QWORD* v37; // rbx
	__int64 v38; // rcx
	__int64 v39; // rcx
	unsigned __int8 v40; // cl
	_QWORD* v41; // rax
	_QWORD* v42; // rbx
	unsigned __int64 i; // [rsp+48h] [rbp+10h]

	v3 = (_QWORD*)a1[38];
	a1[6] = a2;
	v4 = 0i64;
	v5 = (_QWORD*)*v3;
	v6 = a2;
	if ((_QWORD*)*v3 != v3)
	{
		do
		{
			v8 = (__int64*)v5[2];
			if (v8)
			{
				v9 = v8[1];
				if (v9)
				{
					sub_140150220(v8[1]);
					sub_14018B900(v9, 0);
				}
				v10 = v8[3];
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					v8[3] = 0i64;
				}
				v11 = v8[6];
				if (v11)
					sub_14018B900(v11, 0);
				sub_14018B900((__int64)v8, 0);
			}
			v5 = (_QWORD*)*v5;
		} while (v5 != (_QWORD*)a1[38]);
		v6 = a2;
		v4 = 0i64;
	}
	v12 = (_QWORD**)a1[38];
	v13 = *v12;
	if (*v12 != v12)
	{
		do
		{
			v14 = (__int64)v13;
			v13 = (_QWORD*)*v13;
			sub_14018B900(v14, 0);
		} while (v13 != (_QWORD*)a1[38]);
	}
	*(_QWORD*)a1[38] = a1[38];
	*(_QWORD*)(a1[38] + 8i64) = a1[38];
	v15 = a1[39];
	if (v15)
	{
		sub_14018B900(v15, 0);
		a1[39] = 0i64;
	}
	if (v6)
	{
		if (v6[20] && !a1[92])
		{
			v16 = sub_14018B280(48i64, 0);
			if (v16)
				v17 = sub_1401095E0((__int64)v16);
			else
				v17 = 0i64;
			a1[92] = v17;
		}
		v18 = (_QWORD*)a1[92];
		if (v18)
		{
			v19 = (void(__fastcall***)(_QWORD))v6[20];
			if (v19 != (void(__fastcall***)(_QWORD)) * v18)
			{
				if (v19)
					(**v19)(v6[20]);
				if (*v18)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v18 + 8i64))(*v18);
					*v18 = 0i64;
				}
				*v18 = v19;
			}
		}
		sub_1400C6E70((__int64)a1);
		v20 = (void(__fastcall***)(_QWORD))v6[18];
		if (v20 != (void(__fastcall***)(_QWORD))a1[93])
		{
			if (v20)
				(**v20)(v6[18]);
			v21 = a1[93];
			if (v21)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
				a1[93] = 0i64;
			}
			a1[93] = v20;
		}
		v22 = a1[59];
		if (v22)
			sub_1400C4330(v22, (__int64)(v6 + 21), 1);
		v23 = a1[58];
		if (v23)
			sub_1400C4330(v23, (__int64)(v6 + 51), 0);
		v24 = 0i64;
		for (i = 0i64; v24 < v6[118]; i = v24)
		{
			v25 = sub_14018B280(72i64, 0);
			v26 = v25;
			if (v25)
			{
				*(_QWORD*)v25 = *(_QWORD*)(v6[117] + 8 * v24);
				*((_QWORD*)v25 + 1) = 0i64;
				*((_QWORD*)v25 + 6) = 0i64;
				*((_QWORD*)v25 + 7) = 0i64;
				*((_QWORD*)v25 + 8) = 0i64;
				v27 = sub_14018B280(16i64, 0);
				*((_QWORD*)v26 + 6) = v27;
				*((_QWORD*)v26 + 7) = v27;
				*((_QWORD*)v26 + 8) = v27 + 4;
				if (v27)
					*(_WORD*)v27 = 0;
				v28 = dword_140C63664;
				*((_QWORD*)v26 + 3) = 0i64;
				v26[9] = 1065353216;
				v26[8] = v28;
				v29 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)v26 + 128i64);
				if (v29)
				{
					(**v29)(*(_QWORD*)(*(_QWORD*)v26 + 128i64));
					v30 = *((_QWORD*)v26 + 3);
					if (v30)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
						*((_QWORD*)v26 + 3) = 0i64;
					}
					*((_QWORD*)v26 + 3) = v29;
				}
				v26[4] = *(_DWORD*)(*(_QWORD*)v26 + 136i64);
			}
			else
			{
				v26 = 0i64;
			}
			v31 = a1[38];
			v32 = sub_14018B280(24i64, 0);
			if (v32 != (int*)-16i64)
				*((_QWORD*)v32 + 2) = v26;
			*(_QWORD*)v32 = v31;
			*((_QWORD*)v32 + 1) = *(_QWORD*)(v31 + 8);
			**(_QWORD**)(v31 + 8) = v32;
			*(_QWORD*)(v31 + 8) = v32;
			if (v26[4] >= 0)
			{
				if (!a1[39])
				{
					v33 = sub_14018B280(64i64, 0);
					a1[39] = v33;
					*(_QWORD*)v33 = 0i64;
					*(_QWORD*)(a1[39] + 8i64) = 0i64;
					*(_QWORD*)(a1[39] + 16i64) = 0i64;
					*(_QWORD*)(a1[39] + 24i64) = 0i64;
					*(_QWORD*)(a1[39] + 32i64) = 0i64;
					*(_QWORD*)(a1[39] + 40i64) = 0i64;
					*(_QWORD*)(a1[39] + 48i64) = 0i64;
					*(_QWORD*)(a1[39] + 56i64) = 0i64;
				}
				*(_QWORD*)(a1[39] + 8i64 * v26[4]) = v26;
			}
			v24 = i + 1;
		}
	}
	else
	{
		v34 = (_QWORD*)a1[92];
		if (v34 && *v34)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v34 + 8i64))(*v34);
			*v34 = 0i64;
		}
		if (a1[60])
		{
			do
			{
				v35 = *(_QWORD**)(v4 + a1[60]);
				if (v35)
				{
					if (*v35)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v35 + 8i64))(*v35);
						*v35 = 0i64;
					}
					v36 = v35[3];
					if (v36)
						sub_14018B900(v36, 0);
					sub_14018B900((__int64)v35, 0);
				}
				v4 += 8i64;
			} while (v4 < 64);
			sub_14018B900(a1[60], 0);
			v6 = a2;
			a1[60] = 0i64;
		}
		v37 = (_QWORD*)a1[99];
		if (v37 && *v37)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v37 + 8i64))(*v37);
			*v37 = 0i64;
		}
		v38 = a1[59];
		if (v38)
			sub_1400C41E0(v38);
		v39 = a1[58];
		if (v39)
			sub_1400C41E0(v39);
	}
	v40 = a3;
	if (a3)
	{
		v41 = (_QWORD*)a1[70];
		v42 = (_QWORD*)*v41;
		if ((_QWORD*)*v41 != v41)
		{
			do
			{
				sub_1400C7140(v42[2], v6, v40);
				v42 = (_QWORD*)*v42;
				v40 = a3;
			} while (v42 != (_QWORD*)a1[70]);
		}
	}
	a1[48] = -1i64;
}
// 140C63664: using guessed type int dword_140C63664;

