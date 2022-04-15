//----- (00000001403BD3D0) ----------------------------------------------------
void __fastcall sub_1403BD3D0(__int64 a1, unsigned int a2, __int64 a3)
{
	unsigned __int64 v6; // rcx
	int v7; // ebp
	__int64 v8; // rax
	_DWORD** i; // rdx
	_DWORD* v10; // rbx
	__int64 v11; // r13
	int v12; // ecx
	int v13; // eax
	unsigned int* v14; // r14
	unsigned int v15; // r12d
	unsigned __int64 v16; // rdx
	unsigned __int64 v17; // rcx
	_DWORD* v18; // rax
	__int64 v19; // r14
	int v20; // eax
	__int64 v21; // rax
	__int64 v22; // rcx
	int v23; // eax
	__int64 v24; // rax
	int v25; // ecx
	unsigned int v26; // eax
	int v27; // eax
	__int64 v28; // [rsp+30h] [rbp-68h] BYREF
	int v29; // [rsp+38h] [rbp-60h]
	int v30; // [rsp+40h] [rbp-58h] BYREF
	__int64 v31; // [rsp+48h] [rbp-50h]
	void(__fastcall * v32)(__int64); // [rsp+50h] [rbp-48h]
	__int64 v33; // [rsp+58h] [rbp-40h]
	unsigned int v34; // [rsp+A8h] [rbp+10h] BYREF
	int v35; // [rsp+B8h] [rbp+20h] BYREF

	if (!a2)
		return;
	v34 = a2;
	if (!a3)
		return;
	v6 = *(_QWORD*)(a1 + 2712);
	v7 = 0;
	v8 = 0i64;
	if (!v6)
		return;
	for (i = *(_DWORD***)(a1 + 2704); ; ++i)
	{
		v10 = *i;
		if (*i)
		{
			if (v10[16] == a2)
				break;
		}
		if (++v8 >= v6)
			return;
	}
	v11 = sub_1405A4B80((__int64)v10, 1);
	if (!v11 || !(unsigned int)sub_1403A1630(a1, a2, 0i64))
		return;
	v12 = *(_DWORD*)qword_140C63750;
	v13 = dword_140C45E40;
	v14 = *(unsigned int**)(v11 + 112);
	v15 = *v14;
	if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
		v13 = *(_DWORD*)qword_140C63750;
	v35 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C45E50 + v13))
	{
	LABEL_32:
		v26 = v14[6];
		if (v26 == 7 || v26 == 2)
		{
			v27 = dword_140C45E80;
			if (v12 < dword_140C45E80)
				v27 = v12;
			if (*((_BYTE*)&dword_140C45E90 + v27) && sub_1403ACD90(qword_140C65B70, v15, *(_QWORD*)(a1 + 25744)))
				sub_1403BDB90((__int64*)a1, v15, a3);
			return;
		}
		goto LABEL_30;
	}
	if ((unsigned int)sub_1403D8C10(v11))
	{
		v12 = v35;
		goto LABEL_32;
	}
	if (v14[31] == 4)
	{
		sub_1403BD6D0((__int64*)a1, a2, a3);
		return;
	}
	v16 = *(_QWORD*)(a1 + 25456);
	v17 = 0i64;
	if (v16)
	{
		v18 = *(_DWORD**)(a1 + 25448);
		while (*v18 != a2)
		{
			++v17;
			++v18;
			if (v17 >= v16)
				goto LABEL_21;
		}
		return;
	}
LABEL_21:
	v19 = sub_14055BDC0(a1, *(_QWORD*)(a1 + 120), v11, 0, 0);
	if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
	{
		sub_1403A2550(a1);
		*(_DWORD*)(a1 + 26184) = 9;
		*(_DWORD*)(a1 + 26192) = a2;
		*(_DWORD*)(a1 + 26272) = *(_DWORD*)((*(__int64(__fastcall**)(_DWORD*, int*))(*(_QWORD*)v10 + 32i64))(
			v10,
			&v35)
			+ 4);
		if (v19)
			v20 = *(_DWORD*)(v19 + 8);
		else
			v20 = 0;
		*(_DWORD*)(a1 + 26188) = v20;
		v30 = 0;
		v21 = sub_14001C280(a1);
		v22 = *(_QWORD*)(a1 + 25744);
		v33 = 0i64;
		v31 = v21;
		v32 = sub_14039EA90;
		v23 = sub_1404720D0(v22);
		sub_140195960(a1 + 26200, v23, (__int64)&v30, 4);
		return;
	}
	v29 = 0;
	v28 = 0i64;
	v24 = *(_QWORD*)v10;
	v29 = 1;
	LOWORD(v28) = *(_WORD*)((*(__int64(__fastcall**)(_DWORD*, int*))(v24 + 32))(v10, &v35) + 4);
	if (v19)
		v7 = *(_DWORD*)(v19 + 8);
	HIDWORD(v28) = v7;
	sub_1403F4900(a1, 0x4DBu, (__int64)&v28);
	sub_140003460((__int64*)(a1 + 25448), (int*)&v34);
	v25 = *(_DWORD*)(*(_QWORD*)(v11 + 112) + 24i64);
	if (v25 == 7 || v25 == 2)
		LABEL_30:
	sub_1405CA390(a3, a2);
}
// 1403A1630: using guessed type __int64 __fastcall sub_1403A1630(_QWORD, _QWORD, _QWORD);
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C45E80: using guessed type int dword_140C45E80;
// 140C45E90: using guessed type int dword_140C45E90;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65B70: using guessed type __int64 qword_140C65B70;

