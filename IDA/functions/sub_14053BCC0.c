#include "../winhttp.h"

//----- (000000014053BCC0) ----------------------------------------------------
void __fastcall sub_14053BCC0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbx
	unsigned int v5; // edx
	BOOL v6; // r8d
	__int64 v7; // rcx
	__int64 v8; // rbp
	__int64 v9; // r15
	__int64 v10; // rbx
	__int64 v11; // rbx
	int v12; // edi
	unsigned __int64 v13; // rsi
	int v14; // edi
	__int64 v15; // rbx
	__int64 v16; // rbx
	__int64 v17; // rax
	unsigned int v18; // edx
	int v19; // ecx
	int v20; // eax
	__int64 v21; // [rsp+40h] [rbp-118h] BYREF
	int v22[52]; // [rsp+50h] [rbp-108h] BYREF
	int v23; // [rsp+160h] [rbp+8h] BYREF
	int v24; // [rsp+170h] [rbp+18h] BYREF
	__int64 v25; // [rsp+178h] [rbp+20h] BYREF

	v2 = *(_QWORD*)(a1 + 120);
	v21 = 0i64;
	v5 = sub_14053BFC0(a1, a2);
	if (v5)
	{
		if (!v2)
			goto LABEL_10;
		v6 = *(_QWORD*)(qword_140C65898 + 120) == v2 || *(_QWORD*)(qword_140C65898 + 25744) == v2;
		v7 = 0i64;
		if (v6)
			v7 = qword_140C65898;
		if (!v7 || (v8 = sub_1405A5B90(v7, v5)) == 0)
			LABEL_10:
		v8 = sub_1407A0FD0(qword_140C65B70, v5);
		if (v8)
		{
			if (a2 != 3)
				goto LABEL_40;
			v9 = *(_QWORD*)(a1 + 120);
			if ((*(_DWORD*)(*(_QWORD*)(v8 + 112) + 36i64) & 0xFFFFFFFD) != 0 || (v10 = *(_QWORD*)(v9 + 5640)) == 0)
			{
			LABEL_19:
				v11 = *(_QWORD*)(v9 + 5640);
				v12 = **(_DWORD**)(v8 + 112);
				if (v11)
				{
					while (*(_DWORD*)(v11 + 4) != 1
						|| v12 != *(_DWORD*)(v11 + 12)
						|| !*(_QWORD*)(v11 + 32)
						|| !(unsigned int)sub_140195F70(v11 + 16))
					{
						v11 = *(_QWORD*)(v11 + 136);
						if (!v11)
							goto LABEL_25;
					}
				}
				else
				{
				LABEL_25:
					if (!*(_QWORD*)(v8 + 56))
						goto LABEL_40;
					v13 = 0i64;
					while (1)
					{
						v14 = *(_DWORD*)(*(_QWORD*)(v8 + 56) + v13 + 4);
						if (v14)
						{
							v15 = *(_QWORD*)(v9 + 5640);
							if (v15)
								break;
						}
					LABEL_34:
						v13 += 4i64;
						if (v13 >= 0xC)
							goto LABEL_40;
					}
					while (*(_DWORD*)(v15 + 4) != 2
						|| v14 != *(_DWORD*)(v15 + 12)
						|| !*(_QWORD*)(v15 + 32)
						|| !(unsigned int)sub_140195F70(v15 + 16))
					{
						v15 = *(_QWORD*)(v15 + 136);
						if (!v15)
							goto LABEL_34;
					}
				}
			}
			else
			{
				while (*(_DWORD*)(v10 + 4) || !*(_QWORD*)(v10 + 32) || !(unsigned int)sub_140195F70(v10 + 16))
				{
					v10 = *(_QWORD*)(v10 + 136);
					if (!v10)
						goto LABEL_19;
				}
			}
			v16 = *(_QWORD*)(a1 + 120);
			v17 = sub_140200220(0x3E2u);
			if (v17)
				v18 = *(_DWORD*)(v17 + 8);
			else
				v18 = 53455;
			v8 = sub_1403ACD90(qword_140C65B70, v18, v16);
		LABEL_40:
			if (v8)
			{
				v23 = 0;
				sub_1407E4830(v22, 0i64, 0xC8ui64);
				v22[7] = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
				v19 = **(_DWORD**)(v8 + 112);
				v22[22] = 1;
				v22[1] = v19;
				v20 = sub_1403988D0(a1, (unsigned int)v22, v8, 0, (__int64)&v23, (__int64)&v21, (__int64)&v24);
				if (!v20 || v20 == 317)
				{
					v25 = a2;
					HIDWORD(v25) = *(_DWORD*)(v21 + 96);
					sub_1403F4900(qword_140C65898, 0x831u, (__int64)&v25);
				}
				else if (v24)
				{
					*(_DWORD*)(a1 + 26184) = 10;
					*(_DWORD*)(a1 + 26300) = a2;
					sub_14039E400(a1);
				}
				else
				{
					sub_1403A12A0(a1, v20, v8, 0);
				}
			}
		}
	}
}
// 14053BD41: variable 'v5' is possibly undefined
// 1403988D0: using guessed type __int64 __fastcall sub_1403988D0(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64);
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

