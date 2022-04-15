#include "../winhttp.h"

//----- (00000001408EE4C0) ----------------------------------------------------
_DWORD* __fastcall sub_1408EE4C0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v4; // rdi
	int v6; // r15d
	_DWORD* v7; // rsi
	unsigned int v8; // ebx
	int v9; // edx
	unsigned int v10; // eax
	int v11; // eax
	int v12; // edx
	int v13; // eax
	__int64 v14; // rcx
	int v15; // edx
	int v16; // ebp
	int v17; // r8d
	int v18; // esi
	__int64 v19; // r15
	char v20; // r12
	__int64 v21; // rbp
	__int64 v22; // rdi
	__int64 v23; // rax
	_DWORD* v24; // rbx
	__int64 v25; // rdx
	int v26; // eax
	__int64 v28; // rdi
	__int64 v29; // rcx
	__int64 v30; // r8
	int v31; // ebx
	__int64 v32; // kr00_8
	int v33; // eax
	int v34; // ebx
	int v35; // eax
	int v36; // edx
	int v37; // ecx
	int v38; // eax
	__int64 v39; // rcx
	__int64 v40; // rcx
	int v41; // [rsp+20h] [rbp-68h]
	__int64 v42; // [rsp+28h] [rbp-60h]
	__int64 v43; // [rsp+30h] [rbp-58h]
	int v44; // [rsp+90h] [rbp+8h]
	int v45; // [rsp+98h] [rbp+10h]

	v4 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 64i64);
	v6 = dword_140C19220[*(int*)(a2 + 56) - 1];
	v7 = a3;
	v43 = v4;
	v41 = v6;
	if ((unsigned int)sub_1408EC1C0(a1, 1) != 1)
		return 0i64;
	v8 = v6 - 1;
	v9 = 0;
	v10 = v6 - 1;
	if (v6 != 1)
	{
		do
		{
			++v9;
			v10 >>= 1;
		} while (v10);
	}
	v11 = sub_1408EC1C0(a1, v9);
	v12 = 0;
	*v7 = v11;
	if (v6 != 1)
	{
		do
		{
			++v12;
			v8 >>= 1;
		} while (v8);
	}
	v13 = sub_1408EC1C0(a1, v12);
	v14 = 0i64;
	v15 = 0;
	v16 = 2;
	v7[1] = v13;
	v45 = 0;
	v42 = 0i64;
	v17 = 2;
	v44 = 2;
	if (*(int*)(a2 + 48) > 0)
	{
		do
		{
			v18 = 0;
			v19 = 11i64 * *(char*)(*(_QWORD*)(a2 + 8) + v14);
			v20 = *(_BYTE*)(v19 + *(_QWORD*)a2 + 1);
			v21 = *(char*)(v19 + *(_QWORD*)a2);
			if (v20)
			{
				v18 = sub_1408EFB10(v4 + 72i64 * *(unsigned __int8*)(v19 + *(_QWORD*)a2 + 2), (int*)a1);
				if (v18 == -1)
					return 0i64;
				v15 = v45;
				v17 = v44;
			}
			v22 = 0i64;
			if (v21 > 0)
			{
				v23 = (1 << v20) - 1;
				v24 = &a3[v17];
				do
				{
					v25 = *(unsigned __int8*)(v19 + (v23 & v18) + *(_QWORD*)a2 + 3);
					v18 >>= v20;
					if ((_DWORD)v25 == 255)
					{
						*v24 = 0;
					}
					else
					{
						v26 = sub_1408EFB10(v43 + 72 * v25, (int*)a1);
						*v24 = v26;
						if (v26 == -1)
							return 0i64;
					}
					v23 = (1 << v20) - 1;
					++v22;
					++v24;
				} while (v22 < v21);
				v15 = v45;
				v17 = v44;
			}
			v4 = v43;
			++v15;
			v17 += v21;
			v14 = v42 + 1;
			v45 = v15;
			++v42;
			v44 = v17;
		} while (v15 < *(_DWORD*)(a2 + 48));
		v7 = a3;
		v6 = v41;
		v16 = 2;
	}
	v28 = 2i64;
	if (*(int*)(a2 + 52) > 2)
	{
		do
		{
			v29 = *(char*)(*(_QWORD*)(a2 + 40) + v28 - 2);
			v30 = *(char*)(*(_QWORD*)(a2 + 32) + v28 - 2);
			v31 = v7[v29] & 0x7FFF;
			v32 = (v7[v30] & 0x7FFF) - v31;
			v33 = (int)((*(unsigned __int16*)(*(_QWORD*)(a2 + 16) + 2 * v28)
				- *(unsigned __int16*)(*(_QWORD*)(a2 + 16) + 2 * v29))
				* ((HIDWORD(v32) ^ v32) - HIDWORD(v32)))
				/ (*(unsigned __int16*)(*(_QWORD*)(a2 + 16) + 2 * v30)
					- *(unsigned __int16*)(*(_QWORD*)(a2 + 16) + 2 * v29));
			if ((v7[v30] & 0x7FFF) - v31 >= 0)
				v34 = v33 + v31;
			else
				v34 = v31 - v33;
			v35 = v7[v28];
			v36 = v6 - v34;
			if (v35)
			{
				v37 = v34;
				if (v36 < v34)
					v37 = v6 - v34;
				if (v35 < 2 * v37)
				{
					if ((v35 & 1) != 0)
						v38 = -((v35 + 1) >> 1);
					else
						v38 = v35 >> 1;
				}
				else if (v36 <= v34)
				{
					v38 = v36 - v35 - 1;
				}
				else
				{
					v38 = v35 - v34;
				}
				v7[v28] = v38 + v34;
				v39 = *(char*)(*(_QWORD*)(a2 + 40) + v28 - 2);
				v7[v39] &= 0x7FFFu;
				v40 = *(char*)(*(_QWORD*)(a2 + 32) + v28 - 2);
				v7[v40] &= 0x7FFFu;
			}
			else
			{
				v7[v28] = v34 | 0x8000;
			}
			++v16;
			++v28;
		} while (v16 < *(_DWORD*)(a2 + 52));
	}
	return v7;
}
// 140C19220: using guessed type _DWORD dword_140C19220[4];

