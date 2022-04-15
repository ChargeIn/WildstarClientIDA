//----- (0000000140371D10) ----------------------------------------------------
__int64 __fastcall sub_140371D10(__int64 a1, unsigned int a2, int* a3, _DWORD* a4, unsigned int* a5)
{
	__int64 result; // rax
	unsigned int v9; // r10d
	int v10; // et2
	__int64 v11; // r8
	int v12; // edx
	int v13; // edi
	int v14; // ebx
	int* v15; // r15
	__int64 v16; // rax
	unsigned int v17; // r12d
	int v18; // edx
	int v19; // r9d
	int v20; // r10d
	int v21; // r10d
	__int64 v22; // rdi
	_DWORD* v23; // rdx
	__int64 v24; // [rsp+50h] [rbp-11h] BYREF
	int v25; // [rsp+58h] [rbp-9h]
	unsigned int v26; // [rsp+5Ch] [rbp-5h]
	unsigned int v27; // [rsp+60h] [rbp-1h] BYREF
	unsigned int v28; // [rsp+64h] [rbp+3h]
	int v29; // [rsp+68h] [rbp+7h]
	int v30[4]; // [rsp+70h] [rbp+Fh] BYREF
	int v31; // [rsp+80h] [rbp+1Fh] BYREF
	int v32; // [rsp+84h] [rbp+23h]
	int v33; // [rsp+88h] [rbp+27h]
	int v34; // [rsp+8Ch] [rbp+2Bh]
	unsigned int v35; // [rsp+D0h] [rbp+6Fh] BYREF

	if (!a3)
		return 2147942487i64;
	v9 = *(_DWORD*)(a1 + 48);
	v10 = a2 % *(_DWORD*)(a1 + 52);
	v26 = a2 / *(_DWORD*)(a1 + 52);
	v25 = v10;
	v30[1] = v26 * v9;
	v30[0] = v10 * v9;
	v11 = (unsigned int)a4[3];
	v30[2] = v10 * v9 + v9;
	v30[3] = v26 * v9 + v9;
	v12 = dword_140C38808[*(int*)(a1 + 24)];
	if ((_DWORD)v11 == v12)
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, int*, unsigned int, int*))(**(_QWORD**)(a1 + 32)
			+ 96i64))(
				*(_QWORD*)(a1 + 32),
				0i64,
				v11,
				a3,
				*a5,
				v30);
		if ((int)result < 0)
			return result;
		return 0i64;
	}
	v13 = 0;
	v24 = 0i64;
	v14 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v9,
		v9,
		1i64,
		v12,
		0,
		0,
		0,
		0,
		&v24);
	if (v14 >= 0)
	{
		v15 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, unsigned int*, __int64))(*(_QWORD*)v24 + 72i64))(
			v24,
			0i64,
			&v35,
			3i64);
		if (v15)
		{
			v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 24i64))(v24);
			v17 = v35;
			v18 = *(_DWORD*)(v16 + 4);
			v19 = *(_DWORD*)(v16 + 8);
			v20 = *(_DWORD*)(v16 + 12);
			v27 = v35;
			v31 = (v18 == 0) + v18;
			LOBYTE(v13) = v20 == 0;
			v32 = (v19 == 0) + v19;
			v21 = v13 + v20;
			v22 = *(int*)(v16 + 24);
			v33 = v21;
			v34 = v22;
			v23 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v22);
			LODWORD(v16) = (unsigned int)(v21 + v23[7]) >> v23[8];
			v28 = v35 * ((unsigned int)(v32 + v23[4]) >> v23[5]);
			v29 = v28 * v16;
			v14 = sub_1402645D0(v15, &v31, &v27, a3, a4, a5);
			if (v14 >= 0)
			{
				v14 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, int*, unsigned int, int*))(**(_QWORD**)(a1 + 32)
					+ 96i64))(
						*(_QWORD*)(a1 + 32),
						0i64,
						(unsigned int)v22,
						v15,
						v17,
						v30);
				if (v14 >= 0)
				{
					if (v24)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
					return 0i64;
				}
			}
		}
		else
		{
			v14 = -2147467259;
		}
	}
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	return (unsigned int)v14;
}
// 140C38808: using guessed type int dword_140C38808[6];
// 140C65670: using guessed type __int64 qword_140C65670;

