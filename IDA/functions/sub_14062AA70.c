#include "../winhttp.h"

//----- (000000014062AA70) ----------------------------------------------------
__int64 __fastcall sub_14062AA70(int* a1, _QWORD* a2)
{
	int v4; // edx
	unsigned int v5; // r8d
	int v6; // eax
	__int64 v8; // rax
	unsigned int v9; // ecx
	__int64 v10; // rdx
	unsigned int v11; // r12d
	unsigned __int64 v12; // rbx
	int* v13; // rax
	__int64 v14; // rdi
	unsigned __int64 v15; // rsi
	unsigned __int64* v16; // r15
	__int64 v17; // rax
	int v18; // eax
	__int64 v19; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v20; // [rsp+28h] [rbp-40h]
	__int64 v21; // [rsp+30h] [rbp-38h] BYREF
	__int64 v22; // [rsp+38h] [rbp-30h]
	__int64 v23; // [rsp+40h] [rbp-28h]

	v4 = a1[2];
	v5 = a1[6];
	if (dword_140C636A8 - v4 >= v5)
	{
		if (dword_140C636A8 - v4 < (unsigned int)a1[4])
		{
			a1[2] = v5 + v4;
		}
		else
		{
			a1[2] = dword_140C636A8;
			a1[3] = 1;
		}
	}
	else
	{
		v6 = a1[3];
		if (v6 == a1[5])
		{
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i", 64i64);
			return 2147500037i64;
		}
		a1[3] = v6 + 1;
	}
	if ((dword_140DC3E60 & 1) != 0)
	{
		v9 = dword_140DC3E64;
	}
	else
	{
		dword_140DC3E60 |= 1u;
		v8 = sub_140200220(0x939u);
		if (v8)
		{
			v9 = *(_DWORD*)(v8 + 4);
			dword_140DC3E64 = v9;
		}
		else
		{
			v9 = 3;
			dword_140DC3E64 = 3;
		}
	}
	if (*(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 56i64) >= v9)
	{
		v10 = a2[1];
		v11 = 0;
		v12 = 0i64;
		v20 = 0i64;
		v13 = sub_14018DBC0(0i64, v10, 8i64);
		v14 = 0i64;
		v15 = 0i64;
		if (v13)
			v14 = (__int64)v13;
		v19 = v14;
		if (!a2[1])
			goto LABEL_28;
		do
		{
			v16 = (unsigned __int64*)(*a2 + 8 * v15);
			v17 = 0i64;
			if (v12)
			{
				while (*(_QWORD*)(v14 + 8 * v17) != *v16)
				{
					if (++v17 >= v12)
						goto LABEL_21;
				}
			}
			else
			{
			LABEL_21:
				if (sub_140629AF0((__int64)a1, *v16))
				{
					sub_140033260(&v19, v16);
					v12 = v20;
					v14 = v19;
				}
			}
			++v15;
		} while (v15 < a2[1]);
		if (v12)
		{
			if (v12 > 1)
			{
				sub_14062B4F0(&v19, (__int64)a1);
				LODWORD(v12) = v20;
				v14 = v19;
			}
			v21 = 0i64;
			v22 = 0i64;
			v23 = 0i64;
			v18 = *a1;
			LODWORD(v21) = v12;
			LODWORD(v23) = v18;
			v22 = v14;
			sub_1403F4900(qword_140C65898, 0x125u, (__int64)&v21);
		}
		else
		{
		LABEL_28:
			v11 = -2147467259;
		}
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
		return v11;
	}
	else
	{
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i", 161i64);
		return 2147500037i64;
	}
}
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3E60: using guessed type int dword_140DC3E60;
// 140DC3E64: using guessed type int dword_140DC3E64;

