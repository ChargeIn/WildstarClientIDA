#include "../winhttp.h"

//----- (00000001405C0420) ----------------------------------------------------
void __fastcall sub_1405C0420(__int64 a1, __int64 a2)
{
	unsigned int v3; // esi
	__int64 v4; // r14
	int* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned int v8; // edx
	unsigned int v9; // r8d
	unsigned int v10; // r9d
	unsigned int v11; // r10d
	__int64 v12; // r12
	int* v13; // rax
	__int64 v14; // r14
	__int64 v15; // r9
	_DWORD* v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rdx
	__int64* v19; // rbx
	unsigned int* v20; // rbx
	int v21; // r8d
	int v22; // eax
	unsigned int v23; // r9d
	unsigned int v24; // r10d
	int v25; // [rsp+20h] [rbp-89h] BYREF
	int v26; // [rsp+24h] [rbp-85h]
	int* v27; // [rsp+28h] [rbp-81h]
	unsigned __int64 v28; // [rsp+30h] [rbp-79h]
	char v29[8]; // [rsp+40h] [rbp-69h] BYREF
	int* v30; // [rsp+48h] [rbp-61h] BYREF
	__int64 v31; // [rsp+50h] [rbp-59h]
	int v32; // [rsp+68h] [rbp-41h] BYREF
	char v33[8]; // [rsp+70h] [rbp-39h] BYREF
	__int64 v34; // [rsp+78h] [rbp-31h]
	__int64 v35[2]; // [rsp+90h] [rbp-19h] BYREF
	char v36[16]; // [rsp+A0h] [rbp-9h] BYREF
	int v37; // [rsp+B0h] [rbp+7h] BYREF
	char v38[8]; // [rsp+B8h] [rbp+Fh] BYREF
	__int64 v39; // [rsp+C0h] [rbp+17h]
	__int64 v40; // [rsp+110h] [rbp+67h] BYREF
	__int64 v41; // [rsp+120h] [rbp+77h] BYREF

	v3 = 0;
	if (*(_QWORD*)(a1 + 48))
	{
		if (!*(_DWORD*)a2)
			return;
		v12 = a1 + 32;
		while (1)
		{
			v13 = sub_14018B280(56i64, 0);
			v31 = 0i64;
			v30 = v13;
			*(_BYTE*)v13 = 0;
			*((_QWORD*)v30 + 1) = 0i64;
			*((_QWORD*)v30 + 2) = v30;
			*((_QWORD*)v30 + 3) = v30;
			v14 = 24i64 * v3;
			LOBYTE(v32) = *(_BYTE*)(v14 + *(_QWORD*)(a2 + 8));
			sub_1405C5510((__int64)v33, (__int64)v29);
			v37 = (unsigned __int8)v32;
			sub_1405C5510((__int64)v38, (__int64)v33);
			sub_1405C4B10(v12, (__int64)v35, &v37);
			sub_140008410((__int64)v38);
			sub_14018B900(v39, 0);
			sub_140008410((__int64)v33);
			sub_14018B900(v34, 0);
			sub_140008410((__int64)v29);
			sub_14018B900((__int64)v30, 0);
			v15 = *(_QWORD*)(v35[0] + 48);
			v16 = (_DWORD*)(v14 + *(_QWORD*)(a2 + 8));
			v17 = *(_QWORD*)(v15 + 8);
			v18 = v15;
			while (v17)
			{
				if (*(_DWORD*)(v17 + 32) < v16[1])
				{
					v17 = *(_QWORD*)(v17 + 24);
				}
				else
				{
					v18 = v17;
					v17 = *(_QWORD*)(v17 + 16);
				}
			}
			if (v18 == v15 || v16[1] < *(_DWORD*)(v18 + 32))
			{
				v41 = *(_QWORD*)(v35[0] + 48);
				v19 = &v41;
			}
			else
			{
				v40 = v18;
				v19 = &v40;
			}
			v20 = (unsigned int*)*v19;
			if (v20 == (unsigned int*)v15)
				break;
			if (v20[10] != v16[2])
			{
				v20[11] = v16[3];
				v20[13] = *(_DWORD*)(*(_QWORD*)(a2 + 8) + v14 + 20);
				v20[12] = *(_DWORD*)(*(_QWORD*)(a2 + 8) + v14 + 16);
				v20[10] = *(_DWORD*)(*(_QWORD*)(a2 + 8) + v14 + 8);
				goto LABEL_21;
			}
		LABEL_22:
			if (++v3 >= *(_DWORD*)a2)
				return;
		}
		v21 = v16[3];
		v22 = v16[1];
		v23 = v16[4];
		v24 = v16[5];
		LODWORD(v27) = v16[2];
		HIDWORD(v27) = v21;
		v25 = v22;
		v26 = v22;
		v28 = __PAIR64__(v24, v23);
		sub_1405C5410(v35[0] + 40, (__int64)v36, &v25);
	LABEL_21:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PvpRatingUpdated", L"i", v20[9]);
		goto LABEL_22;
	}
	if (*(_DWORD*)a2)
	{
		v4 = a1 + 32;
		do
		{
			v5 = sub_14018B280(56i64, 0);
			v28 = 0i64;
			v27 = v5;
			*(_BYTE*)v5 = 0;
			*((_QWORD*)v27 + 1) = 0i64;
			*((_QWORD*)v27 + 2) = v27;
			*((_QWORD*)v27 + 3) = v27;
			v6 = 24i64 * v3;
			v29[0] = *(_BYTE*)(v6 + *(_QWORD*)(a2 + 8));
			sub_1405C5510((__int64)&v30, (__int64)&v25);
			v32 = (unsigned __int8)v29[0];
			sub_1405C5510((__int64)v33, (__int64)&v30);
			sub_1405C4B10(v4, (__int64)v35, &v32);
			sub_140008410((__int64)v33);
			sub_14018B900(v34, 0);
			sub_140008410((__int64)&v30);
			sub_14018B900(v31, 0);
			sub_140008410((__int64)&v25);
			sub_14018B900((__int64)v27, 0);
			v7 = *(_QWORD*)(a2 + 8);
			v8 = *(_DWORD*)(v6 + v7 + 8);
			v9 = *(_DWORD*)(v6 + v7 + 12);
			v10 = *(_DWORD*)(v6 + v7 + 16);
			v11 = *(_DWORD*)(v6 + v7 + 20);
			v25 = *(_DWORD*)(v6 + v7 + 4);
			v26 = v25;
			v27 = (int*)__PAIR64__(v9, v8);
			v28 = __PAIR64__(v11, v10);
			sub_1405C5410(v35[0] + 40, (__int64)v36, &v25);
			++v3;
		} while (v3 < *(_DWORD*)a2);
	}
}
// 1409EEB04: using guessed type wchar_t aI_14[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405C0420: using guessed type char var_C0[8];
// 1405C0420: using guessed type char var_90[8];
// 1405C0420: using guessed type char var_48[8];

