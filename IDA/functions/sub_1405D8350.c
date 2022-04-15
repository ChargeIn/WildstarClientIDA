#include "../winhttp.h"

//----- (00000001405D8350) ----------------------------------------------------
void __fastcall sub_1405D8350(__int64 a1, __int64 a2, int a3)
{
	float* v6; // r14
	int v7; // edx
	__int64 v8; // rcx
	__int64 v9; // rax
	int v10; // r10d
	int v11; // r12d
	unsigned __int64 v12; // r9
	unsigned __int64 v13; // r8
	_DWORD* v14; // rax
	__int64 v15; // rdx
	__int128 v16; // xmm8
	__m128i v17; // xmm6
	int v18; // eax
	__m128i v19; // xmm7
	__int64 v20; // xmm0_8
	__int64 v21; // rax
	int v22; // ecx
	__int64 v23; // rax
	int v24; // eax
	_DWORD* v25; // rdx
	__int64 v26; // rcx
	bool v27; // zf
	int v28; // esi
	int v29; // eax
	unsigned int v30; // edi
	int v31; // ebx
	unsigned int v32; // ebx
	unsigned int v33; // edi
	int v34; // ebx
	int v35; // eax
	unsigned int v36; // ebx
	float v37; // xmm1_4
	int v38; // ebx
	int v39; // edi
	int v40; // edi
	__int64 v41; // rcx
	__int128 v42[2]; // [rsp+20h] [rbp-E0h] BYREF
	__m128i v43; // [rsp+40h] [rbp-C0h]
	__m128i v44; // [rsp+50h] [rbp-B0h]
	__int128 v45; // [rsp+60h] [rbp-A0h]
	_BYTE v46[24]; // [rsp+70h] [rbp-90h]
	__int128 v47[2]; // [rsp+90h] [rbp-70h] BYREF
	int v48; // [rsp+B0h] [rbp-50h]
	__int64 v49; // [rsp+B4h] [rbp-4Ch]
	int v50; // [rsp+BCh] [rbp-44h]
	int v51; // [rsp+C0h] [rbp-40h]
	int v52; // [rsp+C4h] [rbp-3Ch]
	__int64 v53; // [rsp+C8h] [rbp-38h]
	__int128 v54; // [rsp+D0h] [rbp-30h]
	__int128 v55; // [rsp+E0h] [rbp-20h]
	__int64 v56; // [rsp+F0h] [rbp-10h]

	sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 88));
	v6 = (float*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	if (!v6)
		return;
	v7 = *(_DWORD*)(a1 + 88);
	v8 = *(_QWORD*)(qword_140C65898 + 120);
	if (v8 && *(_DWORD*)(v8 + 8) == v7)
		goto LABEL_16;
	v9 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v9)
	{
		if (*(_DWORD*)(v9 + 8) == v7)
			goto LABEL_16;
	}
	v10 = *(_DWORD*)(a1 + 92);
	if (v8)
	{
		if (*(_DWORD*)(v8 + 8) == v10)
			goto LABEL_16;
	}
	if (v9 && *(_DWORD*)(v9 + 8) == v10)
		goto LABEL_16;
	v11 = 0;
	if (v8)
	{
		v12 = *(_QWORD*)(v8 + 704);
		v13 = 0i64;
		if (v12)
		{
			v14 = *(_DWORD**)(v8 + 696);
			while (*v14 != v7)
			{
				++v13;
				++v14;
				if (v13 >= v12)
					goto LABEL_15;
			}
			goto LABEL_16;
		}
	LABEL_15:
		if ((unsigned int)sub_14047C1E0(v8, v10))
			LABEL_16 :
			v11 = 1;
	}
	v15 = *(_QWORD*)(a1 + 80);
	v16 = *(_OWORD*)a2;
	v17 = *(__m128i*)(a2 + 16);
	*(_QWORD*)&v46[12] = 0i64;
	DWORD1(v42[0]) = *(_DWORD*)(a1 + 88);
	v18 = *(_DWORD*)(a1 + 92);
	v42[1] = v16;
	v43 = v17;
	v19 = *(__m128i*)(a2 + 32);
	v20 = *(_QWORD*)(a2 + 48);
	LODWORD(v42[0]) = v18;
	v21 = *(_QWORD*)(a1 + 176);
	v44 = v19;
	*(_QWORD*)&v45 = v20;
	v22 = *(_DWORD*)(v21 + 16);
	v23 = *(_QWORD*)(v15 + 312);
	DWORD2(v42[0]) = v22;
	if (*(char*)(*(_QWORD*)(v23 + 112) + 268i64) >= 0)
		v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
	else
		v24 = *(_DWORD*)(v15 + 108);
	v25 = *(_DWORD**)(a1 + 176);
	DWORD2(v45) = v24;
	HIDWORD(v45) = *v25;
	v26 = *(_QWORD*)(*(_QWORD*)(a1 + 80) + 408i64);
	v27 = v25[9] == 0;
	*(_QWORD*)v46 = v26;
	v28 = 0;
	*(_DWORD*)&v46[8] = !v27;
	v29 = v25[4];
	if (v29 == 10)
	{
		v37 = v6[591];
		if (v37 != 0.0)
		{
			v38 = (int)(float)((float)*(int*)(a2 + 16) * v37);
			v39 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v6 + 120i64))(v6);
			v40 = v39 - (*(__int64(__fastcall**)(float*))(*(_QWORD*)v6 + 112i64))(v6);
			if (v40)
			{
				if (v38)
				{
					v28 = v40;
					if (v38 < v40)
						v28 = v38;
					*(_DWORD*)(a2 + 16) -= v28;
				}
			}
		}
		*(_DWORD*)&v46[12] = _mm_cvtsi128_si32(v17);
	}
	else if (v29 == 118)
	{
		v30 = *(_DWORD*)(a2 + 16);
		v31 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v6 + 120i64))(v6);
		v32 = v31 - (*(__int64(__fastcall**)(float*))(*(_QWORD*)v6 + 112i64))(v6);
		v43.m128i_i32[0] = *(_DWORD*)(a2 + 16);
		if (v30 < v32)
			v32 = v30;
		v43.m128i_i32[1] = *(_DWORD*)(a2 + 20);
		*(_DWORD*)&v46[12] = v32;
		if (*(_BYTE*)(a2 + 40))
		{
			v33 = *(_DWORD*)(*(_QWORD*)(a2 + 48) + 4i64);
			v34 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v6 + 120i64))(v6);
			v35 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v6 + 112i64))(v6);
			v26 = v45;
			v36 = v34 - v35;
			if (v33 < v36)
				v36 = v33;
			*(_DWORD*)(v45 + 4) = v36;
		}
	}
	if (v11)
		sub_140563930(v26, a3, v42);
	sub_140563A00(v26, a3, v42);
	if (v28)
	{
		v47[0] = v42[0];
		DWORD2(v47[0]) = 118;
		v49 = 0i64;
		v50 = 0;
		v48 = v28;
		v53 = v19.m128i_i64[1];
		v54 = v45;
		v52 = 1;
		v47[1] = 0ui64;
		v56 = *(_QWORD*)&v46[16];
		LOBYTE(v53) = 0;
		v55 = *(_OWORD*)v46;
		v51 = _mm_cvtsi128_si32(v19);
		HIDWORD(v55) = v28;
		if (v11)
			sub_140563930(v41, a3, v47);
		sub_140563A00(v41, a3, v47);
	}
}
// 1405D85D0: variable 'v26' is possibly undefined
// 1405D8651: variable 'v41' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

