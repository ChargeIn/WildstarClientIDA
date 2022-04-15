#include "../winhttp.h"

//----- (000000014005ADB0) ----------------------------------------------------
__int64 __fastcall sub_14005ADB0(__int64 a1, unsigned __int64* a2, __int64 a3)
{
	__int64 v3; // rbx
	unsigned __int64 v6; // r8
	int v8; // r15d
	__int64 v9; // rax
	int v10; // edx
	int v11; // edx
	__int8* v12; // r14
	__int64 v13; // rbp
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // edx
	int v17; // edx
	char v18; // dl
	__int64 v19; // rbx
	unsigned __int64* v20; // rax
	unsigned __int64* v21; // rdx
	char v22; // al
	unsigned __int64 v23; // r8
	char* v24; // rdx
	int v25; // edx
	int v26; // edx
	__m128i v27; // xmm0
	__int64 v28; // rax
	const void* v29; // r8
	char v31[4]; // [rsp+20h] [rbp-78h] BYREF
	char v32[4]; // [rsp+24h] [rbp-74h] BYREF
	char v33[40]; // [rsp+28h] [rbp-70h] BYREF

	v3 = *(_QWORD*)(a1 + 16);
	v6 = -1i64;
	v8 = 1;
	do
		++v6;
	while (*((_BYTE*)&unk_140C63641 + v6));
	v9 = sub_140062650(a1, (unsigned __int64*)&unk_140C63641, v6);
	*(_DWORD*)(v3 + 8) = 4;
	*(_QWORD*)v3 = v9;
	if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 16)
	{
		v10 = *(_DWORD*)(a1 + 88);
		if (v10 < 1)
			v11 = v10 + 1;
		else
			v11 = 2 * v10;
		sub_140061210(a1, v11);
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	v12 = sub_1407DE0B4((__int64)a2, 0x25u);
	if (v12)
	{
		v13 = a3 - 8;
		while (2)
		{
			v14 = *(_QWORD*)(a1 + 16);
			v15 = sub_140062650(a1, a2, v12 - (__int8*)a2);
			*(_DWORD*)(v14 + 8) = 4;
			*(_QWORD*)v14 = v15;
			if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 16)
			{
				v16 = *(_DWORD*)(a1 + 88);
				if (v16 < 1)
					v17 = v16 + 1;
				else
					v17 = 2 * v16;
				sub_140061210(a1, v17);
			}
			*(_QWORD*)(a1 + 16) += 16i64;
			v18 = v12[1];
			v19 = *(_QWORD*)(a1 + 16);
			switch (v18)
			{
			case '%':
				v23 = -1i64;
				do
					++v23;
				while (asc_140C1DD74[v23]);
				v24 = asc_140C1DD74;
				goto LABEL_22;
			case 'c':
				v22 = *(_BYTE*)(v13 + 8);
				v13 += 8i64;
				v31[1] = 0;
				v31[0] = v22;
				v23 = -1i64;
				do
					++v23;
				while (v31[v23]);
				v24 = v31;
				goto LABEL_22;
			case 'd':
				v27 = _mm_cvtsi32_si128(*(_DWORD*)(v13 + 8));
				v13 += 8i64;
				*(_DWORD*)(v19 + 8) = 3;
				*(_QWORD*)v19 = *(_OWORD*)&_mm_cvtepi32_pd(v27);
				goto LABEL_23;
			case 'f':
				v28 = *(_QWORD*)(v13 + 8);
				v13 += 8i64;
				*(_DWORD*)(v19 + 8) = 3;
				*(_QWORD*)v19 = v28;
				goto LABEL_23;
			case 'p':
				v29 = *(const void**)(v13 + 8);
				v13 += 8i64;
				sub_1407DDB98(v33, "%p", v29);
				v19 = *(_QWORD*)(a1 + 16);
				v23 = -1i64;
				do
					++v23;
				while (v33[v23]);
				v24 = v33;
				goto LABEL_22;
			case 's':
				v20 = *(unsigned __int64**)(v13 + 8);
				v13 += 8i64;
				v21 = (unsigned __int64*)aNull;
				if (v20)
					v21 = v20;
				sub_14005AD40(a1, v21);
				goto LABEL_40;
			default:
				v32[0] = 37;
				v32[1] = v18;
				v32[2] = 0;
				v23 = -1i64;
				do
					++v23;
				while (v32[v23]);
				v24 = v32;
			LABEL_22:
				*(_QWORD*)v19 = sub_140062650(a1, (unsigned __int64*)v24, v23);
				*(_DWORD*)(v19 + 8) = 4;
			LABEL_23:
				if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 16)
				{
					v25 = *(_DWORD*)(a1 + 88);
					if (v25 < 1)
						v26 = v25 + 1;
					else
						v26 = 2 * v25;
					sub_140061210(a1, v26);
				}
				*(_QWORD*)(a1 + 16) += 16i64;
			LABEL_40:
				a2 = (unsigned __int64*)(v12 + 2);
				v8 += 2;
				v12 = sub_1407DE0B4((__int64)(v12 + 2), 0x25u);
				if (!v12)
					break;
				continue;
			}
			break;
		}
	}
	sub_14005AD40(a1, a2);
	sub_14005F210(a1, v8 + 1, ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 24)) >> 4) - 1);
	*(_QWORD*)(a1 + 16) += -16i64 * v8;
	return *(_QWORD*)(*(_QWORD*)(a1 + 16) - 16i64) + 32i64;
}
// 14005ADB0: using guessed type char var_70[40];

