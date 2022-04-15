//----- (0000000140839E50) ----------------------------------------------------
__int64 __fastcall sub_140839E50(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
	_QWORD* v9; // rdi
	int v10; // eax
	__int64 v11; // rax
	_DWORD* v12; // rax
	int v13; // ecx
	unsigned int v14; // eax
	unsigned int v15; // ebx
	__int64 v16[3]; // [rsp+20h] [rbp-A1h] BYREF
	__int16 v17; // [rsp+38h] [rbp-89h]
	__int64 v18; // [rsp+40h] [rbp-81h]
	int v19; // [rsp+48h] [rbp-79h]
	__int64 v20; // [rsp+50h] [rbp-71h] BYREF
	int v21; // [rsp+58h] [rbp-69h]
	int v22; // [rsp+60h] [rbp-61h] BYREF
	__int64 v23; // [rsp+68h] [rbp-59h]
	__int64 v24; // [rsp+70h] [rbp-51h]
	int* v25; // [rsp+78h] [rbp-49h]
	__int64 v26; // [rsp+80h] [rbp-41h]
	int v27; // [rsp+88h] [rbp-39h]
	_DWORD* v28; // [rsp+90h] [rbp-31h]
	int v29; // [rsp+98h] [rbp-29h]
	int v30; // [rsp+A0h] [rbp-21h]
	int v31; // [rsp+E4h] [rbp+23h]
	int v32; // [rsp+E8h] [rbp+27h]
	unsigned int v33; // [rsp+ECh] [rbp+2Bh]
	__int64* v34; // [rsp+F0h] [rbp+2Fh]
	int v35; // [rsp+F8h] [rbp+37h]
	char v36; // [rsp+FCh] [rbp+3Bh]
	char v37; // [rsp+FDh] [rbp+3Ch]
	char v38; // [rsp+FEh] [rbp+3Dh]
	int v39; // [rsp+120h] [rbp+5Fh] BYREF
	int v40; // [rsp+124h] [rbp+63h]

	if (!*(_QWORD*)(a1 + 104))
		return 2i64;
	v9 = (_QWORD*)sub_140830F00(qword_140C61BA8, a2, 0);
	if (v9)
	{
		v39 = a4;
		v16[2] = (__int64)&v20;
		v40 = a5;
		v20 = 0i64;
		v21 = 0;
		v16[0] = 0i64;
		v16[1] = 0i64;
		v17 = 0;
		v19 = 0;
		v18 = sub_140865FC0();
		if (!v18)
		{
			(*(void(__fastcall**)(_QWORD*))(*v9 + 16i64))(v9);
			return 2i64;
		}
		v10 = *(_DWORD*)(a1 + 136);
		v28 = 0i64;
		v31 = 0;
		v29 = v10;
		v11 = *(_QWORD*)(a1 + 112);
		v38 = 0;
		v26 = v11;
		LODWORD(v11) = *(_DWORD*)(a1 + 120);
		v36 = 0;
		v27 = v11;
		v12 = *(_DWORD**)(a1 + 128);
		v30 = 0;
		v22 = 2;
		v23 = a1;
		if (v12)
			++* v12;
		v28 = v12;
		v32 = 0;
		v37 = 1;
		v24 = *(_QWORD*)(a1 + 104);
		v25 = &v39;
		v33 = a3 * (dword_140C110B4 / 0x3E8u);
		v34 = v16;
		if (!*(_DWORD*)(a1 + 148) && !*(_DWORD*)(a1 + 204))
		{
			do
			{
				v13 = dword_140C110FC++;
				*(_DWORD*)(a1 + 204) = v13;
			} while (!v13);
		}
		v35 = *(_DWORD*)(a1 + 204);
		v14 = sub_14084ED10(v9, (__int64)&v22);
		v15 = v14;
		if (v14 == 3)
		{
			v15 = 1;
		}
		else if (v14 == 1)
		{
			v15 = (*(__int64(__fastcall**)(_QWORD*, int*))(*v9 + 632i64))(v9, &v22);
		}
		(*(void(__fastcall**)(_QWORD*))(*v9 + 16i64))(v9);
		if (v28)
			sub_140828460(v28);
		if (v18)
			sub_140866000(v18);
	}
	else
	{
		return 15;
	}
	return v15;
}
// 140839EE6: conditional instruction was optimized away because rcx.8==0
// 140C110B4: using guessed type int dword_140C110B4;
// 140C110FC: using guessed type int dword_140C110FC;

