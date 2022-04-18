#include "../winhttp.h"

//----- (000000014062AD80) ----------------------------------------------------
__int64 __fastcall sub_14062AD80(_DWORD* a1, _QWORD* a2)
{
	int v2; // r8d
	unsigned int v4; // r9d
	int v6; // eax
	unsigned int v8; // esi
	unsigned __int64 v9; // rdi
	int* v10; // rax
	int* v11; // rbx
	unsigned __int64 v12; // rbp
	unsigned __int64* v13; // r15
	__int64 v14; // rax
	int* v15; // rax
	int* v16; // rsi
	__int64 v17[2]; // [rsp+20h] [rbp-38h] BYREF

	v2 = a1[2];
	v4 = a1[6];
	if (dword_140C636A8 - v2 >= v4)
	{
		if ((unsigned int)(dword_140C636A8 - v2) < a1[4])
		{
			a1[2] = v4 + v2;
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
	v8 = 0;
	v9 = 0i64;
	v10 = sub_14018DBC0(0i64, a2[1], 8i64);
	v11 = 0i64;
	v12 = 0i64;
	if (v10)
		v11 = v10;
	if (!a2[1])
		goto LABEL_23;
	do
	{
		v13 = (unsigned __int64*)(*a2 + 8 * v12);
		v14 = 0i64;
		if (v9)
		{
			while (*(_QWORD*)&v11[2 * v14] != *v13)
			{
				if (++v14 >= v9)
					goto LABEL_14;
			}
		}
		else
		{
		LABEL_14:
			if (sub_140629AF0((__int64)a1, *v13))
			{
				v15 = sub_14018DB00((__int64)v11, v9 + 1, 8i64);
				v16 = v15;
				*(_QWORD*)&v15[2 * v9] = *v13;
				if (v11 != v15)
				{
					sub_1407DB590(v15, v11, 8 * v9);
					if (v11)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
					v11 = v16;
				}
				++v9;
				v8 = 0;
			}
		}
		++v12;
	} while (v12 < a2[1]);
	if (v9)
	{
		v17[0] = (unsigned int)v9;
		v17[1] = (__int64)v11;
		sub_1403F4900(qword_140C65898, 0x11Eu, (__int64)v17);
	}
	else
	{
	LABEL_23:
		v8 = -2147467259;
	}
	if (v11)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
	return v8;
}
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

