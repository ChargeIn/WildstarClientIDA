#include "../winhttp.h"

//----- (000000014001CF60) ----------------------------------------------------
__int64 __fastcall sub_14001CF60(__int64 a1)
{
	__int64 v2; // rax
	int* v3; // rcx
	float v4; // xmm3_4
	__int64 v5; // rbp
	float v6; // xmm4_4
	int v7; // edx
	float v8; // xmm5_4
	int v9; // eax
	float v10; // xmm1_4
	float v11; // xmm9_4
	float v12; // xmm2_4
	float v13; // xmm6_4
	bool v14; // zf
	__int64 result; // rax
	__int64 v16; // rax
	struct tagPOINT v17; // rcx
	_QWORD* v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rax
	unsigned int v21; // esi
	const wchar_t* v22; // rdx
	int v23; // eax
	__int64 v24; // r8
	__int64 v25; // [rsp+28h] [rbp-D0h]
	__int128 v26; // [rsp+50h] [rbp-A8h] BYREF
	__int128 v27; // [rsp+60h] [rbp-98h] BYREF
	int v28[8]; // [rsp+70h] [rbp-88h] BYREF
	__int64 v29; // [rsp+90h] [rbp-68h] BYREF
	float v30; // [rsp+A0h] [rbp-58h]
	float v31; // [rsp+A4h] [rbp-54h]

	v26 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v26);
	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v3 = *(int**)(a1 + 168);
	v4 = 0.0;
	v5 = v2;
	v6 = 0.0;
	if (v3)
		v7 = *v3;
	else
		v7 = *(_DWORD*)(a1 + 544);
	v8 = (float)v7;
	if (v3)
		v9 = v3[1];
	else
		v9 = *(_DWORD*)(a1 + 548);
	v10 = (float)v9 - 1.0;
	if (v8 < 0.0000099999997 || v10 < 0.0000099999997)
		return 0i64;
	v11 = (float)*(int*)(v5 + 12);
	v12 = (float)*(int*)(v5 + 8) / v8;
	v13 = v11 / v10;
	if (v12 >= (float)(v11 / v10))
	{
		v12 = v11 / v10;
		v4 = (float)((float)*(int*)(v5 + 8) - (float)(v13 * v8)) * 0.5;
	}
	else
	{
		v13 = (float)*(int*)(v5 + 8) / v8;
		v6 = (float)(v11 - (float)(v12 * v10)) * 0.5;
	}
	v14 = *(_DWORD*)(a1 + 136) == 5;
	*(float*)v28 = v4;
	*(float*)&v28[1] = v6;
	*(float*)&v28[5] = (float)((float)(v10 + 1.0) * v13) + v6;
	*(float*)&v28[4] = (float)(v12 * v8) + v4;
	if (v14 || (result = sub_140002ED0(a1 + 72, (__int64)v28), (int)result >= 0))
	{
		if (*(_DWORD*)(a1 + 40) != 4)
		{
			v16 = *(_QWORD*)(a1 + 32);
			if (v16)
			{
				while (*(_DWORD*)(v16 + 40) == 4)
				{
					v16 = *(_QWORD*)(v16 + 32);
					if (!v16)
						goto LABEL_18;
				}
			}
			else
			{
			LABEL_18:
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 472i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 576),
					(unsigned int)qword_140C77760,
					HIDWORD(qword_140C77760));
				sub_140252260(v17, (*(_BYTE*)(a1 + 560) & 1) != 0);
			}
		}
		v18 = (_QWORD*)(a1 + 584);
		v19 = *(_QWORD*)(a1 + 584);
		if (v19)
		{
			v20 = *(_QWORD*)(a1 + 568);
			if (v20)
			{
				if (*(_QWORD*)(v20 - 8))
				{
					v21 = (int)(float)((float)(v13 * 30.0) + 0.5);
					if (v21 != *(_DWORD*)((*(__int64 (**)(void))(*(_QWORD*)v19 + 24i64))() + 8))
					{
						if (*v18)
						{
							(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v18 + 8i64))(*v18);
							*v18 = 0i64;
						}
						v25 = a1 + 584;
						v22 = L"Microsoft YaHei";
						if (*(_DWORD*)(qword_140C635F0 + 5896) != 1)
							v22 = L"Cube Offc Cond";
						(*(void(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)qword_140C65680 + 32i64))(
							qword_140C65680,
							v22,
							v21);
					}
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
					v23 = *(_DWORD*)(v5 + 12);
					v24 = *(_QWORD*)(a1 + 568);
					v30 = (float)*(int*)(v5 + 8);
					v29 = 0i64;
					v26 = xmmword_140C777D0;
					LODWORD(v25) = 25;
					v31 = (float)v23 - 10.0;
					v27 = xmmword_140B7B240;
					(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __int64*, __int64, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
						qword_140C65680,
						*v18,
						v24,
						-1i64,
						&v29,
						v25,
						&v27,
						&v26,
						1);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
				}
			}
		}
		return 0i64;
	}
	return result;
}
// 14001D153: variable 'v17' is possibly undefined
// 14001D2A8: variable 'v25' is possibly undefined
// 1409E6F50: using guessed type wchar_t aCubeOffcCond[15];
// 1409E6F70: using guessed type wchar_t aMicrosoftYahei[16];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

