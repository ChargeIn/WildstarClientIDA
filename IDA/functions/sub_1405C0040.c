#include "../winhttp.h"

//----- (00000001405C0040) ----------------------------------------------------
void __fastcall sub_1405C0040(__int64 a1, __int64 a2)
{
	__int64 v3; // r15
	unsigned int v4; // r14d
	unsigned int v5; // ebx
	int* v6; // rax
	__int64 v7; // rdi
	_DWORD* v8; // rdx
	int v9; // r9d
	int v10; // r10d
	int v11; // eax
	unsigned int v12; // ebx
	int* v13; // rax
	__int64 v14; // r13
	__int64 v15; // r11
	_DWORD* v16; // r15
	__int64 v17; // r10
	int v18; // r8d
	__int64 v19; // r9
	__int64 v20; // rax
	int v21; // r8d
	int v22; // edx
	__int64* v23; // rdi
	unsigned int* v24; // rdi
	unsigned int v25; // eax
	int v26; // ecx
	unsigned int v27; // edx
	__int64 v28; // [rsp+20h] [rbp-B9h]
	__int64 v29; // [rsp+28h] [rbp-B1h]
	int v30[2]; // [rsp+30h] [rbp-A9h] BYREF
	int* v31; // [rsp+38h] [rbp-A1h]
	unsigned __int64 v32; // [rsp+40h] [rbp-99h]
	char v33[8]; // [rsp+50h] [rbp-89h] BYREF
	int* v34; // [rsp+58h] [rbp-81h] BYREF
	__int64 v35; // [rsp+60h] [rbp-79h]
	unsigned int v36; // [rsp+78h] [rbp-61h] BYREF
	int v37; // [rsp+7Ch] [rbp-5Dh]
	int v38; // [rsp+80h] [rbp-59h]
	int v39; // [rsp+84h] [rbp-55h]
	int v40; // [rsp+88h] [rbp-51h]
	int v41; // [rsp+8Ch] [rbp-4Dh]
	int v42; // [rsp+90h] [rbp-49h] BYREF
	char v43[8]; // [rsp+98h] [rbp-41h] BYREF
	__int64 v44; // [rsp+A0h] [rbp-39h]
	__int64 v45[2]; // [rsp+B8h] [rbp-21h] BYREF
	__int64 v46[2]; // [rsp+C8h] [rbp-11h] BYREF
	int v47; // [rsp+D8h] [rbp-1h] BYREF
	char v48[8]; // [rsp+E0h] [rbp+7h] BYREF
	__int64 v49; // [rsp+E8h] [rbp+Fh]
	__int64 v51; // [rsp+158h] [rbp+7Fh] BYREF

	v3 = a1;
	v4 = 0;
	if (*(_QWORD*)(a1 + 16))
	{
		if (*(_DWORD*)a2)
		{
			v12 = a1;
			do
			{
				v13 = sub_14018B280(56i64, 0);
				v35 = 0i64;
				v34 = v13;
				*(_BYTE*)v13 = 0;
				*((_QWORD*)v34 + 1) = 0i64;
				*((_QWORD*)v34 + 2) = v34;
				*((_QWORD*)v34 + 3) = v34;
				v14 = 24i64 * v4;
				LOBYTE(v42) = *(_BYTE*)(v14 + *(_QWORD*)(a2 + 8));
				sub_1405C5510((__int64)v43, (__int64)v33);
				v47 = (unsigned __int8)v42;
				sub_1405C5510((__int64)v48, (__int64)v43);
				sub_1405C4B10(v3, (__int64)v46, &v47);
				sub_140008410((__int64)v48);
				sub_14018B900(v49, 0);
				sub_140008410((__int64)v43);
				sub_14018B900(v44, 0);
				sub_140008410((__int64)v33);
				sub_14018B900((__int64)v34, 0);
				v15 = *(_QWORD*)(v46[0] + 48);
				v16 = (_DWORD*)(v14 + *(_QWORD*)(a2 + 8));
				v17 = v46[0] + 40;
				v18 = v16[1];
				v19 = v15;
				v12 = (unsigned __int16)v18 | v12 & 0xFC000000 | ((v16[2] & 3) << 24) | ((unsigned __int8)v16[3] << 16);
				v20 = *(_QWORD*)(v15 + 8);
				if (v20)
				{
					do
					{
						v21 = *(_DWORD*)(v20 + 32);
						if ((unsigned __int16)v21 < (unsigned int)(unsigned __int16)v12
							|| *(_BYTE*)(v20 + 34) < BYTE2(v12)
							|| (int)((v21 & 0xFF000000) << 6) < (int)((v12 & 0xFF000000) << 6))
						{
							v20 = *(_QWORD*)(v20 + 24);
						}
						else
						{
							v19 = v20;
							v20 = *(_QWORD*)(v20 + 16);
						}
					} while (v20);
					v17 = v46[0] + 40;
					v18 = v16[1];
				}
				if (v19 == v15
					|| (v22 = *(_DWORD*)(v19 + 32), (unsigned __int16)v12 < (unsigned __int16)v22)
					|| BYTE2(v12) < *(_BYTE*)(v19 + 34)
					|| (int)((v12 & 0xFF000000) << 6) < (int)((v22 & 0xFF000000) << 6))
				{
					v45[0] = *(_QWORD*)(v46[0] + 48);
					v23 = v45;
				}
				else
				{
					v51 = v19;
					v23 = &v51;
				}
				v24 = (unsigned int*)*v23;
				v25 = v16[4];
				if (v24 == (unsigned int*)v15)
				{
					v26 = v16[2];
					v27 = v16[5];
					v30[1] = v18;
					LODWORD(v31) = v26;
					HIDWORD(v31) = v16[3];
					v30[0] = v12;
					v32 = __PAIR64__(v27, v25);
					sub_1405C52A0(v17, (__int64)&v36, (__int64)v30);
				}
				else
				{
					v24[12] = v25;
					v24[13] = *(_DWORD*)(*(_QWORD*)(a2 + 8) + v14 + 20);
				}
				LODWORD(v29) = v24[11];
				LODWORD(v28) = v24[10];
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PveRatingUpdated", "iii", v24[9], v28, v29);
				v3 = a1;
				++v4;
			} while (v4 < *(_DWORD*)a2);
		}
	}
	else if (*(_DWORD*)a2)
	{
		v5 = a1;
		do
		{
			v6 = sub_14018B280(56i64, 0);
			v32 = 0i64;
			v31 = v6;
			*(_BYTE*)v6 = 0;
			*((_QWORD*)v31 + 1) = 0i64;
			*((_QWORD*)v31 + 2) = v31;
			*((_QWORD*)v31 + 3) = v31;
			v7 = 24i64 * v4;
			v33[0] = *(_BYTE*)(v7 + *(_QWORD*)(a2 + 8));
			sub_1405C5510((__int64)&v34, (__int64)v30);
			v42 = (unsigned __int8)v33[0];
			sub_1405C5510((__int64)v43, (__int64)&v34);
			sub_1405C4B10(v3, (__int64)v45, &v42);
			sub_140008410((__int64)v43);
			sub_14018B900(v44, 0);
			sub_140008410((__int64)&v34);
			sub_14018B900(v35, 0);
			sub_140008410((__int64)v30);
			sub_14018B900((__int64)v31, 0);
			v8 = (_DWORD*)(v7 + *(_QWORD*)(a2 + 8));
			v9 = v8[2];
			v10 = v8[3];
			v37 = v8[1];
			v38 = v9;
			v39 = v10;
			v41 = v8[5];
			v5 = (unsigned __int16)v37 | v5 & 0xFC000000 | ((v9 & 3) << 24) | ((unsigned __int8)v10 << 16);
			v11 = v8[4];
			v36 = v5;
			v40 = v11;
			sub_1405C52A0(v45[0] + 40, (__int64)v46, (__int64)&v36);
			++v4;
		} while (v4 < *(_DWORD*)a2);
	}
}
// 1405C03EF: variable 'v28' is possibly undefined
// 1405C03EF: variable 'v29' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405C0040: using guessed type char var_E0[8];
// 1405C0040: using guessed type char var_98[8];
// 1405C0040: using guessed type char var_50[8];

