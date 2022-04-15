#include "../winhttp.h"

//----- (0000000140035C80) ----------------------------------------------------
__int64 __fastcall sub_140035C80(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	int v4; // ebx
	int v5; // edi
	int v6; // esi
	__int64 v7; // rcx
	__int64 v8; // rcx
	int* v9; // rax
	__int64 v10; // r15
	unsigned int v11; // ecx
	__int64 v12; // rdx
	__int16 v13; // ax
	float v14; // xmm5_4
	float v15; // xmm2_4
	float v16; // xmm6_4
	float v17; // xmm2_4
	float v18; // xmm4_4
	float v19; // xmm5_4
	float v20; // xmm4_4
	float v21; // xmm3_4
	int v22[6]; // [rsp+58h] [rbp-1h] BYREF
	__int128 v23; // [rsp+70h] [rbp+17h] BYREF

	v23 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v23);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	v3 = *(_QWORD*)(a1 + 232);
	if (!v3)
		return result;
	v22[0] = 0;
	result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v22);
	if (!(_DWORD)result)
		return result;
	v4 = 0;
	v5 = 0;
	v6 = 0;
	if (!*(_DWORD*)(a1 + 20))
	{
		v4 = 1;
		v5 = 1;
		v6 = 1;
		goto LABEL_10;
	}
	v7 = *(_QWORD*)(a1 + 96);
	if (!v7)
		goto LABEL_9;
	v8 = *(_QWORD*)(v7 + 29256);
	if (v8)
	{
		v9 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 168i64))(v8);
		v4 = *v9;
		v5 = v9[1];
		v6 = v9[2];
		if (!*v9)
		{
			v5 = 0;
			v6 = 0;
		LABEL_9:
			v4 = 1;
		}
	}
LABEL_10:
	v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 240i64))(qword_140C65670, 24i64);
	if (result)
	{
		v11 = 1;
		v12 = result + 4;
		do
		{
			v12 += 12i64;
			*(_WORD*)(v12 - 16) = v11 - 1;
			*(_WORD*)(v12 - 14) = v11;
			*(_WORD*)(v12 - 12) = v11 + 1;
			*(_WORD*)(v12 - 10) = v11 + 1;
			*(_WORD*)(v12 - 8) = v11;
			v13 = v11 + 2;
			v11 += 4;
			*(_WORD*)(v12 - 6) = v13;
		} while (v11 < 9);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 248i64))(qword_140C65670);
		result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 224i64))(
			qword_140C65670,
			224i64,
			0i64,
			0i64);
		if (result)
		{
			v14 = (float)*(int*)(v10 + 12);
			v15 = (float)*(int*)(v10 + 8);
			v16 = v15 * 0.94999999;
			v17 = v15 * 0.050000001;
			*(float*)result = v17;
			v18 = v14;
			v19 = v14 * 0.94999999;
			v20 = v18 * 0.92500001;
			*(float*)(result + 4) = v20;
			*(_DWORD*)(result + 8) = 0;
			*(_DWORD*)(result + 12) = 1065353216;
			*(_DWORD*)(result + 16) = -14729409;
			*(_QWORD*)(result + 20) = qword_140C67480;
			*(float*)(result + 28) = v17;
			*(float*)(result + 32) = v19;
			*(_DWORD*)(result + 36) = 0;
			*(_DWORD*)(result + 40) = 1065353216;
			*(_DWORD*)(result + 44) = -14729409;
			v21 = (float)((float)((float)(v6 + v5) / (float)(2 * v4)) * (float)(v17 - v16)) + v16;
			*(_QWORD*)(result + 48) = qword_140C67480;
			*(float*)(result + 56) = v21;
			*(float*)(result + 60) = v20;
			*(_DWORD*)(result + 64) = 0;
			*(_DWORD*)(result + 68) = 1065353216;
			*(_DWORD*)(result + 72) = -14729409;
			*(_QWORD*)(result + 76) = qword_140C67480;
			*(float*)(result + 84) = v21;
			*(float*)(result + 88) = v19;
			*(_DWORD*)(result + 92) = 0;
			*(_DWORD*)(result + 96) = 1065353216;
			*(_DWORD*)(result + 100) = -14729409;
			*(_QWORD*)(result + 104) = qword_140C67480;
			*(float*)(result + 112) = v21;
			*(float*)(result + 116) = v20;
			*(_DWORD*)(result + 120) = 0;
			*(_DWORD*)(result + 124) = 1065353216;
			*(_DWORD*)(result + 128) = -14737633;
			*(_QWORD*)(result + 132) = qword_140C67480;
			*(float*)(result + 140) = v21;
			*(float*)(result + 144) = v19;
			*(_DWORD*)(result + 148) = 0;
			*(_DWORD*)(result + 152) = 1065353216;
			*(_DWORD*)(result + 156) = -14737633;
			*(_QWORD*)(result + 160) = qword_140C67480;
			*(float*)(result + 168) = v16;
			*(float*)(result + 172) = v20;
			*(_DWORD*)(result + 176) = 0;
			*(_DWORD*)(result + 180) = 1065353216;
			*(_DWORD*)(result + 184) = -14737633;
			*(_QWORD*)(result + 188) = qword_140C67480;
			*(float*)(result + 196) = v16;
			*(float*)(result + 200) = v19;
			*(_DWORD*)(result + 204) = 0;
			*(_DWORD*)(result + 208) = 1065353216;
			*(_DWORD*)(result + 212) = -14737633;
			*(_QWORD*)(result + 216) = qword_140C67480;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
				qword_140C65670,
				*(_QWORD*)(a1 + 232),
				0i64);
			return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 656i64))(
				qword_140C65670,
				3i64,
				0i64);
		}
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C67480: using guessed type __int64 qword_140C67480;
// 140035C80: using guessed type int var_58[6];

