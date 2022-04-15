#include "../winhttp.h"

//----- (000000014032AC20) ----------------------------------------------------
__int64 __fastcall sub_14032AC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	_QWORD* v4; // r10
	_QWORD* v5; // r11
	unsigned __int64 v6; // rsi
	unsigned __int64 v7; // rbp
	__int64 v8; // r8
	__int64 v9; // r9
	__int64 v10; // rbx
	unsigned int v11; // r13d
	__int64 v12; // rax
	__int64 v13; // rdi
	unsigned int v14; // ecx
	unsigned int v15; // edx
	unsigned int v17; // ecx
	unsigned int v18; // r15d
	__int64 v19; // r14
	__int64 v20; // rbp
	unsigned int v21; // esi
	unsigned __int16* v22; // rbx
	unsigned __int64 v23; // rdi
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rax
	unsigned __int64 v27; // rax
	__int64 v28; // rcx
	__int64 v29; // rcx
	unsigned __int64 v30; // rax
	unsigned __int64 v31; // rcx
	_QWORD* v32; // [rsp+20h] [rbp-C8h]
	__int64 v33; // [rsp+28h] [rbp-C0h]
	_QWORD* v34; // [rsp+30h] [rbp-B8h]
	__int64 v35; // [rsp+38h] [rbp-B0h]
	unsigned int v36; // [rsp+40h] [rbp-A8h]
	__int64 v37; // [rsp+48h] [rbp-A0h]
	unsigned __int64 v38; // [rsp+50h] [rbp-98h]
	unsigned __int64 v39; // [rsp+58h] [rbp-90h]
	__int64 v40; // [rsp+60h] [rbp-88h]
	__int64 v41; // [rsp+68h] [rbp-80h]
	int v42; // [rsp+70h] [rbp-78h]
	int v43; // [rsp+74h] [rbp-74h]
	int v44; // [rsp+78h] [rbp-70h]
	int v45; // [rsp+7Ch] [rbp-6Ch]
	int v46; // [rsp+80h] [rbp-68h]
	int v47; // [rsp+84h] [rbp-64h]
	int v48; // [rsp+88h] [rbp-60h]
	int v49; // [rsp+8Ch] [rbp-5Ch]
	int v50; // [rsp+90h] [rbp-58h]
	int v51; // [rsp+94h] [rbp-54h]
	int v52; // [rsp+98h] [rbp-50h]
	int v53; // [rsp+9Ch] [rbp-4Ch]
	int v54; // [rsp+A0h] [rbp-48h]

	v4 = *(_QWORD**)(a3 + 48);
	v5 = *(_QWORD**)(a4 + 48);
	v6 = *(_QWORD*)(a3 + 64);
	v7 = *(_QWORD*)(a4 + 64);
	v33 = v5[8];
	v35 = v4[8];
	v8 = v35;
	v9 = v33;
	v10 = 48i64 * *(unsigned __int16*)(v6 + 22) + *(_QWORD*)(v35 + 504) + 8i64;
	v11 = 0;
	v12 = *(int*)(v10 + 12);
	v13 = 48i64 * *(unsigned __int16*)(v7 + 22) + *(_QWORD*)(v33 + 504) + 8i64;
	v41 = 0i64;
	v42 = 1;
	v43 = 4;
	v44 = 4;
	v45 = 2;
	v46 = 2;
	v47 = -1;
	v48 = 3;
	v49 = 3;
	v50 = 3;
	v51 = 3;
	v52 = 4;
	v53 = 3;
	v54 = 3;
	v14 = *((_DWORD*)&v41 + v12);
	v34 = v4;
	v15 = *((_DWORD*)&v41 + *(int*)(v13 + 12));
	v32 = v5;
	v38 = v6;
	v39 = v7;
	v40 = v10;
	v37 = v13;
	if (v14 < v15)
		return 0xFFFFFFFFi64;
	if (v14 > v15)
		return 1i64;
	v17 = *(_DWORD*)(v10 + 24);
	v18 = 0;
	if (v17 < *(_DWORD*)(v13 + 24))
		v17 = *(_DWORD*)(v13 + 24);
	if (v17 > 2)
		v17 = 2;
	v36 = v17;
	if (v17)
	{
	LABEL_10:
		if (v18 >= *(_DWORD*)(v10 + 24))
			v19 = 0i64;
		else
			v19 = *(_QWORD*)(v10 + 32) + 296i64 * v18;
		if (v18 >= *(_DWORD*)(v13 + 24))
			v20 = 0i64;
		else
			v20 = *(_QWORD*)(v13 + 32) + 296i64 * v18;
		v21 = 0;
		v22 = (unsigned __int16*)v20;
		while (1)
		{
			v23 = -1i64;
			if (v19)
			{
				v24 = *(unsigned __int16*)((char*)v22 + v19 - v20);
				if ((unsigned int)v24 < *(_DWORD*)(v8 + 448))
				{
					v25 = *(_QWORD*)(v4[132] + 24 * v24 + 16);
					if (v25)
					{
						v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 64i64))(v25);
						v5 = v32;
						v9 = v33;
						v23 = v26;
					}
				}
			}
			v27 = -1i64;
			if (v20)
			{
				v28 = *v22;
				if ((unsigned int)v28 < *(_DWORD*)(v9 + 448))
				{
					v29 = *(_QWORD*)(v5[132] + 24 * v28 + 16);
					if (v29)
						v27 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 64i64))(v29);
				}
			}
			if (v23 < v27)
				return 0xFFFFFFFFi64;
			if (v23 > v27)
				return 1i64;
			v4 = v34;
			v5 = v32;
			v8 = v35;
			v9 = v33;
			++v21;
			++v22;
			if (v21 >= 2)
			{
				v10 = v40;
				v13 = v37;
				if (++v18 < v36)
					goto LABEL_10;
				v6 = v38;
				v7 = v39;
				break;
			}
		}
	}
	v30 = v4[7];
	v31 = v5[7];
	if (v30 < v31)
		return 0xFFFFFFFFi64;
	if (v30 > v31)
		return 1i64;
	if (v4 < v5)
		return 0xFFFFFFFFi64;
	if (v4 > v5)
		return 1i64;
	if (v6 < v7)
		return 0xFFFFFFFFi64;
	LOBYTE(v11) = v6 > v7;
	return v11;
}

