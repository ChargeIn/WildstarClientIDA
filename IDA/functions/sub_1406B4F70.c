//----- (00000001406B4F70) ----------------------------------------------------
__int64 __fastcall sub_1406B4F70(_QWORD* a1)
{
	int v2; // eax
	unsigned __int64 v3; // rcx
	unsigned __int64 v4; // rdi
	_DWORD* v5; // rax
	__int64 v6; // r15
	unsigned __int64 v7; // r8
	__int64* v8; // rdx
	__int64 v9; // rax
	int v10; // ecx
	__int64* v11; // rax
	double v12; // xmm0_8
	__int64 v13; // rcx
	int v14; // ebx
	int v15; // ebp
	int v16; // r14d
	unsigned __int64 v17; // r12
	int* v18; // rbx
	int* v19; // rax
	int* v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // r13
	int* v23; // rbp
	int* v24; // rax
	int* v25; // rax
	int* v26; // r12
	int* v27; // rbx
	int* v28; // rax
	int* v29; // r14
	__int64 v30; // r14
	__int64 v31; // rax
	__int64 v32; // rdi
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rdx
	char v36; // cl
	__int64 v37; // rax
	unsigned __int64 v38; // rax
	__int64 v39; // rbx
	__int64 v40; // rax
	__int64 v41; // r9
	__int64 v43; // [rsp+20h] [rbp-58h] BYREF
	__int128 v44; // [rsp+28h] [rbp-50h]
	int v45; // [rsp+80h] [rbp+8h]
	__int64 v46; // [rsp+88h] [rbp+10h] BYREF
	unsigned __int64 v47; // [rsp+90h] [rbp+18h] BYREF

	v2 = sub_140056D60(a1, 1u);
	v3 = a1[2];
	v45 = v2;
	v4 = 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	v6 = 0i64;
	if ((unsigned __int64)v5 < v3 && v5 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 5)
	{
		*(_DWORD*)(v3 + 8) = 0;
		for (a1[2] += 16i64; ; a1[2] -= 16i64)
		{
			v7 = a1[2];
			v8 = (__int64*)dword_140A12138;
			if (a1[3] + 16i64 < v7)
				v8 = (__int64*)(a1[3] + 16i64);
			if (!(unsigned int)sub_14005BA70((__int64)a1, *v8, v7 - 16))
			{
				a1[2] -= 16i64;
				goto LABEL_33;
			}
			a1[2] += 16i64;
			v9 = a1[2];
			v10 = *(_DWORD*)(v9 - 8);
			v11 = (__int64*)(v9 - 16);
			if (v10 == 3)
				goto LABEL_12;
			if (v10 == 4 && sub_14005AC80((char*)(*v11 + 32), (unsigned __int64*)&v46))
				break;
			v12 = 0.0;
		LABEL_13:
			v13 = a1[2];
			v14 = (int)v12;
			if (*(_DWORD*)(v13 - 24) == 4)
				sub_14005AC80((char*)(*(_QWORD*)(v13 - 32) + 32i64), &v47);
			v15 = (unsigned __int8)v14;
			v16 = BYTE1(v14);
			if ((BYTE1(v14) || (unsigned __int8)v14 < 0x1Fu) && v4 < 0xA)
			{
				v17 = v4 + 1;
				v18 = sub_14018DB00(v6, v4 + 1, 8i64);
				v19 = &v18[2 * v4];
				if (v19)
				{
					*v19 = v16;
					v19[1] = v15;
				}
				if ((int*)v6 != v18)
				{
					if (v4)
					{
						v20 = v18;
						v21 = v6 - (_QWORD)v18;
						do
						{
							if (v20)
							{
								*v20 = *(int*)((char*)v20 + v21);
								v20[1] = *(int*)((char*)v20 + v21 + 4);
							}
							v20 += 2;
							--v4;
						} while (v4);
					}
					if (v6)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
					v6 = (__int64)v18;
				}
				v4 = v17;
			}
		}
		LODWORD(v44) = 3;
		v11 = &v43;
		v43 = v46;
	LABEL_12:
		v12 = *(double*)v11;
		goto LABEL_13;
	}
LABEL_33:
	v22 = 0i64;
	v23 = 0i64;
	if (v4)
	{
		v24 = sub_14018B280(8 * v4 + 16, 0);
		if (v24)
		{
			*((_QWORD*)v24 + 1) = v4;
			*(_QWORD*)v24 = off_140B55060;
		}
		v25 = v24 + 4;
		if (v25)
			v23 = v25;
		v26 = (int*)v6;
		do
		{
			v27 = sub_1403D6540(qword_140C65898 + 160, v26);
			v46 = v22 + 1;
			v28 = sub_14018DB00((__int64)v23, v22 + 1, 8i64);
			*(_QWORD*)&v28[2 * v22] = v27;
			v29 = v28;
			if (v23 != v28)
			{
				sub_1407DB590(v28, v23, 8 * v22);
				if (v23)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
				v23 = v29;
			}
			v22 = v46;
			v26 += 2;
			--v4;
		} while (v4);
	}
	v44 = 1ui64;
	v30 = sub_1403E0630((__int64)v23, v22, v45);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v31 = a1[5];
	if (v31 == a1[10])
		v32 = a1[15];
	else
		v32 = *(_QWORD*)(**(_QWORD**)(v31 + 8) + 24i64);
	v33 = a1[4];
	v34 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(v33 + 16))(
		*(_QWORD*)(v33 + 24),
		0i64,
		0i64,
		72i64,
		v43);
	v35 = v34;
	if (!v34)
		sub_140061040((__int64)a1, 4);
	*(_QWORD*)(v33 + 120) += 72i64;
	v36 = *(_BYTE*)(a1[4] + 32i64);
	*(_BYTE*)(v34 + 8) = 7;
	*(_QWORD*)(v34 + 32) = 24i64;
	*(_QWORD*)(v34 + 16) = 0i64;
	*(_QWORD*)(v34 + 24) = v32;
	*(_BYTE*)(v34 + 9) = v36 & 3;
	*(_QWORD*)v34 = **(_QWORD**)(a1[4] + 176i64);
	**(_QWORD**)(a1[4] + 176i64) = v34;
	v37 = a1[2];
	*(_QWORD*)v37 = v35;
	*(_DWORD*)(v37 + 8) = 7;
	a1[2] += 16i64;
	v38 = v44;
	*(_QWORD*)(v35 + 48) = v30;
	*(_OWORD*)(v35 + 56) = __PAIR128__(*((unsigned __int64*)&v44 + 1), v38);
	v39 = a1[4];
	v40 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v41 = a1[2];
	v43 = v40;
	LODWORD(v44) = 4;
	sub_14005E8E0((__int64)a1, v39 + 160, (int*)&v43, v41);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	if (v23)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	return 1i64;
}
// 1406B50AB: conditional instruction was optimized away because ebp.4<100u
// 1406B5183: conditional instruction was optimized away because rdi.8!=0
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

