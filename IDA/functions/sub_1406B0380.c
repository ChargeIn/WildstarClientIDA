//----- (00000001406B0380) ----------------------------------------------------
__int64 __fastcall sub_1406B0380(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v6; // rbx
	unsigned __int64 v7; // rdx
	unsigned int v8; // ecx
	__int64 v9; // r8
	__int64 v10; // rax
	_QWORD* v11; // rcx
	double v12; // xmm6_8
	_DWORD* v13; // rax
	double v14; // xmm0_8
	_QWORD* v15; // rcx
	float v16; // xmm8_4
	_DWORD* v17; // rax
	double v18; // xmm0_8
	_QWORD* v19; // rcx
	float v20; // xmm7_4
	_DWORD* v21; // rax
	__int64 v22; // rcx
	int v24[4]; // [rsp+20h] [rbp-48h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && qword_140C659F0)
	{
		v4 = *(_QWORD*)(v2 + 16);
		if (v4 ? sub_1404B6E50(v3, v4) : sub_1404C9B90(v3, *(_DWORD*)(v2 + 8)))
		{
			v6 = 0i64;
			v7 = *(_QWORD*)(qword_140C63650 + 768);
			v8 = 0;
			if (v7)
			{
				v9 = *(_QWORD*)(qword_140C63650 + 760);
				v10 = 0i64;
				while (*(_QWORD**)(*(_QWORD*)(v9 + 8 * v10) + 400i64) != a1)
				{
					v10 = ++v8;
					if (v8 >= v7)
						goto LABEL_13;
				}
				v6 = *(_QWORD*)(v9 + 8i64 * v8);
			}
		LABEL_13:
			v11 = *(_QWORD**)(v6 + 400);
			v12 = 0.0;
			v13 = (_DWORD*)(v11[3] + 16i64);
			if ((unsigned __int64)v13 >= v11[2] || v13 == dword_140A12138 || *(int*)(v11[3] + 24i64) <= 0)
				v14 = 0.0;
			else
				v14 = sub_140056C40(v11, 2u);
			v15 = *(_QWORD**)(v6 + 400);
			v16 = v14;
			v17 = (_DWORD*)(v15[3] + 32i64);
			if ((unsigned __int64)v17 >= v15[2] || v17 == dword_140A12138 || *(int*)(v15[3] + 40i64) <= 0)
				v18 = 0.0;
			else
				v18 = sub_140056C40(v15, 3u);
			v19 = *(_QWORD**)(v6 + 400);
			v20 = v18;
			v21 = (_DWORD*)(v19[3] + 48i64);
			if ((unsigned __int64)v21 < v19[2] && v21 != dword_140A12138 && *(int*)(v19[3] + 56i64) > 0)
				v12 = sub_140056C40(v19, 4u);
			*(float*)v24 = (float)v12 * (float)(*(float*)&dword_140C3B438 * 0.0055555557);
			*(float*)&v24[1] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v16;
			*(float*)&v24[2] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v20;
			if (sub_1405B1510(&qword_140C7DFB0))
			{
				v22 = *(_QWORD*)(qword_140C659F8 + 200);
				if (v22)
					(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v22 + 56i64))(v22, v24);
			}
		}
	}
	return 0i64;
}
// 1406B03BA: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C3B438: using guessed type int dword_140C3B438;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

