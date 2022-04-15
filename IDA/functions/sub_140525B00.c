#include "../winhttp.h"

//----- (0000000140525B00) ----------------------------------------------------
void __fastcall sub_140525B00(_QWORD* a1, char a2, float* a3)
{
	__int64 v4; // rcx
	float v7; // xmm0_4
	__int64 v8; // rax
	float v9; // xmm6_4
	__int128 v10; // xmm0
	float v11; // xmm1_4
	__int64 v12; // rax
	int v13; // ecx
	int v14; // edx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rax
	int v18; // ecx
	int v19; // edx
	__int64 v20; // rax
	__int64 v21; // rax
	__int128 v22; // xmm2
	float v23; // xmm1_4
	__int64 v24; // rax
	int v25; // ecx
	int v26; // edx
	__int64 v27; // rax
	__int64 v28; // rax
	__int64 v29; // rax
	int v30; // ecx
	int v31; // r8d
	__int64 v32; // rax
	__int64 v33; // rax
	__int128 v34; // [rsp+20h] [rbp-40h] BYREF
	__int128 v35; // [rsp+30h] [rbp-30h] BYREF
	__int128 v36; // [rsp+40h] [rbp-20h]

	v4 = a1[184];
	if (v4 && (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4))
	{
		v7 = sub_1405257A0((__int64)a1);
		v8 = *(_QWORD*)qword_140C65680;
		v9 = v7;
		if (v7 >= 1.0)
		{
			(*(void(__fastcall**)(__int64, __int64))(v8 + 64))(qword_140C65680, 16i64);
			v34 = xmmword_140B7B260;
			(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 176i64))(qword_140C65680, &v34);
		LABEL_11:
			v24 = *a1;
			if (a2)
			{
				if ((*(__int64(__fastcall**)(_QWORD*))(v24 + 168))(a1))
				{
					v25 = (int)a3[1];
					v26 = (int)a3[4];
					LODWORD(v34) = (int)*a3;
					v27 = *a1;
					*(_QWORD*)((char*)&v34 + 4) = __PAIR64__(v26, v25);
					HIDWORD(v34) = (int)a3[5];
					v28 = (*(__int64(__fastcall**)(_QWORD*))(v27 + 168))(a1);
					sub_1400CC7C0(v28, (int*)&v34);
					v29 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 168i64))(a1);
				LABEL_17:
					sub_1400D0A00(v29, 0);
				}
			}
			else if ((*(__int64(__fastcall**)(_QWORD*))(v24 + 176))(a1))
			{
				v30 = (int)a3[1];
				v31 = (int)a3[5];
				LODWORD(v34) = (int)*a3;
				v32 = *a1;
				DWORD1(v34) = v30;
				HIDWORD(v34) = v31;
				DWORD2(v34) = (int)a3[4];
				v33 = (*(__int64(__fastcall**)(_QWORD*))(v32 + 176))(a1);
				sub_1400CC7C0(v33, (int*)&v34);
				v29 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 176i64))(a1);
				goto LABEL_17;
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			return;
		}
		(*(void(__fastcall**)(__int64, __int64))(v8 + 64))(qword_140C65680, 26i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 160i64))(qword_140C65680);
		v34 = xmmword_140B7B050;
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 176i64))(qword_140C65680, &v34);
		v10 = *((_OWORD*)a3 + 1);
		v11 = a3[4] - *a3;
		v35 = *(_OWORD*)a3;
		v36 = v10;
		*(float*)&v35 = *(float*)&v35 + (float)(v11 * v9);
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v35);
		v12 = *a1;
		if (a2)
		{
			if ((*(__int64(__fastcall**)(_QWORD*))(v12 + 168))(a1))
			{
				v13 = (int)a3[1];
				v14 = (int)a3[4];
				LODWORD(v34) = (int)*a3;
				v15 = *a1;
				*(_QWORD*)((char*)&v34 + 4) = __PAIR64__(v14, v13);
				HIDWORD(v34) = (int)a3[5];
				v16 = (*(__int64(__fastcall**)(_QWORD*))(v15 + 168))(a1);
				sub_1400CC7C0(v16, (int*)&v34);
				v17 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 168i64))(a1);
			LABEL_9:
				sub_1400D0A00(v17, 0);
			}
		}
		else if ((*(__int64(__fastcall**)(_QWORD*))(v12 + 176))(a1))
		{
			v18 = (int)a3[1];
			v19 = (int)a3[4];
			LODWORD(v34) = (int)*a3;
			v20 = *a1;
			*(_QWORD*)((char*)&v34 + 4) = __PAIR64__(v19, v18);
			HIDWORD(v34) = (int)a3[5];
			v21 = (*(__int64(__fastcall**)(_QWORD*))(v20 + 176))(a1);
			sub_1400CC7C0(v21, (int*)&v34);
			v17 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 176i64))(a1);
			goto LABEL_9;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v22 = *(_OWORD*)a3;
		v23 = a3[4] - *a3;
		v36 = *((_OWORD*)a3 + 1);
		v35 = v22;
		*(float*)&v36 = (float)(v23 * v9) + *(float*)&v22;
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v35);
		goto LABEL_11;
	}
}
// 140B7B050: using guessed type __int128 xmmword_140B7B050;
// 140B7B260: using guessed type __int128 xmmword_140B7B260;
// 140C65680: using guessed type __int64 qword_140C65680;

