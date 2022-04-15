//----- (000000014048A9E0) ----------------------------------------------------
__int64 __fastcall sub_14048A9E0(__int64 a1, __int64* a2)
{
	double v2; // xmm0_8
	unsigned int v3; // r15d
	__int64* v4; // r13
	__int64 v5; // rdi
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	unsigned int v11; // ecx
	__int64 v12; // rbx
	unsigned __int64 v13; // r14
	_QWORD* v14; // r8
	int v15; // eax
	double v16; // xmm1_8
	unsigned __int64 v17; // rcx
	_QWORD* v18; // rax
	_QWORD* v19; // rsi
	_QWORD* v20; // rdi
	unsigned int* v21; // rax
	__int64 v22; // rax
	unsigned int v23; // r13d
	_QWORD* v24; // rbx
	_QWORD* k; // rax
	_QWORD* v26; // rax
	_QWORD* v27; // rdx
	__int64 v28; // r14
	unsigned __int64 v29; // rsi
	_QWORD* v30; // rdi
	bool v31; // al
	_QWORD* v32; // rcx
	_QWORD* m; // rax
	_QWORD* v34; // rax
	int* v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rax
	_QWORD* n; // rcx
	__int64 ii; // rcx
	__int64 v40; // rax
	_QWORD* v42; // [rsp+20h] [rbp-48h] BYREF
	char v43[8]; // [rsp+28h] [rbp-40h] BYREF
	_QWORD* v44; // [rsp+30h] [rbp-38h]
	__int64 v45; // [rsp+38h] [rbp-30h]
	__int64 v48; // [rsp+C0h] [rbp+58h]
	unsigned __int64 v49; // [rsp+C8h] [rbp+60h]

	v3 = 0;
	v4 = a2;
	a2[1] = 0i64;
	v5 = a1;
	if ((unsigned __int64)*(unsigned int*)(a1 + 16) >= *(_QWORD*)(a1 + 40))
	{
		v6 = *(_QWORD**)(a1 + 32);
		v7 = (_QWORD*)v6[2];
		if (v7 != v6)
		{
			do
			{
				sub_140033260(v4, v7 + 5);
				v8 = v7[3];
				if (v8)
				{
					v7 = (_QWORD*)v7[3];
					for (i = *(_QWORD**)(v8 + 16); i; i = (_QWORD*)i[2])
						v7 = i;
				}
				else
				{
					for (j = v7[1]; v7 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v7 = (_QWORD*)j;
					if (v7[3] != j)
						v7 = (_QWORD*)j;
				}
			} while (v7 != *(_QWORD**)(v5 + 32));
		}
		goto LABEL_86;
	}
	sub_14048B2A0((__int64)v43, a1 + 24);
	v11 = *(_DWORD*)(v5 + 16);
	v12 = *(_QWORD*)(v5 + 8);
	v48 = v12;
	if (*(_DWORD*)(v5 + 40) < v11)
		v11 = *(_DWORD*)(v5 + 40);
	v13 = v11;
	v49 = v11;
	if (!v11)
	{
	LABEL_85:
		sub_140008410((__int64)v43);
		sub_14018B900((__int64)v44, 0);
	LABEL_86:
		LOBYTE(v3) = v4[1] == 0;
		return v3;
	}
	v14 = v44;
	while (1)
	{
		if ((unsigned __int64)v12 > 1)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65940 + 16i64))(
				qword_140C65940,
				(unsigned int)(qword_140C65938 + v13 + *(_DWORD*)v5));
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65940 + 48i64))(qword_140C65940);
			v16 = (double)(int)v12;
			if (v12 < 0)
				v16 = v16 + 1.844674407370955e19;
			v14 = v44;
			v2 = v2 * v16;
			v15 = (int)v2;
		}
		else
		{
			v15 = 0;
		}
		v17 = (unsigned int)(v15 + 1);
		v18 = (_QWORD*)v14[1];
		v19 = v14;
		while (v18)
		{
			if (v18[4] < v17)
			{
				v18 = (_QWORD*)v18[3];
			}
			else
			{
				v19 = v18;
				v18 = (_QWORD*)v18[2];
			}
		}
		v20 = v19;
		if (v19 == v14)
			break;
		sub_140033260(v4, v19 + 5);
		if (v13 <= 1)
		{
			v14 = v44;
			v12 = v48;
		}
		else
		{
			v21 = (unsigned int*)v19[5];
			if (v21 && (v22 = sub_1401FB9E0(*v21)) != 0)
				v23 = *(_DWORD*)(v22 + 16);
			else
				v23 = 0;
			v24 = (_QWORD*)v19[3];
			if (v24)
			{
				for (k = (_QWORD*)v24[2]; k; k = (_QWORD*)k[2])
					v24 = k;
			}
			else
			{
				v26 = (_QWORD*)v19[1];
				if (v19 == (_QWORD*)v26[3])
				{
					do
					{
						v20 = v26;
						v26 = (_QWORD*)v26[1];
					} while (v20 == (_QWORD*)v26[3]);
				}
				v24 = v20;
				if ((_QWORD*)v20[3] != v26)
					v24 = v26;
			}
			v42 = v19;
			sub_14048B640((__int64)v43, (__int64*)&v42);
			v14 = v44;
			if (v24 != v44)
			{
				while (1)
				{
					v27 = (_QWORD*)v14[1];
					v28 = v24[5];
					v29 = v24[4] - v23;
					v30 = v14;
					v31 = 1;
					while (v27)
					{
						v30 = v27;
						v31 = v29 < v27[4];
						if (v29 >= v27[4])
							v27 = (_QWORD*)v27[3];
						else
							v27 = (_QWORD*)v27[2];
					}
					v32 = v30;
					if (v31)
					{
						if (v30 == (_QWORD*)v14[2])
							goto LABEL_59;
						if (*(_BYTE*)v30 || *(_QWORD**)(v30[1] + 8i64) != v30)
						{
							v32 = (_QWORD*)v30[2];
							if (v32)
							{
								for (m = (_QWORD*)v32[3]; m; m = (_QWORD*)m[3])
									v32 = m;
							}
							else
							{
								v32 = (_QWORD*)v30[1];
								if (v30 == (_QWORD*)v32[2])
								{
									do
									{
										v34 = v32;
										v32 = (_QWORD*)v32[1];
									} while (v34 == (_QWORD*)v32[2]);
								}
							}
						}
						else
						{
							v32 = (_QWORD*)v30[3];
						}
					}
					if (v32[4] < v29)
					{
					LABEL_59:
						if (v30 == v14 || v29 < v30[4])
						{
							v35 = sub_14018B280(48i64, 0);
							if (v35 != (int*)-32i64)
							{
								*((_QWORD*)v35 + 4) = v29;
								*((_QWORD*)v35 + 5) = v28;
							}
							v30[2] = v35;
							if (v30 == v44)
							{
								v44[1] = v35;
								v44[3] = v35;
							}
							else if (v30 == (_QWORD*)v44[2])
							{
								v44[2] = v35;
							}
						}
						else
						{
							v35 = sub_14018B280(48i64, 0);
							if (v35 != (int*)-32i64)
							{
								*((_QWORD*)v35 + 4) = v29;
								*((_QWORD*)v35 + 5) = v28;
							}
							v30[3] = v35;
							if (v30 == (_QWORD*)v44[3])
								v44[3] = v35;
						}
						*((_QWORD*)v35 + 1) = v30;
						*((_QWORD*)v35 + 2) = 0i64;
						*((_QWORD*)v35 + 3) = 0i64;
						sub_1400081C0((__int64)v35, v44 + 1);
						++v45;
					}
					v36 = v24[3];
					v37 = (__int64)v24;
					if (v36)
					{
						v24 = (_QWORD*)v24[3];
						for (n = *(_QWORD**)(v36 + 16); n; n = (_QWORD*)n[2])
							v24 = n;
					}
					else
					{
						for (ii = v24[1]; v24 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
							v24 = (_QWORD*)ii;
						if (v24[3] != ii)
							v24 = (_QWORD*)ii;
					}
					v42 = (_QWORD*)v37;
					sub_14048B640((__int64)v43, (__int64*)&v42);
					v14 = v44;
					if (v24 == v44)
					{
						v13 = v49;
						break;
					}
				}
			}
			v40 = v23;
			v4 = a2;
			v12 = v48 - v40;
			v48 -= v40;
		}
		v5 = a1;
		v49 = --v13;
		if (!v13)
			goto LABEL_85;
	}
	sub_140008410((__int64)v43);
	sub_14018B900((__int64)v44, 0);
	return 2147500037i64;
}
// 14048ACAF: conditional instruction was optimized away because rdx.8==0
// 14048AB16: variable 'v2' is possibly undefined
// 140C65938: using guessed type __int64 qword_140C65938;
// 140C65940: using guessed type __int64 qword_140C65940;
// 14048A9E0: using guessed type char var_40[8];

