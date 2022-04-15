//----- (000000014073F5C0) ----------------------------------------------------
__int64 __fastcall sub_14073F5C0(__int64 a1, _DWORD* a2)
{
	_DWORD* v2; // rbx
	char* v3; // rdi
	__int64* v4; // r13
	__int64* v5; // r12
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // r15
	int v9; // ecx
	__int64 v10; // rbp
	__int64 v11; // r14
	unsigned __int64 v12; // rdi
	_QWORD* v13; // rbx
	__int64 v14; // r13
	unsigned int* v15; // r12
	__int64 v16; // r15
	__int64 v17; // rax
	__int64 v18; // rcx
	unsigned int v19; // ecx
	__int64 v20; // r14
	__int64 v21; // rbp
	unsigned __int64 v22; // rdi
	_QWORD* v23; // rbx
	__int64 v24; // rcx
	int v25; // eax
	__int64 result; // rax
	_DWORD* v27; // rbx
	_DWORD* v28; // rbx
	__int64 v31; // [rsp+28h] [rbp-60h]
	__int64* v32; // [rsp+30h] [rbp-58h] BYREF
	__int64 v33; // [rsp+38h] [rbp-50h]
	unsigned int v34; // [rsp+40h] [rbp-48h] BYREF
	unsigned int v35; // [rsp+44h] [rbp-44h]
	unsigned int v36; // [rsp+48h] [rbp-40h]

	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	v2 = a2;
	*(_DWORD*)(a1 + 52) = -1;
	v3 = (char*)a1;
	sub_1407E4830((int*)(a1 + 56), 0i64, 0x54ui64);
	v33 = 0i64;
	v32 = 0i64;
	sub_1403D6710(qword_140C65898 + 160, (__int64*)&v32);
	v4 = &v32[v33];
	v5 = v32;
	if (v32 != v4)
	{
		do
		{
			v6 = *v5;
			if (*v5)
			{
				v7 = *(_DWORD*)(*(_QWORD*)(v6 + 64) + 380i64);
				v8 = (unsigned int)(v7 - 1) > 5 ? (unsigned int)(v7 != 20) + 6 : (unsigned int)(v7 - 1);
				v9 = *(_DWORD*)(v6 + 136);
				if (v9 < 0)
				{
					v10 = 0i64;
					v34 = v9 & 0x3FF;
					v36 = ((unsigned int)v9 >> 20) & 0x3FF;
					v11 = 0i64;
					v35 = ((unsigned int)v9 >> 10) & 0x3FF;
					do
					{
						if (*(&v34 + v11))
						{
							v12 = qword_140C4B740(&v34 + v10);
							v13 = *(_QWORD**)(qword_140C4B738 + 8 * (v12 % qword_140C4B730));
							if (v13)
							{
								while (v12 != *v13 || !(unsigned int)qword_140C4B748(&v34 + v10, v13 + 2))
								{
									v13 = (_QWORD*)v13[1];
									if (!v13)
										goto LABEL_13;
								}
								v3 = (char*)a1;
								v27 = (_DWORD*)v13 + 5;
								if (v27)
									*(_DWORD*)(a1 + 4 * (v11 + 2 * v8 + (unsigned int)v8) + 56) = *v27;
							}
							else
							{
							LABEL_13:
								v3 = (char*)a1;
							}
						}
						v10 = (unsigned int)(v10 + 1);
						++v11;
					} while ((unsigned int)v10 < 3);
				}
			}
			++v5;
		} while (v5 != v4);
		v2 = a2;
	}
	if (v2)
	{
		v14 = 0i64;
		v15 = v2 + 7;
		*((_DWORD*)v3 + 6) = *v2;
		v16 = 14i64;
		*((_DWORD*)v3 + 7) = v2[1];
		*((_DWORD*)v3 + 8) = v2[2];
		*((_DWORD*)v3 + 9) = v2[3];
		*((_DWORD*)v3 + 10) = v2[4];
		*((_DWORD*)v3 + 11) = v2[5];
		*((_DWORD*)v3 + 12) = v2[6];
		*((_DWORD*)v3 + 13) = v2[14];
		v17 = v3 - (char*)v2 - 4;
		v31 = v17;
		do
		{
			if (*(unsigned int*)((char*)v15 + v17))
			{
				v18 = 3 * v14;
				*(_QWORD*)&v3[4 * v18 + 56] = 0i64;
				*(_DWORD*)&v3[4 * v18 + 64] = 0;
			}
			v19 = *v15;
			if ((*v15 & 0x80000000) != 0)
			{
				v20 = 0i64;
				v34 = *v15 & 0x3FF;
				v36 = (v19 >> 20) & 0x3FF;
				v21 = 0i64;
				v35 = (v19 >> 10) & 0x3FF;
				do
				{
					if (*(&v34 + v21))
					{
						v22 = qword_140C4B740(&v34 + v20);
						v23 = *(_QWORD**)(qword_140C4B738 + 8 * (v22 % qword_140C4B730));
						if (v23)
						{
							while (v22 != *v23 || !(unsigned int)qword_140C4B748(&v34 + v20, v23 + 2))
							{
								v23 = (_QWORD*)v23[1];
								if (!v23)
									goto LABEL_28;
							}
							v3 = (char*)a1;
							v28 = (_DWORD*)v23 + 5;
							if (v28)
								*(_DWORD*)(a1 + 4 * (v16 + v21)) = *v28;
						}
						else
						{
						LABEL_28:
							v3 = (char*)a1;
						}
					}
					v20 = (unsigned int)(v20 + 1);
					++v21;
				} while ((unsigned int)v20 < 3);
			}
			v17 = v31;
			v14 = (unsigned int)(v14 + 1);
			++v15;
			v16 += 3i64;
		} while ((unsigned int)v14 < 7);
	}
	v24 = (__int64)v32;
	*((_DWORD*)v3 + 35) = *((_DWORD*)v3 + 14);
	*((_DWORD*)v3 + 36) = *((_DWORD*)v3 + 15);
	*((_DWORD*)v3 + 37) = *((_DWORD*)v3 + 16);
	*((_DWORD*)v3 + 38) = *((_DWORD*)v3 + 17);
	*((_DWORD*)v3 + 39) = *((_DWORD*)v3 + 18);
	*((_DWORD*)v3 + 40) = *((_DWORD*)v3 + 19);
	*((_DWORD*)v3 + 41) = *((_DWORD*)v3 + 20);
	v25 = *((_DWORD*)v3 + 21);
	*((_DWORD*)v3 + 56) = 0;
	*((_DWORD*)v3 + 42) = v25;
	*((_DWORD*)v3 + 43) = *((_DWORD*)v3 + 22);
	*((_DWORD*)v3 + 44) = *((_DWORD*)v3 + 23);
	*((_DWORD*)v3 + 45) = *((_DWORD*)v3 + 24);
	*((_DWORD*)v3 + 46) = *((_DWORD*)v3 + 25);
	*((_DWORD*)v3 + 47) = *((_DWORD*)v3 + 26);
	*((_DWORD*)v3 + 48) = *((_DWORD*)v3 + 27);
	*((_DWORD*)v3 + 49) = *((_DWORD*)v3 + 28);
	*((_DWORD*)v3 + 50) = *((_DWORD*)v3 + 29);
	*((_DWORD*)v3 + 51) = *((_DWORD*)v3 + 30);
	*((_DWORD*)v3 + 52) = *((_DWORD*)v3 + 31);
	*((_DWORD*)v3 + 53) = *((_DWORD*)v3 + 32);
	*((_DWORD*)v3 + 54) = *((_DWORD*)v3 + 33);
	result = *((unsigned int*)v3 + 34);
	*((_DWORD*)v3 + 55) = result;
	if (v24)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	return result;
}
// 140C4B730: using guessed type __int64 qword_140C4B730;
// 140C4B738: using guessed type __int64 qword_140C4B738;
// 140C4B740: using guessed type __int64 (__fastcall *qword_140C4B740)(_QWORD);
// 140C4B748: using guessed type __int64 (__fastcall *qword_140C4B748)(_QWORD, _QWORD);
// 140C65898: using guessed type __int64 qword_140C65898;

