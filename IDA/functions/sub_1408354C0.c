//----- (00000001408354C0) ----------------------------------------------------
__int64 __fastcall sub_1408354C0(__int64 a1, int a2, int a3, int* a4, unsigned int a5)
{
	__int64* v5; // rax
	__int64 v10; // rax
	_QWORD* v11; // rcx
	__int64 v12; // rax
	_QWORD* v13; // rbx
	__int64 v14; // rdx
	_QWORD* v16; // rcx
	__int64 v17; // rbx
	__int64 v18; // rbx
	unsigned int v19; // r15d
	__int64* v20; // rcx
	__int64* v21; // rax
	__int64* v22; // rdx
	__int64 v23; // r14
	__int64* v24; // rbx
	_QWORD* v25; // rax
	_QWORD* v26; // rcx
	__int64 v27; // rax
	_QWORD* v28; // rax
	_QWORD* v29; // rcx
	__int64 v30; // rax
	__int64* v31; // rcx
	__int64 v32; // rax
	_QWORD* v33; // rcx
	__int64 v34; // rcx
	__int64* v35; // [rsp+30h] [rbp-38h]
	__int64* v36; // [rsp+38h] [rbp-30h]
	__int64 v37; // [rsp+48h] [rbp-20h]

	v5 = *(__int64**)(a1 + 4712);
	if (!v5)
	{
	LABEL_4:
		if (!*(_QWORD*)(a1 + 4728))
		{
			if (*(_DWORD*)(a1 + 4744) >= *(_DWORD*)(a1 + 4740))
				goto LABEL_20;
			v10 = sub_1408819F0(dword_140C10F20, 80i64);
			if (!v10)
				goto LABEL_20;
			if (v10 != -8)
			{
				*(_QWORD*)(v10 + 16) = 0i64;
				*(_QWORD*)(v10 + 24) = 0i64;
				*(_QWORD*)(v10 + 56) = 0i64;
				*(_DWORD*)(v10 + 64) = 0;
			}
			*(_QWORD*)v10 = *(_QWORD*)(a1 + 4728);
			*(_QWORD*)(a1 + 4728) = v10;
		}
		v11 = *(_QWORD**)(a1 + 4720);
		v12 = *(_QWORD*)(a1 + 4728);
		if (v11)
			*v11 = v12;
		else
			*(_QWORD*)(a1 + 4712) = v12;
		v16 = *(_QWORD**)(a1 + 4728);
		*(_QWORD*)(a1 + 4720) = v16;
		*(_QWORD*)(a1 + 4728) = *v16;
		*v16 = 0i64;
		v17 = *(_QWORD*)(a1 + 4720);
		++* (_DWORD*)(a1 + 4744);
		v18 = v17 + 8;
		if (v18)
		{
			*(_DWORD*)v18 = a2;
			*(_DWORD*)(v18 + 4) = a3;
			v19 = sub_140837E30(v18 + 8, a4, a5, 0);
			if (v19 == 1)
			{
				*(_DWORD*)(v18 + 56) = 0;
				*(_DWORD*)(v18 + 52) = -1;
				*(_QWORD*)(v18 + 40) = 0i64;
				*(_QWORD*)(v18 + 64) = 0i64;
				*(_QWORD*)(v18 + 24) = 0i64;
				*(_QWORD*)(v18 + 32) = 0i64;
			}
			else
			{
				sub_140837AD0(a1, a2);
			}
		LABEL_21:
			v20 = *(__int64**)(a1 + 4664);
			v21 = 0i64;
			if (!v20)
				return v19;
			while (1)
			{
				if (*((_DWORD*)v20 + 4) != a2)
				{
					v21 = v20;
					v20 = (__int64*)*v20;
					goto LABEL_50;
				}
				v22 = (__int64*)*v20;
				v23 = v20[1];
				v36 = v21;
				v35 = (__int64*)*v20;
				if (v20 == *(__int64**)(a1 + 4664))
					*(_QWORD*)(a1 + 4664) = v22;
				else
					*v21 = (__int64)v22;
				if (v20 == *(__int64**)(a1 + 4672))
					*(_QWORD*)(a1 + 4672) = v21;
				*v20 = *(_QWORD*)(a1 + 4680);
				--* (_DWORD*)(a1 + 4696);
				*(_QWORD*)(a1 + 4680) = v20;
				v24 = *(__int64**)(a1 + 4712);
				if (v24)
				{
					while (*((_DWORD*)v24 + 2) != a2)
					{
						v24 = (__int64*)*v24;
						if (!v24)
							goto LABEL_31;
					}
					if (v24[6])
						goto LABEL_42;
					if (*((_DWORD*)v24 + 16) < *((_DWORD*)v24 + 15))
					{
						v28 = (_QWORD*)sub_1408819F0(dword_140C10F20, 16i64);
						if (v28)
						{
							*v28 = v24[6];
							v24[6] = (__int64)v28;
						LABEL_42:
							v29 = (_QWORD*)v24[5];
							v30 = v24[6];
							if (v29)
								*v29 = v30;
							else
								v24[4] = v30;
							v31 = (__int64*)v24[6];
							v24[5] = (__int64)v31;
							v24[6] = *v31;
							*v31 = 0i64;
							v32 = v24[5];
							++* ((_DWORD*)v24 + 16);
							v20 = v35;
							*(_QWORD*)(v32 + 8) = v23;
							v21 = v36;
							goto LABEL_50;
						}
					}
					goto LABEL_48;
				}
			LABEL_31:
				if (v23)
				{
					sub_140839150(a1, v23);
					LODWORD(v37) = a2;
					if (*(_QWORD*)(a1 + 4680))
						goto LABEL_36;
					if (*(_DWORD*)(a1 + 4696) < *(_DWORD*)(a1 + 4692))
					{
						v25 = (_QWORD*)sub_1408819F0(dword_140C10F20, 24i64);
						if (v25)
							break;
					}
				}
			LABEL_48:
				v21 = v36;
				v20 = v35;
			LABEL_50:
				if (!v20)
					return v19;
			}
			*v25 = *(_QWORD*)(a1 + 4680);
			*(_QWORD*)(a1 + 4680) = v25;
		LABEL_36:
			v26 = *(_QWORD**)(a1 + 4672);
			v27 = *(_QWORD*)(a1 + 4680);
			if (v26)
				*v26 = v27;
			else
				*(_QWORD*)(a1 + 4664) = v27;
			v33 = *(_QWORD**)(a1 + 4680);
			*(_QWORD*)(a1 + 4672) = v33;
			*(_QWORD*)(a1 + 4680) = *v33;
			*v33 = 0i64;
			v34 = *(_QWORD*)(a1 + 4672);
			++* (_DWORD*)(a1 + 4696);
			*(_QWORD*)(v34 + 8) = v23;
			*(_QWORD*)(v34 + 16) = v37;
			goto LABEL_48;
		}
	LABEL_20:
		v19 = 2;
		goto LABEL_21;
	}
	while (*((_DWORD*)v5 + 2) != a2)
	{
		v5 = (__int64*)*v5;
		if (!v5)
			goto LABEL_4;
	}
	v13 = v5 + 2;
	*((_DWORD*)v5 + 3) = a3;
	v14 = v5[2];
	if (v14)
	{
		sub_140881720(dword_140C10F20, v14);
		*v13 = 0i64;
	}
	v13[1] = 0i64;
	return sub_140837E30((__int64)v13, a4, a5, 0);
}
// 1408357F7: variable 'v37' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

