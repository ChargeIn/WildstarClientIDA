#include "../winhttp.h"

//----- (00000001405D3700) ----------------------------------------------------
__int64 __fastcall sub_1405D3700(__int64 a1, int a2, int a3, int a4, int a5)
{
	int v9; // xmm0_4
	__int64* v10; // r8
	int v11; // eax
	unsigned int v12; // edx
	int v13; // ecx
	int v14; // ecx
	int v15; // xmm0_4
	int v16; // eax
	unsigned int v17; // xmm0_4
	int v18; // xmm1_4
	unsigned int v19; // xmm0_4
	__int64 v21; // [rsp+30h] [rbp-20h] BYREF
	unsigned __int64 v22; // [rsp+38h] [rbp-18h]
	__int64 v23; // [rsp+40h] [rbp-10h]
	int v24; // [rsp+70h] [rbp+20h] BYREF

	if (!*(_DWORD*)(a1 + 1184))
	{
		if (*(_DWORD*)(a1 + 848) == 2 && *(_DWORD*)(a1 + 872))
		{
			v9 = *(_DWORD*)(a1 + 876);
			v10 = &v21;
			v21 = 0i64;
			LODWORD(v22) = 0;
			v11 = *(_DWORD*)(a1 + 864);
			LODWORD(v22) = v9;
			LODWORD(v21) = v11;
			v12 = 1822;
			HIDWORD(v21) = *(_DWORD*)(a1 + 868);
		LABEL_11:
			sub_1403F4900(qword_140C65898, v12, (__int64)v10);
			return sub_1405D3870(a1, a2, a3, a4, a5);
		}
		v13 = *(_DWORD*)(a1 + 896);
		if (!v13)
		{
			v17 = *(_DWORD*)(a1 + 912);
			v18 = *(_DWORD*)(a1 + 916);
			v22 = 0i64;
			v23 = 0i64;
			v21 = v17;
			v19 = *(_DWORD*)(a1 + 920);
			HIDWORD(v21) = v18;
			v10 = &v21;
			v12 = 1821;
			v22 = __PAIR64__(*(_DWORD*)(a1 + 928), v19);
			v23 = *(_QWORD*)(a1 + 932);
			goto LABEL_11;
		}
		v14 = v13 - 1;
		if (!v14)
		{
			v10 = (__int64*)&v24;
			v12 = 1823;
			v24 = *(_DWORD*)(a1 + 912);
			goto LABEL_11;
		}
		if (v14 == 1)
		{
			v15 = *(_DWORD*)(a1 + 924);
			v10 = &v21;
			v21 = 0i64;
			LODWORD(v22) = 0;
			v16 = *(_DWORD*)(a1 + 912);
			LODWORD(v22) = v15;
			LODWORD(v21) = v16;
			v12 = 1822;
			HIDWORD(v21) = *(_DWORD*)(a1 + 916);
			goto LABEL_11;
		}
	}
	return sub_1405D3870(a1, a2, a3, a4, a5);
}
// 140C65898: using guessed type __int64 qword_140C65898;

