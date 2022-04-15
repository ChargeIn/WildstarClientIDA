#include "../winhttp.h"

//----- (000000014016C430) ----------------------------------------------------
__int64 __fastcall sub_14016C430(_QWORD* a1)
{
	unsigned int v2; // ecx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // r14
	__int64 v7; // rsi
	int v8; // r12d
	char* v9; // r15
	__int64 v10; // r13
	void* v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rax
	int v17; // ecx
	__int64* v18; // rax
	double v19; // xmm0_8
	void* v20; // rbx
	__int64 v21; // rax
	__int64 v22; // r9
	__int64 v23; // rcx
	int v24; // eax
	__int64 v25; // rax
	int v26; // ecx
	__int64* v27; // rax
	double v28; // xmm0_8
	__int128 v29; // xmm0
	__int64 v30; // r14
	char* v31; // rax
	__int128 v32; // xmm0
	__int64 v34; // [rsp+20h] [rbp-99h] BYREF
	unsigned __int64 v35; // [rsp+28h] [rbp-91h] BYREF
	__int64 v36; // [rsp+30h] [rbp-89h] BYREF
	__int128 v37; // [rsp+40h] [rbp-79h]
	__int64 v38; // [rsp+50h] [rbp-69h] BYREF
	int v39; // [rsp+58h] [rbp-61h]
	__int64 v40; // [rsp+60h] [rbp-59h] BYREF
	int v41; // [rsp+68h] [rbp-51h]
	__int64 v42; // [rsp+70h] [rbp-49h] BYREF
	int v43; // [rsp+78h] [rbp-41h]
	__int64 v44; // [rsp+80h] [rbp-39h] BYREF
	int v45; // [rsp+88h] [rbp-31h]
	char v46[64]; // [rsp+90h] [rbp-29h] BYREF

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	v5 = sub_1400D66A0(a1, 1u);
	v6 = v5;
	if (v5 && (*(_BYTE*)(v5 + 432) & 8) != 0)
	{
		v7 = 4i64;
		v8 = 2;
		v9 = v46;
		v10 = 4i64;
		while (1)
		{
			v37 = 0i64;
			v11 = sub_1400580E0((__int64)a1, v8);
			v12 = sub_140062650((__int64)a1, qword_1409DCE54, 2ui64);
			v13 = a1[2];
			v38 = v12;
			v39 = 4;
			sub_14005E8E0((__int64)a1, (__int64)v11, (int*)&v38, v13);
			a1[2] += 16i64;
			v14 = a1[2];
			v15 = *(_DWORD*)(v14 - 8);
			if (v15 == 3 || v15 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v14 - 16) + 32i64), &v35))
				break;
		LABEL_17:
			a1[2] -= 16i64;
			v20 = sub_1400580E0((__int64)a1, v8);
			v21 = sub_140062650((__int64)a1, qword_1409DCE1C, 2ui64);
			v22 = a1[2];
			v40 = v21;
			v41 = 4;
			sub_14005E8E0((__int64)a1, (__int64)v20, (int*)&v40, v22);
			a1[2] += 16i64;
			v23 = a1[2];
			v24 = *(_DWORD*)(v23 - 8);
			if (v24 != 3 && (v24 != 4 || !sub_14005AC80((char*)(*(_QWORD*)(v23 - 16) + 32i64), &v35)))
				goto LABEL_26;
			v25 = a1[2];
			v26 = *(_DWORD*)(v25 - 8);
			v27 = (__int64*)(v25 - 16);
			if (v26 != 3)
			{
				if (v26 != 4 || !sub_14005AC80((char*)(*v27 + 32), (unsigned __int64*)&v34))
				{
					v28 = 0.0;
					goto LABEL_25;
				}
				v43 = 3;
				v27 = &v42;
				v42 = v34;
			}
			v28 = *(double*)v27;
		LABEL_25:
			*((float*)&v37 + 1) = v28;
		LABEL_26:
			v29 = v37;
			a1[2] -= 16i64;
			v9 += 16;
			*((_OWORD*)v9 - 1) = v29;
			++v8;
			if (!--v10)
			{
				v30 = v6 - (_QWORD)v46;
				v31 = v46;
				do
				{
					v32 = *(_OWORD*)v31;
					v31 += 16;
					*(_OWORD*)&v31[v30 + 1328] = v32;
					--v7;
				} while (v7);
				return 0i64;
			}
		}
		v16 = a1[2];
		v17 = *(_DWORD*)(v16 - 8);
		v18 = (__int64*)(v16 - 16);
		if (v17 != 3)
		{
			if (v17 != 4 || !sub_14005AC80((char*)(*v18 + 32), (unsigned __int64*)&v36))
			{
				v19 = 0.0;
				goto LABEL_16;
			}
			v45 = 3;
			v18 = &v44;
			v44 = v36;
		}
		v19 = *(double*)v18;
	LABEL_16:
		*(float*)&v37 = v19;
		goto LABEL_17;
	}
	return 0i64;
}
// 1409DCE1C: using guessed type unsigned __int64 qword_1409DCE1C[3];
// 1409DCE54: using guessed type unsigned __int64 qword_1409DCE54[55];
// 140C63650: using guessed type __int64 qword_140C63650;

