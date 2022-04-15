#include "../winhttp.h"

//----- (00000001401E3710) ----------------------------------------------------
__int64 __fastcall sub_1401E3710(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v5; // rax
	_QWORD* v6; // r14
	__int64 v7; // r9
	__int64 v8; // rax
	__int64 v9; // rbx
	float v10; // xmm6_4
	_QWORD* v11; // rax
	_QWORD* v12; // rdi
	unsigned int v13; // esi
	float* v14; // r15
	float v15; // xmm0_4
	float v16; // xmm6_4
	float v17; // xmm6_4
	float v18; // xmm0_4
	float v19; // xmm0_4
	float v20; // xmm0_4
	__int64 v21; // rax
	float* v22; // rax
	__int64 v23; // rax
	__int64 v24; // r9
	int v25; // esi
	int** v26; // rdx
	__int64 v27; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D0h] BYREF
	__int64 v32; // [rsp+38h] [rbp-C8h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-C0h]
	int v34[6]; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v35[4]; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v36; // [rsp+80h] [rbp-80h] BYREF
	__m128 v37; // [rsp+90h] [rbp-70h] BYREF
	float v38[4]; // [rsp+A0h] [rbp-60h] BYREF
	char v39[8]; // [rsp+B0h] [rbp-50h] BYREF
	float v40; // [rsp+B8h] [rbp-48h]
	char v41[4]; // [rsp+C0h] [rbp-40h] BYREF
	float v42; // [rsp+C4h] [rbp-3Ch]
	__m128 v43; // [rsp+D0h] [rbp-30h] BYREF
	char v44[8]; // [rsp+E0h] [rbp-20h] BYREF
	float v45; // [rsp+E8h] [rbp-18h]
	float v46[4]; // [rsp+F0h] [rbp-10h] BYREF
	char v47[4]; // [rsp+100h] [rbp+0h] BYREF
	float v48; // [rsp+104h] [rbp+4h]
	char v49[12]; // [rsp+110h] [rbp+10h] BYREF
	char v50[20]; // [rsp+11Ch] [rbp+1Ch] BYREF
	int* v51; // [rsp+1B0h] [rbp+B0h] BYREF
	__int64 v52; // [rsp+1C8h] [rbp+C8h] BYREF

	v5 = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 25i64);
	v6 = v5;
	if (!v5)
		return 537526273i64;
	v7 = *v5;
	v34[0] = 0;
	if (!(*(unsigned int(__fastcall**)(_QWORD*, int*, _QWORD))(v7 + 16))(v5, v34, 0i64))
		return 537526273i64;
	sub_140030C10((__int64)a3);
	sub_140030B50(a3, *(_QWORD*)(a2 + 32));
	v8 = *(_QWORD*)(a2 + 24);
	v9 = *(_QWORD*)(v8 + 16);
	if (v9 == v8)
		return 0i64;
	LODWORD(v10) = (_DWORD)v51;
	while (1)
	{
		v11 = *(_QWORD**)(v9 + 48);
		v12 = (_QWORD*)*v11;
		if ((_QWORD*)*v11 != v11)
		{
			while (1)
			{
				v13 = *((_DWORD*)v12 + 4);
				if (*((_DWORD*)v12 + 7))
				{
					if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*v6 + 464i64))(v6, v13)
						&& (*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*v6 + 520i64))(v6, v13))
					{
						break;
					}
				}
				v12 = (_QWORD*)*v12;
				if (v12 == *(_QWORD**)(v9 + 48))
					goto LABEL_77;
			}
			v14 = (float*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v6 + 528i64))(v6, v13);
			switch (*((_DWORD*)v12 + 6))
			{
			case 0:
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD, float*))(*v6 + 560i64))(v6, v13, v46))
				{
					v15 = v14[13];
					v16 = v46[0];
					if (v15 < 1.0 == v46[0] < 1.0)
					{
						if (v15 != 1.0)
							goto LABEL_16;
						v10 = 0.0 * -1.0;
					}
					else
					{
						v19 = v14[16];
						if (v19 != 1.0)
							goto LABEL_20;
						v10 = 0.0;
					}
				}
				break;
			case 1:
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD, char*))(*v6 + 560i64))(v6, v13, v47))
				{
					v15 = v14[14];
					v16 = v48;
					if (v15 < 1.0 == v48 < 1.0)
					{
						if (v15 != 1.0)
							goto LABEL_16;
						v10 = 0.0 * -1.0;
					}
					else
					{
						v19 = v14[17];
						if (v19 != 1.0)
							goto LABEL_20;
						v10 = 0.0;
					}
				}
				break;
			case 2:
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD, char*))(*v6 + 560i64))(v6, v13, v39))
				{
					v16 = v40;
					v15 = v14[15];
					if (v15 < 1.0 == v40 < 1.0)
					{
						if (v15 != 1.0)
						{
						LABEL_16:
							v17 = v16 - 1.0;
							v18 = v15 - 1.0;
							goto LABEL_17;
						}
						v10 = 0.0 * -1.0;
					}
					else
					{
						v19 = v14[18];
						if (v19 != 1.0)
						{
						LABEL_20:
							v17 = v16 - 1.0;
							v20 = v19 - 1.0;
							goto LABEL_21;
						}
						v10 = 0.0;
					}
				}
				break;
			case 3:
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD, __m128*))(*v6 + 568i64))(v6, v13, &v36))
				{
					v21 = sub_1401B2FE0((__int64)v49, &v36);
					v18 = v14[7];
					v17 = *(float*)(v21 + 4);
					if (v18 < 0.0 == v17 < 0.0)
					{
						if (v18 != 0.0)
							goto LABEL_17;
						v10 = 0.0 * -1.0;
					}
					else
					{
						v20 = v14[10];
						if (v20 != 0.0)
							goto LABEL_21;
						v10 = 0.0;
					}
				}
				break;
			case 4:
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD, __m128*))(*v6 + 568i64))(v6, v13, &v43))
				{
					v22 = (float*)sub_1401B2FE0((__int64)v50, &v43);
					v18 = v14[8];
					v17 = *v22;
					if (v18 < 0.0 == *v22 < 0.0)
					{
						if (v18 != 0.0)
							goto LABEL_17;
						v10 = 0.0 * -1.0;
					}
					else
					{
						v20 = v14[11];
						if (v20 != 0.0)
							goto LABEL_21;
						v10 = 0.0;
					}
				}
				break;
			case 5:
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD, __m128*))(*v6 + 568i64))(v6, v13, &v37))
				{
					v23 = sub_1401B2FE0((__int64)v34, &v37);
					v18 = v14[9];
					v17 = *(float*)(v23 + 8);
					if (v18 < 0.0 == v17 < 0.0)
					{
						if (v18 != 0.0)
							goto LABEL_17;
						v10 = 0.0 * -1.0;
					}
					else
					{
						v20 = v14[12];
						if (v20 != 0.0)
							goto LABEL_21;
						v10 = 0.0;
					}
				}
				break;
			case 6:
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD, float*))(*v6 + 576i64))(v6, v13, v38))
				{
					v17 = v38[0];
					v18 = v14[1];
					if (v18 < 0.0 == v38[0] < 0.0)
					{
						if (v18 != 0.0)
							goto LABEL_17;
						v10 = 0.0 * -1.0;
					}
					else
					{
						v20 = v14[4];
						if (v20 != 0.0)
							goto LABEL_21;
						v10 = 0.0;
					}
				}
				break;
			case 7:
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD, char*))(*v6 + 576i64))(v6, v13, v41))
				{
					v17 = v42;
					v18 = v14[2];
					if (v18 < 0.0 == v42 < 0.0)
					{
						if (v18 != 0.0)
							goto LABEL_17;
						v10 = 0.0 * -1.0;
					}
					else
					{
						v20 = v14[5];
						if (v20 != 0.0)
							goto LABEL_21;
						v10 = 0.0;
					}
				}
				break;
			case 8:
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD, char*))(*v6 + 576i64))(v6, v13, v44))
				{
					v17 = v45;
					v18 = v14[3];
					if (v18 < 0.0 == v45 < 0.0)
					{
						if (v18 == 0.0)
							v10 = 0.0 * -1.0;
						else
							LABEL_17:
						v10 = (float)(v17 / v18) * -1.0;
					}
					else
					{
						v20 = v14[6];
						if (v20 == 0.0)
							v10 = 0.0;
						else
							LABEL_21:
						v10 = v17 / v20;
					}
				}
				break;
			default:
				v32 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v24 = *((unsigned int*)v12 + 6);
				v35[0] = (__int64)TlsValue;
				v35[1] = v32;
				v52 = 0x141D45520i64;
				v35[2] = (__int64)lpTlsValue;
				v25 = sub_1401971E0(&dword_140C8A280, 5, &v52, v24, v35);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v25)
					DebugBreak();
				break;
			}
			v26 = (int**)a3[2];
			v51 = (int*)__PAIR64__(LODWORD(v10), *(_DWORD*)(v9 + 32));
			if (v26 == (int**)a3[3])
			{
				sub_140031EF0(a3, v26, &v51);
			}
			else
			{
				if (v26)
					*v26 = v51;
				a3[2] += 8i64;
			}
		}
	LABEL_77:
		if (v12 == *(_QWORD**)(v9 + 48))
			return 2685009926i64;
		v27 = *(_QWORD*)(v9 + 24);
		if (v27)
		{
			v9 = *(_QWORD*)(v9 + 24);
			for (i = *(_QWORD*)(v27 + 16); i; i = *(_QWORD*)(i + 16))
				v9 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v9 = j;
			if (*(_QWORD*)(v9 + 24) != j)
				v9 = j;
		}
		if (v9 == *(_QWORD*)(a2 + 24))
			return 0i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A280: using guessed type _DWORD dword_140C8A280;
// 1401E3710: using guessed type float var_B0[4];
// 1401E3710: using guessed type char var_A0[4];
// 1401E3710: using guessed type char var_F0[8];
// 1401E3710: using guessed type char var_90[12];
// 1401E3710: using guessed type char var_84[20];
// 1401E3710: using guessed type float var_100[4];
// 1401E3710: using guessed type char var_E0[4];
// 1401E3710: using guessed type char var_C0[8];

