#include "../winhttp.h"

//----- (00000001401D6EB0) ----------------------------------------------------
__int64 __fastcall sub_1401D6EB0(
	__int64 a1,
	int* a2,
	unsigned __int64* a3,
	unsigned __int8* a4,
	unsigned __int64* a5,
	int a6,
	_DWORD* a7)
{
	unsigned __int64 v7; // rdx
	unsigned __int8* v8; // rbp
	unsigned __int64 v9; // r15
	unsigned __int64 v11; // r13
	__int64 v12; // rcx
	int v13; // edi
	unsigned __int8* v14; // r14
	unsigned __int64 v15; // rbp
	__int64 v16; // r12
	_DWORD* v17; // rsi
	bool v18; // zf
	__int64 v19; // rcx
	unsigned int v20; // eax
	__int64 v21; // rcx
	char v22; // al
	int v23; // ecx
	int v24; // eax
	int v25; // r15d
	int v26; // eax
	int v27; // edx
	__int64 v28; // rcx
	_WORD* v29; // rdi
	unsigned int v30; // edi
	unsigned __int64 v31; // r8
	int v32; // eax
	__int64 v33; // rax
	unsigned int v34; // esi
	__int64 i; // rcx
	int v36; // eax
	unsigned int v37; // eax
	unsigned int v38; // edi
	__int64 v39; // rax
	unsigned int v40; // edi
	int v41; // eax
	unsigned __int64 v42; // rsi
	int* v43; // rdx
	__int64 v45; // [rsp+20h] [rbp-68h]
	unsigned __int64 v46; // [rsp+28h] [rbp-60h]
	__int64 v47; // [rsp+30h] [rbp-58h]
	unsigned __int64 v48; // [rsp+90h] [rbp+8h]
	unsigned __int8* v51; // [rsp+A8h] [rbp+20h]

	v51 = a4;
	v7 = *a3;
	v8 = a4;
	v9 = *a5;
	v48 = *a5;
	v46 = *a3;
	*a3 = 0i64;
	*a5 = 0i64;
	while (1)
	{
		v11 = *(_QWORD*)(a1 + 56);
		if (*(_QWORD*)(a1 + 48) == v11)
			*(_QWORD*)(a1 + 48) = 0i64;
		v12 = *(_QWORD*)(a1 + 48);
		v47 = v12;
		if (v7 <= v11 - v12)
		{
			v13 = a6;
			v11 = v12 + v7;
		}
		else
		{
			v13 = 0;
		}
		v14 = v8;
		v15 = v9;
		v16 = 0i64;
		sub_1401D6720(a1, v11);
		v17 = a7;
		v18 = *(_DWORD*)(a1 + 92) == 274;
		v19 = v13;
		*a7 = 0;
		v45 = v13;
		if (v18)
			goto LABEL_59;
		while (1)
		{
			if (*(_DWORD*)(a1 + 96))
			{
				for (; v15; --v15)
				{
					v20 = *(_DWORD*)(a1 + 108);
					if (v20 >= 5)
						break;
					v21 = v20;
					v22 = *v14++;
					*(_BYTE*)(v21 + a1 + 112) = v22;
					++* (_DWORD*)(a1 + 108);
					++v16;
				}
				if (*(_DWORD*)(a1 + 108) < 5u)
				{
					v9 = v48;
					v40 = 0;
					*a7 = 3;
					goto LABEL_62;
				}
				if (*(_BYTE*)(a1 + 112))
					goto LABEL_54;
				v23 = *(unsigned __int8*)(a1 + 115) | ((*(unsigned __int8*)(a1 + 114) | (*(unsigned __int8*)(a1 + 113) << 8)) << 8);
				v24 = *(unsigned __int8*)(a1 + 116);
				*(_DWORD*)(a1 + 40) = -1;
				*(_DWORD*)(a1 + 96) = 0;
				*(_DWORD*)(a1 + 108) = 0;
				*(_DWORD*)(a1 + 44) = v24 | (v23 << 8);
				v19 = v45;
			}
			v25 = 0;
			if (*(_QWORD*)(a1 + 48) >= v11)
			{
				v26 = *(_DWORD*)(a1 + 92);
				if (!v26 && !*(_DWORD*)(a1 + 44))
				{
					v9 = v48;
					v40 = 0;
					*a7 = 4;
					goto LABEL_62;
				}
				if (!v19)
				{
					v9 = v48;
					v40 = 0;
					*a7 = 2;
					goto LABEL_62;
				}
				if (v26)
					goto LABEL_53;
				v25 = 1;
			}
			if (*(_DWORD*)(a1 + 100))
			{
				v27 = 768 << (*(_BYTE*)a1 + *(_BYTE*)(a1 + 4));
				v28 = (unsigned int)(v27 + 1846);
				if (v27 != -1846)
				{
					v29 = *(_WORD**)(a1 + 16);
					while (v28)
					{
						*v29++ = 1024;
						--v28;
					}
				}
				*(_DWORD*)(a1 + 88) = 1;
				*(_DWORD*)(a1 + 84) = 1;
				*(_DWORD*)(a1 + 80) = 1;
				*(_DWORD*)(a1 + 76) = 1;
				*(_DWORD*)(a1 + 72) = 0;
				*(_DWORD*)(a1 + 100) = 0;
			}
			v30 = *(_DWORD*)(a1 + 108);
			if (!v30)
			{
				if (v15 >= 0x14 && !v25)
				{
					v31 = (unsigned __int64)&v14[v15 - 20];
				LABEL_35:
					*(_QWORD*)(a1 + 32) = v14;
					if ((unsigned int)sub_1401D67B0(a1, v11, v31))
						goto LABEL_54;
					v33 = *(_QWORD*)(a1 + 32) - (_QWORD)v14;
					v16 += v33;
					v14 = *(unsigned __int8**)(a1 + 32);
					v15 -= v33;
					goto LABEL_49;
				}
				v32 = sub_1401D6860(a1, v14, v15);
				if (v32)
				{
					if (v25 && v32 != 2)
						goto LABEL_53;
					v31 = (unsigned __int64)v14;
					goto LABEL_35;
				}
				sub_1407DB590((int*)(a1 + 112), (int*)v14, v15);
				*(_DWORD*)(a1 + 108) = v15;
				v16 += v15;
			LABEL_57:
				v9 = v48;
				v40 = 0;
				*a7 = 3;
				goto LABEL_62;
			}
			v34 = 0;
			for (i = *(unsigned int*)(a1 + 108); v30 < 0x14; *(_BYTE*)(++i + a1 + 111) = v14[v34++])
			{
				if (v34 >= v15)
					break;
				++v30;
			}
			*(_DWORD*)(a1 + 108) = v30;
			if (v30 < 0x14 || v25)
			{
				v36 = sub_1401D6860(a1, (unsigned __int8*)(a1 + 112), v30);
				if (!v36)
				{
					v16 += v34;
					goto LABEL_57;
				}
				if (v25 && v36 != 2)
				{
				LABEL_53:
					*a7 = 2;
				LABEL_54:
					v9 = v48;
					v40 = 1;
					goto LABEL_62;
				}
			}
			*(_QWORD*)(a1 + 32) = a1 + 112;
			if ((unsigned int)sub_1401D67B0(a1, v11, a1 + 112))
				goto LABEL_54;
			v37 = *(_DWORD*)(a1 + 32) - a1 - 112;
			if (v30 < v37 || (v38 = v30 - v37, v34 < v38))
			{
				v9 = v48;
				v40 = 11;
				goto LABEL_62;
			}
			v39 = v34 - v38;
			v16 += v39;
			v14 += v39;
			v15 -= v39;
			*(_DWORD*)(a1 + 108) = 0;
		LABEL_49:
			if (*(_DWORD*)(a1 + 92) == 274)
				break;
			v19 = v45;
		}
		v17 = a7;
		v9 = v48;
	LABEL_59:
		v41 = *(_DWORD*)(a1 + 44);
		if (!v41)
			*v17 = 1;
		v40 = v41 != 0;
	LABEL_62:
		v42 = *(_QWORD*)(a1 + 48) - v47;
		v43 = (int*)(v47 + *(_QWORD*)(a1 + 24));
		*a5 += v16;
		v8 = &v51[v16];
		v9 -= v16;
		v51 += v16;
		v48 = v9;
		sub_1407DB590(a2, v43, v42);
		*a3 += v42;
		v7 = v46 - v42;
		a2 = (int*)((char*)a2 + v42);
		v46 -= v42;
		if (v40)
			return v40;
		if (!v42 || !v7)
			return 0i64;
	}
}

