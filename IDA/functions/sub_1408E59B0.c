#include "../winhttp.h"

//----- (00000001408E59B0) ----------------------------------------------------
char __fastcall sub_1408E59B0(__int64 a1, __int64 a2)
{
	__int64 v2; // r12
	__int64 v3; // rdi
	__int64 v4; // rax
	unsigned int v5; // ecx
	unsigned int v6; // edx
	unsigned int v7; // ecx
	unsigned int v8; // eax
	unsigned int v9; // ebx
	__int64 v10; // rsi
	unsigned int v11; // r14d
	__int64 v12; // rbx
	int v13; // edx
	unsigned int i; // r9d
	__m128* v15; // r13
	unsigned int v16; // esi
	int j; // ecx
	unsigned int v18; // eax
	float v19; // xmm0_4
	float v20; // xmm1_4
	float v21; // xmm3_4
	float v22; // xmm2_4
	unsigned int v23; // ebx
	__int64 v24; // r10
	_DWORD* v25; // rbp
	__int64 v26; // r15
	int* v27; // r14
	unsigned int v28; // edi
	__int64 v29; // rcx
	__int128* v30; // r13
	unsigned int v31; // eax
	int v32; // ecx
	unsigned int k; // ebx
	unsigned int v34; // ebp
	unsigned __int8 v35; // r15
	unsigned __int64 v36; // r8
	__int64 v37; // rdx
	int* v38; // rsi
	int* v39; // rcx
	unsigned int v40; // ecx
	__m128* v42; // [rsp+40h] [rbp-98h]
	unsigned __int8* v43; // [rsp+48h] [rbp-90h]
	__m128* v44; // [rsp+50h] [rbp-88h]
	_DWORD* v45; // [rsp+50h] [rbp-88h]
	__m128* v46; // [rsp+58h] [rbp-80h]
	__int64 v47; // [rsp+60h] [rbp-78h]
	__int64 v48; // [rsp+60h] [rbp-78h]
	__m128* v49; // [rsp+70h] [rbp-68h] BYREF
	int v50; // [rsp+78h] [rbp-60h]
	unsigned __int16 v51; // [rsp+80h] [rbp-58h]
	__int16 v52; // [rsp+82h] [rbp-56h]
	bool v55; // [rsp+E8h] [rbp+10h]
	unsigned int v56; // [rsp+F0h] [rbp+18h]
	bool v57; // [rsp+F0h] [rbp+18h]
	int* v58; // [rsp+F8h] [rbp+20h]

	v2 = a2;
	v3 = a1;
	LOBYTE(v4) = sub_1408E6000(a1);
	if (!(_BYTE)v4)
		return v4;
	v5 = *(_DWORD*)(v3 + 456);
	if (*(_DWORD*)(v2 + 12) != 17)
	{
		*(_DWORD*)(v3 + 448) = -1;
		goto LABEL_14;
	}
	LODWORD(v4) = *(_DWORD*)(v3 + 448);
	if (!(_DWORD)v4)
		goto LABEL_14;
	if ((_DWORD)v4 == -1)
	{
		*(_DWORD*)(v3 + 448) = v5;
	LABEL_8:
		*(_DWORD*)(v3 + 452) = v5;
		goto LABEL_9;
	}
	v6 = *(_DWORD*)(v3 + 452);
	if (v5 > v6)
	{
		*(_DWORD*)(v3 + 448) = v5 + v4 - v6;
		goto LABEL_8;
	}
LABEL_9:
	v7 = *(unsigned __int16*)(v2 + 16) - *(unsigned __int16*)(v2 + 18);
	v8 = *(_DWORD*)(v3 + 448);
	if (v8 < v7)
		v7 = *(_DWORD*)(v3 + 448);
	*(_DWORD*)(v3 + 448) = v8 - v7;
	LOBYTE(v4) = sub_1408A1D50(v2);
	if (*(_DWORD*)(v3 + 448))
		*(_DWORD*)(v2 + 12) = 45;
LABEL_14:
	if (!*(_WORD*)(v2 + 18))
		return v4;
	v9 = 8 * (*(_DWORD*)(v3 + 100) >> 1) + 8;
	v10 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v3 + 488) + 8i64))(*(_QWORD*)(v3 + 488), v9);
	v42 = (__m128*)v10;
	v11 = 0;
	v12 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v3 + 488) + 8i64))(*(_QWORD*)(v3 + 488), v9);
	v46 = (__m128*)v12;
	if (*(_DWORD*)(v3 + 204))
	{
		v4 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v3 + 488) + 8i64))(
			*(_QWORD*)(v3 + 488),
			4i64 * *(unsigned __int16*)(v2 + 16));
	}
	else
	{
		v13 = *(_DWORD*)(v3 + 464);
		for (i = 0; v13; v13 &= v13 - 1)
			++i;
		v4 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(v3 + 488) + 8i64))(
			*(_QWORD*)(v3 + 488),
			4 * i * (unsigned __int64)*(unsigned __int16*)(v2 + 18));
	}
	v15 = (__m128*)v4;
	v44 = (__m128*)v4;
	if (!v4)
		goto LABEL_53;
	if (v10)
	{
		if (!v12)
		{
		LABEL_53:
			if (v10)
				LOBYTE(v4) = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v3 + 488) + 16i64))(
					*(_QWORD*)(v3 + 488),
					v10);
			goto LABEL_55;
		}
		if (!*(_DWORD*)(v3 + 204))
		{
			v16 = 0;
			for (j = *(_DWORD*)(v3 + 464); j; j &= j - 1)
				++v16;
			v18 = *(unsigned __int16*)(v2 + 18);
			v19 = *(float*)(v3 + 176);
			v20 = *(float*)(v3 + 224);
			v50 = *(_DWORD*)(v3 + 464);
			v21 = *(float*)(v3 + 172);
			v22 = *(float*)(v3 + 220);
			v56 = v18;
			v51 = v18;
			v52 = v18;
			v49 = v15;
			sub_1408E8440(v2, (__int64*)&v49, v22, v21, v20, v19);
			v23 = 0;
			if (v16)
			{
				v24 = v3 + 16;
				v25 = (_DWORD*)(v3 + 256);
				v26 = 0i64;
				v47 = v3 + 16;
				v27 = (int*)(v3 + 256);
				v28 = *(_DWORD*)(v3 + 108) - 1;
				do
				{
					v29 = v26 * v51;
					v30 = (__int128*)&v49->m128_f32[v29];
					v31 = v28;
					if (v23 < v28)
						v31 = v23;
					sub_1408E75E0(v24, &v49->m128_i32[v29], v56, v46, v42, 0, v23, v31);
					if (*v25)
						sub_1408ADCB0(v27, v30, v56);
					v24 = v47;
					++v23;
					++v26;
					v27 += 6;
					v25 += 6;
				} while (v23 < v16);
				v3 = a1;
				v2 = a2;
				v15 = v44;
			}
			sub_1408E62E0(v3, v2, (__int64)&v49);
		LABEL_49:
			v10 = (__int64)v42;
			goto LABEL_50;
		}
		v32 = *(_DWORD*)(v2 + 8);
		for (k = 0; v32; v32 &= v32 - 1)
			++k;
		v34 = *(unsigned __int16*)(v2 + 18);
		v57 = (*(_DWORD*)(v3 + 460) & 0x30) != 0;
		v35 = ((*(_DWORD*)(v3 + 460) & 4) != 0) | 2;
		v55 = *(_DWORD*)(v3 + 400) != 0;
		if (!k)
		{
		LABEL_50:
			++* (_DWORD*)(v3 + 80);
			v12 = (__int64)v46;
			v40 = *(_DWORD*)(v3 + 80);
			if (v40 >= *(_DWORD*)(v3 + 124))
				v40 = 0;
			*(_DWORD*)(v3 + 80) = v40;
			*(_DWORD*)(v3 + 208) = *(_DWORD*)(v3 + 160);
			*(_DWORD*)(v3 + 212) = *(_DWORD*)(v3 + 164);
			*(_DWORD*)(v3 + 216) = *(_DWORD*)(v3 + 168);
			*(_DWORD*)(v3 + 220) = *(_DWORD*)(v3 + 172);
			*(_DWORD*)(v3 + 224) = *(_DWORD*)(v3 + 176);
			*(_DWORD*)(v3 + 228) = *(_DWORD*)(v3 + 180);
			*(_DWORD*)(v3 + 232) = *(_DWORD*)(v3 + 184);
			*(_DWORD*)(v3 + 236) = *(_DWORD*)(v3 + 188);
			*(_DWORD*)(v3 + 240) = *(_DWORD*)(v3 + 192);
			*(_DWORD*)(v3 + 244) = *(_DWORD*)(v3 + 196);
			*(_DWORD*)(v3 + 248) = *(_DWORD*)(v3 + 200);
			LODWORD(v4) = *(_DWORD*)(v3 + 204);
			*(_DWORD*)(v3 + 252) = v4;
			goto LABEL_53;
		}
		v36 = 4 * v34;
		v37 = 0i64;
		v43 = (unsigned __int8*)(v3 + 472);
		v45 = (_DWORD*)(v3 + 256);
		v58 = (int*)(v3 + 256);
		v48 = 0i64;
		while (1)
		{
			v38 = (int*)(*(_QWORD*)v2 + 4 * v37 * *(unsigned __int16*)(v2 + 16));
			sub_1407DB590((int*)v15, v38, v36);
			sub_1408E75E0(v3 + 16, v38, v34, v46, v42, 0, v11, *v43);
			if (*v45)
				sub_1408ADCB0(v58, (__int128*)v38, v34);
			if (!v55 || !v57)
				goto LABEL_48;
			if (v11 == v35)
				break;
			if (v11 == v35 + 1)
			{
				v39 = (int*)(v3 + 424);
				goto LABEL_47;
			}
		LABEL_48:
			sub_1408A6050(
				v38,
				v15,
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v3 + 248)),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v3 + 200)),
				*(float*)(v3 + 244),
				*(float*)(v3 + 196),
				v34);
			v58 += 6;
			++v43;
			v45 += 6;
			v36 = 4 * v34;
			v37 = v48 + 1;
			++v11;
			++v48;
			if (v11 >= k)
				goto LABEL_49;
		}
		v39 = (int*)(v3 + 400);
	LABEL_47:
		sub_1408ADCB0(v39, (__int128*)v38, v34);
		goto LABEL_48;
	}
LABEL_55:
	if (v12)
		LOBYTE(v4) = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v3 + 488) + 16i64))(
			*(_QWORD*)(v3 + 488),
			v12);
	if (v15)
		LOBYTE(v4) = (*(__int64(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(v3 + 488) + 16i64))(
			*(_QWORD*)(v3 + 488),
			v15);
	return v4;
}

