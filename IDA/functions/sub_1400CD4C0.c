//----- (00000001400CD4C0) ----------------------------------------------------
__int64 __fastcall sub_1400CD4C0(__int64 a1, int a2)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	int v6; // r15d
	__int64 v7; // rdi
	bool v8; // zf
	__int128 v9; // xmm7
	__int128 v10; // xmm8
	__int128 v11; // xmm9
	int v12; // r14d
	_DWORD* v13; // rax
	__int64 v14; // rax
	int v15; // eax
	int v16; // eax
	int v17; // edi
	int v18; // edi
	_QWORD* v19; // rax
	_QWORD* v20; // rbx
	__int64 v21; // rcx
	__int128 v22; // xmm0
	__int128 v23; // xmm1
	__int128 v24; // xmm2
	__int128 v25; // xmm0
	int v26; // rax^4
	__int128 v27; // xmm0
	int v29[6]; // [rsp+28h] [rbp-E0h] BYREF
	__int128 v30; // [rsp+48h] [rbp-C0h]
	__int128 v31; // [rsp+58h] [rbp-B0h]
	__int128 v32; // [rsp+68h] [rbp-A0h]
	__int128 v33; // [rsp+78h] [rbp-90h]
	__int128 v34; // [rsp+98h] [rbp-70h] BYREF
	__int128 v35; // [rsp+A8h] [rbp-60h]
	__int128 v36; // [rsp+B8h] [rbp-50h]
	__int128 v37; // [rsp+C8h] [rbp-40h]
	__int128 v38; // [rsp+D8h] [rbp-30h]
	int v39; // [rsp+E8h] [rbp-20h]

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
				v8 = *(_BYTE*)(v7 + 29) >= 0;
				v9 = *(_OWORD*)(v7 + 64);
				v32 = *(_OWORD*)(v7 + 112);
				v10 = *(_OWORD*)(v7 + 80);
				v11 = *(_OWORD*)(v7 + 96);
				v12 = *(_DWORD*)(v7 + 144);
				v33 = *(_OWORD*)(v7 + 128);
				if (v8)
				{
					v13 = sub_1400CB0E0(v7, v29, v7 + 64);
					*(_DWORD*)(v7 + 396) = *v13;
					*(_DWORD*)(v7 + 400) = v13[1];
					*(_DWORD*)(v7 + 404) = v13[2];
					*(_DWORD*)(v7 + 408) = v13[3];
					*(_BYTE*)(v7 + 29) |= 0x80u;
					v14 = v7;
					do
					{
						if (!*(_DWORD*)(v14 + 392))
							break;
						*(_DWORD*)(v14 + 392) = 0;
						v14 = *(_QWORD*)(v14 + 16);
					} while (v14);
				}
				v15 = *(_DWORD*)(v7 + 408);
				DWORD1(v33) = v6;
				v34 = v9;
				v35 = v10;
				v36 = v11;
				v16 = v15 - *(_DWORD*)(v7 + 400);
				DWORD1(v32) = 0;
				HIDWORD(v32) = 0;
				v37 = v32;
				v6 += v16;
				HIDWORD(v33) = v6;
				v39 = v12 | 0x300;
				v38 = v33;
				sub_1400CC680(v7, (__int64)&v34);
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 576));
	}
	v17 = *(_DWORD*)(a1 + 728) - *(_DWORD*)(a1 + 720);
	if (a2 && v6 < v17)
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
					v22 = *(_OWORD*)(v21 + 80);
					v23 = *(_OWORD*)(v21 + 96);
					v24 = *(_OWORD*)(v21 + 64);
					v39 = *(_DWORD*)(v21 + 144) | 0x300;
					v34 = v24;
					v30 = v22;
					v31 = v23;
					v36 = v23;
					v32 = *(_OWORD*)(v21 + 112);
					v25 = *(_OWORD*)(v21 + 128);
					HIDWORD(v32) = 0;
					v26 = DWORD1(v25);
					v33 = v25;
					v27 = *(_OWORD*)(v21 + 80);
					DWORD1(v33) = v18 + v26;
					v35 = v27;
					HIDWORD(v33) += v18;
					v37 = v32;
					v38 = v33;
					sub_1400CC680(v21, (__int64)&v34);
				}
				v20 = (_QWORD*)*v20;
			} while (v20 != *(_QWORD**)(a1 + 576));
		}
	}
	sub_1400C7600(a1);
	return (unsigned int)v6;
}
// 1400CD4C0: using guessed type int anonymous_0[6];

