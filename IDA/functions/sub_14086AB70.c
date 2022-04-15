#include "../winhttp.h"

//----- (000000014086AB70) ----------------------------------------------------
__int64 __fastcall sub_14086AB70(__int64 a1, __int64 a2)
{
	bool v4; // bl
	unsigned int v5; // edi
	int v6; // eax
	int v7; // r12d
	bool v8; // zf
	int v9; // esi
	_DWORD* v10; // r15
	int v11; // eax
	_QWORD* v12; // rcx
	__int64 v13; // rax
	_QWORD* v14; // rcx
	__int64 v15; // rbx
	__int64* v16; // rax
	__int64* v17; // rcx
	unsigned int** v18; // r15
	int v19; // eax
	int v20; // r8d
	__int64 v21; // rdx
	bool v22; // si
	unsigned int* v23; // rbx
	char v24; // r12
	__int64* v25; // rax
	unsigned int v26; // edx
	_QWORD* v27; // rax
	_QWORD* v28; // rsi
	unsigned int v29; // eax
	__int64 v30; // rax
	__int64 v31; // rcx
	unsigned int v32; // eax
	unsigned int v33; // eax
	unsigned __int64 v35; // [rsp+20h] [rbp-E0h] BYREF
	int v36; // [rsp+28h] [rbp-D8h]
	int v37; // [rsp+2Ch] [rbp-D4h]
	int v38; // [rsp+30h] [rbp-D0h]
	__int64 v39; // [rsp+40h] [rbp-C0h] BYREF
	int v40; // [rsp+48h] [rbp-B8h]
	_DWORD* v41; // [rsp+50h] [rbp-B0h]
	int v42; // [rsp+58h] [rbp-A8h]
	__int64 v43; // [rsp+60h] [rbp-A0h]
	int v44; // [rsp+68h] [rbp-98h]
	int v45; // [rsp+6Ch] [rbp-94h]
	_DWORD* v46; // [rsp+70h] [rbp-90h]
	int v47; // [rsp+78h] [rbp-88h]
	int v48; // [rsp+7Ch] [rbp-84h]
	int v49; // [rsp+80h] [rbp-80h]
	int v50; // [rsp+84h] [rbp-7Ch]
	int v51; // [rsp+88h] [rbp-78h]
	int v52; // [rsp+8Ch] [rbp-74h]
	int v53; // [rsp+90h] [rbp-70h]
	int v54; // [rsp+94h] [rbp-6Ch]
	int v55; // [rsp+98h] [rbp-68h]
	int v56; // [rsp+9Ch] [rbp-64h]
	int v57; // [rsp+A0h] [rbp-60h]
	int v58; // [rsp+A4h] [rbp-5Ch]
	int v59; // [rsp+A8h] [rbp-58h]
	int v60; // [rsp+ACh] [rbp-54h]
	int v61; // [rsp+B0h] [rbp-50h]
	char* v62; // [rsp+D0h] [rbp-30h]
	int v63; // [rsp+D8h] [rbp-28h]
	char v64[32]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v65[10]; // [rsp+100h] [rbp+0h] BYREF
	bool v66; // [rsp+160h] [rbp+60h]
	bool v67; // [rsp+168h] [rbp+68h]
	__int64 v68; // [rsp+170h] [rbp+70h] BYREF
	__int64 v69; // [rsp+178h] [rbp+78h]

	v4 = *(_DWORD*)a2 != 0;
	v5 = 2;
	v66 = v4;
	v6 = sub_14087B9F0(a1 + 216, *(_QWORD*)(a2 + 16), *(_DWORD*)(a1 + 252), *(_DWORD*)(a1 + 248));
	v7 = 0;
	v8 = *(_BYTE*)(a1 + 91) >= 0;
	v69 = 0i64;
	v9 = v6;
	if (!v8)
	{
		v10 = *(_DWORD**)(a2 + 48);
		v61 = *(_DWORD*)(a2 + 136);
		v43 = *(_QWORD*)(a2 + 16);
		v42 = *(_DWORD*)(a2 + 56);
		v39 = *(_QWORD*)(a2 + 32);
		v40 = *(_DWORD*)(a2 + 40);
		if (v10)
			++* v10;
		v44 = *(_DWORD*)(a2 + 64);
		v11 = *(_DWORD*)(a2 + 68);
		v41 = v10;
		v45 = v11;
		v46 = *(_DWORD**)(a2 + 72);
		v47 = *(_DWORD*)(a2 + 80);
		v48 = *(_DWORD*)(a2 + 84);
		v49 = *(_DWORD*)(a2 + 88);
		v50 = *(_DWORD*)(a2 + 92);
		v51 = *(_DWORD*)(a2 + 96);
		v52 = *(_DWORD*)(a2 + 100);
		v53 = *(_DWORD*)(a2 + 104);
		v54 = *(_DWORD*)(a2 + 108);
		v55 = *(_DWORD*)(a2 + 112);
		v56 = *(_DWORD*)(a2 + 116);
		v57 = *(_DWORD*)(a2 + 120);
		v58 = *(_DWORD*)(a2 + 124);
		v59 = *(_DWORD*)(a2 + 128);
		v60 = *(_DWORD*)(a2 + 132);
		if (!(*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 304i64))(a1, 3i64)
			|| !sub_14086A2B0(a1 + 360))
		{
			goto LABEL_11;
		}
		v12 = *(_QWORD**)(a1 + 368);
		v13 = *(_QWORD*)(a1 + 376);
		if (v12)
			*v12 = v13;
		else
			*(_QWORD*)(a1 + 360) = v13;
		v14 = *(_QWORD**)(a1 + 376);
		*(_QWORD*)(a1 + 368) = v14;
		*(_QWORD*)(a1 + 376) = *v14;
		*v14 = 0i64;
		++* (_DWORD*)(a1 + 392);
		v15 = *(_QWORD*)(a1 + 368) + 8i64;
		sub_14086A1A0(v15, (__int64)&v39);
		if (!v15)
		{
			v10 = v41;
		LABEL_11:
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 312i64))(a1, 3i64);
			if (v10)
				sub_140828460(v10);
			return v5;
		}
		*(_DWORD*)(v43 + 136) ^= (*(_DWORD*)(v43 + 136) ^ (*(_DWORD*)(v43 + 136) + 1)) & 0x3FFFFFFF;
		sub_14083B2F0(qword_140C61B80, *(_DWORD*)(a2 + 56));
		if (v41)
			sub_140828460(v41);
		v4 = v66;
	}
	sub_140874050(&v35, a2, a1);
	v16 = *(__int64**)(a1 + 264);
	v17 = v16;
	if (!v16)
		goto LABEL_21;
	while (*((_DWORD*)v17 + 2) != v9)
	{
		v17 = (__int64*)*v17;
		if (!v17)
			goto LABEL_21;
	}
	v18 = (unsigned int**)(v17 + 2);
	if (v17 == (__int64*)-16i64)
	{
	LABEL_21:
		v9 = *(_DWORD*)(a1 + 256);
		if (!v16)
			goto LABEL_24;
		while (*((_DWORD*)v16 + 2) != v9)
		{
			v16 = (__int64*)*v16;
			if (!v16)
				goto LABEL_24;
		}
		v18 = (unsigned int**)(v16 + 2);
		if (v16 == (__int64*)-16i64)
		{
		LABEL_24:
			if (v4)
				goto LABEL_79;
			v5 = 1;
			goto LABEL_76;
		}
	}
	sub_140830370(qword_140C61BA0, &v68, *(_QWORD*)(a2 + 16), *(_DWORD*)(a1 + 24));
	if ((_DWORD)v68 == v9)
	{
		v19 = HIDWORD(v68) + 1;
	}
	else
	{
		LODWORD(v68) = v9;
		v19 = 1;
	}
	v20 = *(_DWORD*)(a1 + 24);
	v21 = *(_QWORD*)(a2 + 16);
	HIDWORD(v68) = v19;
	v22 = v19 == 1;
	v67 = v19 == 1;
	sub_140830AE0(qword_140C61BA0, v21, v20, &v68);
	if (!v4 && !(unsigned int)(v18[1] - *v18))
	{
		v5 = 1;
		goto LABEL_76;
	}
	v23 = *v18;
	if (*v18 == v18[1])
		goto LABEL_71;
	v24 = v38;
	do
	{
		sub_140869F50((__int64)&v39, a2);
		v25 = *(__int64**)(a1 + 312);
		v26 = *v23;
		if (!v25)
			goto LABEL_38;
		while (*((_DWORD*)v25 + 2) != v26)
		{
			v25 = (__int64*)*v25;
			if (!v25)
				goto LABEL_38;
		}
		if (v25 == (__int64*)-12i64)
		{
		LABEL_38:
			v24 &= 0xE0u;
		}
		else
		{
			v36 = *((_DWORD*)v25 + 3);
			v37 = *((_DWORD*)v25 + 4);
			v38 = *((_DWORD*)v25 + 5);
			v24 = v38;
		}
		if ((v22 || (v24 & 8) == 0) && (!v63 || !(_DWORD)v69))
		{
			v27 = (_QWORD*)sub_140830F00(qword_140C61BA8, v26, 0);
			v28 = v27;
			if (!v27)
			{
			LABEL_66:
				v22 = v67;
				goto LABEL_67;
			}
			if (!v66)
			{
				v29 = sub_14084ED10(v27, (__int64)&v39);
				v5 = v29;
				if (v29 == 3)
				{
					v5 = 1;
					goto LABEL_64;
				}
				if (v29 == 1)
					v5 = (*(__int64(__fastcall**)(_QWORD*, __int64*))(*v28 + 632i64))(v28, &v39);
			LABEL_63:
				if (v5 != 1)
				{
				LABEL_65:
					(*(void(__fastcall**)(_QWORD*))(*v28 + 16i64))(v28);
					goto LABEL_66;
				}
			LABEL_64:
				LODWORD(v69) = v69 + 1;
				goto LABEL_65;
			}
			sub_140873FA0((__int64)v64, (__int64)v62);
			if ((unsigned int)(v18[1] - *v18) == 1)
			{
				sub_140874330((__int64*)a1, *((_QWORD*)v62 + 4), v65);
				goto LABEL_57;
			}
			v30 = sub_140865FC0();
			v31 = v65[0];
			v65[0] = v30;
			if (v31)
			{
				sub_140866000(v31);
				v30 = v65[0];
			}
			if (v30)
			{
				v5 = sub_140874220(a1, (__int64)v64, (__int64)&v39, &v35);
				if (v5 == 1)
				{
				LABEL_57:
					v62 = v64;
					v32 = sub_14084ED10(v28, (__int64)&v39);
					v5 = v32;
					if (v32 == 3)
					{
						v5 = 1;
					}
					else if (v32 == 1)
					{
						v5 = (*(__int64(__fastcall**)(_QWORD*, __int64*))(*v28 + 632i64))(v28, &v39);
					}
				}
			}
			else
			{
				v5 = 52;
			}
			sub_140874110((__int64)v64);
			goto LABEL_63;
		}
	LABEL_67:
		if (v46)
			sub_140828460(v46);
		++v23;
	} while (v23 != v18[1]);
	v7 = v69;
LABEL_71:
	if (!v66)
		goto LABEL_76;
	if (v7)
		goto LABEL_73;
LABEL_79:
	if (*(char*)(a1 + 91) < 0)
	{
	LABEL_73:
		if (v35)
		{
			v33 = sub_140874450(a1, v35);
			goto LABEL_75;
		}
	}
	else
	{
		v33 = sub_1408746E0((__int64*)a1, a2);
	LABEL_75:
		v5 = v33;
	LABEL_76:
		if (v35)
			sub_140866000(v35);
	}
	return v5;
}
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;
// 14086AB70: using guessed type __int64 var_50[10];

