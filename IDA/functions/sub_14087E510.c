//----- (000000014087E510) ----------------------------------------------------
__int64 __fastcall sub_14087E510(__int64 a1, __int64* a2, int a3, __int64 a4)
{
	unsigned int v4; // r12d
	__int64 v5; // r11
	__int64 v6; // r9
	unsigned int v7; // edi
	unsigned int v8; // r10d
	unsigned int v9; // r8d
	__int64 v11; // r14
	int v12; // ecx
	unsigned int v13; // eax
	int v14; // ebp
	unsigned int v15; // edx
	int v16; // r15d
	int v17; // ebx
	float* v18; // r12
	unsigned int v19; // ecx
	__int64 v20; // rax
	__int64 v21; // rsi
	__int64 v22; // r13
	unsigned int v23; // r11d
	__int64 v24; // rsi
	__int64 v25; // rax
	unsigned int v26; // ebp
	float v27; // xmm2_4
	unsigned int v28; // r8d
	__int64 v29; // r9
	unsigned int v30; // ecx
	float v31; // xmm1_4
	int v32; // eax
	unsigned int v33; // r15d
	unsigned int i; // edx
	__int64 v35; // rax
	__int64 v36; // rcx
	float v37; // xmm1_4
	unsigned int v38; // r9d
	unsigned int v39; // esi
	__int64 v40; // r8
	__int64 v41; // rdi
	__int64 v42; // rbx
	unsigned int v43; // eax
	__int64 v44; // r13
	__int64 v45; // rax
	__int64 v46; // rcx
	__int64 v47; // rdx
	__int64 v48; // rax
	unsigned int v49; // ecx
	int v51; // [rsp+0h] [rbp-88h]
	unsigned int v52; // [rsp+4h] [rbp-84h]
	unsigned int v53; // [rsp+8h] [rbp-80h]
	int v54; // [rsp+Ch] [rbp-7Ch]
	unsigned int v55; // [rsp+10h] [rbp-78h]
	int v56; // [rsp+14h] [rbp-74h]
	__int64 v57; // [rsp+20h] [rbp-68h]
	__int64 v58; // [rsp+28h] [rbp-60h]
	__int64 v59; // [rsp+30h] [rbp-58h]
	unsigned int v62; // [rsp+A0h] [rbp+18h]

	v4 = *(unsigned __int16*)(a1 + 18);
	v5 = a4;
	v6 = *(unsigned int*)(a4 + 28);
	v7 = *(_DWORD*)(v5 + 36);
	v8 = *(_DWORD*)(v5 + 32);
	v9 = a3 - v6;
	v11 = a1;
	v12 = *(_DWORD*)(a1 + 8);
	v52 = v4;
	v55 = v9;
	v13 = (v7 - v8 + 0xFFFF) / v7;
	if (v9 < v13)
		v13 = v9;
	v14 = 0;
	v51 = 0;
	v62 = v13;
	if (v12)
	{
		do
		{
			++v14;
			v12 &= v12 - 1;
		} while (v12);
		v51 = v14;
	}
	v15 = *(_DWORD*)(v5 + 32);
	v53 = v15;
	if (v14)
	{
		v16 = v4 << 16;
		v17 = (unsigned __int16)v8;
		v18 = (float*)v5;
		v19 = v9 - v13;
		v54 = (unsigned __int16)v8;
		v56 = v16;
		v59 = 4i64 * *(unsigned __int16*)(v11 + 16);
		v58 = 4i64 * *((unsigned __int16*)a2 + 8);
		v20 = *a2;
		v21 = *(unsigned int*)(v5 + 24);
		v22 = v20 + 4 * v6;
		v23 = v19;
		v24 = *(_QWORD*)v11 - 4i64 + 4 * v21;
		v25 = (unsigned int)v14;
		v26 = HIWORD(v8);
		v57 = v25;
		while (1)
		{
			v27 = *v18;
			v8 = v15;
			v28 = v26;
			v29 = v22;
			v30 = v62;
			if (v62)
			{
				v31 = *(float*)(v24 + 4) - v27;
				do
				{
					v32 = v17;
					v8 += v7;
					v29 += 4i64;
					v17 = (unsigned __int16)v8;
					v28 = HIWORD(v8);
					*(float*)(v29 - 4) = (float)((float)((float)v32 * 0.000015258789) * v31) + v27;
					--v30;
				} while (v30);
			}
			v33 = (v7 + v16 - v8 - 1) / v7;
			if (v23 < v33)
				v33 = v23;
			for (i = v33; i; --i)
			{
				v35 = v28 + 1;
				v36 = v28;
				v8 += v7;
				v29 += 4i64;
				v28 = HIWORD(v8);
				v37 = *(float*)(v24 + 4 * v35);
				LODWORD(v35) = v17;
				v17 = (unsigned __int16)v8;
				*(float*)(v29 - 4) = (float)((float)(v37 - *(float*)(v24 + 4 * v36))
					* (float)((float)(int)v35 * 0.000015258789))
					+ *(float*)(v24 + 4 * v36);
			}
			v22 += v58;
			v24 += v59;
			v15 = v53;
			v17 = v54;
			++v18;
			if (!--v57)
				break;
			v16 = v56;
		}
		v5 = a4;
		v14 = v51;
		v11 = a1;
		v4 = v52;
	}
	else
	{
		v33 = v13;
	}
	v38 = v4;
	if (HIWORD(v8) < v4)
		v38 = HIWORD(v8);
	if (v38)
	{
		v39 = 0;
		v40 = 0i64;
		if (v14 >= 4)
		{
			v41 = 2i64;
			v42 = v5 + 8;
			v43 = ((unsigned int)(v14 - 4) >> 2) + 1;
			v44 = v43;
			v39 = 4 * v43;
			do
			{
				v42 += 16i64;
				v45 = v38 + v40 * *(unsigned __int16*)(v11 + 16);
				v40 += 4i64;
				*(_DWORD*)(v42 - 24) = *(_DWORD*)(*(_QWORD*)v11 + 4 * (v45 + *(unsigned int*)(v5 + 24)) - 4);
				*(_DWORD*)(v42 - 20) = *(_DWORD*)(*(_QWORD*)v11
					+ 4
					* (v38
						+ (v41 - 1) * *(unsigned __int16*)(v11 + 16)
						+ *(unsigned int*)(v5 + 24))
					- 4);
				*(_DWORD*)(v42 - 16) = *(_DWORD*)(*(_QWORD*)v11
					+ 4
					* (v38 + v41 * *(unsigned __int16*)(v11 + 16) + *(unsigned int*)(v5 + 24))
					- 4);
				v46 = v41 + 1;
				v41 += 4i64;
				*(_DWORD*)(v42 - 12) = *(_DWORD*)(*(_QWORD*)v11
					+ 4
					* (v38 + v46 * *(unsigned __int16*)(v11 + 16) + *(unsigned int*)(v5 + 24))
					- 4);
				--v44;
			} while (v44);
			v4 = v52;
		}
		if (v39 < v14)
		{
			v47 = v14 - v39;
			do
			{
				v48 = v40 * *(unsigned __int16*)(v11 + 16);
				++v40;
				*(_DWORD*)(v5 + 4 * v40 - 4) = *(_DWORD*)(*(_QWORD*)v11 + 4 * (v38 + v48 + *(unsigned int*)(v5 + 24)) - 4);
				--v47;
			} while (v47);
		}
	}
	v49 = v33 + v62;
	*(_DWORD*)(v5 + 32) = v8 - (v38 << 16);
	*(_WORD*)(v11 + 18) -= v38;
	*((_WORD*)a2 + 9) = *(_WORD*)(v5 + 28) + v33 + v62;
	if (v38 == v4)
		*(_DWORD*)(v5 + 24) = 0;
	else
		*(_DWORD*)(v5 + 24) += v38;
	if (v49 == v55)
		return 45i64;
	*(_DWORD*)(v5 + 28) += v49;
	return 43i64;
}

