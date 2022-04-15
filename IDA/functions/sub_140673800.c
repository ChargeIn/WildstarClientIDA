#include "../winhttp.h"

//----- (0000000140673800) ----------------------------------------------------
__int64 __fastcall sub_140673800(__int64 a1, __int64 a2)
{
	__int64 v5; // rdi
	unsigned int v6; // r15d
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // r13
	__int64 v11; // r14
	__int64 v12; // rcx
	int v13; // esi
	int v14; // edi
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rbp
	int v18; // eax
	__int64 v19; // rdx
	int v20; // r14d
	int* v21; // rbx
	int v22; // eax
	__int64 v23; // rax
	__int64 v24; // rcx
	int v25; // ebx
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	__int64(__fastcall * *v32)(); // [rsp+20h] [rbp-48h] BYREF
	int v33; // [rsp+28h] [rbp-40h]
	__int64 v34; // [rsp+30h] [rbp-38h]
	int v35; // [rsp+38h] [rbp-30h]

	if (*(_QWORD*)(a1 + 160))
		return 0i64;
	if (!*(_DWORD*)(a1 + 1344))
		return 0i64;
	v5 = *(_QWORD*)(a1 + 168);
	if (!v5
		|| *(_DWORD*)(a1 + 1336)
		&& a1 != -192
		&& (unsigned int)sub_1407E6AF0((unsigned __int64*)(v5 + 8), a1 + 192, 0x138ui64))
	{
		return 0i64;
	}
	v6 = 0;
	v7 = sub_14020A7E0(*(_DWORD*)(v5 + 360));
	if (*(_DWORD*)(a1 + 1344))
		v8 = *(_QWORD*)(a1 + 168);
	else
		v8 = 0i64;
	v9 = sub_14020AC20(*(_DWORD*)(v8 + 364));
	v10 = v9;
	if (!v7 || !v9)
		return 0i64;
	v11 = *(_QWORD*)a1;
	v32 = off_140B569F0;
	v12 = *(_QWORD*)(v11 + 32);
	v13 = 0;
	v14 = 0;
	v15 = *(_QWORD*)(v12 + 112);
	v34 = v11;
	v35 = 1;
	if (*(_QWORD*)(v12 + 120) >= v15)
		sub_14005E2C0(v11);
	v16 = *(_QWORD*)(v11 + 16);
	v17 = 5i64;
	*(_QWORD*)v16 = sub_14005C1B0(v11, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)(v11 + 16) += 16i64;
	v18 = sub_1400578C0(v11);
	v20 = 0;
	v21 = (int*)(v10 + 4);
	v33 = v18;
	do
	{
		v22 = *v21;
		if (*v21 == 2)
			++v13;
		if (v22 == 4)
			++v14;
		if (v22 == 2)
		{
			v23 = sub_14020C9E0(v21[5]);
			if (v23)
			{
				v19 = *(unsigned int*)(v23 + 4);
				if ((_DWORD)v19)
				{
					v20 = 1;
					sub_14034BDD0(v24, v19);
					sub_1400FAD30((__int64)&v32);
				}
			}
		}
		++v21;
		--v17;
	} while (v17);
	v25 = v33;
	if (v20)
		sub_1400FB2A0(a2, (__int64)L"arStrNamedRandomProperties", v33);
	if (v13)
	{
		v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v28 = *(_QWORD*)(v27 + 16);
		*(_QWORD*)v28 = *v26;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v26 + 2);
		*(_QWORD*)(v27 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v28, L"nRandomProperties", v13);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if (v14)
	{
		v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v31 = *(_QWORD*)(v30 + 16);
		*(_QWORD*)v31 = *v29;
		*(_DWORD*)(v31 + 8) = *((_DWORD*)v29 + 2);
		*(_QWORD*)(v30 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v31, L"nCraftableProperties", v14);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if (v13 || v14)
		v6 = 1;
	if (v34)
		sub_1400579E0(v34, v19, v25);
	return v6;
}
// 14067396F: variable 'v24' is possibly undefined
// 1406739CD: variable 'v27' is possibly undefined
// 140673A1E: variable 'v30' is possibly undefined
// 140673A71: variable 'v19' is possibly undefined
// 140B2FD08: using guessed type wchar_t aNrandompropert[18];
// 140B2FD30: using guessed type wchar_t aNcraftableprop[21];
// 140B2FD90: using guessed type wchar_t aArstrnamedrand[27];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

