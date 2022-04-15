#include "../winhttp.h"

//----- (00000001401E2EE0) ----------------------------------------------------
_QWORD* __fastcall sub_1401E2EE0(__int64 a1, __int64 a2)
{
	_QWORD* result; // rax
	_QWORD* v4; // rdi
	_QWORD* v5; // rcx
	_QWORD* v6; // rbx
	unsigned int v7; // esi
	double v8; // xmm6_8
	float v9; // xmm11_4
	float v10; // xmm0_4
	double v11; // xmm6_8
	float v12; // xmm10_4
	float v13; // xmm8_4
	float v14; // xmm0_4
	double v15; // xmm6_8
	float v16; // xmm7_4
	float v17; // xmm9_4
	float v18; // xmm0_4
	__int64 v19; // rax
	float v20; // xmm4_4
	float v21; // xmm9_4
	float v22; // xmm4_4
	__int64 v23; // rax
	int v24[4]; // [rsp+20h] [rbp-88h] BYREF

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 25i64);
	v4 = result;
	if (result)
	{
		v5 = *(_QWORD**)(a2 + 8);
		v6 = (_QWORD*)v5[2];
		if (v6 != v5)
		{
			do
			{
				v7 = *((_DWORD*)v6 + 8);
				if (*((_DWORD*)v6 + 12))
					(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD*))(*v4 + 536i64))(v4, v7, v6 + 8);
				if (*((_DWORD*)v6 + 13))
				{
					*(_QWORD*)&v8 = *((unsigned int*)v6 + 22);
					*(float*)&v8 = *(float*)&v8 * 0.5;
					v9 = sub_1408FE3D0(v8);
					v10 = sub_1408FC950(v8);
					*(_QWORD*)&v11 = *((unsigned int*)v6 + 21);
					*(float*)&v11 = *(float*)&v11 * 0.5;
					v12 = v10;
					v13 = sub_1408FE3D0(v11);
					v14 = sub_1408FC950(v11);
					*(_QWORD*)&v15 = *((unsigned int*)v6 + 20);
					*(float*)&v15 = *(float*)&v15 * 0.5;
					v16 = v14;
					v17 = sub_1408FE3D0(v15);
					v18 = sub_1408FC950(v15);
					v19 = *v4;
					v20 = v17;
					v21 = v17 * v13;
					v22 = v20 * v16;
					*(float*)v24 = (float)((float)(v18 * v13) * v12) + (float)(v22 * v9);
					*(float*)&v24[2] = (float)((float)(v18 * v16) * v9) - (float)(v21 * v12);
					*(float*)&v24[1] = (float)(v22 * v12) - (float)((float)(v18 * v13) * v9);
					*(float*)&v24[3] = (float)(v21 * v9) + (float)((float)(v18 * v16) * v12);
					(*(void(__fastcall**)(_QWORD*, _QWORD, int*))(v19 + 544))(v4, v7, v24);
				}
				if (*((_DWORD*)v6 + 14))
					(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD*))(*v4 + 552i64))(v4, v7, v6 + 12);
				v23 = v6[3];
				if (v23)
				{
					v6 = (_QWORD*)v6[3];
					for (result = *(_QWORD**)(v23 + 16); result; result = (_QWORD*)result[2])
						v6 = result;
				}
				else
				{
					for (result = (_QWORD*)v6[1]; v6 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
						v6 = result;
					if ((_QWORD*)v6[3] != result)
						v6 = result;
				}
			} while (v6 != *(_QWORD**)(a2 + 8));
		}
	}
	return result;
}

