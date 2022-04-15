#include "../winhttp.h"

//----- (00000001409334F0) ----------------------------------------------------
unsigned __int64* __fastcall sub_1409334F0(__int64 a1)
{
	unsigned __int64* result; // rax
	_QWORD* v3; // rcx
	_QWORD* v4; // rdx
	_QWORD* v5; // rax
	unsigned __int64 v6; // rcx
	__int64 v7; // r12
	__int64 v8; // rax
	_QWORD* v9; // rbp
	__int64 v10; // r14
	_QWORD* v11; // r15
	__int64 v12; // rbx
	char v13; // r9
	unsigned __int8* v14; // rsi
	unsigned __int64 v15; // r13
	unsigned __int8 v16; // al
	unsigned __int8* v17; // rsi
	__int64 v18; // rdi
	unsigned __int8 v19; // al
	int v20; // eax
	char* v21; // rax
	int v22; // r8d
	__int64 v23; // rax
	__int64 v24; // rbx
	char v25; // al
	__int64 v26; // r8
	int v27; // edx
	__int64 v28; // rcx
	char v29; // al
	__int64* i; // rdx
	__int64 v31; // rax
	_DWORD* v32; // rax
	int v33; // ecx
	__int64 v34; // rax
	__int64* v36; // [rsp+68h] [rbp+10h]

	if (*(_DWORD*)a1)
		return 0i64;
	v3 = *(_QWORD**)(a1 + 56);
	v4 = 0i64;
	do
	{
		v5 = (_QWORD*)*v3;
		*v3 = v4;
		v4 = v3;
		v3 = v5;
	} while (v5);
	v6 = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(a1 + 56) = v4;
	result = sub_1409339A0(v6);
	v7 = (__int64)result;
	if (result)
	{
		v8 = *(_QWORD*)(a1 + 56);
		v9 = *(_QWORD**)(a1 + 24);
		v10 = *(_QWORD*)(a1 + 16);
		v11 = *(_QWORD**)(a1 + 8);
		v36 = (__int64*)v8;
		v12 = v7;
		v13 = -47;
		do
		{
			v14 = (unsigned __int8*)(v8 + 16);
			v15 = v8 + 16 + *(_QWORD*)(v8 + 8);
			do
			{
				v16 = *v14;
				v17 = v14 + 1;
				if (v16)
				{
					v18 = v16;
					sub_1407DB590((int*)v12, (int*)v17, v16);
					v12 += v18;
					v14 = &v17[v18];
				}
				else
				{
					v19 = *v17;
					if (*v17 < 4u)
					{
						if (v19)
						{
							if (v19 == 1)
							{
								v9[1] = v12 - 8;
								v9 = (_QWORD*)*v9;
							}
							else
							{
								v26 = *(_QWORD*)(v17 + 1);
								v27 = v19;
								v28 = v26 - v12 - 5;
								if ((unsigned __int64)(v28 + 0x80000000i64) > 0xFFFFFFFF)
								{
									*(_WORD*)v12 = -18103;
									*(_QWORD*)(v12 + 2) = v26;
									*(_WORD*)(v12 + 10) = -191;
									v29 = -31;
									if (v27 == 2)
										v29 = -47;
									v12 += 13i64;
									*(_BYTE*)(v12 - 1) = v29;
								}
								else
								{
									*(_BYTE*)v12 = (v19 != 2) - 24;
									*(_QWORD*)++v12 = v28;
								}
								v17 += 8;
							}
						}
						else
						{
							v11[1] = v12;
							v11[2] = v12 - v7;
							v11 = (_QWORD*)*v11;
						}
					}
					else
					{
						v20 = *(_DWORD*)(v10 + 16);
						*(_QWORD*)(v10 + 8) = v12;
						if ((v20 & 0x1000) != 0)
						{
							v22 = *v17 - 4;
							if (v22 < 22)
							{
								v12 += 2i64;
								*(_BYTE*)(v12 - 2) = sub_14092F340(v22 ^ 1) - 16;
								*(_BYTE*)(v12 - 1) = 13;
							}
							*(_WORD*)v12 = -18103;
							v23 = *(_QWORD*)(v10 + 16);
							v24 = v12 + 2;
							*(_QWORD*)(v10 + 8) = v24;
							if ((v23 & 1) != 0)
								*(_QWORD*)(v10 + 16) = v23 | 0x10;
							else
								*(_QWORD*)v24 = *(_QWORD*)(v10 + 24);
							*(_WORD*)(v24 + 8) = -191;
							v25 = -31;
							if (v22 >= 23)
								v25 = v13;
							v12 = v24 + 11;
							*(_BYTE*)(v12 - 1) = v25;
							v10 = *(_QWORD*)v10;
						}
						else
						{
							v21 = sub_14092ED20(v10, (_WORD*)v12, v7, (unsigned int)*v17 - 4);
							v10 = *(_QWORD*)v10;
							v12 = (__int64)v21;
						}
					}
					v14 = v17 + 1;
				}
				v13 = -47;
			} while ((unsigned __int64)v14 < v15);
			v8 = *v36;
			v36 = (__int64*)v8;
		} while (v8);
		for (i = *(__int64**)(a1 + 16); i; i = (__int64*)*i)
		{
			v31 = i[2];
			if ((v31 & 4) != 0)
			{
				*(_BYTE*)i[1] = *(_BYTE*)(i[3] + 8) - *((_BYTE*)i + 8) - 1;
			}
			else if ((v31 & 8) != 0)
			{
				if ((v31 & 1) != 0)
				{
					v32 = (_DWORD*)i[1];
					v33 = *(_DWORD*)(i[3] + 8) - *((_DWORD*)i + 2);
				}
				else
				{
					v32 = (_DWORD*)i[1];
					v33 = *((_DWORD*)i + 6) - *((_DWORD*)i + 2);
				}
				*v32 = v33 - 4;
			}
			else if ((v31 & 0x10) != 0)
			{
				*(_QWORD*)i[1] = *(_QWORD*)(i[3] + 8);
			}
		}
		v34 = *(_QWORD*)(a1 + 88);
		*(_DWORD*)a1 = 1;
		*(_QWORD*)(a1 + 96) = v34;
		return (unsigned __int64*)v7;
	}
	else
	{
		*(_DWORD*)a1 = 3;
	}
	return result;
}
// 14093366C: variable 'v22' is possibly undefined
// 14093366C: variable 'v13' is possibly undefined

