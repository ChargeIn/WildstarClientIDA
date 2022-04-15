//----- (00000001400CD7A0) ----------------------------------------------------
__int64 __fastcall sub_1400CD7A0(__int64 a1, int a2)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	unsigned int v6; // r15d
	__int64 v7; // rdi
	_DWORD* v8; // rax
	__int64 v9; // rax
	unsigned int v10; // r8d
	unsigned int v11; // r9d
	int v12; // r14d
	_QWORD* v13; // rdx
	unsigned int v14; // r14d
	__int64 v15; // rcx
	int v16; // eax
	int v17; // edi
	int v18; // edi
	_QWORD* v19; // rax
	_QWORD* v20; // rbx
	__int64 v21; // rcx
	__int128 v22; // xmm1
	__int128 v23; // xmm0
	__int128 v24; // xmm2
	__m128i v25; // xmm0
	int v26; // eax
	__int128 v27; // xmm0
	int v29; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v30; // [rsp+38h] [rbp-D0h] BYREF
	_QWORD v31[3]; // [rsp+40h] [rbp-C8h] BYREF
	__int128 v32; // [rsp+58h] [rbp-B0h]
	__int128 v33; // [rsp+68h] [rbp-A0h]
	__int128 v34; // [rsp+78h] [rbp-90h]
	int v35; // [rsp+88h] [rbp-80h]
	__int128 v36[5]; // [rsp+98h] [rbp-70h] BYREF
	int v37; // [rsp+E8h] [rbp-20h]

	v2 = *(_QWORD**)(a1 + 576);
	v3 = (_QWORD*)*v2;
	v6 = 0;
	if ((_QWORD*)*v2 != v2)
	{
		do
		{
			v7 = v3[2];
			if ((*(_BYTE*)(v7 + 28) & 1) != 0 && *(float*)(v7 + 648) > 0.0)
			{
				if (*(char*)(v7 + 29) >= 0)
				{
					v8 = sub_1400CB0E0(v3[2], &v29, v7 + 64);
					*(_DWORD*)(v7 + 396) = *v8;
					*(_DWORD*)(v7 + 400) = v8[1];
					*(_DWORD*)(v7 + 404) = v8[2];
					*(_DWORD*)(v7 + 408) = v8[3];
					*(_BYTE*)(v7 + 29) |= 0x80u;
					v9 = v7;
					do
					{
						if (!*(_DWORD*)(v9 + 392))
							break;
						*(_DWORD*)(v9 + 392) = 0;
						v9 = *(_QWORD*)(v9 + 16);
					} while (v9);
				}
				v10 = *(_DWORD*)(v7 + 400);
				v11 = *(_DWORD*)(v7 + 408);
				v12 = *(_DWORD*)(v7 + 404) - *(_DWORD*)(v7 + 396);
				v35 = 0;
				v13 = &v31[1];
				v14 = v6 + v12;
				v15 = 0i64;
				do
				{
					v16 = *(_DWORD*)((char*)&unk_140A14E90 + v15);
					*(_DWORD*)((char*)&v34 + v15) = 0;
					v15 += 4i64;
					*(_DWORD*)((char*)&v32 + v15 + 12) = v16;
					*v13++ = 0i64;
				} while (v15 < 16);
				v35 |= 0x300u;
				*(_QWORD*)&v34 = __PAIR64__(v10, v6);
				v33 = 0i64;
				*((_QWORD*)&v34 + 1) = __PAIR64__(v11, v14);
				sub_1400CC680(v7, (__int64)&v30);
				v6 = v14;
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 576));
	}
	v17 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
	if (a2 && (int)v6 < v17)
	{
		v18 = v17 - v6;
		if (a2 == 1)
			v18 /= 2;
		v19 = *(_QWORD**)(a1 + 576);
		v20 = (_QWORD*)*v19;
		if ((_QWORD*)*v19 != v19)
		{
			do
			{
				v21 = v20[2];
				if ((*(_BYTE*)(v21 + 28) & 1) != 0 && *(float*)(v21 + 648) > 0.0)
				{
					v22 = *(_OWORD*)(v21 + 96);
					v23 = *(_OWORD*)(v21 + 80);
					v24 = *(_OWORD*)(v21 + 64);
					v37 = *(_DWORD*)(v21 + 144) | 0x300;
					v36[0] = v24;
					*(_OWORD*)&v31[1] = v23;
					v32 = v22;
					v36[2] = v22;
					v33 = *(_OWORD*)(v21 + 112);
					v25 = *(__m128i*)(v21 + 128);
					DWORD2(v33) = 0;
					v34 = (__int128)v25;
					DWORD2(v34) = v18 + v25.m128i_i32[2];
					v26 = _mm_cvtsi128_si32(v25);
					v27 = *(_OWORD*)(v21 + 80);
					LODWORD(v34) = v18 + v26;
					v36[1] = v27;
					v36[3] = v33;
					v36[4] = v34;
					sub_1400CC680(v21, (__int64)v36);
				}
				v20 = (_QWORD*)*v20;
			} while (v20 != *(_QWORD**)(a1 + 576));
		}
	}
	sub_1400C7600(a1);
	return v6;
}

