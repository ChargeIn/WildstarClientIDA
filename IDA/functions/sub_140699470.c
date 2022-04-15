#include "../winhttp.h"

//----- (0000000140699470) ----------------------------------------------------
__int64 __fastcall sub_140699470(_QWORD* a1)
{
	_QWORD* v1; // rsi
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rdi
	int v7; // ebx
	int v8; // eax
	int v9; // edx
	int v10; // ecx
	int v11; // eax
	int v12; // edx
	__int64 v13; // r14
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // eax
	unsigned __int64 v19; // r15
	unsigned __int64 v20; // rdi
	int v21; // r10d
	__int64 v22; // rcx
	unsigned __int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	int v26; // ebp
	__int64 v27; // rcx
	_QWORD* v28; // rax
	__int64 v29; // rcx
	int v30; // r11d
	__int64 v31; // rdx
	void(__fastcall * **v32)(_QWORD); // rbx
	__int64 v33; // rdx
	_QWORD* v34; // rax
	__int64 v35; // r8
	__int64 v36; // rdx
	int v37; // r10d
	__int64(__fastcall * *v39)(); // [rsp+20h] [rbp-68h] BYREF
	int v40; // [rsp+28h] [rbp-60h]
	_QWORD* v41; // [rsp+30h] [rbp-58h]
	int v42; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v43)(); // [rsp+40h] [rbp-48h] BYREF
	int v44; // [rsp+48h] [rbp-40h]
	_QWORD* v45; // [rsp+50h] [rbp-38h]
	int v46; // [rsp+58h] [rbp-30h]
	char v47; // [rsp+98h] [rbp+10h] BYREF

	v1 = a1;
	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8)), (v6 = v5) != 0))
	{
		v7 = *(_DWORD*)(v5 + 16);
		v8 = sub_140056D60(v1, 2u);
		v9 = 200;
		v10 = v8 - 1;
		v11 = 200;
		if (*(_DWORD*)(v6 + 16) == 1)
			v11 = 100;
		if (v7 == 1)
			v9 = 100;
		v12 = v10 + v9 - v11;
		if (v12 >= 0 && v12 < *(_DWORD*)(v6 + 632) && (v13 = *(_QWORD*)(*(_QWORD*)(v6 + 624) + 8i64 * v12)) != 0)
		{
			v14 = v1[4];
			v15 = *(_QWORD*)(v14 + 112);
			v39 = off_140B569F0;
			v41 = v1;
			v42 = 1;
			if (*(_QWORD*)(v14 + 120) >= v15)
				sub_14005E2C0((__int64)v1);
			v16 = v1[2];
			v17 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v16 + 8) = 5;
			*(_QWORD*)v16 = v17;
			v1[2] += 16i64;
			v18 = sub_1400578C0((__int64)v1);
			v19 = *(_QWORD*)(v13 + 16);
			v20 = 0i64;
			v21 = v18;
			v40 = v18;
			if (v19)
			{
				do
				{
					if (*(_QWORD*)(*(_QWORD*)(v13 + 8) + 8 * v20))
					{
						v22 = v1[4];
						v43 = off_140B569F0;
						v45 = v1;
						v23 = *(_QWORD*)(v22 + 112);
						v46 = 1;
						if (*(_QWORD*)(v22 + 120) >= v23)
							sub_14005E2C0((__int64)v1);
						v24 = v1[2];
						v25 = sub_14005C1B0((__int64)v1, 0, 0);
						*(_DWORD*)(v24 + 8) = 5;
						*(_QWORD*)v24 = v25;
						v1[2] += 16i64;
						v26 = sub_1400578C0((__int64)v1);
						v44 = v26;
						v27 = *(_QWORD*)(*(_QWORD*)(v13 + 8) + 8 * v20);
						(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v27 + 32i64))(v27, &v47);
						v28 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v26);
						v29 = v1[2];
						*(_QWORD*)v29 = *v28;
						*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
						v1[2] += 16i64;
						sub_1400F06F0((__int64)v1, v31, L"nIndex", v30 + 1);
						v1[2] -= 16i64;
						v32 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)(v13 + 8) + 8 * v20);
						if (v32)
							(**v32)(*(_QWORD*)(*(_QWORD*)(v13 + 8) + 8 * v20));
						if ((unsigned int)sub_140415D60(v1, v32))
						{
							sub_1400FB540((__int64)&v43);
							v1[2] -= 16i64;
						}
						if (v32)
							(*v32)[1](v32);
						sub_1400FB1D0((__int64)&v39);
						sub_1400579E0((__int64)v1, v33, v26);
					}
					++v20;
				} while (v20 < v19);
				v1 = v41;
				v21 = v40;
			}
			v34 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v21);
			v35 = v1[2];
			*(_QWORD*)v35 = *v34;
			v36 = *((unsigned int*)v34 + 2);
			*(_DWORD*)(v35 + 8) = v36;
			v1[2] += 16i64;
			sub_1400579E0((__int64)v1, v36, v37);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(v1[2] + 8i64) = 0;
			v1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
		return 1i64;
	}
}
// 1406994A5: variable 'v3' is possibly undefined
// 140699658: variable 'v31' is possibly undefined
// 140699635: variable 'v30' is possibly undefined
// 1406996BC: variable 'v33' is possibly undefined
// 14069970E: variable 'v37' is possibly undefined
// 140B34680: using guessed type wchar_t aNindex_2[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

