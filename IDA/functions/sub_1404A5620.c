#include "../winhttp.h"

//----- (00000001404A5620) ----------------------------------------------------
__int64 __fastcall sub_1404A5620(__int64 a1)
{
	__int64 v2; // rax
	int v3; // eax
	__int64 v4; // rax
	float v5; // xmm0_4
	__int64(__fastcall * v6)(wchar_t**, __int64); // rax
	unsigned int v7; // eax
	unsigned int v8; // r14d
	unsigned int i; // ebp
	__int64 v10; // rax
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	int v14; // ecx
	int v15; // eax
	float v16; // xmm0_4
	float v17; // xmm0_4
	__int64 v18; // r9
	unsigned int v19; // r8d
	bool v20; // al
	__int64 v21; // rdx
	__int64 v22; // rbx
	__int64 v23; // rcx
	__int64 j; // rax
	__int64 v25; // rax
	int* v26; // rcx
	__int64 v27; // rax
	__int64 v28; // rax
	__int64 v30; // [rsp+20h] [rbp-58h]

	v2 = sub_140200220(0x1BAu);
	if (v2)
		v3 = *(_DWORD*)(v2 + 4);
	else
		v3 = 500;
	*(_DWORD*)(a1 + 40) = v3;
	v4 = sub_140200220(0x1C3u);
	if (v4)
		v5 = *(float*)(v4 + 24);
	else
		v5 = 1.0;
	v6 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	*(float*)(a1 + 44) = v5 * 0.0099999998;
	if (v6)
	{
		v7 = v6(off_140A6A670, qword_140C63858);
	}
	else
	{
		if (dword_140C63B5C)
		{
			v8 = 0;
			goto LABEL_15;
		}
		if ((int)sub_140202E80() < 0)
		{
			v8 = 0;
			goto LABEL_15;
		}
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65030 + 40i64))(qword_140C65030);
	}
	v8 = v7;
LABEL_15:
	for (i = 0; i < v8; ++i)
	{
		if (qword_140C63848)
		{
			v10 = qword_140C63848(off_140A6A670, i, qword_140C63858);
		}
		else
		{
			if (dword_140C63B5C)
			{
				v11 = 0i64;
				goto LABEL_24;
			}
			if ((int)sub_140202E80() < 0)
			{
				v11 = 0i64;
				goto LABEL_24;
			}
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65030 + 32i64))(qword_140C65030, i);
		}
		v11 = v10;
	LABEL_24:
		v12 = sub_14018B280(52i64, 0);
		v13 = v12;
		if (v12)
			sub_1407E4830(v12, 0i64, 0x34ui64);
		else
			v13 = 0i64;
		*v13 = *(_DWORD*)v11;
		*((float*)v13 + 2) = (float)*(int*)(v11 + 16);
		v14 = *(_DWORD*)(v11 + 20);
		v13[3] = v14;
		v15 = *(_DWORD*)(v11 + 24);
		v13[4] = v15;
		v16 = *(float*)(v11 + 12);
		if (v16 != 0.0 && v15 == 4)
		{
			v17 = (float)*(int*)(a1 + 40);
			if ((v14 & 1) != 0)
				v17 = v17 * -1.0;
			v16 = v17 * 0.001;
		}
		*((float*)v13 + 1) = v16;
		v13[5] = *(_DWORD*)(v11 + 28);
		v13[6] = *(_DWORD*)(v11 + 32);
		v13[7] = *(_DWORD*)(v11 + 36);
		v13[10] = *(_DWORD*)(v11 + 48);
		v13[8] = *(_DWORD*)(v11 + 40);
		v13[11] = *(_DWORD*)(v11 + 52);
		v13[9] = *(_DWORD*)(v11 + 44);
		v13[12] = *(_DWORD*)(v11 + 56);
		if ((v14 & 4) != 0)
			*((float*)v13 + 2) = *((float*)v13 + 2) - *((float*)v13 + 6);
		v18 = *(_QWORD*)(a1 + 16);
		v19 = *v13;
		v20 = 1;
		v21 = *(_QWORD*)(v18 + 8);
		LODWORD(v30) = *v13;
		v22 = v18;
		while (v21)
		{
			v22 = v21;
			v20 = v19 < *(_DWORD*)(v21 + 32);
			if (v19 >= *(_DWORD*)(v21 + 32))
				v21 = *(_QWORD*)(v21 + 24);
			else
				v21 = *(_QWORD*)(v21 + 16);
		}
		v23 = v22;
		if (v20)
		{
			if (v22 == *(_QWORD*)(v18 + 16))
				goto LABEL_51;
			if (*(_BYTE*)v22 || *(_QWORD*)(*(_QWORD*)(v22 + 8) + 8i64) != v22)
			{
				v23 = *(_QWORD*)(v22 + 16);
				if (v23)
				{
					for (j = *(_QWORD*)(v23 + 24); j; j = *(_QWORD*)(j + 24))
						v23 = j;
				}
				else
				{
					v23 = *(_QWORD*)(v22 + 8);
					if (v22 == *(_QWORD*)(v23 + 16))
					{
						do
						{
							v25 = v23;
							v23 = *(_QWORD*)(v23 + 8);
						} while (v25 == *(_QWORD*)(v23 + 16));
					}
				}
			}
			else
			{
				v23 = *(_QWORD*)(v22 + 24);
			}
		}
		if (*(_DWORD*)(v23 + 32) < v19)
		{
		LABEL_51:
			if (v22 == v18 || v19 < *(_DWORD*)(v22 + 32))
			{
				v26 = sub_14018B280(48i64, 0);
				if (v26 != (int*)-32i64)
				{
					*((_QWORD*)v26 + 4) = v30;
					*((_QWORD*)v26 + 5) = v13;
				}
				*(_QWORD*)(v22 + 16) = v26;
				v28 = *(_QWORD*)(a1 + 16);
				if (v22 == v28)
				{
					*(_QWORD*)(v28 + 8) = v26;
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64) = v26;
				}
				else if (v22 == *(_QWORD*)(v28 + 16))
				{
					*(_QWORD*)(v28 + 16) = v26;
				}
			}
			else
			{
				v26 = sub_14018B280(48i64, 0);
				if (v26 != (int*)-32i64)
				{
					*((_QWORD*)v26 + 4) = v30;
					*((_QWORD*)v26 + 5) = v13;
				}
				*(_QWORD*)(v22 + 24) = v26;
				v27 = *(_QWORD*)(a1 + 16);
				if (v22 == *(_QWORD*)(v27 + 24))
					*(_QWORD*)(v27 + 24) = v26;
			}
			*((_QWORD*)v26 + 1) = v22;
			*((_QWORD*)v26 + 2) = 0i64;
			*((_QWORD*)v26 + 3) = 0i64;
			sub_1400081C0((__int64)v26, (_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64));
			++* (_QWORD*)(a1 + 24);
		}
	}
	return 0i64;
}
// 1404A58BF: conditional instruction was optimized away because rdx.8==0
// 1404A58E0: variable 'v30' is possibly undefined
// 140A6A670: using guessed type wchar_t *off_140A6A670[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B5C: using guessed type int dword_140C63B5C;
// 140C65030: using guessed type __int64 qword_140C65030;

