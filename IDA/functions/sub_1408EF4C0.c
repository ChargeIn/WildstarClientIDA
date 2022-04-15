#include "../winhttp.h"

//----- (00000001408EF4C0) ----------------------------------------------------
__int64 __fastcall sub_1408EF4C0(__int64 a1, char* a2, int a3, __int64 a4, int a5, __int64 a6)
{
	int v6; // esi
	int v11; // eax
	unsigned int v12; // ecx
	unsigned int v13; // edx
	_DWORD* v14; // r8
	int v15; // edx
	unsigned __int64 v16; // rcx
	__int64 v17; // rax
	signed __int64 v18; // rax
	void* v19; // rsp
	void* v20; // rsp
	_DWORD* v21; // rbx
	__int64 result; // rax
	int v23; // ecx
	unsigned int v24; // ecx
	unsigned int v25; // edx
	__int64 v26; // r10
	bool v27; // zf
	__int64 v28; // rdx
	__int16 v29; // cx
	__int64 v30; // rdx
	char v31; // cl
	int v32; // ecx
	int v33; // r8d
	int v34; // ecx
	_DWORD* v35; // r9
	unsigned __int64 v36; // r11
	int v37; // ecx
	char v38; // cl
	char v39; // cl
	_WORD* v40; // r9
	_WORD* v41; // r11
	_WORD* v42; // r10
	unsigned __int16* v43; // rdx
	unsigned __int64 v44; // rdi
	int v45; // eax
	__int16 v46; // ax
	__int16 v47; // ax
	_DWORD v48[8]; // [rsp+40h] [rbp+0h] BYREF

	v6 = 0;
	if (*(_DWORD*)(a1 + 24) == 4)
	{
		v11 = *(_DWORD*)(a1 + 8);
		if (8 * v11 == -4
			|| (v12 = (8 * v11 + 7) & 0xFFFFFFFC, v13 = v12 + *(_DWORD*)(a6 + 16), v13 > *(_DWORD*)(a6 + 20)))
		{
			v14 = 0i64;
		}
		else
		{
			v14 = *(_DWORD**)(a6 + 8);
			*(_DWORD*)(a6 + 16) = v13;
			*(_QWORD*)(a6 + 8) = (char*)v14 + v12;
		}
		v15 = *(_DWORD*)(a1 + 4);
		*(_QWORD*)(a1 + 16) = v14;
		sub_1408EF8D0(a2, v15, v14, a3, (unsigned int*)a1, a4, a5);
	}
	v16 = 4i64 * (2 * *(_DWORD*)(a1 + 8) - 2);
	v17 = v16 + 15;
	if (v16 + 15 <= v16)
		v17 = 0xFFFFFFFFFFFFFF0i64;
	v18 = v17 & 0xFFFFFFFFFFFFFFF0ui64;
	v19 = alloca(v18);
	v20 = alloca(v18);
	v21 = v48;
	result = sub_1408EF8D0(a2, *(_DWORD*)(a1 + 4), v48, a3, (unsigned int*)a1, a4, a5);
	v23 = *(_DWORD*)(a1 + 24) * (*(_DWORD*)(a1 + 8) * (*(_DWORD*)(a1 + 28) + 1) - 2);
	if (v23 && (v24 = (v23 + 3) & 0xFFFFFFFC, v25 = v24 + *(_DWORD*)(a6 + 16), v25 <= *(_DWORD*)(a6 + 20)))
	{
		v26 = *(_QWORD*)(a6 + 8);
		*(_DWORD*)(a6 + 16) = v25;
		result = v26 + v24;
		*(_QWORD*)(a6 + 8) = result;
	}
	else
	{
		v26 = 0i64;
	}
	v27 = *(_DWORD*)(a1 + 28) == 1;
	*(_QWORD*)(a1 + 16) = v26;
	if (v27)
	{
		if (*(_DWORD*)(a1 + 24) == 1)
		{
			v30 = 0i64;
			result = (unsigned int)(2 * *(_DWORD*)(a1 + 8) - 2);
			if (2 * *(_DWORD*)(a1 + 8) - 2 > 0)
			{
				do
				{
					v31 = HIBYTE(v48[v30]);
					++v6;
					++v30;
					*(_BYTE*)(v30 + *(_QWORD*)(a1 + 16) - 1) = LOBYTE(v48[v30 - 1]) | v31 & 0x80;
					result = (unsigned int)(2 * *(_DWORD*)(a1 + 8) - 2);
				} while (v6 < (int)result);
			}
		}
		else if (*(_DWORD*)(a1 + 24) == 2)
		{
			result = (unsigned int)(2 * *(_DWORD*)(a1 + 8) - 2);
			if (2 * *(_DWORD*)(a1 + 8) - 2 > 0)
			{
				v28 = 0i64;
				do
				{
					v29 = *((_WORD*)v21 + 1);
					++v6;
					++v21;
					v28 += 2i64;
					*(_WORD*)(v28 + *(_QWORD*)(a1 + 16) - 2) = *((_WORD*)v21 - 2) | v29 & 0x8000;
					result = (unsigned int)(2 * *(_DWORD*)(a1 + 8) - 2);
				} while (v6 < (int)result);
			}
		}
	}
	else
	{
		v32 = *(_DWORD*)(a1 + 8);
		v33 = v32 + 2 * (v32 - 1);
		v34 = 2 * v32 - 4;
		result = v33;
		if (*(_DWORD*)(a1 + 24) == 1)
		{
			if (v34 >= 0)
			{
				v35 = &v48[v34 + 1];
				v36 = (unsigned __int64)(unsigned int)(v34 + 2) >> 1;
				do
				{
					v37 = *(v35 - 1);
					if (v37 >= 0)
					{
						v39 = v48[2 * v37];
						if ((int)*v35 >= 0)
						{
							result -= 2i64;
							v33 -= 2;
							*(_BYTE*)(result + v26) = v39;
							*(_BYTE*)(result + v26 + 1) = v48[2 * *v35];
						}
						else
						{
							result -= 3i64;
							v33 -= 3;
							*(_BYTE*)(result + v26) = v39;
							*(_BYTE*)(result + v26 + 1) = BYTE1(*v35) | 0x80;
							*(_BYTE*)(result + v26 + 2) = *(_BYTE*)v35;
						}
					}
					else
					{
						v38 = BYTE1(v37) | 0x80;
						if ((int)*v35 >= 0)
						{
							result -= 3i64;
							v33 -= 3;
							*(_BYTE*)(result + v26) = v38;
							*(_BYTE*)(result + v26 + 1) = v48[2 * *v35];
							*(_BYTE*)(result + v26 + 2) = *((_BYTE*)v35 - 4);
						}
						else
						{
							result -= 4i64;
							v33 -= 4;
							*(_BYTE*)(result + v26) = v38;
							*(_BYTE*)(result + v26 + 1) = BYTE1(*v35) | 0x80;
							*(_BYTE*)(result + v26 + 2) = *((_BYTE*)v35 - 4);
							*(_BYTE*)(result + v26 + 3) = *(_BYTE*)v35;
						}
					}
					*(v35 - 1) = v33;
					v35 -= 2;
					--v36;
				} while (v36);
			}
		}
		else if (v34 >= 0)
		{
			v40 = (_WORD*)(v26 + 2i64 * v33);
			v41 = (_WORD*)(v26 + 2 * (v33 + 2i64));
			v42 = v40 + 3;
			v43 = (unsigned __int16*)&v48[v34 + 1];
			v44 = (unsigned __int64)(unsigned int)(v34 + 2) >> 1;
			do
			{
				v45 = *((_DWORD*)v43 - 1);
				if (v45 >= 0)
				{
					v47 = v48[2 * v45];
					if (*(int*)v43 >= 0)
					{
						v40 -= 2;
						v33 -= 2;
						v42 -= 2;
						*v40 = v47;
						v41 -= 2;
						result = (unsigned int)(2 * *(_DWORD*)v43);
						v40[1] = v48[result];
					}
					else
					{
						v40 -= 3;
						v41 -= 3;
						v33 -= 3;
						*v40 = v47;
						v42 -= 3;
						v40[1] = v43[1] | 0x8000;
						result = *v43;
						*v41 = result;
					}
				}
				else
				{
					v46 = HIWORD(v45) | 0x8000;
					if (*(int*)v43 >= 0)
					{
						*(v40 - 3) = v46;
						v40 -= 3;
						v41 -= 3;
						v33 -= 3;
						v42 -= 3;
						v40[1] = v48[2 * *(_DWORD*)v43];
						result = *(v43 - 2);
						*v41 = result;
					}
					else
					{
						*(v40 - 4) = v46;
						v40 -= 4;
						v42 -= 4;
						v41 -= 4;
						v33 -= 4;
						v40[1] = v43[1] | 0x8000;
						*v41 = *(v43 - 2);
						result = *v43;
						*v42 = result;
					}
				}
				*((_DWORD*)v43 - 1) = v33;
				v43 -= 4;
				--v44;
			} while (v44);
		}
	}
	return result;
}

