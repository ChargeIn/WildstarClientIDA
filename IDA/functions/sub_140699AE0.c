#include "../winhttp.h"

//----- (0000000140699AE0) ----------------------------------------------------
__int64 __fastcall sub_140699AE0(_QWORD* a1)
{
	__int64 v1; // rbp
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // r14
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	unsigned __int64 v11; // r15
	unsigned __int64 v12; // rbx
	int v13; // r10d
	__int64 v14; // rax
	__int64 v15; // rdi
	__int64 v16; // rax
	int v17; // esi
	_QWORD* v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rdx
	int v21; // r11d
	__int64 v22; // rdi
	_QWORD* v23; // rax
	__int64 v24; // rdx
	int v25; // r11d
	__int64 v26; // rdx
	_QWORD* v27; // rax
	__int64 v28; // r8
	__int64 v29; // rdx
	int v30; // r10d
	__int64(__fastcall * *v32)(); // [rsp+20h] [rbp-38h] BYREF
	int v33; // [rsp+28h] [rbp-30h]
	__int64 v34; // [rsp+30h] [rbp-28h]
	int v35; // [rsp+38h] [rbp-20h]

	v1 = (__int64)a1;
	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0)
	{
		v6 = *(_QWORD*)(v1 + 32);
		v32 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v34 = v1;
		v35 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(v1);
		v8 = *(_QWORD*)(v1 + 16);
		v9 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v1 + 16) += 16i64;
		v10 = sub_1400578C0(v1);
		v11 = *(_QWORD*)(v5 + 656);
		v12 = 0i64;
		v13 = v10;
		v33 = v10;
		if (v11)
		{
			do
			{
				v14 = *(_QWORD*)(v5 + 648);
				if (*(_DWORD*)(v14 + 8 * v12) && *(_DWORD*)(v14 + 8 * v12 + 4))
				{
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v15 = *(_QWORD*)(v1 + 16);
					v16 = sub_14005C1B0(v1, 0, 0);
					*(_DWORD*)(v15 + 8) = 5;
					*(_QWORD*)v15 = v16;
					*(_QWORD*)(v1 + 16) += 16i64;
					v17 = sub_1400578C0(v1);
					v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
					v19 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v19 = *v18;
					*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F06F0(v1, v20, L"nItemId", v21);
					*(_QWORD*)(v1 + 16) -= 16i64;
					v22 = *(_QWORD*)(v1 + 16);
					v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
					*(_QWORD*)v22 = *v23;
					*(_DWORD*)(v22 + 8) = *((_DWORD*)v23 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F06F0(v1, v24, L"nCount", v25);
					*(_QWORD*)(v1 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v32);
					sub_1400579E0(v1, v26, v17);
				}
				++v12;
			} while (v12 < v11);
			v1 = v34;
			v13 = v33;
		}
		v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v13);
		v28 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v28 = *v27;
		v29 = *((unsigned int*)v27 + 2);
		*(_DWORD*)(v28 + 8) = v29;
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v29, v30);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 1i64;
	}
}
// 140699B17: variable 'v3' is possibly undefined
// 140699C4F: variable 'v20' is possibly undefined
// 140699C4F: variable 'v21' is possibly undefined
// 140699C9D: variable 'v24' is possibly undefined
// 140699C9D: variable 'v25' is possibly undefined
// 140699CB9: variable 'v26' is possibly undefined
// 140699D0D: variable 'v30' is possibly undefined
// 140B34660: using guessed type wchar_t aNitemid[8];
// 140B34670: using guessed type wchar_t aNcount_44[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

