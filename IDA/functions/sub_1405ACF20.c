#include "../winhttp.h"

//----- (00000001405ACF20) ----------------------------------------------------
void __fastcall sub_1405ACF20(__int64 a1, _QWORD* a2, int a3)
{
	int* v3; // rsi
	__int64 v4; // rax
	int* v5; // r12
	__int64 v7; // rdx
	__int64 v8; // r14
	int v9; // r13d
	unsigned __int64 v10; // r15
	_QWORD* v11; // rbx
	__int64* v12; // rbx
	int* i; // rbx
	__int64 v14; // rcx
	__int64 v15; // rdx
	unsigned int v16; // xmm0_4
	unsigned int v17; // xmm1_4
	int v18; // eax
	unsigned int v19; // xmm0_4
	unsigned int v20; // xmm1_4
	int v21; // eax
	unsigned int v22; // xmm0_4
	int v23; // eax
	int v24; // xmm0_4
	int v25; // eax
	int v26; // xmm1_4
	__int64 v27; // rax
	__int128 v28; // xmm1
	__int128 v29; // xmm1
	__int128 v30; // xmm1
	__int64 v31; // xmm0_8
	int v32; // [rsp+28h] [rbp-79h]
	__int128 v33; // [rsp+38h] [rbp-69h] BYREF
	__int128 v34; // [rsp+48h] [rbp-59h]
	__int128 v35; // [rsp+58h] [rbp-49h]
	__int128 v36; // [rsp+68h] [rbp-39h]
	__int128 v37; // [rsp+78h] [rbp-29h]
	__int128 v38; // [rsp+88h] [rbp-19h]
	__int64 v39; // [rsp+98h] [rbp-9h]
	__int64 v40; // [rsp+A8h] [rbp+7h] BYREF
	int* v41; // [rsp+B0h] [rbp+Fh]
	int* v42; // [rsp+B8h] [rbp+17h]
	__int64 v43; // [rsp+C0h] [rbp+1Fh]
	int v46; // [rsp+120h] [rbp+7Fh] BYREF

	v3 = 0i64;
	v4 = 0i64;
	v5 = 0i64;
	v7 = a1;
	v41 = 0i64;
	v42 = 0i64;
	v43 = 0i64;
	v32 = 0;
	if (*(_DWORD*)(a1 + 272))
	{
		do
		{
			v8 = qword_140C659F8;
			v9 = *(_DWORD*)(v7 + 188);
			v46 = *(_DWORD*)(192 * v4 + *(_QWORD*)(v7 + 232) + 4);
			v10 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v46);
			v11 = *(_QWORD**)(*(_QWORD*)(v8 + 48) + 8 * (v10 % *(_QWORD*)(v8 + 40)));
			if (v11)
			{
				while (v10 != *v11 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v8 + 64))(&v46, v11 + 2))
				{
					v11 = (_QWORD*)v11[1];
					if (!v11)
						goto LABEL_10;
				}
				v12 = v11 + 3;
				if (v12 && *(_DWORD*)(*v12 + 20) == v9)
				{
					sub_1404C7CF0(*v12, &v40, a3);
					v3 = v42;
					v5 = v41;
				}
			}
		LABEL_10:
			for (i = v5; i != v3; i += 2)
			{
				v14 = *(_QWORD*)i;
				v15 = a2[2];
				LODWORD(v33) = 0;
				v16 = *(_DWORD*)(v14 + 160);
				v17 = *(_DWORD*)(v14 + 164);
				*(_QWORD*)&v34 = *(_QWORD*)(v14 + 88);
				v18 = *(_DWORD*)(v14 + 96);
				*(_QWORD*)&v36 = __PAIR64__(v17, v16);
				v19 = *(_DWORD*)(v14 + 168);
				v20 = *(_DWORD*)(v14 + 144);
				HIDWORD(v37) = v18;
				v21 = *(_DWORD*)(v14 + 128);
				*((_QWORD*)&v36 + 1) = __PAIR64__(v20, v19);
				v22 = *(_DWORD*)(v14 + 148);
				DWORD2(v34) = v21;
				v23 = *(_DWORD*)(v14 + 116);
				*(_QWORD*)&v37 = __PAIR64__(*(_DWORD*)(v14 + 152), v22);
				v24 = *(_DWORD*)(v14 + 156);
				LODWORD(v35) = v23;
				v25 = *(_DWORD*)(v14 + 120);
				v26 = *(_DWORD*)(v14 + 172);
				DWORD2(v37) = v24;
				DWORD1(v35) = v25;
				DWORD2(v35) = *(_DWORD*)(v14 + 124);
				v27 = *(unsigned int*)(a1 + 188);
				HIDWORD(v35) = v26;
				*((_QWORD*)&v33 + 1) = v27;
				LODWORD(v39) = *(_DWORD*)(v14 + 248);
				if (v15 == a2[3])
				{
					sub_1405B1F40(a2, v15, &v33);
				}
				else
				{
					if (v15)
					{
						v28 = v34;
						*(_OWORD*)v15 = v33;
						*(_OWORD*)(v15 + 16) = v28;
						v29 = v36;
						*(_OWORD*)(v15 + 32) = v35;
						*(_OWORD*)(v15 + 48) = v29;
						v30 = v38;
						*(_OWORD*)(v15 + 64) = v37;
						v31 = v39;
						*(_OWORD*)(v15 + 80) = v30;
						*(_QWORD*)(v15 + 96) = v31;
					}
					a2[2] += 104i64;
				}
			}
			sub_1407DB590(v5, v3, 0i64);
			v7 = a1;
			v3 -= 2 * (((char*)v3 - (char*)v5) >> 3);
			v4 = (unsigned int)(v32 + 1);
			v42 = v3;
			v32 = v4;
		} while ((unsigned int)v4 < *(_DWORD*)(a1 + 272));
		if (v5)
			sub_14018B900((__int64)v5, 0);
	}
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

