#include "../winhttp.h"

//----- (0000000140334F90) ----------------------------------------------------
void __fastcall sub_140334F90(__int64 a1, __int64 a2, u_short a3)
{
	__int64 v4; // r15
	int* v5; // rbp
	__int64 v7; // r13
	unsigned __int64 v8; // rbx
	int* v9; // rsi
	__int64 v10; // r8
	int* v11; // r14
	unsigned __int64 v12; // rbx
	unsigned __int64 v13; // r15
	int* v14; // rax
	unsigned __int64 v15; // rbp
	__int64* v16; // rax
	int* v17; // r14
	__int64 v18; // r12
	unsigned __int64 v19; // rax
	_BYTE* v20; // rax
	u_short v21; // ax
	__int64* v22; // rax
	int* v23; // rbp
	char* v24; // r15
	unsigned __int64 v25; // r14
	char* v26; // rcx
	__int64 v27; // rcx
	unsigned int v28; // eax
	__int64 v29; // rdx
	char* v30; // r10
	__int64 v31; // r11
	char v32; // cl
	char v33; // al
	struct hostent* v34; // rax
	struct hostent* v35; // rax
	unsigned __int64 v36; // [rsp+38h] [rbp-160h] BYREF
	unsigned __int64 v37; // [rsp+40h] [rbp-158h] BYREF
	__int64 v38; // [rsp+48h] [rbp-150h]
	char name[256]; // [rsp+50h] [rbp-148h] BYREF

	*(_BYTE*)(a1 + 56) = 0;
	*(_WORD*)(a1 + 78) = 0;
	v4 = *(_QWORD*)(a2 + 16);
	v5 = *(int**)(a2 + 8);
	v7 = a2;
	v8 = v4 - (_QWORD)v5;
	v38 = a2;
	v9 = 0i64;
	if (v4 - (_QWORD)v5 != -2)
		v9 = sub_14018B280(v8 + 1, 0);
	sub_1407DB590(v9, v5, v8);
	v11 = (int*)(v4 + (char*)v9 - (char*)v5);
	if (v11)
		*(_BYTE*)v11 = 0;
	v12 = -1i64;
	v13 = v4 - (_QWORD)v5;
	*(_WORD*)a1 = 2;
	if (v11 == v9
		|| (v14 = (int*)sub_140335470(v9, v11, v10, ""), v14 == v11)
		|| (v15 = (char*)v14 - (char*)v9, (char*)v14 - (char*)v9 == -1))
	{
		*(_WORD*)(a1 + 2) = htons(a3);
	}
	else
	{
		v36 = -1i64;
		v16 = (__int64*)&v37;
		v37 = v13 - (v15 + 1);
		if (v37 == -1i64)
			v16 = (__int64*)&v36;
		v17 = 0i64;
		v18 = (__int64)v9 + *v16 + v15 + 1;
		v19 = *v16;
		v36 = v19;
		if (v19 != -2i64)
		{
			v17 = sub_14018B280(v19 + 1, 0);
			v19 = v36;
		}
		sub_1407DB590(v17, (int*)((char*)v9 + v15 + 1), v19);
		v20 = (_BYTE*)(v18 + (char*)v17 - ((char*)v9 + v15 + 1));
		if (v20)
			*v20 = 0;
		v21 = sub_1407DF3E4((unsigned __int8*)v17);
		*(_WORD*)(a1 + 2) = htons(v21);
		if (v17)
			sub_14018B900((__int64)v17, 0);
		v37 = v15;
		v36 = v13;
		v22 = (__int64*)&v36;
		if (v13 >= v15)
			v22 = (__int64*)&v37;
		v23 = 0i64;
		v24 = (char*)v9 + *v22;
		v25 = *v22;
		if (*v22 != -2)
			v23 = sub_14018B280(*v22 + 1, 0);
		sub_1407DB590(v23, v9, v25);
		v26 = &v24[(char*)v23 - (char*)v9];
		if (v26)
			*v26 = 0;
		v27 = (__int64)v9;
		v9 = v23;
		if (v27)
			sub_14018B900(v27, 0);
		v7 = v38;
	}
	if ((unsigned __int8)(*(_BYTE*)v9 - 48) > 9u)
	{
		v29 = *(_QWORD*)(v7 + 8);
		do
			++v12;
		while (aHost[v12]);
		if (v12)
		{
			v30 = &aHost[-v29];
			v31 = -v29;
			while (1)
			{
				v32 = *(_BYTE*)v29;
				if ((unsigned __int8)(*(_BYTE*)v29 - 65) <= 0x19u)
					v32 += 32;
				v33 = v30[v29];
				if ((unsigned __int8)(v33 - 65) <= 0x19u)
					v33 += 32;
				if (v32 != v33)
					break;
				if (*(_BYTE*)v29)
				{
					++v29;
					if (v31 + v29 < v12)
						continue;
				}
				goto LABEL_39;
			}
			v34 = gethostbyname((const char*)v9);
			if (!v34)
			{
				*(_DWORD*)(a1 + 4) = 0;
				goto LABEL_48;
			}
			v28 = **(_DWORD**)v34->h_addr_list;
		}
		else
		{
		LABEL_39:
			if (gethostname(name, 256))
			{
				*(_DWORD*)(a1 + 4) = 0;
				goto LABEL_48;
			}
			v35 = gethostbyname(name);
			if (!v35)
			{
				*(_DWORD*)(a1 + 4) = 0;
				goto LABEL_48;
			}
			v28 = **(_DWORD**)v35->h_addr_list;
		}
	}
	else
	{
		v28 = inet_addr((const char*)v9);
	}
	*(_DWORD*)(a1 + 4) = v28;
LABEL_48:
	*(_BYTE*)(a1 + 56) = 0;
	*(_WORD*)(a1 + 78) = 0;
	sub_140334D90(a1);
	if (!*(_BYTE*)(a1 + 56))
		sub_140334D90(a1);
	sub_14018B900((__int64)v9, 0);
}
// 140335045: variable 'v10' is possibly undefined

