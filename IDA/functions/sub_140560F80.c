#include "../winhttp.h"

//----- (0000000140560F80) ----------------------------------------------------
__int64 __fastcall sub_140560F80(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r14
	int* v3; // rax
	__int64 v4; // r12
	unsigned __int64 i; // rsi
	__int64 v6; // rax
	unsigned int* v7; // rbx
	unsigned int v8; // ecx
	unsigned int v9; // edi
	unsigned int v10; // xmm0_4
	unsigned int v11; // xmm1_4
	__int64 v12; // r13
	int v13; // ecx
	int* v14; // rcx
	int v15; // edx
	int v16; // eax
	__int64 v17; // rax
	unsigned int v18; // r8d
	bool v19; // al
	__int64 v20; // r9
	__int64 v21; // rbx
	__int64 v22; // rcx
	__int64 v23; // rdx
	__int64 j; // rax
	__int64 v25; // rax
	int* v26; // rax
	int* v27; // rcx
	_QWORD* v28; // rdx
	unsigned __int64 v29; // rax
	__int64 v30; // rax
	int* v31; // rax
	_QWORD* v32; // rdx
	unsigned __int64 v33; // rax
	__int64 v34; // rax
	__int64 v37[7]; // [rsp+40h] [rbp-41h] BYREF
	int* v38; // [rsp+78h] [rbp-9h] BYREF
	__int64 v39; // [rsp+80h] [rbp-1h]
	__int64 v40; // [rsp+88h] [rbp+7h]
	__int64 v41; // [rsp+90h] [rbp+Fh]
	__int64 v42; // [rsp+98h] [rbp+17h]
	unsigned __int64 v43; // [rsp+A0h] [rbp+1Fh]
	__int64 v44; // [rsp+A8h] [rbp+27h]

	v1 = qword_140C65918;
	v2 = *(_QWORD*)(qword_140C65918 + 16);
	if (v2)
	{
		v3 = sub_14018B280(4 * v2 + 16, 0);
		if (v3)
		{
			*((_QWORD*)v3 + 1) = v2;
			v4 = (__int64)(v3 + 4);
			*(_QWORD*)v3 = off_140B55060;
		}
		else
		{
			v4 = 16i64;
		}
	}
	else
	{
		v4 = 0i64;
	}
	sub_1407DB590((int*)v4, *(int**)(v1 + 8), 4 * v2);
	if (v2)
	{
		for (i = 0i64; i < v2; ++i)
		{
			v6 = sub_1404835C0(qword_140C65918, *(_DWORD*)(v4 + 4 * i));
			v7 = (unsigned int*)v6;
			if (v6)
			{
				v8 = *(_DWORD*)v6;
				v9 = *(_DWORD*)(v6 + 320);
				v10 = *(_DWORD*)(v6 + 76);
				v11 = *(_DWORD*)(v6 + 80);
				v12 = *(_QWORD*)(v6 + 312);
				v41 = 0i64;
				v40 = 0i64;
				v44 = 0i64;
				v39 = v8;
				v43 = __PAIR64__(v11, v10);
				v13 = *(_DWORD*)(v6 + 72);
				v42 = 0i64;
				LODWORD(v44) = v9;
				HIDWORD(v41) = v13;
				v14 = *(int**)(v6 + 192);
				v15 = *v14;
				LODWORD(v40) = v14[1];
				v16 = v14[2];
				HIDWORD(v39) = v15;
				HIDWORD(v40) = v16;
				LODWORD(v41) = v14[3];
				v17 = sub_1407A0FD0((__int64)a1, v15);
				if (v17)
					sub_140562560(a1, v17, v9);
				v18 = *v7;
				v37[4] = v12;
				v37[1] = v39;
				LODWORD(v37[0]) = v18;
				v37[2] = v40;
				v37[3] = v41;
				v37[5] = v43;
				v37[6] = v44;
				v19 = 1;
				v20 = a1[179];
				v21 = v20;
				v22 = *(_QWORD*)(v20 + 8);
				while (v22)
				{
					v21 = v22;
					v19 = v18 < *(_DWORD*)(v22 + 32);
					if (v18 >= *(_DWORD*)(v22 + 32))
						v22 = *(_QWORD*)(v22 + 24);
					else
						v22 = *(_QWORD*)(v22 + 16);
				}
				v23 = v21;
				if (!v19)
					goto LABEL_28;
				if (v21 != *(_QWORD*)(v20 + 16))
				{
					if (*(_BYTE*)v21 || *(_QWORD*)(*(_QWORD*)(v21 + 8) + 8i64) != v21)
					{
						v23 = *(_QWORD*)(v21 + 16);
						if (v23)
						{
							for (j = *(_QWORD*)(v23 + 24); j; j = *(_QWORD*)(j + 24))
								v23 = j;
						}
						else
						{
							v23 = *(_QWORD*)(v21 + 8);
							if (v21 == *(_QWORD*)(v23 + 16))
							{
								do
								{
									v25 = v23;
									v23 = *(_QWORD*)(v23 + 8);
								} while (v25 == *(_QWORD*)(v23 + 16));
							}
						}
					}
					else
					{
						v23 = *(_QWORD*)(v21 + 24);
					}
				LABEL_28:
					if (*(_DWORD*)(v23 + 32) < v18)
					{
						if (v21 == v20 || v18 < *(_DWORD*)(v21 + 32))
						{
							v31 = sub_14018B280(88i64, 0);
							v27 = v31;
							v32 = v31 + 8;
							if (v31 != (int*)-32i64)
							{
								*v32 = v37[0];
								*((_QWORD*)v31 + 5) = v39;
								*((_QWORD*)v31 + 6) = v40;
								*((_QWORD*)v31 + 7) = v41;
								v33 = v43;
								v32[4] = v12;
								v32[5] = v33;
								v32[6] = v44;
							}
							*(_QWORD*)(v21 + 16) = v27;
							v34 = a1[179];
							if (v21 == v34)
							{
								*(_QWORD*)(v34 + 8) = v27;
								*(_QWORD*)(a1[179] + 24i64) = v27;
							}
							else if (v21 == *(_QWORD*)(v34 + 16))
							{
								*(_QWORD*)(v34 + 16) = v27;
							}
						}
						else
						{
							v26 = sub_14018B280(88i64, 0);
							v27 = v26;
							v28 = v26 + 8;
							if (v26 != (int*)-32i64)
							{
								*v28 = v37[0];
								*((_QWORD*)v26 + 5) = v39;
								*((_QWORD*)v26 + 6) = v40;
								*((_QWORD*)v26 + 7) = v41;
								v29 = v43;
								v28[4] = v12;
								v28[5] = v29;
								v28[6] = v44;
							}
							*(_QWORD*)(v21 + 24) = v27;
							v30 = a1[179];
							if (v21 == *(_QWORD*)(v30 + 24))
								*(_QWORD*)(v30 + 24) = v27;
						}
						*((_QWORD*)v27 + 1) = v21;
						*((_QWORD*)v27 + 2) = 0i64;
						*((_QWORD*)v27 + 3) = 0i64;
						sub_1400081C0((__int64)v27, (_QWORD*)(a1[179] + 8i64));
						++a1[180];
					}
					continue;
				}
				sub_1405670D0((__int64)(a1 + 178), &v38, v22, v21, v37);
			}
		}
	}
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	return 0i64;
}
// 1405611DF: conditional instruction was optimized away because rcx.8==0
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65918: using guessed type __int64 qword_140C65918;

