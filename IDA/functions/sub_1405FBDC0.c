#include "../winhttp.h"

//----- (00000001405FBDC0) ----------------------------------------------------
__int64 __fastcall sub_1405FBDC0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	unsigned __int64 v4; // rbx
	bool v5; // cc
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rax
	unsigned int v19; // edx
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rax
	int* v23; // rax
	__int128 v24; // xmm1
	__int128 v25; // xmm0
	__int128 v26; // xmm1
	__int128 v27; // xmm0
	__int128 v28; // xmm1
	int* v29; // rax
	__int64 v30; // rdx
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64 v36; // rdx
	__int64 v37; // rcx
	__int64 v38; // rax
	__int64 v39; // rdx
	__int64 v40; // rcx
	__int64 v41; // rax
	__int64 v42; // rdx
	__int64 v43; // rcx
	__int64 v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rdx
	__int64 v47; // rcx
	__int64 v48; // rax
	__int64 v49; // rdx
	__int64 v50; // rcx
	__int64 v51; // rax
	__int64 v52; // rdx
	__int64 v53; // rcx
	__int64 v54; // rax
	unsigned __int64 v55; // rcx
	__int64 v56; // r12
	__int64* v57; // r15
	__int64* v58; // rax
	int* v59; // rax
	__int64 v60; // rax
	BOOL v61; // eax
	__int64 v62; // rcx
	__int64 v63; // rcx
	__int64 v64; // rbx
	unsigned __int64 v66; // [rsp+48h] [rbp-C0h] BYREF
	int v67; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v68; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v69; // [rsp+68h] [rbp-A0h]
	__int128 v70; // [rsp+78h] [rbp-90h]
	__int128 v71; // [rsp+88h] [rbp-80h]
	__int128 v72; // [rsp+98h] [rbp-70h]
	_OWORD v73[3]; // [rsp+A8h] [rbp-60h] BYREF

	v4 = **(unsigned int**)(a2 + 8);
	*(_DWORD*)(qword_140C65898 + 28568) = 1;
	v5 = *(_DWORD*)(a2 + 152) <= -1;
	v8 = a1;
	v67 = v4;
	if (!v5 && a4)
	{
		v9 = sub_14022D0C0(a4);
		a1 = *(int*)(a2 + 152);
		*(_QWORD*)(a2 + 8 * a1 + 24) = v9;
	}
	switch (a3)
	{
	case 0:
		v10 = *(_QWORD*)(v8 + 8);
		v11 = v10;
		v12 = *(_QWORD*)(v10 + 8);
		while (v12)
		{
			if (*(_DWORD*)(v12 + 32) < (unsigned int)v4)
			{
				v12 = *(_QWORD*)(v12 + 24);
			}
			else
			{
				v11 = v12;
				v12 = *(_QWORD*)(v12 + 16);
			}
		}
		if (v11 == v10 || (v66 = v11, (unsigned int)v4 < *(_DWORD*)(v11 + 32)))
			v66 = v10;
		if (v66 != v10)
			sub_1405FD8C0(v8, (__int64*)&v66);
		v13 = *(_QWORD*)(v8 + 40);
		v14 = v13;
		v15 = *(_QWORD*)(v13 + 8);
		while (v15)
		{
			if (*(_DWORD*)(v15 + 32) < (unsigned int)v4)
			{
				v15 = *(_QWORD*)(v15 + 24);
			}
			else
			{
				v14 = v15;
				v15 = *(_QWORD*)(v15 + 16);
			}
		}
		if (v14 == v13 || (v66 = v14, (unsigned int)v4 < *(_DWORD*)(v14 + 32)))
			v66 = v13;
		if (v66 != v13)
			sub_1405FDA00(v8 + 32, (__int64*)&v66);
		v16 = *(_QWORD*)(v8 + 72);
		v17 = v16;
		v18 = *(_QWORD*)(v16 + 8);
		while (v18)
		{
			if (*(_DWORD*)(v18 + 32) < (unsigned int)v4)
			{
				v18 = *(_QWORD*)(v18 + 24);
			}
			else
			{
				v17 = v18;
				v18 = *(_QWORD*)(v18 + 16);
			}
		}
		if (v17 == v16 || (v66 = v17, (unsigned int)v4 < *(_DWORD*)(v17 + 32)))
			v66 = v16;
		if (v66 != v16)
			sub_1405FDA00(v8 + 64, (__int64*)&v66);
		goto LABEL_109;
	case 1:
	case 2:
		if (*(_DWORD*)(*(_QWORD*)(a2 + 8) + 436i64))
			sub_14048A0F0(a1, v4);
		if (a3 == 2)
		{
			sub_140437A10((_QWORD*)qword_140C658D8, 0x40u, 0, 0i64, 0, 0, 1);
			if ((*(_BYTE*)(*(_QWORD*)(a2 + 8) + 12i64) & 8) == 0)
				goto LABEL_43;
			v19 = 66;
		}
		else
		{
			sub_140437A10((_QWORD*)qword_140C658D8, 0x3Fu, 0, 0i64, 0, 0, 1);
			if (!*(_QWORD*)(v8 + 16))
				goto LABEL_43;
			v19 = 374;
		}
		sub_140437A10((_QWORD*)qword_140C658D8, v19, 0, 0i64, 0, 0, 1);
	LABEL_43:
		v20 = *(_QWORD*)(v8 + 8);
		v21 = v20;
		v22 = *(_QWORD*)(v20 + 8);
		while (v22)
		{
			if (*(_DWORD*)(v22 + 32) < (unsigned int)v4)
			{
				v22 = *(_QWORD*)(v22 + 24);
			}
			else
			{
				v21 = v22;
				v22 = *(_QWORD*)(v22 + 16);
			}
		}
		if (v21 == v20 || (v66 = v21, (unsigned int)v4 < *(_DWORD*)(v21 + 32)))
			v66 = v20;
		if (v66 == v20)
		{
			*(_QWORD*)&v69 = 0i64;
			LODWORD(v73[0]) = 0;
			*(_OWORD*)((char*)v73 + 4) = 2ui64;
			v70 = 0ui64;
			v71 = 0ui64;
			v72 = 0ui64;
			memset((char*)&v73[1] + 4, 0, 20);
			v23 = sub_1405FD500(v8, &v67);
			v24 = v70;
			*(_OWORD*)v23 = v69;
			v25 = v71;
			*((_OWORD*)v23 + 1) = v24;
			v26 = v72;
			*((_OWORD*)v23 + 2) = v25;
			v27 = v73[0];
			*((_OWORD*)v23 + 3) = v26;
			v28 = v73[1];
			*((_OWORD*)v23 + 4) = v27;
			*(_QWORD*)&v27 = *(_QWORD*)&v73[2];
			*((_OWORD*)v23 + 5) = v28;
			*((_QWORD*)v23 + 12) = v27;
			v29 = sub_1405FD500(v8, &v67);
			sub_1406111A0(v29, a2, a3);
		}
		else
		{
			sub_140611310(v66 + 40, a3);
		}
		v30 = *(_QWORD*)(v8 + 40);
		v31 = v30;
		v32 = *(_QWORD*)(v30 + 8);
		while (v32)
		{
			if (*(_DWORD*)(v32 + 32) < (unsigned int)v4)
			{
				v32 = *(_QWORD*)(v32 + 24);
			}
			else
			{
				v31 = v32;
				v32 = *(_QWORD*)(v32 + 16);
			}
		}
		if (v31 == v30 || (v66 = v31, (unsigned int)v4 < *(_DWORD*)(v31 + 32)))
			v66 = v30;
		if (v66 != v30)
			sub_1405FDA00(v8 + 32, (__int64*)&v66);
		v33 = *(_QWORD*)(v8 + 72);
		v34 = v33;
		v35 = *(_QWORD*)(v33 + 8);
		while (v35)
		{
			if (*(_DWORD*)(v35 + 32) < (unsigned int)v4)
			{
				v35 = *(_QWORD*)(v35 + 24);
			}
			else
			{
				v34 = v35;
				v35 = *(_QWORD*)(v35 + 16);
			}
		}
		if (v34 == v33 || (v66 = v34, (unsigned int)v4 < *(_DWORD*)(v34 + 32)))
			v66 = v33;
		if (v66 != v33)
			sub_1405FDA00(v8 + 64, (__int64*)&v66);
		sub_14043F470((_QWORD*)(v8 + 96), &v67);
		goto LABEL_156;
	case 3:
		v46 = *(_QWORD*)(v8 + 8);
		v47 = v46;
		v48 = *(_QWORD*)(v46 + 8);
		while (v48)
		{
			if (*(_DWORD*)(v48 + 32) < (unsigned int)v4)
			{
				v48 = *(_QWORD*)(v48 + 24);
			}
			else
			{
				v47 = v48;
				v48 = *(_QWORD*)(v48 + 16);
			}
		}
		if (v47 == v46 || (v66 = v47, (unsigned int)v4 < *(_DWORD*)(v47 + 32)))
			v66 = v46;
		if (v66 != v46)
			sub_1405FD8C0(v8, (__int64*)&v66);
		v49 = *(_QWORD*)(v8 + 40);
		v50 = v49;
		v51 = *(_QWORD*)(v49 + 8);
		while (v51)
		{
			if (*(_DWORD*)(v51 + 32) < (unsigned int)v4)
			{
				v51 = *(_QWORD*)(v51 + 24);
			}
			else
			{
				v50 = v51;
				v51 = *(_QWORD*)(v51 + 16);
			}
		}
		if (v50 == v49 || (v66 = v50, (unsigned int)v4 < *(_DWORD*)(v50 + 32)))
			v66 = v49;
		if (v66 != v49)
			sub_1405FDA00(v8 + 32, (__int64*)&v66);
		v52 = *(_QWORD*)(v8 + 72);
		v53 = v52;
		v54 = *(_QWORD*)(v52 + 8);
		while (v54)
		{
			if (*(_DWORD*)(v54 + 32) < (unsigned int)v4)
			{
				v54 = *(_QWORD*)(v54 + 24);
			}
			else
			{
				v53 = v54;
				v54 = *(_QWORD*)(v54 + 16);
			}
		}
		if (v53 == v52 || (v66 = v53, (unsigned int)v4 < *(_DWORD*)(v53 + 32)))
			v66 = v52;
		if (v66 != v52)
			sub_1405FDA00(v8 + 64, (__int64*)&v66);
		v55 = *(_QWORD*)(*(_QWORD*)(v8 + 112)
			+ 8 * (v4 % ((__int64)(*(_QWORD*)(v8 + 120) - *(_QWORD*)(v8 + 112)) >> 3)));
		if (!v55)
			goto LABEL_144;
		break;
	case 4:
		sub_140437A10((_QWORD*)qword_140C658D8, 0x41u, 0, 0i64, 0, 0, 1);
		goto LABEL_76;
	case 5:
	case 6:
	case 7:
	LABEL_76:
		v36 = *(_QWORD*)(v8 + 8);
		v37 = v36;
		v38 = *(_QWORD*)(v36 + 8);
		while (v38)
		{
			if (*(_DWORD*)(v38 + 32) < (unsigned int)v4)
			{
				v38 = *(_QWORD*)(v38 + 24);
			}
			else
			{
				v37 = v38;
				v38 = *(_QWORD*)(v38 + 16);
			}
		}
		if (v37 == v36 || (v66 = v37, (unsigned int)v4 < *(_DWORD*)(v37 + 32)))
			v66 = v36;
		if (v66 != v36)
			sub_1405FD8C0(v8, (__int64*)&v66);
		v39 = *(_QWORD*)(v8 + 40);
		v40 = v39;
		v41 = *(_QWORD*)(v39 + 8);
		while (v41)
		{
			if (*(_DWORD*)(v41 + 32) < (unsigned int)v4)
			{
				v41 = *(_QWORD*)(v41 + 24);
			}
			else
			{
				v40 = v41;
				v41 = *(_QWORD*)(v41 + 16);
			}
		}
		if (v40 == v39 || (v66 = v40, (unsigned int)v4 < *(_DWORD*)(v40 + 32)))
			v66 = v39;
		if (v66 == v39)
		{
			v66 = __PAIR64__(a3, v4);
			sub_140032F50(v8 + 32, (__int64)&v68, &v66);
		}
		else
		{
			*(_DWORD*)(v66 + 36) = a3;
		}
		if ((*(_BYTE*)(*(_QWORD*)(a2 + 8) + 12i64) & 4) != 0)
		{
			v42 = *(_QWORD*)(v8 + 72);
			v43 = v42;
			v44 = *(_QWORD*)(v42 + 8);
			while (v44)
			{
				if (*(_DWORD*)(v44 + 32) < (unsigned int)v4)
				{
					v44 = *(_QWORD*)(v44 + 24);
				}
				else
				{
					v43 = v44;
					v44 = *(_QWORD*)(v44 + 16);
				}
			}
			if (v43 == v42 || (v66 = v43, (unsigned int)v4 < *(_DWORD*)(v43 + 32)))
				v66 = v42;
			if (v66 == v42)
			{
				v66 = __PAIR64__(a3, v4);
				sub_140032F50(v8 + 64, (__int64)&v68, &v66);
			}
			else
			{
				*(_DWORD*)(v66 + 36) = a3;
			}
		}
	LABEL_109:
		sub_14043F470((_QWORD*)(v8 + 96), &v67);
		if (*(_DWORD*)(*(_QWORD*)(a2 + 8) + 436i64))
			sub_14048A170(v45, v4);
		goto LABEL_156;
	default:
		goto LABEL_156;
	}
	while (*(_DWORD*)(v55 + 8) != (_DWORD)v4)
	{
		v55 = *(_QWORD*)v55;
		if (!v55)
		{
		LABEL_144:
			sub_14043F640((_QWORD*)(v8 + 96), *(_QWORD*)(v8 + 136) + 1i64);
			v55 = (__int64)(*(_QWORD*)(v8 + 120) - *(_QWORD*)(v8 + 112)) >> 3;
			v56 = 8 * (v4 % v55);
			v57 = *(__int64**)(v56 + *(_QWORD*)(v8 + 112));
			v58 = v57;
			if (v57)
			{
				while (*((_DWORD*)v58 + 2) != (_DWORD)v4)
				{
					v58 = (__int64*)*v58;
					if (!v58)
						goto LABEL_147;
				}
			}
			else
			{
			LABEL_147:
				v59 = sub_14018B280(16i64, 0);
				*(_QWORD*)v59 = 0i64;
				if (v59 != (int*)-8i64)
					v59[2] = v4;
				*(_QWORD*)v59 = v57;
				v55 = *(_QWORD*)(v8 + 112);
				*(_QWORD*)(v56 + v55) = v59;
				++* (_QWORD*)(v8 + 136);
			}
			v60 = *(_QWORD*)(a2 + 8);
			if (!*(_DWORD*)(v60 + 436) && (*(_BYTE*)(v60 + 12) & 0x20) == 0 && (int)sub_1405534B0(a2) > 0)
			{
				v61 = sub_1405533C0(a2);
				sub_1404CF010(v62, v61, *(_DWORD*)(*(_QWORD*)(a2 + 8) + 56i64), *(_DWORD*)(v8 + 148));
			}
			break;
		}
	}
	if (*(_DWORD*)(*(_QWORD*)(a2 + 8) + 436i64))
		sub_14048A1F0(v55, v4);
LABEL_156:
	sub_140553410(a2);
	sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 160, **(_DWORD**)(a2 + 8));
	if (qword_140C65B78)
		sub_140575DD0();
	v63 = *(_QWORD*)(qword_140C65920 + 8);
	if (v63)
	{
		do
		{
			v64 = *(_QWORD*)(v63 + 32);
			if (*(_DWORD*)(v63 + 56) == 1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v63 + 8i64))(v63);
			v63 = v64;
		} while (v64);
	}
	return 0i64;
}
// 1405FC381: variable 'v45' is possibly undefined
// 1405FC5AC: variable 'v62' is possibly undefined
// 1405FC5C0: variable 'v55' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

