#include "../winhttp.h"

//----- (000000014015F180) ----------------------------------------------------
char __fastcall sub_14015F180(__int64 a1)
{
	unsigned __int64 v2; // r8
	int v3; // r11d
	int v4; // edi
	unsigned int v5; // ecx
	__int64 v6; // rax
	__int64 v7; // rdx
	int v8; // eax
	__int64 v9; // r10
	int v10; // r9d
	int v11; // edx
	__int64 i; // r8
	int v13; // eax
	int v14; // r15d
	int v15; // r14d
	int v16; // r13d
	int v17; // r12d
	int v18; // ebp
	int* v19; // rax
	__int64 v20; // rsi
	__int64 v21; // rdx
	__int64 v22; // rcx
	int v23; // eax
	int v24; // eax
	int v25; // r14d
	int* v26; // rax
	__int64 v27; // rsi
	__int64 v28; // rdx
	__int64 v29; // rax
	int v30; // r14d
	int v31; // ebp
	int* v32; // rax
	__int64 v33; // rsi
	__int64 v34; // rdx
	__int64 v35; // rax
	int v36; // ebp
	int* v37; // rax
	__int64 v38; // rsi
	__int64 v39; // rdx
	int v40; // ecx
	int v41; // esi
	int* v42; // rax
	__int64 v43; // rdi
	__int64 v44; // rdx
	__int64 v45; // rcx
	int v46; // eax
	int v47; // eax
	int v48; // r12d
	int* v49; // rax
	__int64 v50; // rdi
	__int64 v51; // rdx
	__int64 v52; // rax
	int v53; // esi
	int* v54; // rax
	__int64 v55; // rdi
	__int64 v56; // rdx
	__int64 v57; // rax
	float v58; // xmm6_4
	int v59; // esi
	__int64 v60; // rax
	int* v61; // rax
	__int64 v62; // rdi
	__int64 v63; // rdx

	v2 = *(_QWORD*)(a1 + 1144);
	v3 = 0;
	v4 = 0;
	v5 = 0;
	if (v2)
	{
		v6 = 0i64;
		do
		{
			v7 = *(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8 * v6);
			if (*(_BYTE*)v7)
				v8 = *(_DWORD*)(v7 + 4);
			else
				v8 = 0;
			++v5;
			v3 += v8;
			v6 = v5;
		} while (v5 < v2);
	}
	v9 = *(_QWORD*)(a1 + 664);
	if ((v9 & 2) != 0)
		v4 = *(_DWORD*)(a1 + 1024);
	if ((v9 & 4) != 0)
	{
		v10 = *(_DWORD*)(a1 + 1160);
		v11 = 0;
		for (i = 0i64; v11 < v10; ++i)
		{
			if (i < 0 || v11 >= v10)
				v13 = *(_DWORD*)(a1 + 1028);
			else
				v13 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8 * i) + 12i64);
			++v11;
			v4 += v13;
		}
	}
	else
	{
		v4 += *(_DWORD*)(a1 + 1028) * *(_DWORD*)(a1 + 1160);
	}
	v14 = *(_DWORD*)(a1 + 716);
	v15 = *(_DWORD*)(a1 + 724);
	v16 = *(_DWORD*)(a1 + 720);
	v17 = *(_DWORD*)(a1 + 728);
	v18 = 0;
	if (v3 + v14 - v15 > 0)
		v18 = v3 + *(_DWORD*)(a1 + 716) - v15;
	if ((*(_BYTE*)(a1 + 656) & 4) != 0 && *(_QWORD*)(a1 + 48))
	{
		if (!*(_QWORD*)(a1 + 464))
		{
			v19 = sub_14018B280(1400i64, 0);
			v20 = (__int64)v19;
			if (v19)
			{
				sub_1400C35F0((__int64)v19);
				sub_1400C35F0(v20 + 416);
				sub_1400C35F0(v20 + 832);
				sub_1401095E0(v20 + 1248);
				sub_1400C41E0(v20);
			}
			else
			{
				v20 = 0i64;
			}
			v21 = *(_QWORD*)(a1 + 48) + 408i64;
			*(_QWORD*)(a1 + 464) = v20;
			sub_1400C4330(v20, v21, 0);
		}
		v22 = *(_QWORD*)(a1 + 464);
		v23 = *(_DWORD*)(v22 + 1300);
		*(_DWORD*)(v22 + 1296) = v18;
		if (v23 < v18)
			v18 = v23;
		v24 = 0;
		if (v18 > 0)
			v24 = v18;
		*(_BYTE*)(v22 + 1392) |= 0x10u;
		*(_DWORD*)(v22 + 1300) = v24;
	}
	v25 = v15 - v14;
	if ((*(_BYTE*)(a1 + 656) & 4) != 0 && *(_QWORD*)(a1 + 48))
	{
		if (!*(_QWORD*)(a1 + 464))
		{
			v26 = sub_14018B280(1400i64, 0);
			v27 = (__int64)v26;
			if (v26)
			{
				sub_1400C35F0((__int64)v26);
				sub_1400C35F0(v27 + 416);
				sub_1400C35F0(v27 + 832);
				sub_1401095E0(v27 + 1248);
				sub_1400C41E0(v27);
			}
			else
			{
				v27 = 0i64;
			}
			v28 = *(_QWORD*)(a1 + 48) + 408i64;
			*(_QWORD*)(a1 + 464) = v27;
			sub_1400C4330(v27, v28, 0);
		}
		v29 = *(_QWORD*)(a1 + 464);
		*(_BYTE*)(v29 + 1392) |= 0x10u;
		*(_DWORD*)(v29 + 1304) = v25;
	}
	v30 = 1;
	v31 = 8 * *(_DWORD*)(a1 + 1028);
	if ((*(_BYTE*)(a1 + 656) & 4) != 0 && *(_QWORD*)(a1 + 48))
	{
		if (!*(_QWORD*)(a1 + 464))
		{
			v32 = sub_14018B280(1400i64, 0);
			v33 = (__int64)v32;
			if (v32)
			{
				sub_1400C35F0((__int64)v32);
				sub_1400C35F0(v33 + 416);
				sub_1400C35F0(v33 + 832);
				sub_1401095E0(v33 + 1248);
				sub_1400C41E0(v33);
			}
			else
			{
				v33 = 0i64;
			}
			v34 = *(_QWORD*)(a1 + 48) + 408i64;
			*(_QWORD*)(a1 + 464) = v33;
			sub_1400C4330(v33, v34, 0);
		}
		v35 = *(_QWORD*)(a1 + 464);
		if (v31 <= 0)
			v31 = 1;
		*(float*)(v35 + 816) = 1.0 / (float)v31;
		*(float*)(v35 + 400) = 1.0 / (float)v31;
	}
	v36 = *(_DWORD*)(a1 + 1028);
	if ((*(_BYTE*)(a1 + 656) & 4) != 0 && *(_QWORD*)(a1 + 48))
	{
		if (!*(_QWORD*)(a1 + 464))
		{
			v37 = sub_14018B280(1400i64, 0);
			v38 = (__int64)v37;
			if (v37)
			{
				sub_1400C35F0((__int64)v37);
				sub_1400C35F0(v38 + 416);
				sub_1400C35F0(v38 + 832);
				sub_1401095E0(v38 + 1248);
				sub_1400C41E0(v38);
			}
			else
			{
				v38 = 0i64;
			}
			v39 = *(_QWORD*)(a1 + 48) + 408i64;
			*(_QWORD*)(a1 + 464) = v38;
			sub_1400C4330(v38, v39, 0);
		}
		v40 = 1;
		if (v36 > 1)
			v40 = v36;
		*(_DWORD*)(*(_QWORD*)(a1 + 464) + 1308i64) = v40;
	}
	v41 = 0;
	if (v4 + v16 - v17 > 0)
		v41 = v4 + v16 - v17;
	if ((*(_BYTE*)(a1 + 656) & 2) != 0 && *(_QWORD*)(a1 + 48))
	{
		if (!*(_QWORD*)(a1 + 472))
		{
			v42 = sub_14018B280(1400i64, 0);
			v43 = (__int64)v42;
			if (v42)
			{
				sub_1400C35F0((__int64)v42);
				sub_1400C35F0(v43 + 416);
				sub_1400C35F0(v43 + 832);
				sub_1401095E0(v43 + 1248);
				sub_1400C41E0(v43);
			}
			else
			{
				v43 = 0i64;
			}
			v44 = *(_QWORD*)(a1 + 48) + 168i64;
			*(_QWORD*)(a1 + 472) = v43;
			sub_1400C4330(v43, v44, 1);
		}
		v45 = *(_QWORD*)(a1 + 472);
		v46 = *(_DWORD*)(v45 + 1300);
		*(_DWORD*)(v45 + 1296) = v41;
		if (v46 < v41)
			v41 = v46;
		v47 = 0;
		if (v41 > 0)
			v47 = v41;
		*(_BYTE*)(v45 + 1392) |= 0x10u;
		*(_DWORD*)(v45 + 1300) = v47;
	}
	v48 = v17 - v16;
	if ((*(_BYTE*)(a1 + 656) & 2) != 0 && *(_QWORD*)(a1 + 48))
	{
		if (!*(_QWORD*)(a1 + 472))
		{
			v49 = sub_14018B280(1400i64, 0);
			v50 = (__int64)v49;
			if (v49)
			{
				sub_1400C35F0((__int64)v49);
				sub_1400C35F0(v50 + 416);
				sub_1400C35F0(v50 + 832);
				sub_1401095E0(v50 + 1248);
				sub_1400C41E0(v50);
			}
			else
			{
				v50 = 0i64;
			}
			v51 = *(_QWORD*)(a1 + 48) + 168i64;
			*(_QWORD*)(a1 + 472) = v50;
			sub_1400C4330(v50, v51, 1);
		}
		v52 = *(_QWORD*)(a1 + 472);
		*(_BYTE*)(v52 + 1392) |= 0x10u;
		*(_DWORD*)(v52 + 1304) = v48;
	}
	v53 = 8 * *(_DWORD*)(a1 + 1028);
	if ((*(_BYTE*)(a1 + 656) & 2) != 0 && *(_QWORD*)(a1 + 48))
	{
		if (!*(_QWORD*)(a1 + 472))
		{
			v54 = sub_14018B280(1400i64, 0);
			v55 = (__int64)v54;
			if (v54)
			{
				sub_1400C35F0((__int64)v54);
				sub_1400C35F0(v55 + 416);
				sub_1400C35F0(v55 + 832);
				sub_1401095E0(v55 + 1248);
				sub_1400C41E0(v55);
			}
			else
			{
				v55 = 0i64;
			}
			v56 = *(_QWORD*)(a1 + 48) + 168i64;
			*(_QWORD*)(a1 + 472) = v55;
			sub_1400C4330(v55, v56, 1);
		}
		v57 = *(_QWORD*)(a1 + 472);
		if (v53 <= 0)
			v53 = 1;
		v58 = 1.0 / (float)v53;
		*(float*)(v57 + 816) = v58;
		*(float*)(v57 + 400) = v58;
	}
	v59 = *(_DWORD*)(a1 + 1028);
	LOBYTE(v60) = *(_BYTE*)(a1 + 656) >> 1;
	if ((*(_BYTE*)(a1 + 656) & 2) != 0 && *(_QWORD*)(a1 + 48))
	{
		if (!*(_QWORD*)(a1 + 472))
		{
			v61 = sub_14018B280(1400i64, 0);
			v62 = (__int64)v61;
			if (v61)
			{
				sub_1400C35F0((__int64)v61);
				sub_1400C35F0(v62 + 416);
				sub_1400C35F0(v62 + 832);
				sub_1401095E0(v62 + 1248);
				sub_1400C41E0(v62);
			}
			else
			{
				v62 = 0i64;
			}
			v63 = *(_QWORD*)(a1 + 48) + 168i64;
			*(_QWORD*)(a1 + 472) = v62;
			sub_1400C4330(v62, v63, 1);
		}
		v60 = *(_QWORD*)(a1 + 472);
		if (v59 > 1)
			v30 = v59;
		*(_DWORD*)(v60 + 1308) = v30;
	}
	return v60;
}
// 14015F21D: conditional instruction was optimized away because r10.1!=0
// 14015F287: conditional instruction was optimized away because ebp.4>=0
// 14015F580: conditional instruction was optimized away because esi.4>=0

