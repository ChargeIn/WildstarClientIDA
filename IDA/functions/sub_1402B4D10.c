#include "../winhttp.h"

//----- (00000001402B4D10) ----------------------------------------------------
__int64 __fastcall sub_1402B4D10(unsigned __int8* a1, __int64 a2, __int64 a3, char a4)
{
	int v5; // eax
	unsigned __int8* v6; // rdi
	unsigned __int64 v7; // rdx
	char v8; // bl
	unsigned __int64 v9; // rsi
	int v10; // r14d
	int v11; // ebp
	__int64 v12; // r9
	__int64 v13; // rdx
	__int64 v14; // r10
	_WORD* v15; // r9
	unsigned __int8* v16; // r11
	__int16 v17; // dx
	__int16 v18; // ax
	__int16 v19; // dx
	__int64 result; // rax
	unsigned __int64 v21; // rax
	__int64 v22; // r10
	int v23; // r11d
	int v24; // ebp
	__int64 v25; // r9
	__int64 v26; // rax
	_BYTE* v27; // rdx
	__int64 v28; // r9
	char v29; // al
	unsigned __int64 v30; // rdx
	char v31; // si
	unsigned __int64 v32; // r12
	int v33; // r13d
	int v34; // r15d
	__int64 v35; // r9
	__int64 v36; // rdx
	unsigned __int64 v37; // rbx
	_DWORD* v38; // r9
	unsigned __int8* v39; // r11
	unsigned __int8* v40; // r10
	int v41; // eax
	int v42; // edx

	if (!a3 || !*(_QWORD*)(a3 + 40))
		return 2147500035i64;
	v5 = *(_DWORD*)(a3 + 16);
	v6 = &a1[a2];
	if (v5 != 28)
	{
		if (v5 == 61)
		{
			v21 = *(_QWORD*)(a3 + 8);
			v22 = 0i64;
			if (!v21)
				return 0i64;
			v23 = a4 & 4;
			v24 = a4 & 2;
			while (1)
			{
				v25 = v24 ? *(_QWORD*)a3 - 1i64 : 0i64;
				v26 = v23 ? v22 : v21 - v22 - 1;
				v27 = (_BYTE*)(v25 + *(_QWORD*)(a3 + 40) + v26 * *(_QWORD*)(a3 + 24));
				v28 = 0i64;
				if (*(_QWORD*)a3)
					break;
			LABEL_41:
				v21 = *(_QWORD*)(a3 + 8);
				if (++v22 >= v21)
					return 0i64;
			}
			while (a1 < v6)
			{
				v29 = *a1++;
				*v27 = v29;
				if (v24)
					--v27;
				else
					++v27;
				if ((unsigned __int64)++v28 >= *(_QWORD*)a3)
					goto LABEL_41;
			}
		}
		else if (v5 == 86)
		{
			v7 = *(_QWORD*)(a3 + 8);
			v8 = 0;
			v9 = 0i64;
			if (v7)
			{
				v10 = a4 & 4;
				v11 = a4 & 2;
				do
				{
					if (v11)
						v12 = *(_QWORD*)a3 - 1i64;
					else
						v12 = 0i64;
					if (v10)
						v13 = v9;
					else
						v13 = v7 - v9 - 1;
					v14 = 0i64;
					v15 = (_WORD*)(*(_QWORD*)(a3 + 40) + v13 * *(_QWORD*)(a3 + 24) + 2 * v12);
					if (*(_QWORD*)a3)
					{
						v16 = a1 + 1;
						while (v16 < v6)
						{
							v17 = *v16;
							v18 = *a1;
							a1 += 2;
							v16 += 2;
							v19 = v18 | (v17 << 8);
							*v15 = v19;
							if ((v19 & 0x8000) != 0)
								v8 = 1;
							if (v11)
								--v15;
							else
								++v15;
							if ((unsigned __int64)++v14 >= *(_QWORD*)a3)
								goto LABEL_23;
						}
						return 2147500037i64;
					}
				LABEL_23:
					v7 = *(_QWORD*)(a3 + 8);
					++v9;
				} while (v9 < v7);
				if (v8)
					return 0i64;
			}
			result = sub_1402B4720(a3);
			if ((int)result < 0)
				return result;
			return 0i64;
		}
		return 2147500037i64;
	}
	v30 = *(_QWORD*)(a3 + 8);
	v31 = 0;
	v32 = 0i64;
	if (v30)
	{
		v33 = a4 & 4;
		v34 = a4 & 2;
		do
		{
			if (v34)
				v35 = *(_QWORD*)a3 - 1i64;
			else
				v35 = 0i64;
			if (v33)
				v36 = v32;
			else
				v36 = v30 - v32 - 1;
			v37 = 0i64;
			v38 = (_DWORD*)(*(_QWORD*)(a3 + 40) + v36 * *(_QWORD*)(a3 + 24) + 4 * v35);
			if (*(_QWORD*)a3)
			{
				v39 = a1 + 3;
				v40 = a1 + 2;
				do
				{
					if ((a4 & 1) != 0)
					{
						if (v40 >= v6)
							return 2147500037i64;
						v41 = a1[1];
						v42 = *a1;
						a1 += 3;
						v40 += 3;
						v31 = 1;
						v39 += 3;
						*v38 = *(v40 - 3) | ((v41 | (v42 << 8)) << 8) | 0xFF000000;
					}
					else
					{
						if (v39 >= v6)
							return 2147500037i64;
						*v38 = *v40 | ((a1[1] | ((*a1 | (*v39 << 8)) << 8)) << 8);
						if (*v39)
							v31 = 1;
						a1 += 4;
						v40 += 4;
						v39 += 4;
					}
					if (v34)
						--v38;
					else
						++v38;
					++v37;
				} while (v37 < *(_QWORD*)a3);
			}
			v30 = *(_QWORD*)(a3 + 8);
			++v32;
		} while (v32 < v30);
		if (v31)
			return 0i64;
	}
	result = sub_1402B4720(a3);
	if ((int)result >= 0)
		return 0i64;
	return result;
}

