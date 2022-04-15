#include "../winhttp.h"

//----- (00000001406759B0) ----------------------------------------------------
__int64 __fastcall sub_1406759B0(__int64* a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rax
	unsigned int v5; // r14d
	__int64 v7; // rbx
	__int64 v10; // rsi
	__int64 v11; // rcx
	__int64 v12; // rdi
	__int64 v13; // rax
	int v14; // eax
	unsigned int v15; // edx
	int v16; // ebp
	int v17; // edi
	__int64 v18; // rax
	__int64 v19; // r8
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64* v22; // rax
	__int64 v23; // rax
	__int64 v24; // rdx
	__int64 v25; // rax
	__int64 i; // rax
	__int64 j; // rcx
	__int64 v29; // [rsp+30h] [rbp-68h] BYREF
	__int64(__fastcall * *v30)(); // [rsp+38h] [rbp-60h] BYREF
	int v31; // [rsp+40h] [rbp-58h]
	__int64 v32; // [rsp+48h] [rbp-50h]
	int v33; // [rsp+50h] [rbp-48h]
	__int64 v34; // [rsp+B0h] [rbp+18h] BYREF
	int v35; // [rsp+B8h] [rbp+20h]

	v35 = a4;
	v4 = *(_QWORD*)(a3 + 8);
	v5 = 0;
	v7 = *(_QWORD*)(v4 + 16);
	if (v7 != v4)
	{
		do
		{
			v10 = *a1;
			v30 = off_140B569F0;
			v33 = 1;
			v11 = *(_QWORD*)(v10 + 32);
			v32 = v10;
			if (*(_QWORD*)(v11 + 120) >= *(_QWORD*)(v11 + 112))
				sub_14005E2C0(v10);
			v12 = *(_QWORD*)(v10 + 16);
			v13 = sub_14005C1B0(v10, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			*(_QWORD*)(v10 + 16) += 16i64;
			v14 = sub_1400578C0(v10);
			v15 = *(_DWORD*)(v7 + 32);
			v16 = *(_DWORD*)(v7 + 36);
			v17 = v14;
			v31 = v14;
			if (v15)
			{
				if (!*(_QWORD*)(qword_140C65898 + 120) || !qword_140C65898)
					goto LABEL_19;
				v19 = *(_QWORD*)(qword_140C65898 + 32024);
				v20 = v19;
				v21 = *(_QWORD*)(v19 + 8);
				while (v21)
				{
					if (*(_DWORD*)(v21 + 32) < v15)
					{
						v21 = *(_QWORD*)(v21 + 24);
					}
					else
					{
						v20 = v21;
						v21 = *(_QWORD*)(v21 + 16);
					}
				}
				if (v20 == v19 || v15 < *(_DWORD*)(v20 + 32))
				{
					v29 = *(_QWORD*)(qword_140C65898 + 32024);
					v22 = &v29;
				}
				else
				{
					v34 = v20;
					v22 = &v34;
				}
				v23 = *v22;
				if (v23 == v19 || (v18 = *(_QWORD*)(v23 + 40)) == 0)
					LABEL_19:
				v18 = sub_1407A0FD0(qword_140C65B70, v15);
			}
			else
			{
				v18 = 0i64;
			}
			if ((unsigned int)sub_140675E20((__int64)a1, (__int64)&v30, v18, v16, v35))
			{
				sub_1400FB1D0(a2);
				v5 = 1;
			}
			sub_1400579E0(v10, v24, v17);
			v25 = *(_QWORD*)(v7 + 24);
			if (v25)
			{
				v7 = *(_QWORD*)(v7 + 24);
				for (i = *(_QWORD*)(v25 + 16); i; i = *(_QWORD*)(i + 16))
					v7 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v7 = j;
				if (*(_QWORD*)(v7 + 24) != j)
					v7 = j;
			}
		} while (v7 != *(_QWORD*)(a3 + 8));
	}
	return v5;
}
// 140675B22: variable 'v24' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

