#include "../winhttp.h"

//----- (00000001407C4460) ----------------------------------------------------
__int64 __fastcall sub_1407C4460(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v4; // rax
	unsigned int v5; // ecx
	_DWORD* v6; // r15
	int v7; // esi
	int v8; // ebx
	__int64 v9; // rbx
	__m128 v10; // xmm1
	unsigned int v11; // r14d
	__m128 v12; // xmm2
	__m128 v13; // xmm3
	int v14; // eax
	float v15; // xmm0_4
	int v16; // eax
	unsigned __int64 v17; // rdi
	__int64 v18; // rsi
	float v19; // xmm7_4
	float v20; // xmm8_4
	float v21; // xmm9_4
	float v22; // xmm10_4
	__int64 v23; // r12
	unsigned __int64 v24; // rdi
	int v25; // xmm6_4
	__int64 v26; // rcx
	unsigned int v27; // edx
	__m128* v28; // rdi
	unsigned int i; // ebx
	__int64 v30; // rcx
	__int64 v31; // rcx
	unsigned int v32; // edi
	unsigned int v33; // edi
	__int64 v34; // rcx
	unsigned int v35; // edx
	__int64 v36; // rcx
	__int16 v37; // ax
	__int64 v38; // rdx
	__int64 v39; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v40; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v41; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v42; // [rsp+60h] [rbp-A0h]
	__m128 v43; // [rsp+70h] [rbp-90h]
	__m128 v44; // [rsp+80h] [rbp-80h]
	__m128 v45; // [rsp+90h] [rbp-70h]
	__m128 v46; // [rsp+A0h] [rbp-60h]
	__m128 v47; // [rsp+B0h] [rbp-50h]
	__int128 v48; // [rsp+C0h] [rbp-40h]
	int v49; // [rsp+D0h] [rbp-30h]
	int v50; // [rsp+D4h] [rbp-2Ch]
	int v51; // [rsp+D8h] [rbp-28h]
	int v52[13]; // [rsp+DCh] [rbp-24h]
	__m128 v53; // [rsp+110h] [rbp+10h]
	__m128 v54; // [rsp+120h] [rbp+20h]
	int v55; // [rsp+130h] [rbp+30h]
	int v56; // [rsp+134h] [rbp+34h]
	int v57; // [rsp+138h] [rbp+38h]
	int v58; // [rsp+13Ch] [rbp+3Ch]
	int v59; // [rsp+140h] [rbp+40h]
	int v60; // [rsp+144h] [rbp+44h]
	int v61; // [rsp+148h] [rbp+48h]
	int v62; // [rsp+14Ch] [rbp+4Ch]
	int v63; // [rsp+150h] [rbp+50h]
	int v64; // [rsp+154h] [rbp+54h]
	int v65; // [rsp+158h] [rbp+58h]
	int v66; // [rsp+15Ch] [rbp+5Ch]
	int v67; // [rsp+160h] [rbp+60h]
	int v68; // [rsp+164h] [rbp+64h]
	int v69; // [rsp+168h] [rbp+68h]
	int v70; // [rsp+16Ch] [rbp+6Ch]
	int v71; // [rsp+170h] [rbp+70h]
	int v72; // [rsp+174h] [rbp+74h]
	int v73; // [rsp+178h] [rbp+78h]
	int v74; // [rsp+17Ch] [rbp+7Ch]
	int v75; // [rsp+180h] [rbp+80h]
	int v76; // [rsp+184h] [rbp+84h]
	int v77; // [rsp+188h] [rbp+88h]
	int v78; // [rsp+18Ch] [rbp+8Ch]

	v2 = a1[820];
	if (!v2)
		return 2147500037i64;
	v4 = (*(__int64 (**)(void))(*(_QWORD*)v2 + 24i64))();
	v40 = 0i64;
	v5 = *(_DWORD*)(v4 + 20);
	v6 = (_DWORD*)v4;
	v7 = 2;
	if (v5 <= 1)
		goto LABEL_15;
	v8 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64*))(*(_QWORD*)qword_140C65670 + 56i64))(
		qword_140C65670,
		3072 * (v5 - 1),
		1i64,
		&v40);
	if (v8 >= 0)
	{
		v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v40 + 56i64))(v40, 0i64, 0i64, 2i64);
		if (!v9)
		{
			v8 = -2147467259;
			goto LABEL_54;
		}
		v10 = (__m128)(unsigned int)dword_140C3B438;
		v11 = 1;
		v10.m128_f32[0] = *(float*)&dword_140C3B438 * 0.0055555557;
		v12 = v10;
		v13 = v10;
		v12.m128_f32[0] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 45.0;
		v13.m128_f32[0] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 135.0;
		*(float*)&v55 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 315.0;
		v57 = v55;
		v69 = v55;
		v70 = v55;
		v73 = v55;
		v75 = v55;
		*(float*)&v59 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 225.0;
		v61 = v59;
		v67 = v59;
		v68 = v59;
		v71 = v59;
		v77 = v59;
		v53 = _mm_shuffle_ps(v12, v12, 0);
		v54 = _mm_shuffle_ps(v13, v13, 0);
		v56 = v53.m128_i32[0];
		v58 = v53.m128_i32[0];
		v60 = v54.m128_i32[0];
		v62 = v54.m128_i32[0];
		v63 = v54.m128_i32[0];
		v64 = v54.m128_i32[0];
		v65 = v53.m128_i32[0];
		v66 = v53.m128_i32[0];
		v72 = v54.m128_i32[0];
		v74 = v53.m128_i32[0];
		v76 = v53.m128_i32[0];
		v78 = v54.m128_i32[0];
		v49 = v53.m128_i32[0];
		v50 = v53.m128_i32[0];
		v51 = v54.m128_i32[0];
		v52[0] = v54.m128_i32[0];
		v52[1] = v54.m128_i32[0];
		v52[2] = v54.m128_i32[0];
		v52[3] = v53.m128_i32[0];
		v52[4] = v53.m128_i32[0];
		v52[5] = v53.m128_i32[0];
		v52[6] = v54.m128_i32[0];
		v52[7] = v53.m128_i32[0];
		v52[8] = v54.m128_i32[0];
		v52[9] = v54.m128_i32[0];
		v52[10] = v53.m128_i32[0];
		v52[11] = v54.m128_i32[0];
		v52[12] = v53.m128_i32[0];
		if (v6[5] > 1u)
		{
			do
			{
				v14 = v6[1] >> v11;
				v44.m128_u64[0] = 0i64;
				v48 = xmmword_140B7AC50;
				v15 = (float)v14;
				v16 = v6[2] >> v11;
				v17 = 0i64;
				v18 = 6i64;
				v45.m128_f32[0] = v15;
				v45.m128_f32[1] = (float)v16;
				v42 = _mm_sub_ps(v44, (__m128)xmmword_140B7AC50);
				v43 = _mm_sub_ps(v45, (__m128)xmmword_140B7AC50);
				v46 = v43;
				v19 = v43.m128_f32[1];
				v20 = v43.m128_f32[0];
				v21 = v42.m128_f32[1];
				v47 = v42;
				v22 = v42.m128_f32[0];
				do
				{
					sub_1407CC850(v9, v22, v19, v11 - 1, *(int*)((char*)&v55 + v17), *(int*)((char*)&v49 + v17), 0);
					sub_1407CC850(v9 + 64, v22, v21, v11 - 1, *(int*)((char*)&v56 + v17), *(int*)((char*)&v50 + v17), 0);
					sub_1407CC850(v9 + 128, v20, v19, v11 - 1, *(int*)((char*)&v57 + v17), v52[v17 / 4 - 1], 0);
					sub_1407CC850(v9 + 192, v20, v21, v11 - 1, *(int*)((char*)&v58 + v17), v52[v17 / 4], 0);
					v9 += 256i64;
					v17 += 16i64;
					--v18;
				} while (v18);
				v23 = 6i64;
				v24 = 0i64;
				*(float*)&v25 = 3.0 / (float)(int)(v6[1] >> v11);
				do
				{
					sub_1407CC850(v9, v22, v19, v11, *(int*)((char*)&v55 + v24), *(int*)((char*)&v49 + v24), v25);
					sub_1407CC850(v9 + 64, v22, v21, v11, *(int*)((char*)&v56 + v24), *(int*)((char*)&v50 + v24), v25);
					sub_1407CC850(v9 + 128, v20, v19, v11, *(int*)((char*)&v57 + v24), v52[v24 / 4 - 1], v25);
					sub_1407CC850(v9 + 192, v20, v21, v11, *(int*)((char*)&v58 + v24), v52[v24 / 4], v25);
					v9 += 256i64;
					v24 += 16i64;
					--v23;
				} while (v23);
				++v11;
			} while (v11 < v6[5]);
			v7 = 2;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 64i64))(v40);
	LABEL_15:
		if (a1[769] != v40)
		{
			if (v40)
				(**(void (***)(void))v40)();
			v26 = a1[769];
			if (v26)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
			a1[769] = v40;
		}
		v41 = 0i64;
		v27 = v6[5];
		if (v27 > 1)
		{
			v8 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64*))(*(_QWORD*)qword_140C65670 + 56i64))(
				qword_140C65670,
				32256 * (v27 - 1),
				1i64,
				&v41);
			if (v8 < 0)
				goto LABEL_52;
			v28 = (__m128*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v41 + 56i64))(
				v41,
				0i64,
				0i64,
				2i64);
			if (!v28)
			{
				v8 = -2147467259;
			LABEL_52:
				if (v41)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 8i64))(v41);
				goto LABEL_54;
			}
			for (i = 1; i < v6[5]; v28 += 2016)
				sub_1407CCB20((__int64)a1, v28, i++);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 64i64))(v41);
		}
		if (a1[770] != v41)
		{
			if (v41)
				(**(void (***)(void))v41)();
			v30 = a1[770];
			if (v30)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
			a1[770] = v41;
		}
		v31 = 0i64;
		v39 = 0i64;
		v32 = v6[5];
		if (v32 > 1)
		{
			v33 = 756 * (v32 - 1);
			v8 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64*))(*(_QWORD*)qword_140C65670 + 64i64))(
				qword_140C65670,
				2 * v33,
				0i64,
				1i64,
				&v39);
			if (v8 < 0)
			{
			LABEL_38:
				v31 = v39;
			LABEL_50:
				if (v31)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
				goto LABEL_52;
			}
			v34 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v39 + 56i64))(
				v39,
				0i64,
				0i64,
				2i64);
			if (!v34)
			{
				v8 = -2147467259;
				goto LABEL_38;
			}
			v35 = ((2863311531u * (unsigned __int64)v33) >> 32) & 0xFFFFFFFC;
			if (v35)
			{
				v36 = v34 + 4;
				do
				{
					v36 += 12i64;
					*(_WORD*)(v36 - 16) = v7 - 2;
					*(_WORD*)(v36 - 14) = v7 - 1;
					*(_WORD*)(v36 - 12) = v7;
					*(_WORD*)(v36 - 10) = v7 - 1;
					v37 = v7 + 1;
					*(_WORD*)(v36 - 8) = v7;
					v7 += 4;
					*(_WORD*)(v36 - 6) = v37;
				} while (v7 - 2 < v35);
			}
			v31 = v39;
		}
		if (a1[771] != v31)
		{
			if (v31)
			{
				(**(void(__fastcall***)(__int64))v31)(v31);
				v31 = v39;
			}
			v38 = a1[771];
			if (v38)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v38 + 8i64))(a1[771]);
				v31 = v39;
			}
			a1[771] = v31;
		}
		v8 = 0;
		goto LABEL_50;
	}
LABEL_54:
	if (v40)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 8i64))(v40);
	return (unsigned int)v8;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65670: using guessed type __int64 qword_140C65670;

