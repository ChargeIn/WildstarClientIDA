#include "../winhttp.h"

//----- (00000001402798D0) ----------------------------------------------------
__int64 __fastcall sub_1402798D0(__int64 a1)
{
	__int64 v1; // r8
	__int64 v3; // rbp
	__int64 result; // rax
	__int64 v5; // rcx
	__int64* v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64* v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rax
	int* v12; // rcx
	float v13; // xmm0_4
	float v14; // xmm1_4
	int v15; // eax
	__int64* v16; // rdi
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64* v19; // rdi
	__int64 v20; // rbx
	__int64 v21; // rax
	bool v22; // zf
	__int64* v23; // rdi
	__int64 v24; // rbx
	__int64 v25; // rax
	__int128 v26; // [rsp+30h] [rbp-38h] BYREF
	__int64 v27[5]; // [rsp+40h] [rbp-28h] BYREF

	v1 = *(int*)(a1 + 8120);
	v3 = dword_140AE7DC0[v1];
	if ((_DWORD)v3 == -1)
	{
		v16 = *(__int64**)(a1 + 6352);
		v17 = *v16;
		v18 = sub_1402A9C10(*(_QWORD*)(a1 + 8176), *(_DWORD*)(a1 + 8188), v1);
		result = (*(__int64(__fastcall**)(__int64*, __int64))(v17 + 136))(v16, v18);
		if ((*(_BYTE*)(a1 + 7176) & 0x20) != 0)
		{
			v19 = *(__int64**)(a1 + 6352);
			v20 = *v19;
			v21 = sub_1402A9A70(*(_QWORD**)(a1 + 8176), *(_DWORD*)(a1 + 8184));
			result = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD, _QWORD))(v20 + 88))(v19, v21, 0i64, 0i64);
			*(_DWORD*)(a1 + 7176) &= ~0x20u;
		}
	}
	else
	{
		if (!*(_QWORD*)(a1 + 8200))
		{
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)a1 + 144i64))(
				a1,
				L"Shaders\\DefaultVS.sho",
				a1 + 8200);
			if ((int)result < 0)
				return result;
			v5 = *(_QWORD*)(a1 + 8200);
			LODWORD(v26) = -1;
			(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v5 + 32i64))(v5, &v26);
		}
		v6 = *(__int64**)(a1 + 6352);
		v7 = *v6;
		v8 = sub_1402A9C10(
			*(_QWORD*)(a1 + 8200),
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8200) + 48i64) + 64i64) + 4 * v3),
			*(_DWORD*)(a1 + 8120));
		(*(void(__fastcall**)(__int64*, __int64))(v7 + 136))(v6, v8);
		if (*(_DWORD*)(a1 + 8208) != (_DWORD)v3)
		{
			v9 = *(__int64**)(a1 + 6352);
			v10 = *v9;
			v11 = sub_1402A9A70(
				*(_QWORD**)(a1 + 8200),
				*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8200) + 48i64) + 32i64) + 4 * v3));
			(*(void(__fastcall**)(__int64*, __int64, _QWORD, _QWORD))(v10 + 88))(v9, v11, 0i64, 0i64);
			*(_DWORD*)(a1 + 7176) |= 0x20u;
		}
		if (*(char*)(a1 + 7176) < 0 || (result = *(unsigned int*)(a1 + 240), *(_DWORD*)(a1 + 8488) != (_DWORD)result))
		{
			if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, __int64*))(**(_QWORD**)(a1 + 6352) + 112i64))(
				*(_QWORD*)(a1 + 6352),
				*(_QWORD*)(a1 + 8480),
				0i64,
				4i64,
				0,
				v27) >= 0)
			{
				v12 = *(int**)(a1 + 8592);
				v13 = (float)v12[39];
				v14 = (float)v12[36];
				*(float*)&v26 = 2.0 / (float)v12[38];
				v15 = v12[37];
				*((float*)&v26 + 1) = -2.0 / v13;
				*((float*)&v26 + 2) = -1.0 - (float)(v14 * *(float*)&v26);
				*((float*)&v26 + 3) = 1.0 - (float)((float)v15 * (float)(-2.0 / v13));
				*(_OWORD*)v27[0] = v26;
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6352) + 120i64))(
					*(_QWORD*)(a1 + 6352),
					*(_QWORD*)(a1 + 8480),
					0i64);
			}
			result = *(unsigned int*)(a1 + 240);
			*(_DWORD*)(a1 + 7176) &= ~0x80u;
			*(_DWORD*)(a1 + 8488) = result;
		}
	}
	v22 = (*(_DWORD*)(a1 + 7176) & 0x100) == 0;
	*(_DWORD*)(a1 + 8208) = v3;
	if (!v22)
	{
		v23 = *(__int64**)(a1 + 6352);
		v24 = *v23;
		v25 = sub_1402AA830(*(_QWORD**)(a1 + 8216), *(_DWORD*)(a1 + 8224));
		result = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD, _QWORD))(v24 + 72))(v23, v25, 0i64, 0i64);
		*(_DWORD*)(a1 + 7176) &= ~0x100u;
	}
	return result;
}
// 140AE7DC0: using guessed type unsigned int dword_140AE7DC0[24];
// 140AE84F0: using guessed type wchar_t aShadersDefault_0[22];
// 1402798D0: using guessed type __int64 var_28[5];

