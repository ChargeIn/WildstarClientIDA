//----- (0000000140458FE0) ----------------------------------------------------
__int64 __fastcall sub_140458FE0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // r14
	unsigned __int64 v5; // r12
	unsigned int* i; // rdi
	__int64 v7; // rcx
	unsigned int v8; // r8d
	int v9; // eax
	int v10; // esi
	unsigned int v11; // ebx
	__int64 v12; // rbx
	__int64 v13; // r9
	int v14; // esi
	__int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	int* v18; // rax
	int* v19; // rdx
	__int64 v20; // r8
	unsigned __int8 v21; // al
	__int64 v22; // rax
	unsigned __int64 v23; // kr00_8
	int* v24; // rax
	int* v25; // rdx
	unsigned __int64 v26; // r8
	int v28; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D0h] BYREF
	__int128 v30; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v31)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v32; // [rsp+58h] [rbp-A8h]
	__int64 v33; // [rsp+70h] [rbp-90h] BYREF
	int v34[5]; // [rsp+80h] [rbp-80h] BYREF
	int* v36; // [rsp+98h] [rbp-68h]
	unsigned __int8 v37; // [rsp+A0h] [rbp-60h]
	int* v38; // [rsp+A8h] [rbp-58h]
	int v39[52]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v40; // [rsp+1F8h] [rbp+F8h] BYREF

	v3 = 0i64;
	v5 = a3;
	if (!a3)
		return 0i64;
	for (i = (unsigned int*)(a2 + 12); ; i += 16)
	{
		sub_1407E4830(v39, 0i64, 0xC8ui64);
		v8 = *i;
		v39[6] = *(i - 1);
		v9 = *(i - 3);
		v39[0] = v8;
		v39[7] = v9;
		v39[9] = *(i - 2);
		v10 = -(i[1] != 0);
		if (qword_140C65B70)
			break;
		v11 = 1;
	LABEL_6:
		*(_QWORD*)&v30 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v31 = TlsValue;
		v32 = v30;
		sub_14018D540(&v40, (__int64)L"%d", v11);
		v12 = v40;
		v13 = *i;
		v33 = 0x141E02600i64;
		v14 = sub_1401971E0(&dword_140C8AC74, 24, &v33, v13, v40, &v31);
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
		if (v14)
			DebugBreak();
	LABEL_21:
		if (++v3 >= v5)
			return 0i64;
	}
	v11 = sub_140561780(v7, v39, v8, 0i64);
	if (v11)
		goto LABEL_6;
	v15 = sub_140561C30(qword_140C65B70, *(i - 1));
	v16 = v15;
	if (v15)
	{
		sub_14053DA80(v15, (__int64)(i - 3), v10 + 3);
		if (*(_DWORD*)(v16 + 840))
		{
			sub_1407E4830(v34, 0i64, 0x58ui64);
			v34[0] = *(i - 1);
			if (*((_BYTE*)i + 8))
			{
				v17 = 24i64 * i[2];
				if (!is_mul_ok(i[2], 0x18ui64))
					v17 = -1i64;
				v18 = sub_14018B280(v17, 0);
				v19 = *(int**)(i + 3);
				v20 = 3i64 * i[2];
				v36 = v18;
				sub_1407DB590(v18, v19, 8 * v20);
			}
			v21 = *((_BYTE*)i + 20);
			v37 = v21;
			if (v21)
			{
				v23 = v21;
				v22 = 28i64 * v21;
				if (!is_mul_ok(v23, 0x1Cui64))
					v22 = -1i64;
				v24 = sub_14018B280(v22, 0);
				v25 = *(int**)(i + 7);
				v26 = 28i64 * *((unsigned __int8*)i + 20);
				v38 = v24;
				sub_1407DB590(v24, v25, v26);
			}
			sub_140480ED0((__int64*)(a1 + 5848), (__int64)v34);
		}
		goto LABEL_21;
	}
	*(_QWORD*)&v30 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v31 = TlsValue;
	v40 = 0x141E025A0i64;
	v32 = v30;
	v28 = sub_1401971E0(&dword_140C8AC7C, 24, &v40, &v31);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
	if (v28)
		DebugBreak();
	return 2147500037i64;
}
// 140459069: variable 'v7' is possibly undefined
// 140B4F534: using guessed type wchar_t aD_27[3];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C8AC74: using guessed type _DWORD dword_140C8AC74;
// 140C8AC7C: using guessed type _DWORD dword_140C8AC7C;

