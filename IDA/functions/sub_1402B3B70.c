#include "../winhttp.h"

//----- (00000001402B3B70) ----------------------------------------------------
__int64 __fastcall sub_1402B3B70(
	__int64* a1,
	__int64 a2,
	unsigned __int64 a3,
	__int64 a4,
	int a5,
	int a6,
	int a7,
	__int64 a8)
{
	__int64 v8; // r12
	unsigned __int64 v10; // rdi
	__int64 v11; // r14
	__int64* v12; // r15
	unsigned __int64 v13; // rax
	unsigned __int64 v14; // rcx
	unsigned __int64 v15; // rcx
	__int64 v16; // rax
	int* v17; // rax
	__int64 v18; // rbx
	unsigned int v19; // edi
	unsigned __int64 v20; // r12
	unsigned __int64 v21; // r13
	unsigned __int64 v22; // r9
	int* v23; // rcx
	int v24; // eax
	unsigned __int64 v25; // rcx
	unsigned __int64 v26; // rax
	unsigned __int64 v27; // rdx
	bool v28; // zf
	__int64 v29; // r10
	int v30; // r14d
	__int64 v31; // r15
	__int64 v32; // rdi
	unsigned __int64 v33; // r8
	__int64 v34; // r11
	int v35; // eax
	unsigned __int64 v36; // rax
	__int64 v37; // rdx
	unsigned __int64 v38; // rcx
	unsigned __int64 v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rdx
	int v42; // eax
	unsigned int v43; // eax
	unsigned __int64 v44; // r10
	__int64 v45; // r11
	unsigned __int64 v46; // rax
	unsigned __int64 v47; // r8
	_DWORD* v48; // r9
	int v49; // ecx
	unsigned __int64 v50; // rcx
	unsigned __int64 v51; // rax
	unsigned __int64 v52; // rdx
	__int64 v53; // rcx
	__int64 v54; // rax
	int v55; // eax
	int v56; // eax
	__int64 v57; // rax
	int v58; // eax
	int* v60; // [rsp+28h] [rbp-59h]
	int v64; // [rsp+50h] [rbp-31h] BYREF
	int v65; // [rsp+54h] [rbp-2Dh]
	int v66; // [rsp+58h] [rbp-29h]
	int v67; // [rsp+5Ch] [rbp-25h]
	int v68; // [rsp+60h] [rbp-21h]
	unsigned __int64 v69; // [rsp+64h] [rbp-1Dh]
	int v70; // [rsp+6Ch] [rbp-15h]
	int v71; // [rsp+70h] [rbp-11h]
	int v72; // [rsp+74h] [rbp-Dh]
	int v73; // [rsp+78h] [rbp-9h]

	v8 = a8;
	v10 = a3;
	v11 = a2;
	v12 = a1;
	if (!a2)
		return 2147942487i64;
	if (!a3)
		return 2147942487i64;
	if (!a8)
		return 2147942487i64;
	v13 = *(_QWORD*)(a4 + 32);
	if (!v13)
		return 2147942487i64;
	v14 = *(_QWORD*)(a4 + 24);
	if (!v14)
		return 2147942487i64;
	if (*(_QWORD*)a4 > 0xFFFFFFFFui64 || *(_QWORD*)(a4 + 8) > 0xFFFFFFFFui64 || v13 > 0xFFFFFFFF || v14 > 0xFFFFFFFF)
		return 2147942487i64;
	v15 = v13 * v14;
	v16 = 16 * v15;
	if (!is_mul_ok(v15, 0x10ui64))
		v16 = -1i64;
	v17 = sub_14018B280(v16, 1u);
	v18 = (__int64)v17;
	if (!v17)
	{
		v19 = -2147024882;
		goto LABEL_107;
	}
	if (*(_DWORD*)(a4 + 52) != 4)
	{
		v44 = 0i64;
		v45 = 0i64;
		if (!*(_QWORD*)(a4 + 24))
			goto LABEL_73;
		v46 = *(_QWORD*)(a4 + 32);
		while (1)
		{
			v47 = 0i64;
			if (v46)
				break;
		LABEL_100:
			if (++v44 >= *(_QWORD*)(a4 + 24))
				goto LABEL_73;
		}
		v48 = (_DWORD*)(16 * v45 + v18 + 12);
		while (1)
		{
			v49 = *(_DWORD*)(a4 + 52);
			if (v49 >= 2)
			{
				if (v49 <= 3)
				{
					if (v44 < *(_QWORD*)(a4 + 24))
					{
						v51 = v47 + v44 * v46;
						goto LABEL_96;
					}
				}
				else if (v49 == 4 && !v44)
				{
					v50 = *(_QWORD*)(a4 + 16);
					v51 = 0i64;
					if (v47)
					{
						v52 = v47;
						do
						{
							v51 += v50;
							if (v50 > 1)
								v50 >>= 1;
							--v52;
						} while (v52);
					}
					if (!v50)
						v51 = -1i64;
					goto LABEL_96;
				}
			}
			v51 = -1i64;
		LABEL_96:
			if (v51 >= v10)
				goto LABEL_103;
			v53 = v11 + 48 * v51;
			if (*(_DWORD*)(v53 + 16) != *(_DWORD*)(a4 + 48))
				goto LABEL_103;
			v54 = *(_QWORD*)(v53 + 40);
			if (!v54)
				goto LABEL_102;
			*(_QWORD*)(v48 - 3) = v54;
			++v47;
			*(v48 - 1) = *(_DWORD*)(v53 + 24);
			++v45;
			*v48 = *(_DWORD*)(v53 + 32);
			v46 = *(_QWORD*)(a4 + 32);
			v48 += 4;
			if (v47 >= v46)
				goto LABEL_100;
		}
	}
	v20 = *(_QWORD*)(a4 + 16);
	if (!v20 || v20 > 0xFFFFFFFF)
	{
		v19 = -2147024809;
		goto LABEL_107;
	}
	if (*(_QWORD*)(a4 + 24) > 1ui64)
	{
		v19 = -2147024846;
		goto LABEL_107;
	}
	v21 = *(_QWORD*)(a4 + 32);
	v22 = 0i64;
	if (!v21)
		goto LABEL_72;
	v23 = v17 + 3;
	v60 = v17 + 3;
	if (v22 >= v21)
		goto LABEL_37;
	v24 = *(_DWORD*)(a4 + 52);
	if (v24 < 2)
		goto LABEL_37;
	while (2)
	{
		if (v24 <= 3)
		{
			v26 = v22;
			if (!*(_QWORD*)(a4 + 24))
				v26 = -1i64;
			goto LABEL_38;
		}
		if (v24 == 4)
		{
			v25 = *(_QWORD*)(a4 + 16);
			v26 = 0i64;
			if (v22)
			{
				v27 = v22;
				do
				{
					v26 += v25;
					if (v25 > 1)
						v25 >>= 1;
					--v27;
				} while (v27);
			}
			v28 = v25 == 0;
			v23 = v60;
			if (v28)
				v26 = -1i64;
		}
		else
		{
		LABEL_37:
			v26 = -1i64;
		}
	LABEL_38:
		if (v26 >= v10 || (v29 = v11 + 48 * v26, v30 = *(_DWORD*)(a4 + 48), *(_DWORD*)(v29 + 16) != v30))
		{
		LABEL_103:
			v19 = -2147467259;
			goto LABEL_107;
		}
		v31 = *(_QWORD*)(v29 + 40);
		if (!v31)
		{
		LABEL_102:
			v19 = -2147467261;
			goto LABEL_107;
		}
		v32 = *(_QWORD*)(v29 + 32);
		v33 = 1i64;
		v34 = v32 + v31;
		if (v20 <= 1)
			goto LABEL_67;
		do
		{
			if (v22 >= v21 || (v35 = *(_DWORD*)(a4 + 52), v35 < 2))
			{
			LABEL_58:
				v39 = -1i64;
				goto LABEL_59;
			}
			if (v35 <= 3)
			{
				if (v33)
					goto LABEL_58;
				v39 = v22;
				if (!*(_QWORD*)(a4 + 24))
					v39 = -1i64;
			}
			else
			{
				if (v35 != 4)
					goto LABEL_58;
				v36 = *(_QWORD*)(a4 + 16);
				v37 = 0i64;
				if (v22)
				{
					v38 = v22;
					do
					{
						v37 += v36;
						if (v36 > 1)
							v36 >>= 1;
						--v38;
					} while (v38);
				}
				if (v33 < v36)
					v39 = v37 + v33;
				else
					v39 = -1i64;
			}
		LABEL_59:
			if (v39 >= a3)
				goto LABEL_103;
			v40 = a2 + 48 * v39;
			v41 = *(_QWORD*)(v40 + 40);
			if (!v41)
				goto LABEL_102;
			if (v41 != v34
				|| *(_DWORD*)(v40 + 16) != v30
				|| *(_QWORD*)(v40 + 24) != *(_QWORD*)(v29 + 24)
				|| *(_QWORD*)(v40 + 32) != v32)
			{
				goto LABEL_103;
			}
			++v33;
			v34 = v41 + v32;
		} while (v33 < v20);
		v23 = v60;
	LABEL_67:
		*(_QWORD*)(v23 - 3) = v31;
		v23 += 4;
		*(v23 - 5) = *(_DWORD*)(v29 + 24);
		v60 = v23;
		*(v23 - 4) = *(_DWORD*)(v29 + 32);
		if (v20 > 1)
			v20 >>= 1;
		v21 = *(_QWORD*)(a4 + 32);
		if (++v22 < v21)
		{
			v10 = a3;
			v11 = a2;
			continue;
		}
		break;
	}
	v12 = a1;
LABEL_72:
	v8 = a8;
LABEL_73:
	v19 = -2147467259;
	switch (*(_DWORD*)(a4 + 52))
	{
	case 2:
		v58 = *(_DWORD*)a4;
		v67 = *(_DWORD*)(a4 + 48);
		v64 = v58;
		v65 = *(_DWORD*)(a4 + 32);
		v66 = *(_DWORD*)(a4 + 24);
		v68 = a5;
		v70 = 0;
		v69 = __PAIR64__(a7, a6);
		v43 = (*(__int64(__fastcall**)(__int64*, int*, __int64, __int64))(*v12 + 32))(v12, &v64, v18, v8);
		goto LABEL_106;
	case 3:
		v55 = *(_DWORD*)a4;
		v68 = *(_DWORD*)(a4 + 48);
		v64 = v55;
		v65 = *(_DWORD*)(a4 + 8);
		v66 = *(_DWORD*)(a4 + 32);
		v56 = *(_DWORD*)(a4 + 24);
		v69 = 1i64;
		v67 = v56;
		v70 = a5;
		v71 = a6;
		v72 = a7;
		v57 = *v12;
		v73 = 4 * ((*(_DWORD*)(a4 + 40) & 4) != 0);
		v43 = (*(__int64(__fastcall**)(__int64*, int*, __int64, __int64))(v57 + 40))(v12, &v64, v18, v8);
	LABEL_106:
		v19 = v43;
		break;
	case 4:
		v42 = *(_DWORD*)a4;
		v68 = *(_DWORD*)(a4 + 48);
		v71 = 0;
		v64 = v42;
		v65 = *(_DWORD*)(a4 + 8);
		v66 = *(_DWORD*)(a4 + 16);
		v67 = *(_DWORD*)(a4 + 32);
		v69 = __PAIR64__(a6, a5);
		v70 = a7;
		v43 = (*(__int64(__fastcall**)(__int64*, int*, __int64, __int64))(*v12 + 48))(v12, &v64, v18, v8);
		goto LABEL_106;
	}
LABEL_107:
	sub_14018B900(v18, 0);
	return v19;
}
// 1402B3EFD: conditional instruction was optimized away because rax.8!=0

