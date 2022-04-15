#include "../winhttp.h"

//----- (0000000140298F20) ----------------------------------------------------
__int64 __fastcall sub_140298F20(__int64 a1)
{
	unsigned int v1; // r13d
	_QWORD* Value; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	signed int v6; // ebx
	__int64 v7; // rcx
	void* v8; // rax
	_DWORD* v10; // rax
	_DWORD* v11; // r12
	int v12; // r11d
	unsigned int v13; // r10d
	unsigned int v14; // r8d
	char v15; // cl
	_DWORD* v16; // r9
	unsigned int v17; // eax
	unsigned int v18; // ecx
	unsigned __int8 v19; // dl
	unsigned int v20; // ecx
	unsigned int v21; // eax
	unsigned int v22; // ecx
	unsigned __int8 v23; // dl
	unsigned int v24; // ecx
	unsigned int v25; // eax
	unsigned int v26; // ecx
	unsigned __int8 v27; // dl
	unsigned int v28; // ecx
	int v29; // eax
	unsigned int v30; // edx
	int v31; // eax
	unsigned int v32; // edx
	unsigned __int64 v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rsi
	int v36; // eax
	int* v37; // rbx
	unsigned int v38; // edi
	_QWORD* v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rcx
	__int64* v42; // rsi
	__int64 v43; // rdi
	__int64 v44; // r14
	__int64 v45; // rax
	int v46; // edi
	__int64 v47; // rax
	unsigned int v48; // edx
	__int64 v49; // rcx
	int v50; // eax
	int v51; // [rsp+30h] [rbp-48h] BYREF
	int v52; // [rsp+34h] [rbp-44h]
	__int64 v53; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * v54)(__int64); // [rsp+40h] [rbp-38h]
	__int64 v55; // [rsp+48h] [rbp-30h]
	int v56; // [rsp+50h] [rbp-28h]
	void(__fastcall * **v57)(_QWORD); // [rsp+A8h] [rbp+30h] BYREF
	__int64 v58; // [rsp+B0h] [rbp+38h] BYREF
	__int64 v59; // [rsp+B8h] [rbp+40h]

	v1 = 0;
	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v4 = Value[1]) != 0)
		v5 = *(_QWORD*)(v4 + 96);
	else
		v5 = 0i64;
	v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 40i64))(v5, 0i64);
	if (v6 < 0)
	{
		v7 = *(_QWORD*)(a1 + 96);
		if (v7 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7))
			v8 = (void*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 16i64))(*(_QWORD*)(a1 + 96));
		else
			v8 = &unk_1409E40FC;
		v58 = 0x141DE4358i64;
		LOBYTE(v1) = v6 == -2147024882;
		sub_1401A3130(14, 2, &v58, (unsigned int)v6, v8, v1);
		return sub_14029B080(a1, v6);
	}
	v10 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 32i64))(*(_QWORD*)(a1 + 104));
	v11 = v10;
	if (*v10 != 4671064 || v10[1] != 3 || *(_DWORD*)(a1 + 64) == 2 && (v10[2] != v10[3] || v10[5] != 6))
		return sub_14029B080(a1, 0x80004005);
	v12 = v10[6];
	if (!v12)
		return sub_14029B080(a1, 0x80004005);
	v13 = v10[2];
	v14 = v12 - 1;
	v15 = v12 - 1;
	if (!(v13 >> (v12 - 1)) && !(v10[3] >> v15) && !(v10[4] >> v15))
		return sub_14029B080(a1, 0x80004005);
	if ((int)v10[7] >= 27)
		return sub_14029B080(a1, 0x80004005);
	v16 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v10[7]);
	if (*v16 > 1u)
	{
		v17 = v13 / *v16;
		v18 = v17;
		if (v17)
		{
			v19 = 0;
			if (!(_WORD)v17)
			{
				v19 = 16;
				v18 = HIWORD(v17);
			}
			if (!(_BYTE)v18)
			{
				v19 += 8;
				v18 >>= 8;
			}
			if ((v18 & 0xF) == 0)
			{
				v19 += 4;
				v18 >>= 4;
			}
			if ((v18 & 3) == 0)
			{
				v19 += 2;
				v18 >>= 2;
			}
			if ((v18 & 1) == 0)
				++v19;
		}
		else
		{
			v19 = -1;
		}
		if (v19 < v14)
			v14 = v19;
	}
	v20 = v16[3];
	if (v20 > 1)
	{
		v21 = v11[3] / v20;
		v22 = v21;
		if (v21)
		{
			v23 = 0;
			if (!(_WORD)v21)
			{
				v23 = 16;
				v22 = HIWORD(v21);
			}
			if (!(_BYTE)v22)
			{
				v23 += 8;
				v22 >>= 8;
			}
			if ((v22 & 0xF) == 0)
			{
				v23 += 4;
				v22 >>= 4;
			}
			if ((v22 & 3) == 0)
			{
				v23 += 2;
				v22 >>= 2;
			}
			if ((v22 & 1) == 0)
				++v23;
		}
		else
		{
			v23 = -1;
		}
		if (v23 < v14)
			v14 = v23;
	}
	v24 = v16[6];
	if (v24 > 1)
	{
		v25 = v11[4] / v24;
		v26 = v25;
		if (v25)
		{
			v27 = 0;
			if (!(_WORD)v25)
			{
				v27 = 16;
				v26 = HIWORD(v25);
			}
			if (!(_BYTE)v26)
			{
				v27 += 8;
				v26 >>= 8;
			}
			if ((v26 & 0xF) == 0)
			{
				v27 += 4;
				v26 >>= 4;
			}
			if ((v26 & 3) == 0)
			{
				v27 += 2;
				v26 >>= 2;
			}
			if ((v26 & 1) == 0)
				++v27;
		}
		else
		{
			v27 = -1;
		}
		if (v27 < v14)
			v14 = v27;
	}
	v28 = *(_DWORD*)(a1 + 68);
	v29 = 0;
	if (v14 < v28)
		v28 = v14;
	LOBYTE(v29) = v13 >> v28 == 0;
	v30 = v11[3];
	v11[2] = (v13 >> v28) + v29;
	v31 = (v30 >> v28) + (v30 >> v28 == 0);
	v32 = v11[4];
	v11[3] = v31;
	v11[6] = v12 - v28;
	v11[4] = (v32 >> v28) + (v32 >> v28 == 0);
	*(_DWORD*)(a1 + 84) = v11[8];
	*(_DWORD*)(a1 + 88) = v11[26];
	v33 = sub_14029BDC0(v11);
	v34 = *(_QWORD*)(a1 + 96);
	v35 = v33;
	v59 = v33;
	if (v33 > (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v34 + 24i64))(v34))
		return sub_14029B080(a1, 0x80004005);
	v58 = 0i64;
	v36 = sub_1401C5690(v35, (int**)&v58, 8);
	v37 = (int*)v58;
	v38 = v36;
	if (v36 >= 0)
	{
		v39 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v58 + 32i64))(v58);
		*v39 = *(_QWORD*)v11;
		v39[1] = *((_QWORD*)v11 + 1);
		v39[2] = *((_QWORD*)v11 + 2);
		v39[3] = *((_QWORD*)v11 + 3);
		v39[4] = *((_QWORD*)v11 + 4);
		v39[5] = *((_QWORD*)v11 + 5);
		v39[6] = *((_QWORD*)v11 + 6);
		v39[7] = *((_QWORD*)v11 + 7);
		v39[8] = *((_QWORD*)v11 + 8);
		v39[9] = *((_QWORD*)v11 + 9);
		v39[10] = *((_QWORD*)v11 + 10);
		v39[11] = *((_QWORD*)v11 + 11);
		v39[12] = *((_QWORD*)v11 + 12);
		v39[13] = *((_QWORD*)v11 + 13);
		if (*(int**)(a1 + 104) != v37)
		{
			(**(void(__fastcall***)(int*))v37)(v37);
			v40 = *(_QWORD*)(a1 + 104);
			if (v40)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 8i64))(v40);
			*(_QWORD*)(a1 + 104) = v37;
		}
		v41 = *(_QWORD*)(a1 + 104);
		v42 = *(__int64**)(a1 + 96);
		v43 = v59;
		v57 = 0i64;
		v44 = *v42;
		v45 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v41 + 32i64))(v41);
		v46 = (*(__int64(__fastcall**)(__int64*, __int64, __int64, void(__fastcall****)(_QWORD), _QWORD))(v44 + 80))(
			v42,
			v45 + 112,
			v43 - 112,
			&v57,
			0i64);
		if (v46 >= 0)
		{
			v49 = *(_QWORD*)(a1 + 96);
			if (v49)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v49 + 8i64))(v49);
				*(_QWORD*)(a1 + 96) = 0i64;
			}
			v50 = v11[8];
			if (v50)
			{
				if (v50 != 1)
				{
					v48 = -2147467259;
					goto LABEL_90;
				}
				v54 = sub_140299EB0;
				v51 = 12;
				v52 = 2;
				v53 = a1;
				v55 = 0i64;
				v56 = 1;
				v46 = sub_14019DCA0((__int64)&v51, 0, v57, (int**)(a1 + 136));
				if (v46 >= 0)
					goto LABEL_91;
				v47 = 0x141DE41D8i64;
			}
			else
			{
				v54 = sub_1402994C0;
				v51 = 10;
				v52 = 2;
				v53 = a1;
				v55 = 0i64;
				v56 = 1;
				v46 = sub_14019DCA0((__int64)&v51, 0, v57, (int**)(a1 + 152));
				if (v46 >= 0)
					goto LABEL_91;
				v47 = 0x141DE4348i64;
			}
		}
		else
		{
			v47 = 0x141DE43E8i64;
		}
		v58 = v47;
		sub_1401A3130(14, 2, &v58, (unsigned int)v46);
		v48 = v46;
	LABEL_90:
		v1 = sub_14029B080(a1, v48);
	LABEL_91:
		if (v57)
			(*v57)[1](v57);
		goto LABEL_93;
	}
	v58 = 0x141DE41E8i64;
	sub_1401A3130(14, 2, &v58, (unsigned int)v36, v35);
	v1 = sub_14029B080(a1, v38);
LABEL_93:
	if (v37)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v37 + 8i64))(v37);
	return v1;
}
// 140C63758: using guessed type __int64 qword_140C63758;

