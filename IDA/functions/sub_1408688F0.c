#include "../winhttp.h"

//----- (00000001408688F0) ----------------------------------------------------
__int64 __fastcall sub_1408688F0(__int64 a1, __int64 a2)
{
	char v2; // al
	float* v4; // rbx
	float v5; // xmm0_4
	char v6; // al
	unsigned __int8* v7; // rbx
	unsigned int v8; // r8d
	unsigned int v9; // ebp
	unsigned int v10; // r15d
	_DWORD* v11; // rdi
	unsigned int v12; // eax
	int v13; // r9d
	__int64 v14; // r14
	unsigned int i; // edx
	__int64 v16; // rax
	unsigned int v17; // eax
	unsigned __int8* v18; // rbx
	unsigned int v19; // r15d
	int v20; // r13d
	__int64 v21; // r14
	int* v22; // rbx
	unsigned int v23; // ebp
	unsigned __int64 v24; // r12
	__int64 v25; // rax
	_DWORD* v26; // rcx
	unsigned int v28; // [rsp+20h] [rbp-58h]
	int v29; // [rsp+80h] [rbp+8h]
	int v30; // [rsp+88h] [rbp+10h]
	int v31; // [rsp+98h] [rbp+20h]

	v2 = *(_BYTE*)(a2 + 4);
	*(_BYTE*)(a1 + 133) &= ~1u;
	v4 = (float*)(a2 + 5);
	*(_BYTE*)(a1 + 133) |= v2 != 0;
	if ((*(_BYTE*)(a1 + 133) & 1) != 0)
	{
		*(float*)(a1 + 32) = sub_1408296A0(*v4) * 0.5;
		v5 = sub_1408296A0(v4[1]);
		v4 += 4;
		*(float*)(a1 + 36) = v5 * 0.5;
		*(float*)(a1 + 40) = *(v4 - 2);
		*(float*)(a1 + 44) = *(v4 - 1);
	}
	v6 = *(_BYTE*)v4;
	v7 = (unsigned __int8*)v4 + 6;
	*(_BYTE*)(a1 + 128) = v6;
	*(_BYTE*)(a1 + 129) = *(v7 - 5);
	*(_BYTE*)(a1 + 130) = *(v7 - 4);
	v8 = 2;
	*(_BYTE*)(a1 + 131) = *(v7 - 3);
	v9 = 0;
	*(_BYTE*)(a1 + 132) = *(v7 - 2);
	v10 = *(v7 - 1);
	if (*(v7 - 1))
	{
		v11 = (_DWORD*)(a1 + 60);
		do
		{
			v12 = *(unsigned __int16*)(v7 + 1);
			v13 = *v7;
			v7 += 3;
			v14 = v12;
			v8 = sub_140837E30(a1 + 16 * (v9 + 3i64), (int*)v7, v12, v13);
			if (v8 != 1)
				break;
			if (*(unsigned __int8*)(a1 + 128) == v9
				|| *(unsigned __int8*)(a1 + 129) == v9
				|| *(unsigned __int8*)(a1 + 130) == v9)
			{
				if (*v11)
				{
					if (*v11 == 2)
					{
						for (i = 0;
							i < *(v11 - 1);
							*(float*)(*(_QWORD*)(v11 - 3) + 12 * v16 + 4) = *(float*)(*(_QWORD*)(v11 - 3) + 12 * v16 + 4)
							+ 1.0)
						{
							v16 = i++;
						}
						*v11 = 0;
					}
				}
				else
				{
					*v11 = 4;
				}
			}
			++v9;
			v11 += 4;
			v7 += 12 * v14;
		} while (v9 < v10);
	}
	v17 = *(unsigned __int16*)v7;
	v18 = v7 + 2;
	v28 = v17;
	v19 = 0;
	if (!v17)
		return v8;
	do
	{
		v20 = *((_DWORD*)v18 + 1);
		v21 = *(unsigned __int16*)(v18 + 13);
		v30 = *(_DWORD*)v18;
		v29 = *((_DWORD*)v18 + 2);
		v31 = v18[12];
		v22 = (int*)(v18 + 15);
		v23 = 1;
		sub_140868BD0(a1, v20, v29);
		v24 = (unsigned int)((__int64)(*(_QWORD*)(a1 + 144) - *(_QWORD*)(a1 + 136)) >> 5);
		if (v24 >= *(unsigned int*)(a1 + 152) && !sub_140857780(a1 + 136, 2) || v24 >= *(unsigned int*)(a1 + 152))
			goto LABEL_26;
		v25 = *(_QWORD*)(a1 + 144);
		if (v25)
		{
			*(_QWORD*)(v25 + 16) = 0i64;
			*(_QWORD*)(v25 + 24) = 0i64;
		}
		v26 = *(_DWORD**)(a1 + 144);
		*(_QWORD*)(a1 + 144) = v26 + 8;
		if (v26)
		{
			v26[1] = v20;
			v26[2] = v29;
			*v26 = v30;
			if (v22 && (_DWORD)v21)
				v23 = sub_140837E30((__int64)(v26 + 4), v22, v21, v31);
		}
		else
		{
		LABEL_26:
			v23 = 2;
		}
		if (v23 != 1)
			break;
		++v19;
		v18 = (unsigned __int8*)&v22[3 * v21];
	} while (v19 < v28);
	return v23;
}

