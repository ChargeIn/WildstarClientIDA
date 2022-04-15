//----- (000000014087EA40) ----------------------------------------------------
__int64 __fastcall sub_14087EA40(__int64 a1, __int64* a2, int a3, unsigned int* a4)
{
	__int64 v4; // r10
	unsigned int v5; // r11d
	__int64 v6; // rdi
	unsigned int v7; // ecx
	unsigned int* v8; // rax
	unsigned int v9; // ebx
	unsigned int* v10; // r15
	int v11; // r9d
	__int64 v12; // r14
	int i; // r8d
	unsigned int v14; // r8d
	unsigned int v15; // r12d
	unsigned int v16; // r13d
	unsigned __int64 v17; // rbp
	unsigned int v18; // esi
	unsigned int v19; // ecx
	int v20; // edx
	unsigned __int64 v21; // rax
	unsigned int* v22; // rdi
	unsigned int v23; // ebx
	char* v24; // r15
	unsigned int v25; // r8d
	unsigned int v26; // edx
	int v27; // ecx
	int v28; // edx
	int j; // ecx
	__int16 v30; // bp
	__int64* v31; // r10
	__int64 v32; // r9
	__int64 v33; // r8
	unsigned int v34; // edx
	int v35; // eax
	__m128i v36; // xmm0
	__int64 v37; // r9
	int v38; // r13d
	unsigned int v39; // r8d
	int v40; // eax
	__m128i v41; // xmm0
	char* v42; // rbx
	unsigned int v43; // r8d
	unsigned int k; // edx
	__int64 v45; // rax
	__int64 v46; // r10
	unsigned int v48; // [rsp+0h] [rbp-D8h]
	unsigned int v49; // [rsp+4h] [rbp-D4h]
	unsigned int v50; // [rsp+8h] [rbp-D0h]
	unsigned int v51; // [rsp+Ch] [rbp-CCh]
	int v52; // [rsp+10h] [rbp-C8h]
	int v53; // [rsp+14h] [rbp-C4h]
	unsigned int v54; // [rsp+18h] [rbp-C0h]
	int v55; // [rsp+1Ch] [rbp-BCh]
	unsigned int v56; // [rsp+20h] [rbp-B8h]
	int v57; // [rsp+24h] [rbp-B4h]
	unsigned int* v58; // [rsp+28h] [rbp-B0h]
	unsigned int v59; // [rsp+30h] [rbp-A8h]
	_DWORD* v60; // [rsp+38h] [rbp-A0h]
	__int64 v61; // [rsp+40h] [rbp-98h]
	unsigned __int64 v62; // [rsp+48h] [rbp-90h]
	char* v63; // [rsp+50h] [rbp-88h]
	__int64 v64; // [rsp+58h] [rbp-80h]
	unsigned __int64 v65; // [rsp+60h] [rbp-78h]
	__int64 v66; // [rsp+68h] [rbp-70h]
	unsigned int* v67; // [rsp+70h] [rbp-68h]
	__int64 v68; // [rsp+78h] [rbp-60h]
	_WORD* v69; // [rsp+80h] [rbp-58h]
	int v72; // [rsp+F0h] [rbp+18h]

	v4 = a4[7];
	v5 = a4[8];
	v48 = *(unsigned __int16*)(a1 + 18);
	v6 = a1;
	v7 = a4[9];
	v69 = a4 + 7;
	v8 = a4 + 8;
	v9 = a3 - v4;
	v10 = a4;
	v11 = *(_DWORD*)(v6 + 8);
	v12 = 0i64;
	v52 = a3 - v4;
	v67 = v8;
	v55 = v11;
	for (i = v11; i; i &= i - 1)
		v12 = (unsigned int)(v12 + 1);
	v14 = v10[11];
	v15 = v10[12];
	v16 = 0;
	v51 = v7 << 10;
	v50 = v10[10] - v7;
	v54 = v14;
	v60 = v10 + 6;
	v17 = *(_QWORD*)v6 + 2 * ((unsigned int)v12 * v10[6] - (unsigned __int64)(unsigned int)v12);
	v18 = v14;
	v56 = v5;
	v49 = 0;
	v65 = v17;
	if ((_DWORD)v12)
	{
		v57 = (unsigned __int16)v5;
		v19 = HIWORD(v5);
		v64 = *a2;
		v20 = v11 & 8;
		v68 = v9;
		v59 = HIWORD(v5);
		v21 = v17 - (_QWORD)v10;
		v53 = v20;
		v66 = *((unsigned __int16*)a2 + 8);
		v61 = v4;
		v22 = v10;
		v58 = v10;
		v62 = v17 - (_QWORD)v10;
		while (1)
		{
			v5 = v56;
			v23 = v19;
			v18 = v14;
			v24 = (char*)v22 + v21;
			v72 = v57;
			v25 = v16;
			if (v20)
			{
				v26 = 0;
				v27 = v11 & 7;
				if ((v11 & 7) != 0)
				{
					do
					{
						++v26;
						v27 &= v27 - 1;
					} while (v27);
				}
				if (v16 == v26)
				{
					v28 = 0;
					for (j = v11; j; j &= j - 1)
						++v28;
					v25 = v28 - 1;
				}
				else if (v16 > v26)
				{
					v25 = v16 - 1;
				}
			}
			v30 = *(_WORD*)v22;
			v31 = (__int64*)(v64 + 4 * (v4 + v66 * v25));
			v32 = (__int64)v31 + 4 * v68;
			v63 = (char*)v31;
			v33 = (4 * v68) >> 2;
			if ((unsigned int)v33 >= (1024 - v18) / v15)
				LODWORD(v33) = (1024 - v18) / v15;
			if (!v23)
			{
				v34 = v51 + v18 * v50;
				do
				{
					v35 = v33;
					LODWORD(v33) = v33 - 1;
					if (!v35)
						break;
					v34 += v15 * v50;
					v31 = (__int64*)((char*)v31 + 4);
					v18 += v15;
					v5 += v34 >> 10;
					v36 = _mm_cvtsi32_si128((v30 << 16) + v72 * (*(__int16*)&v24[2 * v12] - v30));
					v23 = HIWORD(v5);
					v72 = (unsigned __int16)v5;
					*((float*)v31 - 1) = _mm_cvtepi32_ps(v36).m128_f32[0] * 4.6566129e-10;
				} while (!HIWORD(v5));
				v16 = v49;
				v22 = v58;
			}
			v37 = (v32 - (__int64)v31) >> 2;
			if ((unsigned int)v37 >= (1024 - v18) / v15)
				LODWORD(v37) = (1024 - v18) / v15;
			if (v23 <= v48 - 1)
			{
				v38 = v72;
				v39 = v51 + v18 * v50;
				do
				{
					v40 = v37;
					LODWORD(v37) = v37 - 1;
					if (!v40)
						break;
					v39 += v15 * v50;
					v31 = (__int64*)((char*)v31 + 4);
					v18 += v15;
					v41 = _mm_cvtsi32_si128(
						(*(__int16*)&v24[2 * v23 * (unsigned int)v12] << 16)
						+ v38
						* (*(__int16*)&v24[2 * (unsigned int)v12 + 2 * v23 * (_DWORD)v12]
							- *(__int16*)&v24[2 * v23 * (unsigned int)v12]));
					v5 += v39 >> 10;
					v38 = (unsigned __int16)v5;
					v23 = HIWORD(v5);
					*((float*)v31 - 1) = _mm_cvtepi32_ps(v41).m128_f32[0] * 4.6566129e-10;
				} while (HIWORD(v5) <= v48 - 1);
				v16 = v49;
				v22 = v58;
			}
			v11 = v55;
			v19 = v59;
			v20 = v53;
			v21 = v62;
			v14 = v54;
			++v16;
			v22 = (unsigned int*)((char*)v22 + 2);
			v49 = v16;
			v58 = v22;
			if (v16 >= (unsigned int)v12)
				break;
			v4 = v61;
		}
		v10 = a4;
		v42 = v63;
		v17 = v65;
		v6 = a1;
	}
	else
	{
		v31 = a2;
		v42 = (char*)a2;
	}
	v10[11] = v18;
	v43 = v48;
	if (HIWORD(v5) < v48)
		v43 = HIWORD(v5);
	if (v43)
	{
		for (k = 0; k < (unsigned int)v12; *((_WORD*)v10 - 1) = *(_WORD*)(v17 + 2 * v45))
		{
			v45 = v43 * (_DWORD)v12 + k++;
			v10 = (unsigned int*)((char*)v10 + 2);
		}
	}
	v46 = ((char*)v31 - v42) >> 2;
	*v67 = v5 - (v43 << 16);
	*(_WORD*)(v6 + 18) -= v43;
	*((_WORD*)a2 + 9) = *v69 + v46;
	if (v43 == v48)
		*v60 = 0;
	else
		*v60 += v43;
	if ((_DWORD)v46 == v52)
		return 45i64;
	*(_DWORD*)v69 += v46;
	return 43i64;
}

