#include "../winhttp.h"

//----- (0000000140319720) ----------------------------------------------------
unsigned __int64 __fastcall sub_140319720(__int64 a1, unsigned int* a2, __int64 a3, __int64 a4)
{
	__int64 v6; // r9
	__int64 v7; // r9
	__int64 v8; // r9
	unsigned __int64 result; // rax
	__int64 v10; // r9
	__int64 v11; // r9
	__int64 v12; // r9
	unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

	switch (a2[26])
	{
	case 1u:
		return sub_14030A400(*(int**)(a1 + 32), a2[2], *(_DWORD**)(a1 + 24), a4, (char*)(a1 + 40));
	case 2u:
		sub_14030A400(*(int**)(a1 + 32), a2[8], *(_DWORD**)(a1 + 24), a4, (char*)(a1 + 44));
		sub_14030A400(*(int**)(a1 + 32), a2[2], &v13, v12, (char*)(a1 + 40));
		result = v13;
		**(_DWORD**)(a1 + 24) = v13;
		break;
	case 3u:
		sub_14030A400(*(int**)(a1 + 32), a2[14], *(_DWORD**)(a1 + 24), a4, (char*)(a1 + 48));
		sub_14030A400(*(int**)(a1 + 32), a2[8], &v13, v10, (char*)(a1 + 44));
		**(_DWORD**)(a1 + 24) = v13;
		sub_14030A400(*(int**)(a1 + 32), a2[2], &v13, v11, (char*)(a1 + 40));
		result = v13;
		**(_DWORD**)(a1 + 24) = v13;
		break;
	case 4u:
		sub_14030A400(*(int**)(a1 + 32), a2[20], *(_DWORD**)(a1 + 24), a4, 0i64);
		sub_14030A400(*(int**)(a1 + 32), a2[14], &v13, v6, (char*)(a1 + 48));
		**(_DWORD**)(a1 + 24) = v13;
		sub_14030A400(*(int**)(a1 + 32), a2[8], &v13, v7, (char*)(a1 + 44));
		**(_DWORD**)(a1 + 24) = v13;
		sub_14030A400(*(int**)(a1 + 32), a2[2], &v13, v8, (char*)(a1 + 40));
		result = v13;
		**(_DWORD**)(a1 + 24) = v13;
		break;
	}
	return result;
}
// 140319781: variable 'v6' is possibly undefined
// 1403197A5: variable 'v7' is possibly undefined
// 1403197C9: variable 'v8' is possibly undefined
// 140319811: variable 'v10' is possibly undefined
// 140319835: variable 'v11' is possibly undefined
// 14031987D: variable 'v12' is possibly undefined

