#include "../winhttp.h"

//----- (00000001402D2E30) ----------------------------------------------------
__int64 __fastcall sub_1402D2E30(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rbp
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rdx
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rax
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rdx
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64 v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rdx
	__int64 v39; // rax
	__int64 v40; // rax
	__int64 v41; // rdx
	__int64 v42; // rcx
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rdx
	_QWORD* v47; // rcx

	if (*(_DWORD*)a3 != 1396983110)
		return 2685403137i64;
	if (*(_DWORD*)(a3 + 4) != 30)
		return 2685403138i64;
	v7 = *(_QWORD*)(a3 + 40);
	v8 = v7 + a2;
	if ((unsigned __int64)(v7 + a2) < *a1)
		return 2147500037i64;
	v9 = *(unsigned int*)(a3 + 32);
	if ((unsigned __int64)(a2 + v7 + 2 * v9) > a1[1])
		return 2147500037i64;
	v10 = 0i64;
	v11 = 0i64;
	if ((_DWORD)v9)
		v11 = v8;
	*(_QWORD*)(a3 + 40) = v11;
	v12 = *(_QWORD*)(a3 + 64);
	if ((unsigned __int64)(v12 + a2) < *a1)
		return 2147500037i64;
	v13 = *(unsigned int*)(a3 + 56);
	if ((unsigned __int64)(a2 + v12 + 12 * v13) > a1[1])
		return 2147500037i64;
	v14 = 0i64;
	if ((_DWORD)v13)
		v14 = v12 + a2;
	*(_QWORD*)(a3 + 64) = v14;
	v15 = *(_QWORD*)(a3 + 80);
	if ((unsigned __int64)(v15 + a2) < *a1)
		return 2147500037i64;
	v16 = *(unsigned int*)(a3 + 72);
	if ((unsigned __int64)(a2 + v15 + 20 * v16) > a1[1])
		return 2147500037i64;
	v17 = 0i64;
	if ((_DWORD)v16)
		v17 = v15 + a2;
	*(_QWORD*)(a3 + 80) = v17;
	v18 = *(_QWORD*)(a3 + 96);
	v19 = v18 + a2;
	if ((unsigned __int64)(v18 + a2) < *a1)
		return 2147500037i64;
	v20 = *(unsigned int*)(a3 + 88);
	if ((unsigned __int64)(a2 + v18 + 4 * v20) > a1[1])
		return 2147500037i64;
	v21 = 0i64;
	if ((_DWORD)v20)
		v21 = v19;
	*(_QWORD*)(a3 + 96) = v21;
	v22 = *(_QWORD*)(a3 + 112);
	v23 = v22 + a2;
	if ((unsigned __int64)(v22 + a2) < *a1)
		return 2147500037i64;
	v24 = *(unsigned int*)(a3 + 104);
	if ((unsigned __int64)(a2 + v22 + 2 * v24) > a1[1])
		return 2147500037i64;
	v25 = 0i64;
	if ((_DWORD)v24)
		v25 = v23;
	*(_QWORD*)(a3 + 112) = v25;
	v26 = *(_QWORD*)(a3 + 128);
	if ((unsigned __int64)(v26 + a2) < *a1 || a2 + v26 + 28 * (unsigned __int64)*(unsigned int*)(a3 + 120) > a1[1])
		return 2147500037i64;
	v27 = 0i64;
	if (*(_DWORD*)(a3 + 120))
		v27 = v26 + a2;
	*(_QWORD*)(a3 + 128) = v27;
	result = sub_1402D2D00(a1, a2, (unsigned int*)(a3 + 136));
	if ((int)result >= 0)
	{
		v28 = *(_QWORD*)(a3 + 192);
		v29 = v28 + a2;
		if ((unsigned __int64)(v28 + a2) < *a1)
			return 2147500037i64;
		v30 = *(unsigned int*)(a3 + 184);
		if ((unsigned __int64)(a2 + v28 + 4 * v30) > a1[1])
			return 2147500037i64;
		v31 = 0i64;
		if ((_DWORD)v30)
			v31 = v29;
		*(_QWORD*)(a3 + 192) = v31;
		v32 = *(_QWORD*)(a3 + 208);
		v33 = v32 + a2;
		if ((unsigned __int64)(v32 + a2) < *a1)
			return 2147500037i64;
		v34 = *(unsigned int*)(a3 + 200);
		if ((unsigned __int64)(a2 + v32 + 4 * v34) > a1[1])
			return 2147500037i64;
		v35 = 0i64;
		if ((_DWORD)v34)
			v35 = v33;
		*(_QWORD*)(a3 + 208) = v35;
		result = sub_1402D4B30(a1, a2, (unsigned int*)(a3 + 216));
		if ((int)result >= 0)
		{
			v36 = *(_QWORD*)(a3 + 240);
			v37 = v36 + a2;
			if ((unsigned __int64)(v36 + a2) >= *a1)
			{
				v38 = *(unsigned int*)(a3 + 232);
				if ((unsigned __int64)(a2 + v36 + 4 * v38) <= a1[1])
				{
					v39 = 0i64;
					if ((_DWORD)v38)
						v39 = v37;
					*(_QWORD*)(a3 + 240) = v39;
					v40 = *(_QWORD*)(a3 + 256);
					v41 = v40 + a2;
					if ((unsigned __int64)(v40 + a2) >= *a1)
					{
						v42 = *(unsigned int*)(a3 + 248);
						if ((unsigned __int64)(a2 + v40 + 4 * v42) <= a1[1])
						{
							v43 = 0i64;
							if ((_DWORD)v42)
								v43 = v41;
							*(_QWORD*)(a3 + 256) = v43;
							v44 = *(_QWORD*)(a3 + 272);
							if ((unsigned __int64)(v44 + a2) >= *a1)
							{
								v45 = *(unsigned int*)(a3 + 264);
								if ((unsigned __int64)(a2 + v44 + 4 * v45) <= a1[1])
								{
									if ((_DWORD)v45)
										v10 = v44 + a2;
									*(_QWORD*)(a3 + 272) = v10;
									result = sub_1402D4BF0(a1, a2, (unsigned int*)(a3 + 320));
									if ((int)result >= 0)
									{
										result = sub_1402D2D90(a1, a2, (unsigned int*)(a3 + 336));
										if ((int)result >= 0)
										{
											result = sub_1402D4CB0(v47, v46, (unsigned int*)(a3 + 384));
											if ((int)result >= 0)
											{
												result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 400));
												if ((int)result >= 0)
													return 0i64;
											}
										}
									}
									return result;
								}
							}
						}
					}
				}
			}
			return 2147500037i64;
		}
	}
	return result;
}
// 1402D3147: variable 'v47' is possibly undefined
// 1402D3147: variable 'v46' is possibly undefined

