#include "../winhttp.h"

//----- (000000014068E110) ----------------------------------------------------
__int64 __fastcall sub_14068E110(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	int v6; // eax
	__int64 v7; // rcx
	bool v8; // zf
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // rcx
	__int64(__fastcall * *v14)(_QWORD); // rax
	int v15; // ebx
	__m128i v16; // xmm1
	__int64 v17; // rax
	int v18; // eax
	__int64 v19; // rax
	__int64 v20; // rax
	unsigned int v21; // ebx
	unsigned int v22; // eax
	__int64 v23; // rcx
	unsigned int v24; // kr00_4
	__int64 v25; // rax
	__int64 v26; // rax
	float v27; // xmm0_4
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rax

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
			0i64),
			(v5 = v4) == 0)
		|| !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4))
	{
		v30 = a1[2];
		*(_QWORD*)v30 = 0i64;
		*(_DWORD*)(v30 + 8) = 3;
		goto LABEL_28;
	}
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) == 24
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) == 30)
	{
		v29 = a1[2];
		*(_QWORD*)v29 = 0i64;
		*(_DWORD*)(v29 + 8) = 3;
		goto LABEL_28;
	}
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5);
	v7 = v5;
	v8 = v6 == 23;
	v9 = *(_QWORD*)v5;
	if (v8)
		goto LABEL_9;
	if ((*(unsigned int(__fastcall**)(__int64))(v9 + 336))(v5) == 27
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) == 32)
	{
		v27 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 152i64))(v5);
		v28 = a1[2];
		*(_DWORD*)(v28 + 8) = 3;
		*(double*)v28 = (float)(v27 * 0.001);
		goto LABEL_28;
	}
	v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 480i64))(v5);
	v13 = v5;
	v8 = v12 == 0;
	v14 = *(__int64(__fastcall***)(_QWORD))v5;
	if (v8)
	{
		v18 = v14[59](v5);
		v7 = v5;
		v8 = v18 == 0;
		v9 = *(_QWORD*)v5;
		if (!v8)
		{
		LABEL_9:
			v10 = (int)(float)((*(float(__fastcall**)(__int64))(v9 + 136))(v7) * 100.0);
		LABEL_10:
			v11 = a1[2];
			*(double*)v11 = (double)v10;
			*(_DWORD*)(v11 + 8) = 3;
			goto LABEL_28;
		}
		v8 = (*(unsigned int(__fastcall**)(__int64))(v9 + 336))(v5) == 13;
		v19 = *(_QWORD*)v5;
		if (v8)
		{
			v8 = (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(v19 + 328))(v5) + 8) & 0x4000) == 0;
			v20 = *(_QWORD*)v5;
			if (v8)
			{
				v24 = (*(__int64(__fastcall**)(__int64))(v20 + 168))(v5);
				v25 = a1[2];
				*(_DWORD*)(v25 + 8) = 3;
				*(double*)v25 = (double)(v24 / 0x3E8);
			}
			else
			{
				v21 = (*(__int64(__fastcall**)(__int64))(v20 + 384))(v5);
				v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 168i64))(v5);
				v23 = a1[2];
				*(double*)v23 = (double)(int)(float)((float)(int)(v22 / v21) * 100.0);
				*(_DWORD*)(v23 + 8) = 3;
			}
			goto LABEL_28;
		}
		v26 = (*(__int64(__fastcall**)(__int64))(v19 + 328))(v5);
		v13 = v5;
		v8 = (*(_DWORD*)(v26 + 8) & 0x4000) == 0;
		v14 = *(__int64(__fastcall***)(_QWORD))v5;
		if (v8)
		{
			v10 = v14[19](v5);
			goto LABEL_10;
		}
	}
	v15 = v14[26](v13);
	if (v15)
	{
		v16 = _mm_cvtsi32_si128((int)(float)((float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 152i64))(v5) * 100.0));
		v17 = a1[2];
		*(double*)v17 = (float)(_mm_cvtepi32_ps(v16).m128_f32[0] / (float)v15);
	}
	else
	{
		v17 = a1[2];
		*(_QWORD*)v17 = 0i64;
	}
	*(_DWORD*)(v17 + 8) = 3;
LABEL_28:
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

