#include "../winhttp.h"

//----- (00000001404F69B0) ----------------------------------------------------
__int64 __fastcall sub_1404F69B0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // r14
	__int64 v4; // rcx
	int v5; // r13d
	__int64 v7; // rdi
	__int64 v8; // rbx
	__int64* v9; // r12
	__int64 v10; // rax
	void(__fastcall * **v11)(_QWORD); // rcx
	int v12; // esi
	void(__fastcall * **v13)(_QWORD); // rcx
	__int64 v14; // rcx
	__int64* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // r13
	int v18; // eax
	int v19; // esi
	int v20; // eax
	__int64 v21; // r14
	unsigned __int64 i; // r13
	__int64 v23; // rsi
	__int64 v24; // rax
	__int64 v25; // r8
	__int64 v26; // r8
	void(__fastcall * **v27)(_QWORD); // rcx
	int v28; // eax
	__int64 v29; // rcx
	int v30; // eax
	_QWORD* v31; // rcx
	__int64 v32; // r12
	__int64 v33; // rcx
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64* v39; // rcx
	__int64 v40; // rcx
	__int64 v41; // rcx
	__int64 v42; // rcx
	__int64 v43; // rdx
	__int64 v44; // rcx
	int v45; // eax
	__int64 v46; // rcx
	int v47; // eax
	__int64 v48; // rdx
	__int64 v50; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v51; // [rsp+40h] [rbp-C8h] BYREF
	int v52; // [rsp+48h] [rbp-C0h]
	int v53; // [rsp+4Ch] [rbp-BCh]
	__int64* v54; // [rsp+50h] [rbp-B8h]
	__int64 v55; // [rsp+58h] [rbp-B0h]
	__int64 v56; // [rsp+60h] [rbp-A8h]
	__int64 v57[3]; // [rsp+68h] [rbp-A0h] BYREF
	int v58; // [rsp+80h] [rbp-88h]
	int v59[16]; // [rsp+84h] [rbp-84h] BYREF
	__int64 v60; // [rsp+C4h] [rbp-44h]
	__int64 v61; // [rsp+CCh] [rbp-3Ch]
	__int64 v62; // [rsp+D4h] [rbp-34h]
	__int64 v63; // [rsp+E0h] [rbp-28h]
	__int64 v64; // [rsp+E8h] [rbp-20h]
	__int64 v65; // [rsp+F0h] [rbp-18h]
	__int64 v66; // [rsp+F8h] [rbp-10h]
	__int64 v67; // [rsp+100h] [rbp-8h]
	__int64 v68; // [rsp+108h] [rbp+0h]
	int v69; // [rsp+110h] [rbp+8h]
	__int64 v70; // [rsp+118h] [rbp+10h]
	__int64 v71; // [rsp+120h] [rbp+18h]
	__int64 v72; // [rsp+128h] [rbp+20h]
	__int64 v73; // [rsp+130h] [rbp+28h]
	__int64 v74; // [rsp+138h] [rbp+30h]
	__int64 v75; // [rsp+140h] [rbp+38h]
	__int64 v76; // [rsp+148h] [rbp+40h]
	int v77; // [rsp+150h] [rbp+48h]

	v3 = a1;
	v56 = a1;
	v4 = *(_QWORD*)(a1 + 2328);
	v5 = a3;
	v53 = a3;
	if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
	v7 = 0i64;
	v8 = 0i64;
	v50 = 0i64;
	v51 = 0i64;
	if (a2 && (v9 = (__int64*)(v3 + 2192), (v10 = *(_QWORD*)(v3 + 2192)) != 0) && a2 == *(_QWORD*)(v10 + 16))
	{
		v11 = *(void(__fastcall****)(_QWORD))(v3 + 2168);
		v12 = 1;
		v52 = 1;
		if (v11)
		{
			(**v11)(v11);
			v8 = *(_QWORD*)(v3 + 2168);
			v51 = v8;
		}
		v13 = *(void(__fastcall****)(_QWORD))(v3 + 2160);
		if (v13)
		{
			(**v13)(v13);
			v7 = *(_QWORD*)(v3 + 2160);
			v50 = v7;
		}
	}
	else
	{
		v12 = 0;
		v9 = (__int64*)(v3 + 2192);
		v14 = *(_QWORD*)(v3 + 2192);
		v52 = 0;
		if (v14)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
			*v9 = 0i64;
		}
		*(_DWORD*)(v3 + 2200) = 0;
	}
	if (!a2)
	{
		if (v12)
			goto LABEL_84;
		goto LABEL_40;
	}
	v15 = sub_1404670B0(a2);
	v54 = v15;
	if (!v15)
	{
		if (v12)
			goto LABEL_78;
		v57[2] = 2i64;
		v58 = 1065353216;
		v57[0] = 0i64;
		v57[1] = 0i64;
		sub_1407E4830(v59, 0i64, 0x40ui64);
		v69 = 0;
		v70 = 0i64;
		v71 = 0i64;
		v60 = 0i64;
		v61 = 0i64;
		v62 = 0i64;
		v63 = 0i64;
		v64 = 0i64;
		v65 = 0i64;
		v66 = 0i64;
		v67 = 0i64;
		v68 = 0i64;
		v72 = 0i64;
		v73 = 0i64;
		v74 = 0i64;
		v75 = 0i64;
		v76 = 0i64;
		v77 = 0;
		sub_140466EC0(a2, (__int64)v57);
		v30 = sub_1402EC590(v29, &v50);
		v7 = v50;
		v19 = v30;
		if (v30 < 0)
			goto LABEL_89;
		v19 = sub_1401DB2A0(v50, (__int64)v57, &v51);
		if (v19 < 0)
		{
			v8 = v51;
			goto LABEL_89;
		}
		sub_140456910(a2, v9);
		v8 = v51;
		*(_DWORD*)(v3 + 2200) = 0;
		goto LABEL_40;
	}
	v17 = (*(__int64(__fastcall**)(__int64*))(*v15 + 16))(v15);
	v55 = v17;
	if (v12
		|| (v18 = sub_1402EC590(v16, &v50), v7 = v50, v19 = v18, v18 >= 0)
		&& (v20 = sub_1401DB2A0(v50, v17, &v51), v8 = v51, v19 = v20, v20 >= 0))
	{
		v21 = (__int64)v54;
		for (i = 0i64; i < 0x48; ++i)
		{
			v23 = *(_QWORD*)v8;
			v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v21 + 64i64))(v21, (unsigned int)i);
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(v23 + 72))(v8, (unsigned int)i, v24);
		}
		v3 = v56;
		if (*(_QWORD*)(a2 + 3376) != *(_QWORD*)(a2 + 3384))
		{
			v25 = *(int*)(v55 + 16);
			if (*(_DWORD*)(v55 + 12) > 0x10u || (unsigned int)v25 > 2)
				v26 = qword_140C658E8;
			else
				v26 = *(_QWORD*)(32i64 * *(int*)(v55 + 12) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v25;
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v8 + 312i64))(v8, a2 + 3368, v26);
		}
		if (v52)
		{
		LABEL_78:
			if (a2)
			{
				v44 = *(_QWORD*)(a2 + 272);
				if (v44)
					v45 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v44 + 24i64))(v44);
				else
					v45 = 0;
				*(_DWORD*)(v3 + 7196) = v45;
				sub_140031E80(v3 + 7032);
				sub_1400321C0(v46, v3 + 7032, *(_DWORD*)(v3 + 7188), *(_DWORD*)(v3 + 7192), *(_DWORD*)(v3 + 7196));
				if (*(_DWORD*)(a2 + 128) == 33)
				{
				LABEL_88:
					v19 = 0;
					goto LABEL_89;
				}
				v47 = *(_DWORD*)(a2 + 220);
			LABEL_85:
				v48 = *(_QWORD*)(v3 + 2168);
				*(_DWORD*)(v3 + 7200) = v47;
				if ((int)sub_14002E510(v3 + 2336, v48, 0) < 0)
				{
					v19 = -2147467259;
					goto LABEL_89;
				}
				sub_140500890((_QWORD*)(v3 + 7208), (_QWORD*)(v3 + 7152));
				sub_140433A70(v3 + 7240, v3 + 7056);
				sub_140030010(v3 + 2336, v3 + 7272, *(_QWORD*)(v3 + 2168));
				*(_DWORD*)(v3 + 7304) = *(_DWORD*)(v3 + 7188);
				*(_DWORD*)(v3 + 7308) = *(_DWORD*)(v3 + 7192);
				goto LABEL_88;
			}
		LABEL_84:
			v47 = 23;
			goto LABEL_85;
		}
		if (v9)
		{
			if (*v9)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*v9 + 8i64))(*v9);
				*v9 = 0i64;
			}
			*v9 = *(_QWORD*)(a2 + 120);
			v27 = *(void(__fastcall****)(_QWORD))(a2 + 120);
			if (v27)
				(**v27)(v27);
		}
		v28 = (*(__int64(__fastcall**)(__int64*))(*v54 + 32))(v54);
		v5 = v53;
		*(_DWORD*)(v3 + 2200) = v28;
	LABEL_40:
		v31 = *(_QWORD**)(v3 + 1024);
		if (v31)
			*v31 = *(_QWORD*)(v3 + 1032);
		v32 = v3 + 1032;
		v33 = *(_QWORD*)(v3 + 1032);
		if (v33)
			*(_QWORD*)(v33 + 1024) = *(_QWORD*)(v3 + 1024);
		v34 = *(_QWORD*)(v3 + 2328);
		*(_QWORD*)(v3 + 1024) = 0i64;
		*(_QWORD*)v32 = 0i64;
		if (v34 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v34 + 24i64))(v34) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		sub_1405005B0(v3 + 2232);
		sub_140019490((_QWORD*)(v3 + 2232));
		v35 = *(_QWORD*)(v3 + 2176);
		if (v35)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
			*(_QWORD*)(v3 + 2176) = 0i64;
		}
		v36 = *(_QWORD*)(v3 + 2184);
		if (v36)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
			*(_QWORD*)(v3 + 2184) = 0i64;
		}
		if (*(_QWORD*)(v3 + 2168) != v8)
		{
			if (v8)
				(**(void(__fastcall***)(__int64))v8)(v8);
			v37 = *(_QWORD*)(v3 + 2168);
			if (v37)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
			*(_QWORD*)(v3 + 2168) = v8;
		}
		if (*(_QWORD*)(v3 + 2160) != v7)
		{
			if (v7)
				(**(void(__fastcall***)(__int64))v7)(v7);
			v38 = *(_QWORD*)(v3 + 2160);
			if (v38)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
			*(_QWORD*)(v3 + 2160) = v7;
		}
		*(_DWORD*)(v3 + 1040) = 1;
		if (a2)
		{
			sub_1404FEA70(v3);
			v39 = (__int64*)(a2 + 5560);
			if (!*(_QWORD*)(v3 + 1024))
			{
				*(_QWORD*)(v3 + 1024) = v39;
				*(_QWORD*)v32 = *v39;
				*v39 = v3;
				if (*(_QWORD*)v32)
					*(_QWORD*)(*(_QWORD*)v32 + 1024i64) = v32;
			}
		}
		if (*(_QWORD*)(v3 + 2168))
		{
			if (v5)
				goto LABEL_76;
			v40 = *(_QWORD*)(v3 + 2328);
			if (v40 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v40 + 24i64))(v40) > 0)
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
			v41 = *(_QWORD*)(v3 + 2168);
			if (v41
				&& (v42 = *(_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v41 + 64i64))(v41, 20i64)) != 0
				&& *(_DWORD*)(v42 + 16) == 46)
			{
			LABEL_76:
				v43 = 3i64;
			}
			else
			{
				v43 = 0i64;
			}
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v3 + 2168) + 168i64))(
				*(_QWORD*)(v3 + 2168),
				v43,
				3i64);
		}
		goto LABEL_78;
	}
LABEL_89:
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	return (unsigned int)v19;
}
// 1404F6AF5: variable 'v16' is possibly undefined
// 1404F6CAA: variable 'v29' is possibly undefined
// 1404F6F2D: variable 'v46' is possibly undefined
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 1404F69B0: using guessed type int anonymous_1[16];

