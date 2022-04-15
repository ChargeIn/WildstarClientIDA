#include "../winhttp.h"

//----- (0000000140494F70) ----------------------------------------------------
__int64 __fastcall sub_140494F70(__int64 a1)
{
	__int64 v1; // r11
	_QWORD* v2; // rbx
	unsigned int v3; // r8d
	__int64 v4; // rax
	_QWORD* v6; // rsi
	__int64 v7; // rdx
	int v8; // ecx
	bool v9; // cl
	int v10; // ecx
	bool v11; // cl
	__int64 v12; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v15; // r8
	unsigned int v16; // r9d
	__int64 v17; // rax
	_QWORD* v18; // r10
	__int64 v19; // rcx
	int v20; // edx
	bool v21; // dl
	int v22; // ecx
	bool v23; // cl
	_QWORD* v24; // rbx
	__int64 v25; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	_QWORD* v28; // r8
	unsigned int v29; // r9d
	__int64 v30; // rax
	_QWORD* v31; // r10
	__int64 v32; // rcx
	int v33; // edx
	bool v34; // dl
	int v35; // ecx
	bool v36; // cl
	_QWORD* v37; // rbx
	__int64 v38; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	__int64 v41; // rax
	__int64 v42; // rbx
	__int64 v43; // rax
	__int64 jj; // rax
	__int64 kk; // rax
	__int64 v46; // rax
	__int64 v47; // rbx
	__int64 v48; // rax
	__int64 mm; // rax
	__int64 nn; // rax
	signed int v51; // edx
	__int64 v52; // r8
	__int64 result; // rax
	__int64 v54; // rcx
	_QWORD* v55; // [rsp+28h] [rbp-20h]
	_QWORD* v56; // [rsp+28h] [rbp-20h]

	v1 = qword_140C65968;
	v2 = *(_QWORD**)(qword_140C65968 + 272);
	v3 = **(_DWORD**)(a1 + 8);
	v4 = v2[1];
	v6 = v2;
	v7 = v4;
	if (v4)
	{
		do
		{
			v8 = *(_DWORD*)(v7 + 32);
			if (v8 == 19)
				v9 = v3 < *(_DWORD*)(v7 + 36);
			else
				v9 = v8 > 19;
			if (v9)
			{
				v6 = (_QWORD*)v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
			else
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
		} while (v7);
		do
		{
			v10 = *(_DWORD*)(v4 + 32);
			if (v10 == 19)
				v11 = *(_DWORD*)(v4 + 36) < v3;
			else
				v11 = v10 < 19;
			if (v11)
			{
				v4 = *(_QWORD*)(v4 + 24);
			}
			else
			{
				v2 = (_QWORD*)v4;
				v4 = *(_QWORD*)(v4 + 16);
			}
		} while (v4);
	}
	if (v2 != v6)
	{
		do
		{
			sub_140033260((__int64*)(a1 + 112), v2 + 5);
			v12 = v2[3];
			if (v12)
			{
				v2 = (_QWORD*)v2[3];
				for (i = *(_QWORD**)(v12 + 16); i; i = (_QWORD*)i[2])
					v2 = i;
			}
			else
			{
				for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = (_QWORD*)j;
				if (v2[3] != j)
					v2 = (_QWORD*)j;
			}
		} while (v2 != v6);
		v1 = qword_140C65968;
	}
	v15 = *(_QWORD**)(v1 + 272);
	v16 = **(_DWORD**)(a1 + 8);
	v17 = v15[1];
	v18 = v15;
	v19 = v17;
	if (v17)
	{
		do
		{
			v20 = *(_DWORD*)(v19 + 32);
			if (v20 == 27)
				v21 = v16 < *(_DWORD*)(v19 + 36);
			else
				v21 = v20 > 27;
			if (v21)
			{
				v18 = (_QWORD*)v19;
				v19 = *(_QWORD*)(v19 + 16);
			}
			else
			{
				v19 = *(_QWORD*)(v19 + 24);
			}
		} while (v19);
		do
		{
			v22 = *(_DWORD*)(v17 + 32);
			if (v22 == 27)
				v23 = *(_DWORD*)(v17 + 36) < v16;
			else
				v23 = v22 < 27;
			if (v23)
			{
				v17 = *(_QWORD*)(v17 + 24);
			}
			else
			{
				v15 = (_QWORD*)v17;
				v17 = *(_QWORD*)(v17 + 16);
			}
		} while (v17);
	}
	v55 = v18;
	if (v15 != v18)
	{
		v24 = v15;
		do
		{
			sub_140033260((__int64*)(a1 + 112), v24 + 5);
			v25 = v24[3];
			if (v25)
			{
				v24 = (_QWORD*)v24[3];
				for (k = *(_QWORD**)(v25 + 16); k; k = (_QWORD*)k[2])
					v24 = k;
			}
			else
			{
				for (m = v24[1]; v24 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v24 = (_QWORD*)m;
				if (v24[3] != m)
					v24 = (_QWORD*)m;
			}
		} while (v24 != v55);
		v1 = qword_140C65968;
	}
	v28 = *(_QWORD**)(v1 + 272);
	v29 = **(_DWORD**)(a1 + 8);
	v30 = v28[1];
	v31 = v28;
	v32 = v30;
	if (v30)
	{
		do
		{
			v33 = *(_DWORD*)(v32 + 32);
			if (v33 == 21)
				v34 = v29 < *(_DWORD*)(v32 + 36);
			else
				v34 = v33 > 21;
			if (v34)
			{
				v31 = (_QWORD*)v32;
				v32 = *(_QWORD*)(v32 + 16);
			}
			else
			{
				v32 = *(_QWORD*)(v32 + 24);
			}
		} while (v32);
		do
		{
			v35 = *(_DWORD*)(v30 + 32);
			if (v35 == 21)
				v36 = *(_DWORD*)(v30 + 36) < v29;
			else
				v36 = v35 < 21;
			if (v36)
			{
				v30 = *(_QWORD*)(v30 + 24);
			}
			else
			{
				v28 = (_QWORD*)v30;
				v30 = *(_QWORD*)(v30 + 16);
			}
		} while (v30);
	}
	v56 = v31;
	if (v28 != v31)
	{
		v37 = v28;
		do
		{
			sub_140033260((__int64*)(a1 + 112), v37 + 5);
			v38 = v37[3];
			if (v38)
			{
				v37 = (_QWORD*)v37[3];
				for (n = *(_QWORD**)(v38 + 16); n; n = (_QWORD*)n[2])
					v37 = n;
			}
			else
			{
				for (ii = v37[1]; v37 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v37 = (_QWORD*)ii;
				if (v37[3] != ii)
					v37 = (_QWORD*)ii;
			}
		} while (v37 != v56);
	}
	v41 = *(_QWORD*)(a1 + 24);
	v42 = *(_QWORD*)(v41 + 16);
	if (v42 != v41)
	{
		do
		{
			sub_140495BE0(*(__int64**)(v42 + 40));
			v43 = *(_QWORD*)(v42 + 24);
			if (v43)
			{
				v42 = *(_QWORD*)(v42 + 24);
				for (jj = *(_QWORD*)(v43 + 16); jj; jj = *(_QWORD*)(jj + 16))
					v42 = jj;
			}
			else
			{
				for (kk = *(_QWORD*)(v42 + 8); v42 == *(_QWORD*)(kk + 24); kk = *(_QWORD*)(kk + 8))
					v42 = kk;
				if (*(_QWORD*)(v42 + 24) != kk)
					v42 = kk;
			}
		} while (v42 != *(_QWORD*)(a1 + 24));
	}
	v46 = *(_QWORD*)(a1 + 72);
	v47 = *(_QWORD*)(v46 + 16);
	if (v47 != v46)
	{
		do
		{
			sub_140495BE0(*(__int64**)(v47 + 40));
			v48 = *(_QWORD*)(v47 + 24);
			if (v48)
			{
				v47 = *(_QWORD*)(v47 + 24);
				for (mm = *(_QWORD*)(v48 + 16); mm; mm = *(_QWORD*)(mm + 16))
					v47 = mm;
			}
			else
			{
				for (nn = *(_QWORD*)(v47 + 8); v47 == *(_QWORD*)(nn + 24); nn = *(_QWORD*)(nn + 8))
					v47 = nn;
				if (*(_QWORD*)(v47 + 24) != nn)
					v47 = nn;
			}
		} while (v47 != *(_QWORD*)(a1 + 72));
	}
	v51 = 0;
	v52 = 0i64;
	do
	{
		if (v52 >= 3 || (result = *(_QWORD*)(a1 + 8), !*(_DWORD*)(result + 4 * v52 + 4)))
		{
			v54 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64);
			result = v54;
			if (v54)
			{
				do
				{
					if (v51 >= *(_DWORD*)(result + 32))
						result = *(_QWORD*)(result + 24);
					else
						result = *(_QWORD*)(result + 16);
				} while (result);
				do
				{
					if (*(_DWORD*)(v54 + 32) < v51)
						v54 = *(_QWORD*)(v54 + 24);
					else
						v54 = *(_QWORD*)(v54 + 16);
				} while (v54);
			}
		}
		++v51;
		++v52;
	} while ((unsigned int)v51 < 3);
	return result;
}
// 140494FD4: conditional instruction was optimized away because rax.8!=0
// 1404950BD: conditional instruction was optimized away because rax.8!=0
// 1404951BD: conditional instruction was optimized away because rax.8!=0
// 14049538E: conditional instruction was optimized away because rcx.8!=0
// 140C65968: using guessed type __int64 qword_140C65968;

