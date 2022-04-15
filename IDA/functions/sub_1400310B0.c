//----- (00000001400310B0) ----------------------------------------------------
__int64 __fastcall sub_1400310B0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v5; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rcx
	unsigned int v17; // r13d
	int* v18; // rax
	_QWORD* v19; // r14
	_QWORD* v20; // rdi
	_QWORD* v21; // rsi
	_QWORD* v22; // rcx
	_QWORD* v23; // rbx
	_QWORD* v24; // rax
	_QWORD* i; // rax
	__int64 v26; // rdx
	unsigned int v27; // edx
	_DWORD* v28; // rax
	__int64 v29; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	__int64 v32; // rdx
	__int64 v33; // rcx
	__int64 v34; // rax
	__int64 v35; // r8
	__int64 v36; // rdx
	__int64 v37; // rax
	_QWORD* v38; // rdi
	_QWORD* v39; // rbx
	__int64 v40; // r15
	__int64 v41; // r14
	unsigned int v42; // r8d
	unsigned int* v43; // r10
	unsigned int v44; // edx
	unsigned int v45; // r11d
	__int64 v46; // r9
	__int64 v47; // rcx
	__int64 v48; // rax
	__int64* v49; // rax
	__int64 v50; // rax
	int* v51; // rax
	int* v52; // [rsp+20h] [rbp-38h] BYREF
	int* v53; // [rsp+28h] [rbp-30h] BYREF
	char v54; // [rsp+30h] [rbp-28h]
	__int64 v55; // [rsp+80h] [rbp+28h] BYREF
	__int64 v56; // [rsp+98h] [rbp+40h] BYREF

	v55 = a1;
	v5 = a1;
	if (!*(_QWORD*)(a1 + 16))
		return 0i64;
	v7 = sub_1401F0BA0(a2);
	if (!v7)
		return 0i64;
	v8 = *(_DWORD*)(v7 + 8);
	if (v8)
	{
		if (v8 != *(_DWORD*)(v5 + 8))
			return 0i64;
	}
	v9 = *(_QWORD*)(*(_QWORD*)(v5 + 16) + 8i64);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < a2)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v56 = v10, a2 < *(_DWORD*)(v10 + 32)))
		v56 = v9;
	if (v56 == v9)
		return 0i64;
	v12 = *(_QWORD*)(v56 + 48);
	v13 = v12;
	v14 = *(_QWORD*)(v12 + 8);
	while (v14)
	{
		if (*(_DWORD*)(v14 + 32) < a3)
		{
			v14 = *(_QWORD*)(v14 + 24);
		}
		else
		{
			v13 = v14;
			v14 = *(_QWORD*)(v14 + 16);
		}
	}
	if (v13 == v12 || (v56 = v13, a3 < *(_DWORD*)(v13 + 32)))
		v56 = v12;
	if (v56 == v12)
		return 0i64;
	v15 = *(_QWORD*)(v5 + 32);
	v16 = *(_QWORD*)(v15 + 8);
	v17 = 0;
	v18 = (int*)v15;
	while (v16)
	{
		if (*(_DWORD*)(v16 + 32) < a2)
		{
			v16 = *(_QWORD*)(v16 + 24);
		}
		else
		{
			v18 = (int*)v16;
			v16 = *(_QWORD*)(v16 + 16);
		}
	}
	if (v18 == (int*)v15 || a2 < v18[8])
	{
		v56 = a2;
		v52 = v18;
		sub_140032B30(v5 + 24, &v53, (__int64*)&v52, &v56);
		v18 = v53;
	}
	v18[9] = a3;
	v19 = *(_QWORD**)(v5 + 64);
	v20 = (_QWORD*)v19[2];
	if (v20 != v19)
	{
		do
		{
			v21 = (_QWORD*)v20[6];
			v22 = (_QWORD*)v21[2];
			if (v22 != v21)
			{
				do
				{
					v23 = (_QWORD*)v22[3];
					v24 = v22;
					if (v23)
					{
						for (i = (_QWORD*)v23[2]; i; i = (_QWORD*)i[2])
							v23 = i;
					}
					else
					{
						v26 = v22[1];
						if (v22 == *(_QWORD**)(v26 + 24))
						{
							do
							{
								v24 = (_QWORD*)v26;
								v26 = *(_QWORD*)(v26 + 8);
							} while (v24 == *(_QWORD**)(v26 + 24));
						}
						v23 = v24;
						if (v24[3] != v26)
							v23 = (_QWORD*)v26;
					}
					v27 = 0;
					v28 = (_DWORD*)(v22[4] + 32i64);
					while (*(v28 - 2) != a2 || !*v28 || *v28 == a3)
					{
						++v27;
						++v28;
						if (v27 >= 2)
							goto LABEL_49;
					}
					v56 = (__int64)v22;
					sub_1400327D0((__int64)(v20 + 5), &v56);
					v17 = 1;
				LABEL_49:
					v22 = v23;
				} while (v23 != v21);
			}
			v29 = v20[3];
			if (v29)
			{
				v20 = (_QWORD*)v20[3];
				for (j = *(_QWORD**)(v29 + 16); j; j = (_QWORD*)j[2])
					v20 = j;
			}
			else
			{
				for (k = v20[1]; v20 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
					v20 = (_QWORD*)k;
				if (v20[3] != k)
					v20 = (_QWORD*)k;
			}
		} while (v20 != v19);
		v5 = v55;
	}
	v32 = *(_QWORD*)(*(_QWORD*)(v5 + 16) + 8i64);
	v33 = v32;
	v34 = *(_QWORD*)(v32 + 8);
	while (v34)
	{
		if (*(_DWORD*)(v34 + 32) < a2)
		{
			v34 = *(_QWORD*)(v34 + 24);
		}
		else
		{
			v33 = v34;
			v34 = *(_QWORD*)(v34 + 16);
		}
	}
	if (v33 == v32 || (v56 = v33, a2 < *(_DWORD*)(v33 + 32)))
		v56 = v32;
	if (v56 != v32)
	{
		v35 = *(_QWORD*)(v56 + 48);
		v36 = v35;
		v37 = *(_QWORD*)(v35 + 8);
		while (v37)
		{
			if (*(_DWORD*)(v37 + 32) < a3)
			{
				v37 = *(_QWORD*)(v37 + 24);
			}
			else
			{
				v36 = v37;
				v37 = *(_QWORD*)(v37 + 16);
			}
		}
		if (v36 == v35 || (v56 = v36, a3 < *(_DWORD*)(v36 + 32)))
			v56 = v35;
		if (v56 != v35)
		{
			v38 = *(_QWORD**)(v56 + 48);
			v39 = (_QWORD*)*v38;
			if ((_QWORD*)*v38 != v38)
			{
				v40 = v55;
				do
				{
					v41 = v39[2];
					v42 = 0;
					v43 = (unsigned int*)(v41 + 24);
					do
					{
						v44 = *v43;
						if (*v43)
						{
							v45 = v43[2];
							if (v45)
							{
								v46 = *(_QWORD*)(v40 + 32);
								v47 = v46;
								v48 = *(_QWORD*)(v46 + 8);
								while (v48)
								{
									if (*(_DWORD*)(v48 + 32) < v44)
									{
										v48 = *(_QWORD*)(v48 + 24);
									}
									else
									{
										v47 = v48;
										v48 = *(_QWORD*)(v48 + 16);
									}
								}
								if (v47 == v46 || v44 < *(_DWORD*)(v47 + 32))
								{
									v56 = *(_QWORD*)(v40 + 32);
									v49 = &v56;
								}
								else
								{
									v55 = v47;
									v49 = &v55;
								}
								v50 = *v49;
								if (v50 == v46 || *(_DWORD*)(v50 + 36) != v45)
									break;
							}
						}
						++v42;
						++v43;
					} while (v42 < 2);
					if (v42 == 2)
					{
						v51 = sub_1400326C0(v40 + 56, (int*)(v41 + 12));
						sub_140007810((__int64)v51, (__int64)&v53, v39 + 2);
						if (v54)
							v17 = 1;
					}
					v39 = (_QWORD*)*v39;
				} while (v39 != v38);
			}
		}
	}
	return v17;
}

