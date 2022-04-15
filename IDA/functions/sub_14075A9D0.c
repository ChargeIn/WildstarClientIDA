#include "../winhttp.h"

//----- (000000014075A9D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14075A9D0(int* a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int64 v4; // rbp
	unsigned __int64 v7; // rdx
	unsigned __int64 result; // rax
	unsigned int v9; // r9d
	unsigned int v10; // eax
	int* v11; // rdx
	unsigned int v12; // ecx
	bool v13; // cf
	unsigned int v14; // edi
	char* v15; // rbx
	char* i; // rax
	int v17; // edx
	int v18; // r8d
	int v19; // r9d
	int v20; // r10d
	int v21; // r11d
	signed __int64 v22; // rbx
	int v23; // [rsp+20h] [rbp-28h]
	__int64 v24; // [rsp+28h] [rbp-20h]
	int v25; // [rsp+30h] [rbp-18h]
	__int64 v26; // [rsp+68h] [rbp+20h]

	v4 = a2;
	v7 = (__int64)((unsigned __int128)((__int64)(a2 - (_QWORD)a1) * (__int128)0x6666666666666667i64) >> 64) >> 3;
	result = v7 >> 63;
	if ((__int64)((v7 >> 63) + v7) > 16)
	{
		do
		{
			if (!a4)
				return sub_14075ACA0(a1, v4, v4);
			v9 = *(_DWORD*)(v4 - 16);
			v26 = a4 - 1;
			v10 = a1[1];
			v11 = &a1[5 * ((__int64)(v4 - (_QWORD)a1) / 20 / 2)];
			v12 = v11[1];
			if (v10 >= v12)
			{
				if (v10 >= v9)
				{
					v13 = v12 < v9;
				LABEL_9:
					if (v13)
						v11 = (int*)(v4 - 20);
					goto LABEL_11;
				}
				v11 = a1;
			}
			else if (v12 >= v9)
			{
				v11 = a1;
				v13 = v10 < v9;
				goto LABEL_9;
			}
		LABEL_11:
			v14 = v11[1];
			v15 = (char*)a1;
			v23 = *v11;
			v24 = *((_QWORD*)v11 + 1);
			v25 = v11[4];
			for (i = (char*)v4; ; *((_DWORD*)i + 4) = v21)
			{
				for (; *((_DWORD*)v15 + 1) < v14; v15 += 20)
					;
				for (i -= 20; v14 < *((_DWORD*)i + 1); i -= 20)
					;
				if (v15 >= i)
					break;
				v17 = *(_DWORD*)v15;
				v18 = *((_DWORD*)v15 + 1);
				v19 = *((_DWORD*)v15 + 2);
				v20 = *((_DWORD*)v15 + 3);
				v21 = *((_DWORD*)v15 + 4);
				*(_DWORD*)v15 = *(_DWORD*)i;
				v15 += 20;
				*((_DWORD*)v15 - 4) = *((_DWORD*)i + 1);
				*((_DWORD*)v15 - 3) = *((_DWORD*)i + 2);
				*((_DWORD*)v15 - 2) = *((_DWORD*)i + 3);
				*((_DWORD*)v15 - 1) = *((_DWORD*)i + 4);
				*(_DWORD*)i = v17;
				*((_DWORD*)i + 1) = v18;
				*((_DWORD*)i + 2) = v19;
				*((_DWORD*)i + 3) = v20;
			}
			sub_14075A9D0(v15, v4, 0i64, v26, v23, v24, v25);
			a4 = v26;
			v4 = (unsigned __int64)v15;
			v22 = v15 - (char*)a1;
			result = (unsigned __int64)((unsigned __int128)(v22 * (__int128)0x6666666666666667i64) >> 64) >> 63;
		} while (v22 / 20 > 16);
	}
	return result;
}

